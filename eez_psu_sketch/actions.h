/*
* EEZ PSU Firmware
* Copyright (C) 2017-present, Envox d.o.o.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program.  If not, see http://www.gnu.org/licenses.
*/

#pragma once

namespace eez {
namespace psu {

enum ActionsEnum {
    ACTION_ID_NONE = 0,
    ACTION_ID_CHANNEL_TOGGLE_OUTPUT = 1,
    ACTION_ID_EDIT = 2,
    ACTION_ID_EDIT_MODE_SLIDER = 3,
    ACTION_ID_EDIT_MODE_STEP = 4,
    ACTION_ID_EDIT_MODE_KEYPAD = 5,
    ACTION_ID_EXIT_EDIT_MODE = 6,
    ACTION_ID_TOGGLE_INTERACTIVE_MODE = 7,
    ACTION_ID_NON_INTERACTIVE_ENTER = 8,
    ACTION_ID_NON_INTERACTIVE_DISCARD = 9,
    ACTION_ID_KEYPAD_KEY = 10,
    ACTION_ID_KEYPAD_SPACE = 11,
    ACTION_ID_KEYPAD_BACK = 12,
    ACTION_ID_KEYPAD_CLEAR = 13,
    ACTION_ID_KEYPAD_CAPS = 14,
    ACTION_ID_KEYPAD_OK = 15,
    ACTION_ID_KEYPAD_CANCEL = 16,
    ACTION_ID_KEYPAD_SIGN = 17,
    ACTION_ID_KEYPAD_UNIT = 18,
    ACTION_ID_KEYPAD_OPTION1 = 19,
    ACTION_ID_KEYPAD_OPTION2 = 20,
    ACTION_ID_TOUCH_SCREEN_CALIBRATION = 21,
    ACTION_ID_YES = 22,
    ACTION_ID_NO = 23,
    ACTION_ID_OK = 24,
    ACTION_ID_CANCEL = 25,
    ACTION_ID_LATER = 26,
    ACTION_ID_STAND_BY = 27,
    ACTION_ID_SHOW_PREVIOUS_PAGE = 28,
    ACTION_ID_SHOW_MAIN_PAGE = 29,
    ACTION_ID_SHOW_EVENT_QUEUE = 30,
    ACTION_ID_SHOW_CHANNEL_SETTINGS = 31,
    ACTION_ID_SHOW_SYS_SETTINGS = 32,
    ACTION_ID_SHOW_SYS_SETTINGS2 = 33,
    ACTION_ID_SHOW_SYS_SETTINGS_TRIGGER = 34,
    ACTION_ID_SHOW_SYS_SETTINGS_IO = 35,
    ACTION_ID_SHOW_SYS_SETTINGS_DATE_TIME = 36,
    ACTION_ID_SHOW_SYS_SETTINGS_CAL = 37,
    ACTION_ID_SHOW_SYS_SETTINGS_CAL_CH = 38,
    ACTION_ID_SHOW_SYS_SETTINGS_SCREEN_CALIBRATION = 39,
    ACTION_ID_SHOW_SYS_SETTINGS_DISPLAY = 40,
    ACTION_ID_SHOW_SYS_SETTINGS_SERIAL = 41,
    ACTION_ID_SHOW_SYS_SETTINGS_ETHERNET = 42,
    ACTION_ID_SHOW_SYS_SETTINGS_PROTECTIONS = 43,
    ACTION_ID_SHOW_SYS_SETTINGS_AUX_OTP = 44,
    ACTION_ID_SHOW_SYS_SETTINGS_SOUND = 45,
    ACTION_ID_SHOW_SYS_SETTINGS_ENCODER = 46,
    ACTION_ID_SHOW_SYS_INFO = 47,
    ACTION_ID_SHOW_SYS_INFO2 = 48,
    ACTION_ID_SHOW_MAIN_HELP_PAGE = 49,
    ACTION_ID_SHOW_EDIT_MODE_STEP_HELP = 50,
    ACTION_ID_SHOW_EDIT_MODE_SLIDER_HELP = 51,
    ACTION_ID_SHOW_CH_SETTINGS_PROT = 52,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_CLEAR = 53,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OCP = 54,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OVP = 55,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OPP = 56,
    ACTION_ID_SHOW_CH_SETTINGS_PROT_OTP = 57,
    ACTION_ID_SHOW_CH_SETTINGS_TRIGGER = 58,
    ACTION_ID_SHOW_CH_SETTINGS_LISTS = 59,
    ACTION_ID_SHOW_CH_SETTINGS_ADV = 60,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_LRIPPLE = 61,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_REMOTE = 62,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_RANGES = 63,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_TRACKING = 64,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_COUPLING = 65,
    ACTION_ID_SHOW_CH_SETTINGS_ADV_VIEW = 66,
    ACTION_ID_SHOW_CH_SETTINGS_INFO = 67,
    ACTION_ID_SHOW_CH_SETTINGS_INFO_CAL = 68,
    ACTION_ID_SYS_SETTINGS_CAL_EDIT_PASSWORD = 69,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_START = 70,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_PREVIOUS = 71,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_NEXT = 72,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STOP_AND_SHOW_PREVIOUS_PAGE = 73,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STOP_AND_SHOW_MAIN_PAGE = 74,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_SET = 75,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP_SET_LEVEL_VALUE = 76,
    ACTION_ID_SYS_SETTINGS_CAL_CH_WIZ_SAVE = 77,
    ACTION_ID_SYS_SETTINGS_CAL_TOGGLE_ENABLE = 78,
    ACTION_ID_CH_SETTINGS_PROT_CLEAR = 79,
    ACTION_ID_CH_SETTINGS_PROT_CLEAR_AND_DISABLE = 80,
    ACTION_ID_CH_SETTINGS_PROT_TOGGLE_STATE = 81,
    ACTION_ID_CH_SETTINGS_PROT_EDIT_LIMIT = 82,
    ACTION_ID_CH_SETTINGS_PROT_EDIT_LEVEL = 83,
    ACTION_ID_CH_SETTINGS_PROT_EDIT_DELAY = 84,
    ACTION_ID_SET = 85,
    ACTION_ID_DISCARD = 86,
    ACTION_ID_EDIT_FIELD = 87,
    ACTION_ID_EVENT_QUEUE_PREVIOUS_PAGE = 88,
    ACTION_ID_EVENT_QUEUE_NEXT_PAGE = 89,
    ACTION_ID_CH_SETTINGS_ADV_LRIPPLE_TOGGLE_STATUS = 90,
    ACTION_ID_CH_SETTINGS_ADV_LRIPPLE_TOGGLE_AUTO_MODE = 91,
    ACTION_ID_CH_SETTINGS_ADV_REMOTE_TOGGLE_SENSE = 92,
    ACTION_ID_CH_SETTINGS_ADV_REMOTE_TOGGLE_PROGRAMMING = 93,
    ACTION_ID_DATE_TIME_SELECT_DST_RULE = 94,
    ACTION_ID_SHOW_USER_PROFILES = 95,
    ACTION_ID_SHOW_USER_PROFILES2 = 96,
    ACTION_ID_SHOW_USER_PROFILE_SETTINGS = 97,
    ACTION_ID_PROFILES_TOGGLE_AUTO_RECALL = 98,
    ACTION_ID_PROFILE_TOGGLE_IS_AUTO_RECALL_LOCATION = 99,
    ACTION_ID_PROFILE_RECALL = 100,
    ACTION_ID_PROFILE_SAVE = 101,
    ACTION_ID_PROFILE_DELETE = 102,
    ACTION_ID_PROFILE_EDIT_REMARK = 103,
    ACTION_ID_TOGGLE_CHANNELS_VIEW_MODE = 104,
    ACTION_ID_ETHERNET_TOGGLE = 105,
    ACTION_ID_ETHERNET_TOGGLE_DHCP = 106,
    ACTION_ID_ETHERNET_EDIT_MAC_ADDRESS = 107,
    ACTION_ID_ETHERNET_EDIT_STATIC_ADDRESS = 108,
    ACTION_ID_ETHERNET_EDIT_IP_ADDRESS = 109,
    ACTION_ID_ETHERNET_EDIT_DNS = 110,
    ACTION_ID_ETHERNET_EDIT_GATEWAY = 111,
    ACTION_ID_ETHERNET_EDIT_SUBNET_MASK = 112,
    ACTION_ID_ETHERNET_EDIT_SCPI_PORT = 113,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_UNCOUPLE = 114,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_PARALLEL_INFO = 115,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_SERIES_INFO = 116,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_PARALLEL = 117,
    ACTION_ID_CH_SETTINGS_ADV_COUPLING_SET_SERIES = 118,
    ACTION_ID_CH_SETTINGS_ADV_TOGGLE_TRACKING_MODE = 119,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_TOGGLE_OUTPUT_PROTECTION_COUPLE = 120,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_TOGGLE_SHUTDOWN_WHEN_PROTECTION_TRIPPED = 121,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_TOGGLE_FORCE_DISABLING_ALL_OUTPUTS_ON_POWER_UP = 122,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_TOGGLE_STATE = 123,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_EDIT_LEVEL = 124,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_EDIT_DELAY = 125,
    ACTION_ID_SYS_SETTINGS_PROTECTIONS_AUX_OTP_CLEAR = 126,
    ACTION_ID_ON_LAST_ERROR_EVENT_ACTION = 127,
    ACTION_ID_EDIT_SYSTEM_PASSWORD = 128,
    ACTION_ID_SYS_FRONT_PANEL_LOCK = 129,
    ACTION_ID_SYS_FRONT_PANEL_UNLOCK = 130,
    ACTION_ID_SYS_SETTINGS_SOUND_TOGGLE = 131,
    ACTION_ID_SYS_SETTINGS_SOUND_TOGGLE_CLICK = 132,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_EDIT_DISPLAY_VALUE1 = 133,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_EDIT_DISPLAY_VALUE2 = 134,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_SWAP_DISPLAY_VALUES = 135,
    ACTION_ID_CH_SETTINGS_ADV_VIEW_EDIT_YTVIEW_RATE = 136,
    ACTION_ID_SELECT_ENUM_ITEM = 137,
    ACTION_ID_ERROR_ALERT_ACTION = 138,
    ACTION_ID_UP_DOWN = 139,
    ACTION_ID_SYS_SETTINGS_ENCODER_TOGGLE_CONFIRMATION_MODE = 140,
    ACTION_ID_TURN_DISPLAY_OFF = 141,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_TRIGGER_MODE = 142,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_VOLTAGE_TRIGGER_VALUE = 143,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_CURRENT_TRIGGER_VALUE = 144,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_LIST_COUNT = 145,
    ACTION_ID_CH_SETTINGS_TRIGGER_TOGGLE_OUTPUT_STATE = 146,
    ACTION_ID_CH_SETTINGS_TRIGGER_EDIT_ON_LIST_STOP = 147,
    ACTION_ID_CHANNEL_LISTS_PREVIOUS_PAGE = 148,
    ACTION_ID_CHANNEL_LISTS_NEXT_PAGE = 149,
    ACTION_ID_CHANNEL_LISTS_EDIT = 150,
    ACTION_ID_SHOW_CHANNEL_LISTS_INSERT_MENU = 151,
    ACTION_ID_SHOW_CHANNEL_LISTS_DELETE_MENU = 152,
    ACTION_ID_CHANNEL_LISTS_INSERT_ROW_ABOVE = 153,
    ACTION_ID_CHANNEL_LISTS_INSERT_ROW_BELOW = 154,
    ACTION_ID_CHANNEL_LISTS_DELETE_ROW = 155,
    ACTION_ID_CHANNEL_LISTS_CLEAR_COLUMN = 156,
    ACTION_ID_CHANNEL_LISTS_DELETE_ROWS = 157,
    ACTION_ID_CHANNEL_LISTS_DELETE_ALL = 158,
    ACTION_ID_CHANNEL_INITIATE_TRIGGER = 159,
    ACTION_ID_CHANNEL_SET_TO_FIXED = 160,
    ACTION_ID_CHANNEL_ENABLE_OUTPUT = 161,
    ACTION_ID_TRIGGER_SELECT_SOURCE = 162,
    ACTION_ID_TRIGGER_EDIT_DELAY = 163,
    ACTION_ID_TRIGGER_TOGGLE_INITIATE_CONTINUOUSLY = 164,
    ACTION_ID_TRIGGER_GENERATE_MANUAL = 165,
    ACTION_ID_TRIGGER_SHOW_GENERAL_SETTINGS = 166,
    ACTION_ID_SHOW_STAND_BY_MENU = 167,
    ACTION_ID_RESET = 168,
    ACTION_ID_CH_SETTINGS_ADV_RANGES_SELECT_MODE = 169,
    ACTION_ID_CH_SETTINGS_ADV_RANGES_TOGGLE_AUTO_RANGING = 170,
    ACTION_ID_IO_PIN_TOGGLE_POLARITY = 171,
    ACTION_ID_IO_PIN_SELECT_FUNCTION = 172,
    ACTION_ID_SERIAL_TOGGLE = 173,
    ACTION_ID_SERIAL_SELECT_PARITY = 174,
    ACTION_ID_NTP_TOGGLE = 175,
    ACTION_ID_NTP_EDIT_SERVER = 176
};

extern ActionExecFunc g_actionExecFunctions[];

}
} // namespace eez::psu
