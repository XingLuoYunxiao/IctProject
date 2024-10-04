/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RESOURCE_TABLE_H
#define RESOURCE_TABLE_H

#include<stdint.h>

namespace OHOS {
const int32_t STRING_ENTRYABILITY_DESC = 0x01000002;
const int32_t STRING_ENTRYABILITY_LABEL = 0x01000003;
const int32_t STRING_APP_NAME = 0x01000000;
const int32_t STRING_CANCEL_BUTTON = 0x02000000;
const int32_t STRING_DEFAULT_SEX = 0x02000001;
const int32_t STRING_DEFINITE_BUTTON = 0x02000002;
const int32_t STRING_MODULE_DESC = 0x01000004;
const int32_t STRING_PAGE_SHOW = 0x01000012;
const int32_t STRING_TEXT_INPUT_HINT = 0x02000003;
const int32_t STRING_TEXT_INPUT_SIGNATURE = 0x02000004;
const int32_t STRING_TEXT_TITLE_HOBBIES = 0x02000005;
const int32_t STRING_TITLE_BIRTHDATE = 0x02000006;
const int32_t STRING_TITLE_HOBBIES = 0x02000007;
const int32_t STRING_TITLE_SEX = 0x02000008;
const int32_t STRARRAY_HOBBIES_DATA = 0x02000009;
const int32_t STRARRAY_SEX_ARRAY = 0x0200000a;
const int32_t COLOR_COLUMN_BACKGROUND_COLOR = 0x0200000b;
const int32_t COLOR_CUSTOM_BLANK_COLOR = 0x0200000c;
const int32_t COLOR_CUSTOM_COLOR = 0x0200000d;
const int32_t COLOR_DIVIDER_COLOR = 0x0200000e;
const int32_t COLOR_PLACE_COLOR = 0x0200000f;
const int32_t COLOR_START_WINDOW_BACKGROUND = 0x01000005;
const int32_t FLOAT_ARROW_IMAGE_HEIGHT = 0x02000010;
const int32_t FLOAT_ARROW_IMAGE_WIDTH = 0x02000011;
const int32_t FLOAT_ARROW_RIGHT_DISTANCE = 0x02000012;
const int32_t FLOAT_AVATAR_SIZE = 0x02000013;
const int32_t FLOAT_BLANK_HEIGHT = 0x02000014;
const int32_t FLOAT_BLANK_OPACITY = 0x02000015;
const int32_t FLOAT_BLANK_WIDTH = 0x02000016;
const int32_t FLOAT_CONTENT_LEFT_DISTANCE = 0x02000017;
const int32_t FLOAT_CONTENT_RIGHT_DISTANCE = 0x02000018;
const int32_t FLOAT_DIALOG_BOTTOM_DISTANCE = 0x02000019;
const int32_t FLOAT_DIALOG_RADIUS = 0x0200001a;
const int32_t FLOAT_DIALOG_TOP_DISTANCE = 0x0200001b;
const int32_t FLOAT_DIVIDER_HEIGHT = 0x0200001c;
const int32_t FLOAT_IMAGE_LEFT_DISTANCE = 0x0200001d;
const int32_t FLOAT_INPUT_IMAGE_LEFT = 0x0200001e;
const int32_t FLOAT_INPUT_IMAGE_SIZE = 0x0200001f;
const int32_t FLOAT_INPUT_LEFT_INSIDE = 0x02000020;
const int32_t FLOAT_INPUT_RIGHT_INSIDE = 0x02000021;
const int32_t FLOAT_INPUT_ROW_HEIGHT = 0x02000022;
const int32_t FLOAT_INPUT_ROW_RADIUS = 0x02000023;
const int32_t FLOAT_INPUT_ROW_TOP = 0x02000024;
const int32_t FLOAT_INPUT_TEXT_SIZE = 0x02000025;
const int32_t FLOAT_LABEL_LEFT_DISTANCE = 0x02000026;
const int32_t FLOAT_LABEL_SIZE = 0x02000027;
const int32_t FLOAT_LIST_BOTTOM_DISTANCE = 0x02000028;
const int32_t FLOAT_LIST_TOP_DISTANCE = 0x02000029;
const int32_t FLOAT_OPTIONS_BOTTOM_DISTANCE = 0x0200002a;
const int32_t FLOAT_OPTIONS_HEIGHT = 0x0200002b;
const int32_t FLOAT_OPTIONS_LIST_HEIGHT = 0x0200002c;
const int32_t FLOAT_OPTIONS_TOP_DISTANCE = 0x0200002d;
const int32_t FLOAT_PERSONAL_FONT_SIZE = 0x0200002e;
const int32_t FLOAT_ROW_HEIGHT = 0x0200002f;
const int32_t FLOAT_ROW_RADIUS = 0x02000030;
const int32_t FLOAT_ROW_TOP_DISTANCE = 0x02000031;
const int32_t FLOAT_TEXT_IMAGE_SIZE = 0x02000032;
const int32_t FLOAT_TEXT_INPUT_HEIGHT = 0x02000033;
const int32_t FLOAT_TEXT_SIZE = 0x02000034;
const int32_t FLOAT_TITLE_HOBBIES_SIZE = 0x02000035;
const int32_t FLOAT_TITLE_LEFT_DISTANCE = 0x02000036;
const int32_t FLOAT_TITLE_LINE_HEIGHT = 0x02000037;
const int32_t FLOAT_TOGGLE_RIGHT_DISTANCE = 0x02000038;
const int32_t FLOAT_TOGGLE_SIZE = 0x02000039;
const int32_t MEDIA_ACCOUNT = 0x0200003a;
const int32_t MEDIA_ADVERTISE_IMAGE = 0x02000060;
const int32_t MEDIA_ADVERTISING = 0x0200003b;
const int32_t MEDIA_APP_ICON = 0x01000001;
const int32_t MEDIA_ATTRACTION = 0x0200004d;
const int32_t MEDIA_ATTRACTION_1 = 0x02000063;
const int32_t MEDIA_ATTRACTION_2 = 0x02000064;
const int32_t MEDIA_ATTRACTION_3 = 0x02000065;
const int32_t MEDIA_AVATAR_ICON = 0x0200003c;
const int32_t MEDIA_BACKGROUND = 0x01000006;
const int32_t MEDIA_CARD = 0x0200003d;
const int32_t MEDIA_CLASS_1 = 0x02000066;
const int32_t MEDIA_CLASS_2 = 0x02000067;
const int32_t MEDIA_CLASS_3 = 0x02000068;
const int32_t MEDIA_CLASS_4 = 0x02000069;
const int32_t MEDIA_CLASS_5 = 0x0200006a;
const int32_t MEDIA_DOUSHI = 0x0200003e;
const int32_t MEDIA_FANHUI = 0x0200003f;
const int32_t MEDIA_FILTER = 0x02000040;
const int32_t MEDIA_FIRST = 0x02000041;
const int32_t MEDIA_FOREGROUND = 0x01000007;
const int32_t MEDIA_FULI = 0x02000042;
const int32_t MEDIA_FULI_SEL = 0x02000043;
const int32_t MEDIA_GEREN = 0x02000044;
const int32_t MEDIA_GEREN_SEL = 0x02000045;
const int32_t MEDIA_GUANGGAO = 0x02000046;
const int32_t MEDIA_IC_01_OFF = 0x01000008;
const int32_t MEDIA_IC_01_ON = 0x01000009;
const int32_t MEDIA_IC_02_OFF = 0x0100000a;
const int32_t MEDIA_IC_02_ON = 0x0100000b;
const int32_t MEDIA_IC_03_OFF = 0x0100000c;
const int32_t MEDIA_IC_03_ON = 0x0100000d;
const int32_t MEDIA_IC_AI_READ_NORMAL = 0x01000027;
const int32_t MEDIA_IC_AI_READ_ON = 0x01000028;
const int32_t MEDIA_IC_ARROW = 0x01000013;
const int32_t MEDIA_IC_AVATAR = 0x02000047;
const int32_t MEDIA_IC_BACK = 0x01000029;
const int32_t MEDIA_IC_BIRTHDATE = 0x02000048;
const int32_t MEDIA_IC_CLOSE = 0x01000036;
const int32_t MEDIA_IC_GUIDE = 0x01000014;
const int32_t MEDIA_IC_HOBBIES = 0x02000049;
const int32_t MEDIA_IC_MEDALS = 0x01000015;
const int32_t MEDIA_IC_NICKNAME = 0x0200004a;
const int32_t MEDIA_IC_OPEN = 0x01000037;
const int32_t MEDIA_IC_PREPARE = 0x01000016;
const int32_t MEDIA_IC_PUBLIC_EMAIL = 0x02000061;
const int32_t MEDIA_IC_SEX = 0x0200004b;
const int32_t MEDIA_IC_SIGNATURE = 0x0200004c;
const int32_t MEDIA_IC_START_ICON = 0x0100000e;
const int32_t MEDIA_IC_VIDEO = 0x01000017;
const int32_t MEDIA_KNOWLEDGE_MAP_BANNER = 0x01000018;
const int32_t MEDIA_LAUNCHER = 0x0200004e;
const int32_t MEDIA_LAYERED_IMAGE = 0x0100000f;
const int32_t MEDIA_LIST = 0x0200004f;
const int32_t MEDIA_LOGO = 0x02000062;
const int32_t MEDIA_MIAOSHA = 0x02000050;
const int32_t MEDIA_NEARBY_1 = 0x0200006b;
const int32_t MEDIA_NEARBY_2 = 0x0200006c;
const int32_t MEDIA_NEARBY_3 = 0x0200006d;
const int32_t MEDIA_NEARBY_4 = 0x0200006e;
const int32_t MEDIA_READ = 0x02000051;
const int32_t MEDIA_SEARCH = 0x02000052;
const int32_t MEDIA_SELRIGHT = 0x02000053;
const int32_t MEDIA_SETTING = 0x02000054;
const int32_t MEDIA_SHENGLUE = 0x02000055;
const int32_t MEDIA_SHUCHENG = 0x02000056;
const int32_t MEDIA_SHUCHENG_SEL = 0x02000057;
const int32_t MEDIA_SHUJIA = 0x02000058;
const int32_t MEDIA_SHUJIA_SEL = 0x02000059;
const int32_t MEDIA_STARTICON = 0x0200005a;
const int32_t MEDIA_SWIPER1 = 0x0200005b;
const int32_t MEDIA_SWIPER2 = 0x0200005c;
const int32_t MEDIA_SWIPER3 = 0x0200005d;
const int32_t MEDIA_SWIPER4 = 0x0200005e;
const int32_t MEDIA_SWIPER5 = 0x0200005f;
const int32_t PROFILE_BACKUP_CONFIG = 0x01000010;
const int32_t PROFILE_MAIN_PAGES = 0x01000011;
}
#endif