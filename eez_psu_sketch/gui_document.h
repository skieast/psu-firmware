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
namespace gui {

enum DataEnum {
    DATA_ID_NONE = 0,
    DATA_ID_EDIT_ENABLED = 1,
    DATA_ID_CHANNELS = 2,
    DATA_ID_CHANNEL_STATUS = 3,
    DATA_ID_CHANNEL_OUTPUT_STATE = 4,
    DATA_ID_CHANNEL_OUTPUT_MODE = 5,
    DATA_ID_CHANNEL_MON_VALUE = 6,
    DATA_ID_CHANNEL_U_SET = 7,
    DATA_ID_CHANNEL_U_MON = 8,
    DATA_ID_CHANNEL_U_MON_DAC = 9,
    DATA_ID_CHANNEL_U_LIMIT = 10,
    DATA_ID_CHANNEL_U_EDIT = 11,
    DATA_ID_CHANNEL_I_SET = 12,
    DATA_ID_CHANNEL_I_MON = 13,
    DATA_ID_CHANNEL_I_MON_DAC = 14,
    DATA_ID_CHANNEL_I_LIMIT = 15,
    DATA_ID_CHANNEL_I_EDIT = 16,
    DATA_ID_CHANNEL_P_MON = 17,
    DATA_ID_CHANNELS_VIEW_MODE = 18,
    DATA_ID_CHANNEL_DISPLAY_VALUE1 = 19,
    DATA_ID_CHANNEL_DISPLAY_VALUE2 = 20,
    DATA_ID_LRIP = 21,
    DATA_ID_OVP = 22,
    DATA_ID_OCP = 23,
    DATA_ID_OPP = 24,
    DATA_ID_OTP_CH = 25,
    DATA_ID_OTP_AUX = 26,
    DATA_ID_ALERT_MESSAGE = 27,
    DATA_ID_ALERT_MESSAGE_2 = 28,
    DATA_ID_ALERT_MESSAGE_3 = 29,
    DATA_ID_EDIT_VALUE = 30,
    DATA_ID_EDIT_UNIT = 31,
    DATA_ID_EDIT_INFO = 32,
    DATA_ID_EDIT_INFO1 = 33,
    DATA_ID_EDIT_INFO2 = 34,
    DATA_ID_EDIT_MODE_INTERACTIVE_MODE_SELECTOR = 35,
    DATA_ID_EDIT_STEPS = 36,
    DATA_ID_MODEL_INFO = 37,
    DATA_ID_FIRMWARE_INFO = 38,
    DATA_ID_SELF_TEST_RESULT = 39,
    DATA_ID_KEYPAD_TEXT = 40,
    DATA_ID_KEYPAD_CAPS = 41,
    DATA_ID_KEYPAD_OPTION1_TEXT = 42,
    DATA_ID_KEYPAD_OPTION1_ENABLED = 43,
    DATA_ID_KEYPAD_OPTION2_TEXT = 44,
    DATA_ID_KEYPAD_OPTION2_ENABLED = 45,
    DATA_ID_KEYPAD_SIGN_ENABLED = 46,
    DATA_ID_KEYPAD_DOT_ENABLED = 47,
    DATA_ID_KEYPAD_UNIT_ENABLED = 48,
    DATA_ID_CALIBRATION_PASSWORD_STATUS = 49,
    DATA_ID_CHANNEL_LABEL = 50,
    DATA_ID_CHANNEL_SHORT_LABEL = 51,
    DATA_ID_CHANNEL_TEMP_STATUS = 52,
    DATA_ID_CHANNEL_TEMP = 53,
    DATA_ID_CHANNEL_ON_TIME_TOTAL = 54,
    DATA_ID_CHANNEL_ON_TIME_LAST = 55,
    DATA_ID_CHANNEL_CALIBRATION_STATUS = 56,
    DATA_ID_CHANNEL_CALIBRATION_STATE = 57,
    DATA_ID_CHANNEL_CALIBRATION_DATE = 58,
    DATA_ID_CHANNEL_CALIBRATION_REMARK = 59,
    DATA_ID_CHANNEL_CALIBRATION_STEP_IS_SET_REMARK_STEP = 60,
    DATA_ID_CHANNEL_CALIBRATION_STEP_NUM = 61,
    DATA_ID_CHANNEL_CALIBRATION_STEP_STATUS = 62,
    DATA_ID_CHANNEL_CALIBRATION_STEP_LEVEL_VALUE = 63,
    DATA_ID_CHANNEL_CALIBRATION_STEP_VALUE = 64,
    DATA_ID_CHANNEL_CALIBRATION_STEP_PREV_ENABLED = 65,
    DATA_ID_CHANNEL_CALIBRATION_STEP_NEXT_ENABLED = 66,
    DATA_ID_CAL_CH_U_MIN = 67,
    DATA_ID_CAL_CH_U_MID = 68,
    DATA_ID_CAL_CH_U_MAX = 69,
    DATA_ID_CAL_CH_I0_MIN = 70,
    DATA_ID_CAL_CH_I0_MID = 71,
    DATA_ID_CAL_CH_I0_MAX = 72,
    DATA_ID_CAL_CH_I1_MIN = 73,
    DATA_ID_CAL_CH_I1_MID = 74,
    DATA_ID_CAL_CH_I1_MAX = 75,
    DATA_ID_CHANNEL_PROTECTION_OVP_STATE = 76,
    DATA_ID_CHANNEL_PROTECTION_OVP_LEVEL = 77,
    DATA_ID_CHANNEL_PROTECTION_OVP_DELAY = 78,
    DATA_ID_CHANNEL_PROTECTION_OVP_LIMIT = 79,
    DATA_ID_CHANNEL_PROTECTION_OCP_STATE = 80,
    DATA_ID_CHANNEL_PROTECTION_OCP_DELAY = 81,
    DATA_ID_CHANNEL_PROTECTION_OCP_LIMIT = 82,
    DATA_ID_CHANNEL_PROTECTION_OCP_MAX_CURRENT_LIMIT_CAUSE = 83,
    DATA_ID_CHANNEL_PROTECTION_OPP_STATE = 84,
    DATA_ID_CHANNEL_PROTECTION_OPP_LEVEL = 85,
    DATA_ID_CHANNEL_PROTECTION_OPP_DELAY = 86,
    DATA_ID_CHANNEL_PROTECTION_OPP_LIMIT = 87,
    DATA_ID_CHANNEL_PROTECTION_OTP_INSTALLED = 88,
    DATA_ID_CHANNEL_PROTECTION_OTP_STATE = 89,
    DATA_ID_CHANNEL_PROTECTION_OTP_LEVEL = 90,
    DATA_ID_CHANNEL_PROTECTION_OTP_DELAY = 91,
    DATA_ID_EVENT_QUEUE_LAST_EVENT_TYPE = 92,
    DATA_ID_EVENT_QUEUE_LAST_EVENT_MESSAGE = 93,
    DATA_ID_EVENT_QUEUE_EVENTS = 94,
    DATA_ID_EVENT_QUEUE_EVENTS_TYPE = 95,
    DATA_ID_EVENT_QUEUE_EVENTS_MESSAGE = 96,
    DATA_ID_EVENT_QUEUE_MULTIPLE_PAGES = 97,
    DATA_ID_EVENT_QUEUE_PREVIOUS_PAGE_ENABLED = 98,
    DATA_ID_EVENT_QUEUE_NEXT_PAGE_ENABLED = 99,
    DATA_ID_EVENT_QUEUE_PAGE_INFO = 100,
    DATA_ID_CHANNEL_LRIPPLE_MAX_DISSIPATION = 101,
    DATA_ID_CHANNEL_LRIPPLE_CALCULATED_DISSIPATION = 102,
    DATA_ID_CHANNEL_LRIPPLE_AUTO_MODE = 103,
    DATA_ID_CHANNEL_LRIPPLE_IS_ALLOWED = 104,
    DATA_ID_CHANNEL_LRIPPLE_STATUS = 105,
    DATA_ID_CHANNEL_RSENSE_STATUS = 106,
    DATA_ID_CHANNEL_RPROG_INSTALLED = 107,
    DATA_ID_CHANNEL_RPROG_STATUS = 108,
    DATA_ID_CHANNEL_IS_COUPLED = 109,
    DATA_ID_CHANNEL_IS_TRACKED = 110,
    DATA_ID_CHANNEL_IS_COUPLED_OR_TRACKED = 111,
    DATA_ID_CHANNEL_COUPLING_IS_ALLOWED = 112,
    DATA_ID_CHANNEL_COUPLING_MODE = 113,
    DATA_ID_CHANNEL_COUPLING_SELECTED_MODE = 114,
    DATA_ID_CHANNEL_COUPLING_IS_SERIES = 115,
    DATA_ID_SYS_ON_TIME_TOTAL = 116,
    DATA_ID_SYS_ON_TIME_LAST = 117,
    DATA_ID_SYS_TEMP_AUX_STATUS = 118,
    DATA_ID_SYS_TEMP_AUX_OTP_STATE = 119,
    DATA_ID_SYS_TEMP_AUX_OTP_LEVEL = 120,
    DATA_ID_SYS_TEMP_AUX_OTP_DELAY = 121,
    DATA_ID_SYS_TEMP_AUX_OTP_IS_TRIPPED = 122,
    DATA_ID_SYS_TEMP_AUX = 123,
    DATA_ID_SYS_INFO_FIRMWARE_VER = 124,
    DATA_ID_SYS_INFO_SERIAL_NO = 125,
    DATA_ID_SYS_INFO_SCPI_VER = 126,
    DATA_ID_SYS_INFO_CPU = 127,
    DATA_ID_SYS_INFO_ETHERNET = 128,
    DATA_ID_SYS_INFO_FAN_STATUS = 129,
    DATA_ID_SYS_INFO_FAN_SPEED = 130,
    DATA_ID_CHANNEL_BOARD_INFO_LABEL = 131,
    DATA_ID_CHANNEL_BOARD_INFO_REVISION = 132,
    DATA_ID_DATE_TIME_DATE = 133,
    DATA_ID_DATE_TIME_YEAR = 134,
    DATA_ID_DATE_TIME_MONTH = 135,
    DATA_ID_DATE_TIME_DAY = 136,
    DATA_ID_DATE_TIME_TIME = 137,
    DATA_ID_DATE_TIME_HOUR = 138,
    DATA_ID_DATE_TIME_MINUTE = 139,
    DATA_ID_DATE_TIME_SECOND = 140,
    DATA_ID_DATE_TIME_TIME_ZONE = 141,
    DATA_ID_DATE_TIME_DST = 142,
    DATA_ID_SET_PAGE_DIRTY = 143,
    DATA_ID_PROFILES_LIST1 = 144,
    DATA_ID_PROFILES_LIST2 = 145,
    DATA_ID_PROFILES_AUTO_RECALL_STATUS = 146,
    DATA_ID_PROFILES_AUTO_RECALL_LOCATION = 147,
    DATA_ID_PROFILE_STATUS = 148,
    DATA_ID_PROFILE_LABEL = 149,
    DATA_ID_PROFILE_REMARK = 150,
    DATA_ID_PROFILE_IS_AUTO_RECALL_LOCATION = 151,
    DATA_ID_PROFILE_CHANNEL_U_SET = 152,
    DATA_ID_PROFILE_CHANNEL_I_SET = 153,
    DATA_ID_PROFILE_CHANNEL_OUTPUT_STATE = 154,
    DATA_ID_ETHERNET_INSTALLED = 155,
    DATA_ID_ETHERNET_ENABLED = 156,
    DATA_ID_ETHERNET_STATUS = 157,
    DATA_ID_ETHERNET_IP_ADDRESS = 158,
    DATA_ID_ETHERNET_DNS = 159,
    DATA_ID_ETHERNET_GATEWAY = 160,
    DATA_ID_ETHERNET_SUBNET_MASK = 161,
    DATA_ID_ETHERNET_SCPI_PORT = 162,
    DATA_ID_ETHERNET_IS_CONNECTED = 163,
    DATA_ID_ETHERNET_DHCP = 164,
    DATA_ID_ETHERNET_MAC = 165,
    DATA_ID_CHANNEL_IS_VOLTAGE_BALANCED = 166,
    DATA_ID_CHANNEL_IS_CURRENT_BALANCED = 167,
    DATA_ID_SYS_OUTPUT_PROTECTION_COUPLED = 168,
    DATA_ID_SYS_SHUTDOWN_WHEN_PROTECTION_TRIPPED = 169,
    DATA_ID_SYS_FORCE_DISABLING_ALL_OUTPUTS_ON_POWER_UP = 170,
    DATA_ID_SYS_PASSWORD_IS_SET = 171,
    DATA_ID_SYS_RL_STATE = 172,
    DATA_ID_SYS_SOUND_IS_ENABLED = 173,
    DATA_ID_SYS_SOUND_IS_CLICK_ENABLED = 174,
    DATA_ID_CHANNEL_DISPLAY_VIEW_SETTINGS_DISPLAY_VALUE1 = 175,
    DATA_ID_CHANNEL_DISPLAY_VIEW_SETTINGS_DISPLAY_VALUE2 = 176,
    DATA_ID_CHANNEL_DISPLAY_VIEW_SETTINGS_YT_VIEW_RATE = 177,
    DATA_ID_SYS_ENCODER_CONFIRMATION_MODE = 178,
    DATA_ID_SYS_ENCODER_MOVING_UP_SPEED = 179,
    DATA_ID_SYS_ENCODER_MOVING_DOWN_SPEED = 180,
    DATA_ID_SYS_ENCODER_INSTALLED = 181,
    DATA_ID_SYS_DISPLAY_STATE = 182,
    DATA_ID_SYS_DISPLAY_BRIGHTNESS = 183,
    DATA_ID_CHANNEL_TRIGGER_MODE = 184,
    DATA_ID_CHANNEL_TRIGGER_OUTPUT_STATE = 185,
    DATA_ID_CHANNEL_TRIGGER_ON_LIST_STOP = 186,
    DATA_ID_CHANNEL_U_TRIGGER_VALUE = 187,
    DATA_ID_CHANNEL_I_TRIGGER_VALUE = 188,
    DATA_ID_CHANNEL_LIST_COUNT = 189,
    DATA_ID_CHANNEL_LISTS = 190,
    DATA_ID_CHANNEL_LIST_INDEX = 191,
    DATA_ID_CHANNEL_LIST_DWELL = 192,
    DATA_ID_CHANNEL_LIST_DWELL_ENABLED = 193,
    DATA_ID_CHANNEL_LIST_VOLTAGE = 194,
    DATA_ID_CHANNEL_LIST_VOLTAGE_ENABLED = 195,
    DATA_ID_CHANNEL_LIST_CURRENT = 196,
    DATA_ID_CHANNEL_LIST_CURRENT_ENABLED = 197,
    DATA_ID_CHANNEL_LISTS_PREVIOUS_PAGE_ENABLED = 198,
    DATA_ID_CHANNEL_LISTS_NEXT_PAGE_ENABLED = 199,
    DATA_ID_CHANNEL_LISTS_CURSOR = 200,
    DATA_ID_CHANNEL_LISTS_INSERT_MENU_ENABLED = 201,
    DATA_ID_CHANNEL_LISTS_DELETE_MENU_ENABLED = 202,
    DATA_ID_CHANNEL_LISTS_DELETE_ROW_ENABLED = 203,
    DATA_ID_CHANNEL_LISTS_CLEAR_COLUMN_ENABLED = 204,
    DATA_ID_CHANNEL_LISTS_DELETE_ROWS_ENABLED = 205,
    DATA_ID_TRIGGER_SOURCE = 206,
    DATA_ID_TRIGGER_DELAY = 207,
    DATA_ID_TRIGGER_INITIATE_CONTINUOUSLY = 208,
    DATA_ID_TRIGGER_IS_INITIATED = 209,
    DATA_ID_TRIGGER_IS_MANUAL = 210,
    DATA_ID_CHANNEL_HAS_SUPPORT_FOR_CURRENT_DUAL_RANGE = 211,
    DATA_ID_CHANNEL_RANGES_SUPPORTED = 212,
    DATA_ID_CHANNEL_RANGES_MODE = 213,
    DATA_ID_CHANNEL_RANGES_AUTO_RANGING = 214,
    DATA_ID_CHANNEL_RANGES_CURRENTLY_SELECTED = 215,
    DATA_ID_TEXT_MESSAGE = 216,
    DATA_ID_SERIAL_STATUS = 217,
    DATA_ID_SERIAL_ENABLED = 218,
    DATA_ID_SERIAL_IS_CONNECTED = 219,
    DATA_ID_SERIAL_BAUD = 220,
    DATA_ID_SERIAL_PARITY = 221,
    DATA_ID_CHANNEL_LIST_COUNTDOWN = 222,
    DATA_ID_IO_PINS = 223,
    DATA_ID_IO_PINS_INHIBIT_STATE = 224,
    DATA_ID_IO_PIN_NUMBER = 225,
    DATA_ID_IO_PIN_POLARITY = 226,
    DATA_ID_IO_PIN_FUNCTION = 227,
    DATA_ID_NTP_ENABLED = 228,
    DATA_ID_NTP_SERVER = 229,
    DATA_ID_ASYNC_OPERATION_THROBBER = 230,
    DATA_ID_SYS_DISPLAY_BACKGROUND_LUMINOSITY_STEP = 231,
    DATA_ID_PROGRESS = 232,
    DATA_ID_VIEW_STATUS = 233,
    DATA_ID_DLOG_STATUS = 234
};

enum FontsEnum {
    FONT_ID_NONE,
    FONT_ID_SMALL,
    FONT_ID_MEDIUM,
    FONT_ID_LARGE,
    FONT_ID_LARGE_LANDSCAPE,
    FONT_ID_ICONS
};

enum BitmapsEnum {
    BITMAP_ID_NONE,
    BITMAP_ID_LOGO,
    BITMAP_ID_BP_COUPLED
};

enum StylesEnum {
    STYLE_ID_NONE,
    STYLE_ID_BAR_GRAPH_I_DEFAULT,
    STYLE_ID_BAR_GRAPH_LIMIT_LINE,
    STYLE_ID_BAR_GRAPH_SET_LINE,
    STYLE_ID_BAR_GRAPH_TEXT,
    STYLE_ID_BAR_GRAPH_TEXT_VERTICAL,
    STYLE_ID_BAR_GRAPH_U_DEFUALT,
    STYLE_ID_BAR_GRAPH_UNREGULATED,
    STYLE_ID_BOTTOM_BUTTON,
    STYLE_ID_BOTTOM_BUTTON_BACKGROUND,
    STYLE_ID_BOTTOM_BUTTON_DISABLED,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL_S,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL_S_LEFT,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL_S_DISABLED,
    STYLE_ID_CHANNEL_ERROR,
    STYLE_ID_CHANNEL_OFF_L,
    STYLE_ID_CHANNEL_OFF_LANDSCAPE,
    STYLE_ID_CHANNEL_OFF,
    STYLE_ID_COUPLED_INFO,
    STYLE_ID_COUPLED_INFO_S,
    STYLE_ID_DEFAULT,
    STYLE_ID_DEFAULT_DISABLED,
    STYLE_ID_DEFAULT_ACTIVE_S,
    STYLE_ID_DEFAULT_DISABLED_S,
    STYLE_ID_DEFAULT_DISABLED_S_LEFT,
    STYLE_ID_DEFAULT_DISABLED_S_RIGHT,
    STYLE_ID_DEFAULT_EDIT,
    STYLE_ID_DEFAULT_EDIT_INVERSE,
    STYLE_ID_DEFAULT_ICONS,
    STYLE_ID_DEFAULT_INVERSE,
    STYLE_ID_DEFAULT_L,
    STYLE_ID_DEFAULT_S,
    STYLE_ID_DEFAULT_S_LEFT,
    STYLE_ID_EDIT_INFO_S,
    STYLE_ID_EDIT_MODE_SLIDER_SCALE,
    STYLE_ID_EDIT_MODE_STEP_VERTICAL_SLIDER,
    STYLE_ID_EDIT_S,
    STYLE_ID_EDIT_S_FOCUS,
    STYLE_ID_EDIT_VALUE,
    STYLE_ID_EDIT_VALUE_ACTIVE,
    STYLE_ID_EDIT_VALUE_ACTIVE_LEFT,
    STYLE_ID_EDIT_VALUE_ACTIVE_S_LEFT,
    STYLE_ID_EDIT_VALUE_ACTIVE_S_RIGHT,
    STYLE_ID_EDIT_VALUE_ACTIVE_S_CENTER,
    STYLE_ID_EDIT_VALUE_FOCUS_S_RIGHT,
    STYLE_ID_EDIT_VALUE_FOCUS_S_CENTER,
    STYLE_ID_EDIT_VALUE_L,
    STYLE_ID_EDIT_VALUE_LEFT,
    STYLE_ID_EDIT_VALUE_S_CENTERED,
    STYLE_ID_EDIT_VALUE_S_LEFT,
    STYLE_ID_EDIT_VALUE_S_RIGHT,
    STYLE_ID_EDIT_VALUE_UR,
    STYLE_ID_EDIT_VALUE_UR_S_RIGHT,
    STYLE_ID_ERROR_ALERT,
    STYLE_ID_ERROR_ALERT_BUTTON,
    STYLE_ID_EVENT_ERROR,
    STYLE_ID_EVENT_ERROR_ICON,
    STYLE_ID_EVENT_INFO,
    STYLE_ID_EVENT_INFO_ICON,
    STYLE_ID_EVENT_WARNING,
    STYLE_ID_EVENT_WARNING_ICON,
    STYLE_ID_INFO_ALERT,
    STYLE_ID_INFO_ALERT_BUTTON,
    STYLE_ID_YES_NO,
    STYLE_ID_YES_NO_BACKGROUND,
    STYLE_ID_YES_NO_MESSAGE,
    STYLE_ID_YES_NO_BUTTON,
    STYLE_ID_KEY,
    STYLE_ID_KEY_DISABLED,
    STYLE_ID_KEY_ICONS,
    STYLE_ID_KEY_SPEC,
    STYLE_ID_KEY_SPEC_ICONS,
    STYLE_ID_MAX_CURRENT_LIMIT_CAUSE,
    STYLE_ID_MENU_S,
    STYLE_ID_MON_DAC,
    STYLE_ID_MON_DAC_S,
    STYLE_ID_MON_VALUE,
    STYLE_ID_MON_VALUE_L,
    STYLE_ID_MON_VALUE_L_UR,
    STYLE_ID_MON_VALUE_LANDSCAPE_L_RIGHT,
    STYLE_ID_MON_VALUE_UR,
    STYLE_ID_MON_VALUE_UR_LANDSCAPE_L_RIGHT,
    STYLE_ID_MON_VALUE_FOCUS,
    STYLE_ID_NON_INTERACTIVE_BUTTON_S,
    STYLE_ID_NON_INTERACTIVE_BUTTON_S_DISABLED,
    STYLE_ID_PROT_INDICATOR_S,
    STYLE_ID_PROT_INDICATOR_SET_S,
    STYLE_ID_PROT_INDICATOR_TRIP_S,
    STYLE_ID_PROT_INDICATOR_INVALID_S,
    STYLE_ID_PROT_INDICATOR_BLINK_S,
    STYLE_ID_SET_VALUE_BALANCED,
    STYLE_ID_SET_VALUE_FOCUS_BALANCED,
    STYLE_ID_SET_VALUE_S_RIGHT_BALANCED,
    STYLE_ID_TAB_PAGE,
    STYLE_ID_TAB_PAGE_SELECTED,
    STYLE_ID_TOP_BAR_S,
    STYLE_ID_VALUE,
    STYLE_ID_VALUE_S,
    STYLE_ID_VALUE_L,
    STYLE_ID_YELLOW_1,
    STYLE_ID_YELLOW_2,
    STYLE_ID_YELLOW_3,
    STYLE_ID_YELLOW_4,
    STYLE_ID_YELLOW_5,
    STYLE_ID_YELLOW_6,
    STYLE_ID_TOAST_ALERT,
    STYLE_ID_DEFAULT_L_LANDSCAPE,
    STYLE_ID_YT_GRAPH_U_DEFUALT,
    STYLE_ID_YT_GRAPH_U_DEFUALT_LABEL,
    STYLE_ID_YT_GRAPH_I_DEFAULT,
    STYLE_ID_YT_GRAPH_I_DEFAULT_LABEL,
    STYLE_ID_YT_GRAPH,
    STYLE_ID_YT_GRAPH_UNREGULATED,
    STYLE_ID_SELECT_ENUM_ITEM_POPUP_CONTAINER,
    STYLE_ID_SELECT_ENUM_ITEM_POPUP_ITEM,
    STYLE_ID_SELECT_ENUM_ITEM_POPUP_DISABLED_ITEM,
    STYLE_ID_DISPLAY_OFF,
    STYLE_ID_DISPLAY_OFF_S,
    STYLE_ID_LIST_GRAPH_CURSOR,
    STYLE_ID_DARK_LINE,
    STYLE_ID_TEXT_MESSAGE,
    STYLE_ID_BUTTON_INDICATOR_OFF,
    STYLE_ID_BUTTON_INDICATOR_ON,
    STYLE_ID_BUTTON_INDICATOR_ERROR,
    STYLE_ID_ASYNC_OPERATION,
    STYLE_ID_ASYNC_OPERATION_ACTION
};

enum PagesEnum {
    PAGE_ID_ETHERNET_INIT,
    PAGE_ID_SCREEN_CALIBRATION_INTRO,
    PAGE_ID_SCREEN_CALIBRATION_YES_NO,
    PAGE_ID_SCREEN_CALIBRATION_YES_NO_CANCEL,
    PAGE_ID_WELCOME,
    PAGE_ID_SELF_TEST_RESULT,
    PAGE_ID_MAIN,
    PAGE_ID_MAIN_HELP,
    PAGE_ID_EDIT_MODE_KEYPAD,
    PAGE_ID_EDIT_MODE_STEP,
    PAGE_ID_EDIT_MODE_STEP_HELP,
    PAGE_ID_EDIT_MODE_SLIDER,
    PAGE_ID_EDIT_MODE_SLIDER_HELP,
    PAGE_ID_INFO_ALERT,
    PAGE_ID_INFO_LONG_ALERT,
    PAGE_ID_TOAST3_ALERT,
    PAGE_ID_ERROR_ALERT,
    PAGE_ID_ERROR_LONG_ALERT,
    PAGE_ID_ERROR_ALERT_WITH_ACTION,
    PAGE_ID_ERROR_TOAST_ALERT,
    PAGE_ID_YES_NO,
    PAGE_ID_ARE_YOU_SURE_WITH_MESSAGE,
    PAGE_ID_YES_NO_LATER,
    PAGE_ID_TEXT_MESSAGE,
    PAGE_ID_ASYNC_OPERATION_IN_PROGRESS,
    PAGE_ID_PROGRESS,
    PAGE_ID_EVENT_QUEUE,
    PAGE_ID_KEYPAD,
    PAGE_ID_NUMERIC_KEYPAD,
    PAGE_ID_CH_SETTINGS_PROT,
    PAGE_ID_CH_SETTINGS_PROT_CLEAR,
    PAGE_ID_CH_SETTINGS_PROT_OVP,
    PAGE_ID_CH_SETTINGS_PROT_OCP,
    PAGE_ID_CH_SETTINGS_PROT_OPP,
    PAGE_ID_CH_SETTINGS_PROT_OTP,
    PAGE_ID_CH_SETTINGS_TRIGGER,
    PAGE_ID_CH_SETTINGS_LISTS,
    PAGE_ID_CH_SETTINGS_LISTS_INSERT_MENU,
    PAGE_ID_CH_SETTINGS_LISTS_DELETE_MENU,
    PAGE_ID_CH_START_LIST,
    PAGE_ID_CH_SETTINGS_ADV,
    PAGE_ID_CH_SETTINGS_ADV_LRIPPLE,
    PAGE_ID_CH_SETTINGS_ADV_REMOTE,
    PAGE_ID_CH_SETTINGS_ADV_RANGES,
    PAGE_ID_CH_SETTINGS_ADV_TRACKING,
    PAGE_ID_CH_SETTINGS_ADV_COUPLING,
    PAGE_ID_CH_SETTINGS_ADV_COUPLING_INFO,
    PAGE_ID_CH_SETTINGS_ADV_VIEW,
    PAGE_ID_CH_SETTINGS_INFO,
    PAGE_ID_SYS_SETTINGS,
    PAGE_ID_SYS_SETTINGS_AUX_OTP,
    PAGE_ID_SYS_SETTINGS_PROTECTIONS,
    PAGE_ID_SYS_SETTINGS_TRIGGER,
    PAGE_ID_SYS_SETTINGS_IO,
    PAGE_ID_SYS_SETTINGS_DATE_TIME,
    PAGE_ID_SYS_SETTINGS_ENCODER,
    PAGE_ID_SYS_SETTINGS2,
    PAGE_ID_SYS_SETTINGS_SERIAL,
    PAGE_ID_SYS_SETTINGS_ETHERNET,
    PAGE_ID_SYS_SETTINGS_ETHERNET_STATIC,
    PAGE_ID_SYS_SETTINGS_CAL,
    PAGE_ID_SYS_SETTINGS_CAL_CH,
    PAGE_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP,
    PAGE_ID_SYS_SETTINGS_CAL_CH_WIZ_FINISH,
    PAGE_ID_SYS_SETTINGS_SCREEN_CALIBRATION,
    PAGE_ID_SYS_SETTINGS_DISPLAY,
    PAGE_ID_SYS_SETTINGS_SOUND,
    PAGE_ID_SYS_SETTINGS_DIAG,
    PAGE_ID_USER_PROFILES,
    PAGE_ID_USER_PROFILES2,
    PAGE_ID_USER_PROFILE_SETTINGS,
    PAGE_ID_USER_PROFILE_0_SETTINGS,
    PAGE_ID_SYS_INFO,
    PAGE_ID_SYS_INFO2,
    PAGE_ID_STAND_BY_MENU,
    PAGE_ID_ENTERING_STANDBY,
    PAGE_ID_STANDBY,
    PAGE_ID_DISPLAY_OFF
};

extern const uint8_t *fonts[];

struct Bitmap {
    uint16_t w;
    uint16_t h;
    const uint8_t *pixels;
};

extern Bitmap bitmaps[];

extern const uint8_t styles[];

extern const uint8_t document[];

}
}
} // namespace eez::psu::gui
