/*
 * This file is part of FreeRCT.
 * FreeRCT is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * FreeRCT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with FreeRCT. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file loadsave.h Load and save functions and classes. */

#ifndef LOADSAVE_H
#define LOADSAVE_H

/** An error that occurs while loading a savegame. */
struct LoadingError : public std::exception {
	explicit LoadingError(const char *fmt, ...);

	const char* what() const noexcept override;

private:
	std::string message;
};

/** Class for loading a save game. */
class Loader {
public:
	Loader(FILE *fp);

	uint32 OpenBlock(const char *name, bool may_fail = false);
	void CloseBlock();

	uint8 GetByte();
	uint16 GetWord();
	uint32 GetLong();
	uint64 GetLongLong();
	uint8 *GetText();

	void version_mismatch(const char* name, uint saved_version, uint current_version);

private:
	void PutByte(uint8 val);

	const char *fail_msg; ///< If not \c nullptr, message of failure.
	const char *blk_name; ///< Name of the current block.

	FILE *fp;             ///< Data stream being loaded.
	int cache_count;      ///< Number of values in #cache.
	uint8 cache[8];       ///< Stack with temporary values to return on next read.
};

/** Class for saving a savegame. */
class Saver {
public:
	Saver(FILE *fp);

	void StartBlock(const char *name, uint32 version);
	void EndBlock();

	void PutByte(uint8 val);
	void PutWord(uint16 val);
	void PutLong(uint32 val);
	void PutLongLong(uint64 val);
	void PutText(const uint8 *str, int length = -1);

private:
	FILE *fp; ///< Output file stream.
	const char *blk_name; ///< Name of the current block.
};

bool LoadGameFile(const char *fname);
bool SaveGameFile(const char *fname);

#endif
