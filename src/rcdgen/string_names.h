/*
 * This file is part of FreeRCT.
 * FreeRCT is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * FreeRCT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with FreeRCT. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file string_names.h Names of strings used in the program. */

#ifndef STRING_NAMES_H
#define STRING_NAMES_H

/** String names defined in the GUI. */
static const char *_gui_string_names[] = {
	/* Generic GUI strings. */
	"TITLEBAR_TIP",
	"LANGUAGE_NAME",

	"MONTH_JANUARY",
	"MONTH_FEBRUARY",
	"MONTH_MARCH",
	"MONTH_APRIL",
	"MONTH_MAY",
	"MONTH_JUNE",
	"MONTH_JULY",
	"MONTH_AUGUST",
	"MONTH_SEPTEMBER",
	"MONTH_OCTOBER",
	"MONTH_NOVEMBER",
	"MONTH_DECEMBER",

	"NUMBERED_INSTANCE_NAME",
	"RESOLUTION",

	/* Toolbar GUI and main menu strings. */
	"TOOLBAR_GUI_DROPDOWN_MAIN",
	/* Do not change the order of the strings between here… */
	"MAIN_MENU_SAVE",
	"MAIN_MENU_MODE",
	"MAIN_MENU_SETTINGS",
	"MAIN_MENU_MENU",
	"MAIN_MENU_QUIT",
	/* …and here. */
	"MAIN_MENU_NEW_GAME",
	"MAIN_MENU_LOAD",
	"TOOLBAR_GUI_DROPDOWN_SPEED",
	"TOOLBAR_GUI_DROPDOWN_SPEED_TOOLTIP",
	/* Do not change the order of the strings between here… */
	"TOOLBAR_GUI_DROPDOWN_SPEED_PAUSE",
	"TOOLBAR_GUI_DROPDOWN_SPEED_1",
	"TOOLBAR_GUI_DROPDOWN_SPEED_2",
	"TOOLBAR_GUI_DROPDOWN_SPEED_4",
	"TOOLBAR_GUI_DROPDOWN_SPEED_8",
	/* …and here. */
	"TOOLBAR_GUI_GAME_MODE_EDITOR",
	"TOOLBAR_GUI_GAME_MODE_PLAY",
	"TOOLBAR_GUI_PATHS",
	"TOOLBAR_GUI_TOOLTIP_BUILD_PATHS",
	"TOOLBAR_GUI_RIDE_SELECT",
	"TOOLBAR_GUI_TOOLTIP_RIDE_SELECT",
	"TOOLBAR_GUI_FENCE",
	"TOOLBAR_GUI_TOOLTIP_FENCE",
	"TOOLBAR_GUI_SCENERY",
	"TOOLBAR_GUI_TOOLTIP_SCENERY",
	"TOOLBAR_GUI_TERRAFORM",
	"TOOLBAR_GUI_TOOLTIP_TERRAFORM",
	"TOOLBAR_GUI_FINANCES",
	"TOOLBAR_GUI_TOOLTIP_FINANCES",
	"TOOLBAR_GUI_INBOX",
	"TOOLBAR_GUI_TOOLTIP_INBOX",

	"BOTTOMBAR_GUESTCOUNT",

	/* Quit program strings. */
	"QUIT_CAPTION",
	"QUIT_MESSAGE",
	"RETURN_CAPTION",
	"RETURN_MESSAGE",
	"QUIT_NO",
	"QUIT_YES",

	/* Error message window. */
	"ERROR_MESSAGE_CAPTION",
	"ERROR_MESSAGE_SPRITE",
	"ERROR_MESSAGE_HEADING_BUILD",
	"ERROR_MESSAGE_HEADING_REMOVE",
	"ERROR_MESSAGE_BAD_LOCATION",
	"ERROR_MESSAGE_SLOPE",
	"ERROR_MESSAGE_UNDERGROUND",
	"ERROR_MESSAGE_OCCUPIED",
	"ERROR_MESSAGE_EXPENSIVE",
	"ERROR_MESSAGE_UNREMOVABLE",
	"ERROR_MESSAGE_UNOWNED_LAND",
	"ERROR_MESSAGE_PAUSED",

	/* Person status strings. Do not change the order. */
	"PERSON_STATUS_WANDER",
	"PERSON_STATUS_HEADING_TO_RIDE",
	"PERSON_STATUS_INSPECTING",
	"PERSON_STATUS_REPAIRING",
	"PERSON_STATUS_WATERING",
	"PERSON_STATUS_EMPTYING",
	"PERSON_STATUS_SWEEPING",

	/* Guest info window. */
	"GUEST_INFO_MONEY",
	"GUEST_INFO_MONEY_SPENT",
	"GUEST_INFO_HAPPINESS",
	"GUEST_INFO_HUNGER",
	"GUEST_INFO_THIRST",
	"GUEST_INFO_WASTE",
	"GUEST_INFO_ITEMS",

	"ITEM_NONE",
	"ITEM_MAP",
	"ITEM_UMBRELLA",
	"ITEM_WRAPPER",

	/* Staff window. */
	"STAFF_SALARY",
	"STAFF_DISMISS",
	"STAFF_TYPE_MECHANIC",
	"STAFF_TYPE_HANDYMAN",
	"STAFF_TYPE_GUARD",
	"STAFF_TYPE_ENTERTAINER",

	/* Path GUI strings. */
	"PATH_GUI_TITLE",
	"PATH_GUI_LONG",
	"PATH_GUI_BUY",
	"PATH_GUI_REMOVE",
	"PATH_GUI_LONG_TIP",
	"PATH_GUI_BUY_TIP",
	"PATH_GUI_BULLDOZER_TIP",

	"PATH_GUI_SLOPE_DOWN_TIP",
	"PATH_GUI_SLOPE_FLAT_TIP",
	"PATH_GUI_SLOPE_UP_TIP",

	"PATH_GUI_FORWARD",
	"PATH_GUI_BACKWARD",
	"PATH_GUI_FORWARD_TIP",
	"PATH_GUI_BACKWARD_TIP",

	"PATH_GUI_NW_DIRECTION_TIP",
	"PATH_GUI_NE_DIRECTION_TIP",
	"PATH_GUI_SW_DIRECTION_TIP",
	"PATH_GUI_SE_DIRECTION_TIP",

	"PATH_GUI_NORMAL_PATH",
	"PATH_GUI_QUEUE_PATH",

	"PATH_GUI_SINGLE",
	"PATH_GUI_DIRECTIONAL",
	"PATH_GUI_SINGLE_TIP",
	"PATH_GUI_DIRECTIONAL_TIP",

	/* Ride selection window. */
	"RIDE_SELECT_TITLE",
	"RIDE_SELECT_SHOPS",
	"RIDE_SELECT_SHOPS_TOOLTIP",
	"RIDE_SELECT_GENTLE",
	"RIDE_SELECT_GENTLE_TOOLTIP",
	"RIDE_SELECT_THRILL",
	"RIDE_SELECT_THRILL_TOOLTIP",
	"RIDE_SELECT_WET",
	"RIDE_SELECT_WET_TOOLTIP",
	"RIDE_SELECT_COASTER",
	"RIDE_SELECT_COASTER_TOOLTIP",
	"RIDE_SELECT_RIDE",
	"RIDE_SELECT_RIDE_TOOLTIP",
	"RIDE_SELECT_ROT_POS_TOOLTIP",
	"RIDE_SELECT_ROT_NEG_TOOLTIP",

	/* Generic ride manager window strings. */
	"RIDE_MANAGER_INCREASE",
	"RIDE_MANAGER_DECREASE",
	"RIDE_MANAGER_ENTRANCE_FEE_TEXT",
	"RIDE_MANAGER_BROKEN_DOWN",
	"RIDE_MANAGER_RELIABILITY",
	"RIDE_MANAGER_MAINTENANCE_TEXT",
	"RIDE_MANAGER_MAINTENANCE_NEVER",
	"RIDE_MANAGER_MIN_IDLE_TEXT",
	"RIDE_MANAGER_MAX_IDLE_TEXT",
	"RIDE_MANAGER_EXCITEMENT",
	"RIDE_MANAGER_INTENSITY",
	"RIDE_MANAGER_NAUSEA",
	"RIDE_MANAGER_RATING_VERY_LOW",
	"RIDE_MANAGER_RATING_LOW",
	"RIDE_MANAGER_RATING_MEDIUM",
	"RIDE_MANAGER_RATING_HIGH",
	"RIDE_MANAGER_RATING_VERY_HIGH",
	"RIDE_MANAGER_RATING_EXTREME",
	"RIDE_MANAGER_RATING_NOT_YET_CALCULATED",

	/* Shop manager window strings. */
	"SHOP_MANAGER_TITLE",
	"SHOP_MANAGER_COST_PRICE_TEXT",
	"SHOP_MANAGER_SELLING_PRICE_TEXT",
	"SHOP_MANAGER_ITEMS_SOLD_TEXT",
	"SHOP_MANAGER_ITEM_PROFIT_TEXT",
	"SHOP_MANAGER_SELL_PROFIT_TEXT",
	"SHOP_MANAGER_SHOP_COST_TEXT",
	"SHOP_MANAGER_TOTAL_PROFIT_TEXT",

	/* Gentle/thrill ride manager window strings. */
	"GENTLE_THRILL_RIDES_MANAGER_TITLE",
	"GENTLE_RIDES_MANAGER_TITLE",
	"THRILL_RIDES_MANAGER_TITLE",
	"GENTLE_THRILL_RIDES_MANAGER_CYCLES_TEXT",
	"GENTLE_THRILL_RIDES_MANAGER_MONTHLY_COST_TEXT",

	/* Fence window. */
	"FENCE_TITLE",

	/* Scenery window. */
	"SCENERY_TITLE",
	"SCENERY_ROTATE_POS",
	"SCENERY_ROTATE_NEG",
	"SCENERY_CATEGORY_TREES",
	"SCENERY_CATEGORY_FLOWERBEDS",
	"SCENERY_CATEGORY_FOUNTAINS",

	/* Terraform window. */
	"TERRAFORM_TITLE",
	"TERRAFORM_ADD_TEXT",
	"TERRAFORM_ADD_TOOLTIP",
	"TERRAFORM_SUB_TEXT",
	"TERRAFORM_SUB_TOOLTIP",
	"TERRAFORM_LEVEL_TEXT",
	"TERRAFORM_MOVE_TEXT",

	/* Finances window. */
	"FINANCES_TITLE",
	"FINANCES_RIDE_CONSTRUCTION_TEXT",
	"FINANCES_RIDE_RUNNING_TEXT",
	"FINANCES_LAND_PURCHASE_TEXT",
	"FINANCES_LANDSCAPING_TEXT",
	"FINANCES_PARK_TICKETS_TEXT",
	"FINANCES_RIDE_TICKETS_TEXT",
	"FINANCES_SHOP_SALES_TEXT",
	"FINANCES_SHOP_STOCK_TEXT",
	"FINANCES_FOOD_SALES_TEXT",
	"FINANCES_FOOD_STOCK_TEXT",
	"FINANCES_STAFF_WAGES_TEXT",
	"FINANCES_MARKETING_TEXT",
	"FINANCES_RESEARCH_TEXT",
	"FINANCES_LOAN_INTEREST_TEXT",
	"FINANCES_TOTAL_TEXT",

	/* Messages and inbox. Do not change the order. */
	"INBOX_TITLE",
	"MESSAGE_NEW_RIDE",          ///< A new ride type is now available for purchase (Data1: Ride Type ID).
	"MESSAGE_SCENARIO_WON",      ///< Congrats message when the player wins the scenario.
	"MESSAGE_SCENARIO_LOST",     ///< Message when the player looses the scenario.
	"MESSAGE_BROKEN_DOWN",       ///< A ride has broken down (Data1: Ride instance ID).
	"MESSAGE_REPAIRED",          ///< A broken ride has been repaired (Data1: Ride instance ID).
	"MESSAGE_CRASH_NO_DEAD",     ///< A ride has crashed, but nobody has died (Data1: Ride instance ID).
	"MESSAGE_CRASH_WITH_DEAD",   ///< A ride has crashed and guests have died (Data1: Ride instance ID; Data2: number of dead guests).
	"MESSAGE_BAD_RATING",        ///< The park rating has fallen below the scenario's minimum rating (Data1: weeks left before the park is closed).
	"MESSAGE_GUEST_LOST",        ///< A guest wants to go home and is unable to find the park entrance (Data1: Guest ID).
	"MESSAGE_COMPLAIN_QUEUE",    ///< A ride's queue is very long (Data1: Ride instance ID).
	"MESSAGE_COMPLAIN_HUNGRY",   ///< Many guests are hungry.
	"MESSAGE_COMPLAIN_THIRSTY",  ///< Many guests are thirsty.
	"MESSAGE_COMPLAIN_TOILET",   ///< Many guests are in need of a toilet.
	"MESSAGE_COMPLAIN_LITTER",   ///< The paths are very dirty.
	"MESSAGE_CHEAP_FEE",         ///< The entrance fee is very cheap.
	"MESSAGE_AWARD_WON",         ///< The park has won an award.
	"MESSAGE_NEGATIVE_AWARD",    ///< The park has received a negative award.

	/* Coaster construction window. */
	"COASTER_BUILD_LEFT_BEND_TOOLTIP",
	"COASTER_BUILD_NO_BEND_TOOLTIP",
	"COASTER_BUILD_RIGHT_BEND_TOOLTIP",
	"COASTER_BUILD_BANK_LEFT_TOOLTIP",
	"COASTER_BUILD_BANK_NONE_TOOLTIP",
	"COASTER_BUILD_BANK_RIGHT_TOOLTIP",
	"COASTER_BUILD_BUY_TOOLTIP",

	/* Coaster management window. */
	"COASTER_MANAGER_NUMBER_TRAINS",
	"COASTER_MANAGER_NUMBER_CARS",
	"COASTER_MANAGER_EDIT",
	"COASTER_MANAGER_NO_GRAPHS_YET",
	"COASTER_MANAGER_GRAPH_SPEED",
	"COASTER_MANAGER_GRAPH_VERT_G",
	"COASTER_MANAGER_GRAPH_HORZ_G",
	"COASTER_MANAGER_GRAPH_TOOLTIP_SPEED",
	"COASTER_MANAGER_GRAPH_TOOLTIP_VERT_G",
	"COASTER_MANAGER_GRAPH_TOOLTIP_HORZ_G",

	/* Entity remove button. */
	"ENTITY_REMOVE",
	"ENTITY_REMOVE_TOOLTIP",

	/* Entity remove window. */
	"ENTITY_REMOVE_CAPTION",
	"ENTITY_REMOVE_YES",
	"ENTITY_REMOVE_NO",
	"ENTITY_REMOVE_MESSAGE",

	/* Ride entrance/exit placement buttons. */
	"PLACE_ENTRANCE",
	"PLACE_ENTRANCE_TOOLTIP",
	"PLACE_EXIT",
	"PLACE_EXIT_TOOLTIP",
	"CHOOSE_ENTRANCE",
	"CHOOSE_ENTRANCE_TOOLTIP",
	"CHOOSE_EXIT",
	"CHOOSE_EXIT_TOOLTIP",

	/* Ride build window. */
	"RIDE_BUILD_TITLEBAR_SHOP",
	"RIDE_BUILD_TITLEBAR_GENTLE",
	"RIDE_BUILD_TITLEBAR_THRILL",
	"RIDE_BUILD_ROTATE_TOOLTIP",
	"RIDE_BUILD_DISPLAY_TOOLTIP",
	"RIDE_BUILD_NAME_TEXT",
	"RIDE_BUILD_COST_TEXT",

	/* Money symbols. */
	"MONEY_CURRENCY_SYMBOL",
	"MONEY_THOUSANDS_SEPARATOR",
	"MONEY_DECIMAL_SEPARATOR",

	/* Settings window. */
	"SETTING_TITLE",
	"SETTING_LANGUAGE",
	"SETTING_LANGUAGE_TOOLTIP",
	"SETTING_RESOLUTION",
	"SETTING_RESOLUTION_TOOLTIP",
};

/** String names of the shops. */
static const char *_shops_string_names[] = {
	"NAME_INSTANCE1",
	"NAME_INSTANCE2",
	"NAME_TYPE",
	"NAME_ITEM1",
	"NAME_ITEM2",
	"DESCRIPTION_TYPE",
	"DESCRIPTION_RECOLOUR1",
	"DESCRIPTION_RECOLOUR2",
	"DESCRIPTION_RECOLOUR3",
};

/** String names of the gentle and thrill rides. */
static const char *_gentle_thrill_rides_string_names[] = {
	"NAME_INSTANCE1",
	"NAME_INSTANCE2",
	"NAME_TYPE",
	"DESCRIPTION_TYPE",
	"DESCRIPTION_RECOLOUR1",
	"DESCRIPTION_RECOLOUR2",
	"DESCRIPTION_RECOLOUR3",
};

/** String names of the coaster ride types. */
static const char *_coaster_string_names[] = {
	"NAME_INSTANCE",
	"NAME_TYPE",
	"DESCRIPTION_TYPE",
};

/** String names of an entrance or exit. */
static const char *_entrance_exit_string_names[] = {
	"NAME",
	"DESCRIPTION_RECOLOUR1",
	"DESCRIPTION_RECOLOUR2",
	"DESCRIPTION_RECOLOUR3",
};

/** String names of a scenery item. */
static const char *_scenery_string_names[] = {
	"NAME",
};

#endif
