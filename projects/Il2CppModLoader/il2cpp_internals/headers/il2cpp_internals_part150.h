namespace app {

enum TouchPhase__Enum : int32_t {
  TouchPhase__Enum_Began = 0,
  TouchPhase__Enum_Moved = 1,
  TouchPhase__Enum_Stationary = 2,
  TouchPhase__Enum_Ended = 3,
  TouchPhase__Enum_Canceled = 4,
};
struct TouchPhase__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TouchPhase__Enum value;
};
enum TouchType__Enum : int32_t {
  TouchType__Enum_Direct = 0,
  TouchType__Enum_Indirect = 1,
  TouchType__Enum_Stylus = 2,
};
struct TouchType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TouchType__Enum value;
};
struct Touch {
  int32_t m_FingerId;
  struct Vector2 m_Position;
  struct Vector2 m_RawPosition;
  struct Vector2 m_PositionDelta;
  float m_TimeDelta;
  int32_t m_TapCount;
  enum TouchPhase__Enum m_Phase;
  enum TouchType__Enum m_Type;
  float m_Pressure;
  float m_maximumPossiblePressure;
  float m_Radius;
  float m_RadiusVariance;
  float m_AltitudeAngle;
  float m_AzimuthAngle;
};
struct Touch__Boxed {
  struct Touch__Class *klass;
  struct MonitorData *monitor;
  struct Touch fields;
};
struct Touch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Touch__StaticFields {
};
struct Touch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Touch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Touch__VTable vtable;
};

enum KeyCode__Enum : int32_t {
  KeyCode__Enum_None = 0,
  KeyCode__Enum_Backspace = 8,
  KeyCode__Enum_Delete = 127,
  KeyCode__Enum_Tab = 9,
  KeyCode__Enum_Clear = 12,
  KeyCode__Enum_Return = 13,
  KeyCode__Enum_Pause = 19,
  KeyCode__Enum_Escape = 27,
  KeyCode__Enum_Space = 32,
  KeyCode__Enum_Keypad0 = 256,
  KeyCode__Enum_Keypad1 = 257,
  KeyCode__Enum_Keypad2 = 258,
  KeyCode__Enum_Keypad3 = 259,
  KeyCode__Enum_Keypad4 = 260,
  KeyCode__Enum_Keypad5 = 261,
  KeyCode__Enum_Keypad6 = 262,
  KeyCode__Enum_Keypad7 = 263,
  KeyCode__Enum_Keypad8 = 264,
  KeyCode__Enum_Keypad9 = 265,
  KeyCode__Enum_KeypadPeriod = 266,
  KeyCode__Enum_KeypadDivide = 267,
  KeyCode__Enum_KeypadMultiply = 268,
  KeyCode__Enum_KeypadMinus = 269,
  KeyCode__Enum_KeypadPlus = 270,
  KeyCode__Enum_KeypadEnter = 271,
  KeyCode__Enum_KeypadEquals = 272,
  KeyCode__Enum_UpArrow = 273,
  KeyCode__Enum_DownArrow = 274,
  KeyCode__Enum_RightArrow = 275,
  KeyCode__Enum_LeftArrow = 276,
  KeyCode__Enum_Insert = 277,
  KeyCode__Enum_Home = 278,
  KeyCode__Enum_End = 279,
  KeyCode__Enum_PageUp = 280,
  KeyCode__Enum_PageDown = 281,
  KeyCode__Enum_F1 = 282,
  KeyCode__Enum_F2 = 283,
  KeyCode__Enum_F3 = 284,
  KeyCode__Enum_F4 = 285,
  KeyCode__Enum_F5 = 286,
  KeyCode__Enum_F6 = 287,
  KeyCode__Enum_F7 = 288,
  KeyCode__Enum_F8 = 289,
  KeyCode__Enum_F9 = 290,
  KeyCode__Enum_F10 = 291,
  KeyCode__Enum_F11 = 292,
  KeyCode__Enum_F12 = 293,
  KeyCode__Enum_F13 = 294,
  KeyCode__Enum_F14 = 295,
  KeyCode__Enum_F15 = 296,
  KeyCode__Enum_Alpha0 = 48,
  KeyCode__Enum_Alpha1 = 49,
  KeyCode__Enum_Alpha2 = 50,
  KeyCode__Enum_Alpha3 = 51,
  KeyCode__Enum_Alpha4 = 52,
  KeyCode__Enum_Alpha5 = 53,
  KeyCode__Enum_Alpha6 = 54,
  KeyCode__Enum_Alpha7 = 55,
  KeyCode__Enum_Alpha8 = 56,
  KeyCode__Enum_Alpha9 = 57,
  KeyCode__Enum_Exclaim = 33,
  KeyCode__Enum_DoubleQuote = 34,
  KeyCode__Enum_Hash = 35,
  KeyCode__Enum_Dollar = 36,
  KeyCode__Enum_Percent = 37,
  KeyCode__Enum_Ampersand = 38,
  KeyCode__Enum_Quote = 39,
  KeyCode__Enum_LeftParen = 40,
  KeyCode__Enum_RightParen = 41,
  KeyCode__Enum_Asterisk = 42,
  KeyCode__Enum_Plus = 43,
  KeyCode__Enum_Comma = 44,
  KeyCode__Enum_Minus = 45,
  KeyCode__Enum_Period = 46,
  KeyCode__Enum_Slash = 47,
  KeyCode__Enum_Colon = 58,
  KeyCode__Enum_Semicolon = 59,
  KeyCode__Enum_Less = 60,
  KeyCode__Enum_Equals = 61,
  KeyCode__Enum_Greater = 62,
  KeyCode__Enum_Question = 63,
  KeyCode__Enum_At = 64,
  KeyCode__Enum_LeftBracket = 91,
  KeyCode__Enum_Backslash = 92,
  KeyCode__Enum_RightBracket = 93,
  KeyCode__Enum_Caret = 94,
  KeyCode__Enum_Underscore = 95,
  KeyCode__Enum_BackQuote = 96,
  KeyCode__Enum_A = 97,
  KeyCode__Enum_B = 98,
  KeyCode__Enum_C = 99,
  KeyCode__Enum_D = 100,
  KeyCode__Enum_E = 101,
  KeyCode__Enum_F = 102,
  KeyCode__Enum_G = 103,
  KeyCode__Enum_H = 104,
  KeyCode__Enum_I = 105,
  KeyCode__Enum_J = 106,
  KeyCode__Enum_K = 107,
  KeyCode__Enum_L = 108,
  KeyCode__Enum_M = 109,
  KeyCode__Enum_N = 110,
  KeyCode__Enum_O = 111,
  KeyCode__Enum_P = 112,
  KeyCode__Enum_Q = 113,
  KeyCode__Enum_R = 114,
  KeyCode__Enum_S = 115,
  KeyCode__Enum_T = 116,
  KeyCode__Enum_U = 117,
  KeyCode__Enum_V = 118,
  KeyCode__Enum_W = 119,
  KeyCode__Enum_X = 120,
  KeyCode__Enum_Y = 121,
  KeyCode__Enum_Z = 122,
  KeyCode__Enum_LeftCurlyBracket = 123,
  KeyCode__Enum_Pipe = 124,
  KeyCode__Enum_RightCurlyBracket = 125,
  KeyCode__Enum_Tilde = 126,
  KeyCode__Enum_Numlock = 300,
  KeyCode__Enum_CapsLock = 301,
  KeyCode__Enum_ScrollLock = 302,
  KeyCode__Enum_RightShift = 303,
  KeyCode__Enum_LeftShift = 304,
  KeyCode__Enum_RightControl = 305,
  KeyCode__Enum_LeftControl = 306,
  KeyCode__Enum_RightAlt = 307,
  KeyCode__Enum_LeftAlt = 308,
  KeyCode__Enum_LeftCommand = 310,
  KeyCode__Enum_LeftApple = 310,
  KeyCode__Enum_LeftWindows = 311,
  KeyCode__Enum_RightCommand = 309,
  KeyCode__Enum_RightApple = 309,
  KeyCode__Enum_RightWindows = 312,
  KeyCode__Enum_AltGr = 313,
  KeyCode__Enum_Help = 315,
  KeyCode__Enum_Print = 316,
  KeyCode__Enum_SysReq = 317,
  KeyCode__Enum_Break = 318,
  KeyCode__Enum_Menu = 319,
  KeyCode__Enum_Mouse0 = 323,
  KeyCode__Enum_Mouse1 = 324,
  KeyCode__Enum_Mouse2 = 325,
  KeyCode__Enum_Mouse3 = 326,
  KeyCode__Enum_Mouse4 = 327,
  KeyCode__Enum_Mouse5 = 328,
  KeyCode__Enum_Mouse6 = 329,
  KeyCode__Enum_JoystickButton0 = 330,
  KeyCode__Enum_JoystickButton1 = 331,
  KeyCode__Enum_JoystickButton2 = 332,
  KeyCode__Enum_JoystickButton3 = 333,
  KeyCode__Enum_JoystickButton4 = 334,
  KeyCode__Enum_JoystickButton5 = 335,
  KeyCode__Enum_JoystickButton6 = 336,
  KeyCode__Enum_JoystickButton7 = 337,
  KeyCode__Enum_JoystickButton8 = 338,
  KeyCode__Enum_JoystickButton9 = 339,
  KeyCode__Enum_JoystickButton10 = 340,
  KeyCode__Enum_JoystickButton11 = 341,
  KeyCode__Enum_JoystickButton12 = 342,
  KeyCode__Enum_JoystickButton13 = 343,
  KeyCode__Enum_JoystickButton14 = 344,
  KeyCode__Enum_JoystickButton15 = 345,
  KeyCode__Enum_JoystickButton16 = 346,
  KeyCode__Enum_JoystickButton17 = 347,
  KeyCode__Enum_JoystickButton18 = 348,
  KeyCode__Enum_JoystickButton19 = 349,
  KeyCode__Enum_Joystick1Button0 = 350,
  KeyCode__Enum_Joystick1Button1 = 351,
  KeyCode__Enum_Joystick1Button2 = 352,
  KeyCode__Enum_Joystick1Button3 = 353,
  KeyCode__Enum_Joystick1Button4 = 354,
  KeyCode__Enum_Joystick1Button5 = 355,
  KeyCode__Enum_Joystick1Button6 = 356,
  KeyCode__Enum_Joystick1Button7 = 357,
  KeyCode__Enum_Joystick1Button8 = 358,
  KeyCode__Enum_Joystick1Button9 = 359,
  KeyCode__Enum_Joystick1Button10 = 360,
  KeyCode__Enum_Joystick1Button11 = 361,
  KeyCode__Enum_Joystick1Button12 = 362,
  KeyCode__Enum_Joystick1Button13 = 363,
  KeyCode__Enum_Joystick1Button14 = 364,
  KeyCode__Enum_Joystick1Button15 = 365,
  KeyCode__Enum_Joystick1Button16 = 366,
  KeyCode__Enum_Joystick1Button17 = 367,
  KeyCode__Enum_Joystick1Button18 = 368,
  KeyCode__Enum_Joystick1Button19 = 369,
  KeyCode__Enum_Joystick2Button0 = 370,
  KeyCode__Enum_Joystick2Button1 = 371,
  KeyCode__Enum_Joystick2Button2 = 372,
  KeyCode__Enum_Joystick2Button3 = 373,
  KeyCode__Enum_Joystick2Button4 = 374,
  KeyCode__Enum_Joystick2Button5 = 375,
  KeyCode__Enum_Joystick2Button6 = 376,
  KeyCode__Enum_Joystick2Button7 = 377,
  KeyCode__Enum_Joystick2Button8 = 378,
  KeyCode__Enum_Joystick2Button9 = 379,
  KeyCode__Enum_Joystick2Button10 = 380,
  KeyCode__Enum_Joystick2Button11 = 381,
  KeyCode__Enum_Joystick2Button12 = 382,
  KeyCode__Enum_Joystick2Button13 = 383,
  KeyCode__Enum_Joystick2Button14 = 384,
  KeyCode__Enum_Joystick2Button15 = 385,
  KeyCode__Enum_Joystick2Button16 = 386,
  KeyCode__Enum_Joystick2Button17 = 387,
  KeyCode__Enum_Joystick2Button18 = 388,
  KeyCode__Enum_Joystick2Button19 = 389,
  KeyCode__Enum_Joystick3Button0 = 390,
  KeyCode__Enum_Joystick3Button1 = 391,
  KeyCode__Enum_Joystick3Button2 = 392,
  KeyCode__Enum_Joystick3Button3 = 393,
  KeyCode__Enum_Joystick3Button4 = 394,
  KeyCode__Enum_Joystick3Button5 = 395,
  KeyCode__Enum_Joystick3Button6 = 396,
  KeyCode__Enum_Joystick3Button7 = 397,
  KeyCode__Enum_Joystick3Button8 = 398,
  KeyCode__Enum_Joystick3Button9 = 399,
  KeyCode__Enum_Joystick3Button10 = 400,
  KeyCode__Enum_Joystick3Button11 = 401,
  KeyCode__Enum_Joystick3Button12 = 402,
  KeyCode__Enum_Joystick3Button13 = 403,
  KeyCode__Enum_Joystick3Button14 = 404,
  KeyCode__Enum_Joystick3Button15 = 405,
  KeyCode__Enum_Joystick3Button16 = 406,
  KeyCode__Enum_Joystick3Button17 = 407,
  KeyCode__Enum_Joystick3Button18 = 408,
  KeyCode__Enum_Joystick3Button19 = 409,
  KeyCode__Enum_Joystick4Button0 = 410,
  KeyCode__Enum_Joystick4Button1 = 411,
  KeyCode__Enum_Joystick4Button2 = 412,
  KeyCode__Enum_Joystick4Button3 = 413,
  KeyCode__Enum_Joystick4Button4 = 414,
  KeyCode__Enum_Joystick4Button5 = 415,
  KeyCode__Enum_Joystick4Button6 = 416,
  KeyCode__Enum_Joystick4Button7 = 417,
  KeyCode__Enum_Joystick4Button8 = 418,
  KeyCode__Enum_Joystick4Button9 = 419,
  KeyCode__Enum_Joystick4Button10 = 420,
  KeyCode__Enum_Joystick4Button11 = 421,
  KeyCode__Enum_Joystick4Button12 = 422,
  KeyCode__Enum_Joystick4Button13 = 423,
  KeyCode__Enum_Joystick4Button14 = 424,
  KeyCode__Enum_Joystick4Button15 = 425,
  KeyCode__Enum_Joystick4Button16 = 426,
  KeyCode__Enum_Joystick4Button17 = 427,
  KeyCode__Enum_Joystick4Button18 = 428,
  KeyCode__Enum_Joystick4Button19 = 429,
  KeyCode__Enum_Joystick5Button0 = 430,
  KeyCode__Enum_Joystick5Button1 = 431,
  KeyCode__Enum_Joystick5Button2 = 432,
  KeyCode__Enum_Joystick5Button3 = 433,
  KeyCode__Enum_Joystick5Button4 = 434,
  KeyCode__Enum_Joystick5Button5 = 435,
  KeyCode__Enum_Joystick5Button6 = 436,
  KeyCode__Enum_Joystick5Button7 = 437,
  KeyCode__Enum_Joystick5Button8 = 438,
  KeyCode__Enum_Joystick5Button9 = 439,
  KeyCode__Enum_Joystick5Button10 = 440,
  KeyCode__Enum_Joystick5Button11 = 441,
  KeyCode__Enum_Joystick5Button12 = 442,
  KeyCode__Enum_Joystick5Button13 = 443,
  KeyCode__Enum_Joystick5Button14 = 444,
  KeyCode__Enum_Joystick5Button15 = 445,
  KeyCode__Enum_Joystick5Button16 = 446,
  KeyCode__Enum_Joystick5Button17 = 447,
  KeyCode__Enum_Joystick5Button18 = 448,
  KeyCode__Enum_Joystick5Button19 = 449,
  KeyCode__Enum_Joystick6Button0 = 450,
  KeyCode__Enum_Joystick6Button1 = 451,
  KeyCode__Enum_Joystick6Button2 = 452,
  KeyCode__Enum_Joystick6Button3 = 453,
  KeyCode__Enum_Joystick6Button4 = 454,
  KeyCode__Enum_Joystick6Button5 = 455,
  KeyCode__Enum_Joystick6Button6 = 456,
  KeyCode__Enum_Joystick6Button7 = 457,
  KeyCode__Enum_Joystick6Button8 = 458,
  KeyCode__Enum_Joystick6Button9 = 459,
  KeyCode__Enum_Joystick6Button10 = 460,
  KeyCode__Enum_Joystick6Button11 = 461,
  KeyCode__Enum_Joystick6Button12 = 462,
  KeyCode__Enum_Joystick6Button13 = 463,
  KeyCode__Enum_Joystick6Button14 = 464,
  KeyCode__Enum_Joystick6Button15 = 465,
  KeyCode__Enum_Joystick6Button16 = 466,
  KeyCode__Enum_Joystick6Button17 = 467,
  KeyCode__Enum_Joystick6Button18 = 468,
  KeyCode__Enum_Joystick6Button19 = 469,
  KeyCode__Enum_Joystick7Button0 = 470,
  KeyCode__Enum_Joystick7Button1 = 471,
  KeyCode__Enum_Joystick7Button2 = 472,
  KeyCode__Enum_Joystick7Button3 = 473,
  KeyCode__Enum_Joystick7Button4 = 474,
  KeyCode__Enum_Joystick7Button5 = 475,
  KeyCode__Enum_Joystick7Button6 = 476,
  KeyCode__Enum_Joystick7Button7 = 477,
  KeyCode__Enum_Joystick7Button8 = 478,
  KeyCode__Enum_Joystick7Button9 = 479,
  KeyCode__Enum_Joystick7Button10 = 480,
  KeyCode__Enum_Joystick7Button11 = 481,
  KeyCode__Enum_Joystick7Button12 = 482,
  KeyCode__Enum_Joystick7Button13 = 483,
  KeyCode__Enum_Joystick7Button14 = 484,
  KeyCode__Enum_Joystick7Button15 = 485,
  KeyCode__Enum_Joystick7Button16 = 486,
  KeyCode__Enum_Joystick7Button17 = 487,
  KeyCode__Enum_Joystick7Button18 = 488,
  KeyCode__Enum_Joystick7Button19 = 489,
  KeyCode__Enum_Joystick8Button0 = 490,
  KeyCode__Enum_Joystick8Button1 = 491,
  KeyCode__Enum_Joystick8Button2 = 492,
  KeyCode__Enum_Joystick8Button3 = 493,
  KeyCode__Enum_Joystick8Button4 = 494,
  KeyCode__Enum_Joystick8Button5 = 495,
  KeyCode__Enum_Joystick8Button6 = 496,
  KeyCode__Enum_Joystick8Button7 = 497,
  KeyCode__Enum_Joystick8Button8 = 498,
  KeyCode__Enum_Joystick8Button9 = 499,
  KeyCode__Enum_Joystick8Button10 = 500,
  KeyCode__Enum_Joystick8Button11 = 501,
  KeyCode__Enum_Joystick8Button12 = 502,
  KeyCode__Enum_Joystick8Button13 = 503,
  KeyCode__Enum_Joystick8Button14 = 504,
  KeyCode__Enum_Joystick8Button15 = 505,
  KeyCode__Enum_Joystick8Button16 = 506,
  KeyCode__Enum_Joystick8Button17 = 507,
  KeyCode__Enum_Joystick8Button18 = 508,
  KeyCode__Enum_Joystick8Button19 = 509,
};
struct KeyCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KeyCode__Enum value;
};

enum IMECompositionMode__Enum : int32_t {
  IMECompositionMode__Enum_Auto = 0,
  IMECompositionMode__Enum_On = 1,
  IMECompositionMode__Enum_Off = 2,
};
struct IMECompositionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum IMECompositionMode__Enum value;
};

struct CanBeNullAttribute {
  struct CanBeNullAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct CanBeNullAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CanBeNullAttribute__StaticFields {
};
struct CanBeNullAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanBeNullAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanBeNullAttribute__VTable vtable;
};

struct NotNullAttribute_1 {
  struct NotNullAttribute_1__Class *klass;
  struct MonitorData *monitor;
};
struct NotNullAttribute_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct NotNullAttribute_1__StaticFields {
};
struct NotNullAttribute_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NotNullAttribute_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NotNullAttribute_1__VTable vtable;
};

enum ImplicitUseKindFlags__Enum : int32_t {
  ImplicitUseKindFlags__Enum_Default = 7,
  ImplicitUseKindFlags__Enum_Access = 1,
  ImplicitUseKindFlags__Enum_Assign = 2,
  ImplicitUseKindFlags__Enum_InstantiatedWithFixedConstructorSignature = 4,
  ImplicitUseKindFlags__Enum_InstantiatedNoFixedConstructorSignature = 8,
};
struct ImplicitUseKindFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ImplicitUseKindFlags__Enum value;
};
enum ImplicitUseTargetFlags__Enum : int32_t {
  ImplicitUseTargetFlags__Enum_Default = 1,
  ImplicitUseTargetFlags__Enum_Itself = 1,
  ImplicitUseTargetFlags__Enum_Members = 2,
  ImplicitUseTargetFlags__Enum_WithMembers = 3,
};
struct ImplicitUseTargetFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ImplicitUseTargetFlags__Enum value;
};
struct __declspec(align(8)) UsedImplicitlyAttribute__Fields {
  enum ImplicitUseKindFlags__Enum _UseKindFlags_k__BackingField;
  enum ImplicitUseTargetFlags__Enum _TargetFlags_k__BackingField;
};
struct UsedImplicitlyAttribute {
  struct UsedImplicitlyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct UsedImplicitlyAttribute__Fields fields;
};
struct UsedImplicitlyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UsedImplicitlyAttribute__StaticFields {
};
struct UsedImplicitlyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UsedImplicitlyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UsedImplicitlyAttribute__VTable vtable;
};

struct PureAttribute {
  struct PureAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct PureAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct PureAttribute__StaticFields {
};
struct PureAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PureAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PureAttribute__VTable vtable;
};

struct LayerMask {
  int32_t m_Mask;
};
struct LayerMask__Boxed {
  struct LayerMask__Class *klass;
  struct MonitorData *monitor;
  struct LayerMask fields;
};
struct LayerMask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LayerMask__StaticFields {
};
struct LayerMask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LayerMask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LayerMask__VTable vtable;
};

enum VertexAttribute__Enum : int32_t {
  VertexAttribute__Enum_Position = 0,
  VertexAttribute__Enum_Normal = 1,
  VertexAttribute__Enum_Tangent = 2,
  VertexAttribute__Enum_Color = 3,
  VertexAttribute__Enum_TexCoord0 = 4,
  VertexAttribute__Enum_TexCoord1 = 5,
  VertexAttribute__Enum_TexCoord2 = 6,
  VertexAttribute__Enum_TexCoord3 = 7,
  VertexAttribute__Enum_TexCoord4 = 8,
  VertexAttribute__Enum_TexCoord5 = 9,
  VertexAttribute__Enum_TexCoord6 = 10,
  VertexAttribute__Enum_TexCoord7 = 11,
  VertexAttribute__Enum_BlendWeight = 12,
  VertexAttribute__Enum_BlendIndices = 13,
};
struct VertexAttribute__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VertexAttribute__Enum value;
};

enum Mesh_InternalVertexChannelType__Enum : int32_t {
  Mesh_InternalVertexChannelType__Enum_Float = 0,
  Mesh_InternalVertexChannelType__Enum_Color = 2,
};
struct Mesh_InternalVertexChannelType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Mesh_InternalVertexChannelType__Enum value;
};

struct BoneWeight {
  float m_Weight0;
  float m_Weight1;
  float m_Weight2;
  float m_Weight3;
  int32_t m_BoneIndex0;
  int32_t m_BoneIndex1;
  int32_t m_BoneIndex2;
  int32_t m_BoneIndex3;
};
struct BoneWeight__Boxed {
  struct BoneWeight__Class *klass;
  struct MonitorData *monitor;
  struct BoneWeight fields;
};
struct BoneWeight__Array {
  struct BoneWeight__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BoneWeight vector[32];
};
struct BoneWeight__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct BoneWeight__StaticFields {
};
struct BoneWeight__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BoneWeight__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BoneWeight__VTable vtable;
};

struct Matrix4x4__Array {
  struct Matrix4x4__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Matrix4x4 vector[32];
};

struct Color__Array {
  struct Color__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Color vector[32];
};

struct Color32__Array {
  struct Color32__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Color32 vector[32];
};

struct __declspec(align(8)) List_1_UnityEngine_Vector3___Fields {
  struct Vector3__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Vector3_ {
  struct List_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Vector3___Fields fields;
};
struct IEnumerator_1_UnityEngine_Vector3_ {
  struct IEnumerator_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Vector3___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Vector3___StaticFields {
};
struct IEnumerator_1_UnityEngine_Vector3___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Vector3___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Vector3___VTable vtable;
};
struct List_1_UnityEngine_Vector3___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_Vector3___StaticFields {
  struct Vector3__Array * _emptyArray;
};
struct List_1_UnityEngine_Vector3___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Vector3___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Vector3___VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_Color___Fields {
  struct Color__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Color_ {
  struct List_1_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Color___Fields fields;
};
struct IEnumerator_1_UnityEngine_Color_ {
  struct IEnumerator_1_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Color___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Color___StaticFields {
};
struct IEnumerator_1_UnityEngine_Color___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Color___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Color___VTable vtable;
};
struct List_1_UnityEngine_Color___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_Color___StaticFields {
  struct Color__Array * _emptyArray;
};
struct List_1_UnityEngine_Color___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Color___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Color___VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_Color32___Fields {
  struct Color32__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Color32_ {
  struct List_1_UnityEngine_Color32___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Color32___Fields fields;
};
struct IEnumerator_1_UnityEngine_Color32_ {
  struct IEnumerator_1_UnityEngine_Color32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Color32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Color32___StaticFields {
};
struct IEnumerator_1_UnityEngine_Color32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Color32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Color32___VTable vtable;
};
struct List_1_UnityEngine_Color32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_Color32___StaticFields {
  struct Color32__Array * _emptyArray;
};
struct List_1_UnityEngine_Color32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Color32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Color32___VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_Vector2___Fields {
  struct Vector2__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Vector2_ {
  struct List_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Vector2___Fields fields;
};
struct IEnumerator_1_UnityEngine_Vector2_ {
  struct IEnumerator_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Vector2___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Vector2___StaticFields {
};
struct IEnumerator_1_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Vector2___VTable vtable;
};
struct List_1_UnityEngine_Vector2___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_UnityEngine_Vector2___StaticFields {
  struct Vector2__Array * _emptyArray;
};
struct List_1_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Vector2___VTable vtable;
};

struct MonoBehaviour__Fields {
  struct Behaviour__Fields _;
};
struct MonoBehaviour {
  struct MonoBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MonoBehaviour__Fields fields;
};
struct MonoBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MonoBehaviour__StaticFields {
};
struct MonoBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoBehaviour__VTable vtable;
};

struct SendMouseEvents_HitInfo {
  struct GameObject * target;
  struct Camera * camera;
};
struct SendMouseEvents_HitInfo__Boxed {
  struct SendMouseEvents_HitInfo__Class *klass;
  struct MonitorData *monitor;
  struct SendMouseEvents_HitInfo fields;
};
struct SendMouseEvents_HitInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SendMouseEvents_HitInfo__StaticFields {
};}