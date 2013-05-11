static const guint16 keymap_win322xtkbd[] = {
  [0x8] = 0xe,         /* 8 (VK_BACK) => 14 via 14 (KEY_BACKSPACE) */
  [0x9] = 0xf,         /* 9 (VK_TAB) => 15 via 15 (KEY_TAB) */
  [0xd] = 0x1c,        /* 13 (VK_RETURN) => 28 via 28 (KEY_ENTER) */
  [0x11] = 0x1d,       /* 17 (VK_CONTROL) => 29 via 29 (KEY_LEFTCTRL) */
  [0x12] = 0x38,       /* 18 (VK_MENU) => 56 via 56 (KEY_LEFTALT) */
  [0x13] = 0x146,      /* 19 (VK_PAUSE) => 326 via 119 (KEY_PAUSE) */
  [0x14] = 0x3a,       /* 20 (VK_CAPITAL) => 58 via 58 (KEY_CAPSLOCK) */
  [0x19] = 0x10d,      /* 25 (VK_HANJA) => 269 via 123 (KEY_HANJA) */
  [0x1b] = 0x1,        /* 27 (VK_ESCAPE) => 1 via 1 (KEY_ESC) */
  [0x20] = 0x39,       /* 32 (VK_SPACE) => 57 via 57 (KEY_SPACE) */
  [0x21] = 0x149,      /* 33 (VK_PRIOR) => 329 via 104 (KEY_PAGEUP) */
  [0x22] = 0x151,      /* 34 (VK_NEXT) => 337 via 109 (KEY_PAGEDOWN) */
  [0x23] = 0x14f,      /* 35 (VK_END) => 335 via 107 (KEY_END) */
  [0x24] = 0x147,      /* 36 (VK_HOME) => 327 via 102 (KEY_HOME) */
  [0x25] = 0x14b,      /* 37 (VK_LEFT) => 331 via 105 (KEY_LEFT) */
  [0x26] = 0x148,      /* 38 (VK_UP) => 328 via 103 (KEY_UP) */
  [0x27] = 0x14d,      /* 39 (VK_RIGHT) => 333 via 106 (KEY_RIGHT) */
  [0x28] = 0x150,      /* 40 (VK_DOWN) => 336 via 108 (KEY_DOWN) */
  [0x2a] = 0x139,      /* 42 (VK_PRINT) => 313 via 210 (KEY_PRINT) */
  [0x2c] = 0x54,       /* 44 (VK_SNAPSHOT ???) => 84 via 99 (KEY_SYSRQ) */
  [0x2d] = 0x152,      /* 45 (VK_INSERT) => 338 via 110 (KEY_INSERT) */
  [0x2f] = 0x175,      /* 47 (VK_HELP) => 373 via 138 (KEY_HELP) */
  [0x30] = 0xb,        /* 48 (VK_0) => 11 via 11 (KEY_0) */
  [0x31] = 0x2,        /* 49 (VK_1) => 2 via 2 (KEY_1) */
  [0x32] = 0x3,        /* 50 (VK_2) => 3 via 3 (KEY_2) */
  [0x33] = 0x4,        /* 51 (VK_3) => 4 via 4 (KEY_3) */
  [0x34] = 0x5,        /* 52 (VK_4) => 5 via 5 (KEY_4) */
  [0x35] = 0x6,        /* 53 (VK_5) => 6 via 6 (KEY_5) */
  [0x36] = 0x7,        /* 54 (VK_6) => 7 via 7 (KEY_6) */
  [0x37] = 0x8,        /* 55 (VK_7) => 8 via 8 (KEY_7) */
  [0x38] = 0x9,        /* 56 (VK_8) => 9 via 9 (KEY_8) */
  [0x39] = 0xa,        /* 57 (VK_9) => 10 via 10 (KEY_9) */
  [0x41] = 0x1e,       /* 65 (VK_A) => 30 via 30 (KEY_A) */
  [0x42] = 0x30,       /* 66 (VK_B) => 48 via 48 (KEY_B) */
  [0x43] = 0x2e,       /* 67 (VK_C) => 46 via 46 (KEY_C) */
  [0x44] = 0x20,       /* 68 (VK_D) => 32 via 32 (KEY_D) */
  [0x45] = 0x12,       /* 69 (VK_E) => 18 via 18 (KEY_E) */
  [0x46] = 0x21,       /* 70 (VK_F) => 33 via 33 (KEY_F) */
  [0x47] = 0x22,       /* 71 (VK_G) => 34 via 34 (KEY_G) */
  [0x48] = 0x23,       /* 72 (VK_H) => 35 via 35 (KEY_H) */
  [0x49] = 0x17,       /* 73 (VK_I) => 23 via 23 (KEY_I) */
  [0x4a] = 0x24,       /* 74 (VK_J) => 36 via 36 (KEY_J) */
  [0x4b] = 0x25,       /* 75 (VK_K) => 37 via 37 (KEY_K) */
  [0x4c] = 0x26,       /* 76 (VK_L) => 38 via 38 (KEY_L) */
  [0x4d] = 0x32,       /* 77 (VK_M) => 50 via 50 (KEY_M) */
  [0x4e] = 0x31,       /* 78 (VK_N) => 49 via 49 (KEY_N) */
  [0x4f] = 0x18,       /* 79 (VK_O) => 24 via 24 (KEY_O) */
  [0x50] = 0x19,       /* 80 (VK_P) => 25 via 25 (KEY_P) */
  [0x51] = 0x10,       /* 81 (VK_Q) => 16 via 16 (KEY_Q) */
  [0x52] = 0x13,       /* 82 (VK_R) => 19 via 19 (KEY_R) */
  [0x53] = 0x1f,       /* 83 (VK_S) => 31 via 31 (KEY_S) */
  [0x54] = 0x14,       /* 84 (VK_T) => 20 via 20 (KEY_T) */
  [0x55] = 0x16,       /* 85 (VK_U) => 22 via 22 (KEY_U) */
  [0x56] = 0x2f,       /* 86 (VK_V) => 47 via 47 (KEY_V) */
  [0x57] = 0x11,       /* 87 (VK_W) => 17 via 17 (KEY_W) */
  [0x58] = 0x2d,       /* 88 (VK_X) => 45 via 45 (KEY_X) */
  [0x59] = 0x15,       /* 89 (VK_Y) => 21 via 21 (KEY_Y) */
  [0x5a] = 0x2c,       /* 90 (VK_Z) => 44 via 44 (KEY_Z) */
  [0x5b] = 0x15b,      /* 91 (VK_LWIN) => 347 via 125 (KEY_LEFTMETA) */
  [0x5c] = 0x15c,      /* 92 (VK_RWIN) => 348 via 126 (KEY_RIGHTMETA) */
  [0x5d] = 0x15d,      /* 93 (VK_APPS) => 349 via 127 (KEY_COMPOSE) */
  [0x5f] = 0x15f,      /* 95 (VK_SLEEP) => 351 via 142 (KEY_SLEEP) */
  [0x60] = 0x52,       /* 96 (VK_NUMPAD0) => 82 via 82 (KEY_KP0) */
  [0x61] = 0x4f,       /* 97 (VK_NUMPAD1) => 79 via 79 (KEY_KP1) */
  [0x62] = 0x50,       /* 98 (VK_NUMPAD2) => 80 via 80 (KEY_KP2) */
  [0x63] = 0x51,       /* 99 (VK_NUMPAD3) => 81 via 81 (KEY_KP3) */
  [0x64] = 0x4b,       /* 100 (VK_NUMPAD4) => 75 via 75 (KEY_KP4) */
  [0x65] = 0x4c,       /* 101 (VK_NUMPAD5) => 76 via 76 (KEY_KP5) */
  [0x66] = 0x4d,       /* 102 (VK_NUMPAD6) => 77 via 77 (KEY_KP6) */
  [0x67] = 0x47,       /* 103 (VK_NUMPAD7) => 71 via 71 (KEY_KP7) */
  [0x68] = 0x48,       /* 104 (VK_NUMPAD8) => 72 via 72 (KEY_KP8) */
  [0x69] = 0x49,       /* 105 (VK_NUMPAD9) => 73 via 73 (KEY_KP9) */
  [0x6a] = 0x37,       /* 106 (VK_MULTIPLY) => 55 via 55 (KEY_KPASTERISK) */
  [0x6b] = 0x4e,       /* 107 (VK_ADD) => 78 via 78 (KEY_KPPLUS) */
  [0x6c] = 0x7e,       /* 108 (VK_SEPARATOR??) => 126 via 121 (KEY_KPCOMMA) */
  [0x6d] = 0x4a,       /* 109 (VK_SUBTRACT) => 74 via 74 (KEY_KPMINUS) */
  [0x6e] = 0x53,       /* 110 (VK_DECIMAL) => 83 via 83 (KEY_KPDOT) */
  [0x6f] = 0x135,      /* 111 (VK_DIVIDE) => 309 via 98 (KEY_KPSLASH) */
  [0x70] = 0x3b,       /* 112 (VK_F1) => 59 via 59 (KEY_F1) */
  [0x71] = 0x3c,       /* 113 (VK_F2) => 60 via 60 (KEY_F2) */
  [0x72] = 0x3d,       /* 114 (VK_F3) => 61 via 61 (KEY_F3) */
  [0x73] = 0x3e,       /* 115 (VK_F4) => 62 via 62 (KEY_F4) */
  [0x74] = 0x3f,       /* 116 (VK_F5) => 63 via 63 (KEY_F5) */
  [0x75] = 0x40,       /* 117 (VK_F6) => 64 via 64 (KEY_F6) */
  [0x76] = 0x41,       /* 118 (VK_F7) => 65 via 65 (KEY_F7) */
  [0x77] = 0x42,       /* 119 (VK_F8) => 66 via 66 (KEY_F8) */
  [0x78] = 0x43,       /* 120 (VK_F9) => 67 via 67 (KEY_F9) */
  [0x79] = 0x44,       /* 121 (VK_F10) => 68 via 68 (KEY_F10) */
  [0x7a] = 0x57,       /* 122 (VK_F11) => 87 via 87 (KEY_F11) */
  [0x7b] = 0x58,       /* 123 (VK_F12) => 88 via 88 (KEY_F12) */
  [0x7c] = 0x5d,       /* 124 (VK_F13) => 93 via 183 (KEY_F13) */
  [0x7d] = 0x5e,       /* 125 (VK_F14) => 94 via 184 (KEY_F14) */
  [0x7e] = 0x5f,       /* 126 (VK_F15) => 95 via 185 (KEY_F15) */
  [0x7f] = 0x55,       /* 127 (VK_F16) => 85 via 186 (KEY_F16) */
  [0x80] = 0x103,      /* 128 (VK_F17) => 259 via 187 (KEY_F17) */
  [0x81] = 0x177,      /* 129 (VK_F18) => 375 via 188 (KEY_F18) */
  [0x82] = 0x104,      /* 130 (VK_F19) => 260 via 189 (KEY_F19) */
  [0x83] = 0x5a,       /* 131 (VK_F20) => 90 via 190 (KEY_F20) */
  [0x84] = 0x74,       /* 132 (VK_F21) => 116 via 191 (KEY_F21) */
  [0x85] = 0x179,      /* 133 (VK_F22) => 377 via 192 (KEY_F22) */
  [0x86] = 0x6d,       /* 134 (VK_F23) => 109 via 193 (KEY_F23) */
  [0x87] = 0x6f,       /* 135 (VK_F24) => 111 via 194 (KEY_F24) */
  [0x90] = 0x45,       /* 144 (VK_NUMLOCK) => 69 via 69 (KEY_NUMLOCK) */
  [0x91] = 0x46,       /* 145 (VK_SCROLL) => 70 via 70 (KEY_SCROLLLOCK) */
  [0xa0] = 0x2a,       /* 160 (VK_LSHIFT) => 42 via 42 (KEY_LEFTSHIFT) */
  [0xa1] = 0x36,       /* 161 (VK_RSHIFT) => 54 via 54 (KEY_RIGHTSHIFT) */
  [0xa2] = 0x1d,       /* 162 (VK_CONTROL) => 29 via 29 (KEY_LEFTCTRL) */
  [0xa3] = 0x11d,      /* 163 (VK_RCONTROL) => 285 via 97 (KEY_RIGHTCTRL) */
  [0xa4] = 0x38,       /* 164 (VK_MENU) => 56 via 56 (KEY_LEFTALT) */
  [0xa5] = 0x138,      /* 165 (VK_RMENU) => 312 via 100 (KEY_RIGHTALT) */
  [0xa6] = 0x16a,      /* 166 (VK_BROWSER_BACK) => 362 via 158 (KEY_BACK) */
  [0xa7] = 0x169,      /* 167 (VK_BROWSER_FORWARD) => 361 via 159 (KEY_FORWARD) */
  [0xa8] = 0x167,      /* 168 (VK_BROWSER_REFRESH) => 359 via 173 (KEY_REFRESH) */
  [0xa9] = 0x168,      /* 169 (VK_BROWSER_STOP) => 360 via 128 (KEY_STOP) */
  [0xaa] = 0x165,      /* 170 (VK_BROWSER_SEARCH) => 357 via 217 (KEY_SEARCH) */
  [0xac] = 0x132,      /* 172 (VK_BROWSER_HOME) => 306 via 172 (KEY_HOMEPAGE) */
  [0xad] = 0x120,      /* 173 (VK_VOLUME_MUTE) => 288 via 113 (KEY_MUTE) */
  [0xae] = 0x12e,      /* 174 (VK_VOLUME_DOWN) => 302 via 114 (KEY_VOLUMEDOWN) */
  [0xaf] = 0x130,      /* 175 (VK_VOLUME_UP) => 304 via 115 (KEY_VOLUMEUP) */
  [0xb0] = 0x119,      /* 176 (VK_MEDIA_NEXT_TRACK) => 281 via 163 (KEY_NEXTSONG) */
  [0xb1] = 0x110,      /* 177 (VK_MEDIA_PREV_TRACK) => 272 via 165 (KEY_PREVIOUSSONG) */
  [0xb2] = 0x124,      /* 178 (VK_MEDIA_STOP) => 292 via 166 (KEY_STOPCD) */
  [0xb3] = 0x122,      /* 179 (VK_MEDIA_PLAY_PAUSE) => 290 via 164 (KEY_PLAYPAUSE) */
  [0xb4] = 0x13f,      /* 180 (VK_LAUNCH_MAIL) => 319 via 215 (KEY_EMAIL) */
  [0xba] = 0x27,       /* 186 (VK_OEM_1) => 39 via 39 (KEY_SEMICOLON) */
  [0xbb] = 0xd,        /* 187 (VK_OEM_PLUS) => 13 via 13 (KEY_EQUAL) */
  [0xbc] = 0x33,       /* 188 (VK_OEM_COMMA) => 51 via 51 (KEY_COMMA) */
  [0xbd] = 0xc,        /* 189 (VK_OEM_MINUS) => 12 via 12 (KEY_MINUS) */
  [0xbe] = 0x34,       /* 190 (VK_OEM_PERIOD) => 52 via 52 (KEY_DOT) */
  [0xbf] = 0x35,       /* 191 (VK_OEM_2) => 53 via 53 (KEY_SLASH) */
  [0xc0] = 0x29,       /* 192 (VK_OEM_3) => 41 via 41 (KEY_GRAVE) */
  [0xdb] = 0x1a,       /* 219 (VK_OEM_4) => 26 via 26 (KEY_LEFTBRACE) */
  [0xdc] = 0x2b,       /* 220 (VK_OEM_5) => 43 via 43 (KEY_BACKSLASH) */
  [0xdd] = 0x1b,       /* 221 (VK_OEM_6) => 27 via 27 (KEY_RIGHTBRACE) */
  [0xe1] = 0x56,       /* 225 (VK_OEM_102) => 86 via 86 (KEY_102ND) */
  [0xfa] = 0x133,      /* 250 (VK_PLAY) => 307 via 207 (KEY_PLAY) */
  [0x12e] = 0x153,     /* 302 (VK_DELETE) => 339 via 111 (KEY_DELETE) */
};
