namespace app {

enum EUniverse__Enum : int32_t {
  EUniverse__Enum_k_EUniverseInvalid = 0,
  EUniverse__Enum_k_EUniversePublic = 1,
  EUniverse__Enum_k_EUniverseBeta = 2,
  EUniverse__Enum_k_EUniverseInternal = 3,
  EUniverse__Enum_k_EUniverseDev = 4,
  EUniverse__Enum_k_EUniverseMax = 5,
};
struct EUniverse__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EUniverse__Enum value;
};

enum ENotificationPosition__Enum : int32_t {
  ENotificationPosition__Enum_k_EPositionTopLeft = 0,
  ENotificationPosition__Enum_k_EPositionTopRight = 1,
  ENotificationPosition__Enum_k_EPositionBottomLeft = 2,
  ENotificationPosition__Enum_k_EPositionBottomRight = 3,
};
struct ENotificationPosition__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ENotificationPosition__Enum value;
};

enum ESteamAPICallFailure__Enum : int32_t {
  ESteamAPICallFailure__Enum_k_ESteamAPICallFailureNone = -1,
  ESteamAPICallFailure__Enum_k_ESteamAPICallFailureSteamGone = 0,
  ESteamAPICallFailure__Enum_k_ESteamAPICallFailureNetworkFailure = 1,
  ESteamAPICallFailure__Enum_k_ESteamAPICallFailureInvalidHandle = 2,
  ESteamAPICallFailure__Enum_k_ESteamAPICallFailureMismatchedCallback = 3,
};
struct ESteamAPICallFailure__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ESteamAPICallFailure__Enum value;
};

enum EGamepadTextInputMode__Enum : int32_t {
  EGamepadTextInputMode__Enum_k_EGamepadTextInputModeNormal = 0,
  EGamepadTextInputMode__Enum_k_EGamepadTextInputModePassword = 1,
};
struct EGamepadTextInputMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EGamepadTextInputMode__Enum value;
};
enum EGamepadTextInputLineMode__Enum : int32_t {
  EGamepadTextInputLineMode__Enum_k_EGamepadTextInputLineModeSingleLine = 0,
  EGamepadTextInputLineMode__Enum_k_EGamepadTextInputLineModeMultipleLines = 1,
};
struct EGamepadTextInputLineMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EGamepadTextInputLineMode__Enum value;
};

struct HHTMLBrowser {
  uint32_t m_HHTMLBrowser;
};
struct HHTMLBrowser__Boxed {
  struct HHTMLBrowser__Class *klass;
  struct MonitorData *monitor;
  struct HHTMLBrowser fields;
};
struct HHTMLBrowser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct HHTMLBrowser__StaticFields {
  struct HHTMLBrowser Invalid;
};
struct HHTMLBrowser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HHTMLBrowser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HHTMLBrowser__VTable vtable;
};

enum EHTMLMouseButton__Enum : int32_t {
  EHTMLMouseButton__Enum_eHTMLMouseButton_Left = 0,
  EHTMLMouseButton__Enum_eHTMLMouseButton_Right = 1,
  EHTMLMouseButton__Enum_eHTMLMouseButton_Middle = 2,
};
struct EHTMLMouseButton__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EHTMLMouseButton__Enum value;
};

enum EHTMLKeyModifiers__Enum : int32_t {
  EHTMLKeyModifiers__Enum_k_eHTMLKeyModifier_None = 0,
  EHTMLKeyModifiers__Enum_k_eHTMLKeyModifier_AltDown = 1,
  EHTMLKeyModifiers__Enum_k_eHTMLKeyModifier_CtrlDown = 2,
  EHTMLKeyModifiers__Enum_k_eHTMLKeyModifier_ShiftDown = 4,
};
struct EHTMLKeyModifiers__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EHTMLKeyModifiers__Enum value;
};

struct InputHandle_t {
  uint64_t m_InputHandle;
};
struct InputHandle_t__Boxed {
  struct InputHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct InputHandle_t fields;
};
struct InputHandle_t__Array {
  struct InputHandle_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InputHandle_t vector[32];
};
struct InputHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct InputHandle_t__StaticFields {
};
struct InputHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputHandle_t__VTable vtable;
};

struct InputActionSetHandle_t {
  uint64_t m_InputActionSetHandle;
};
struct InputActionSetHandle_t__Boxed {
  struct InputActionSetHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct InputActionSetHandle_t fields;
};
struct InputActionSetHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct InputActionSetHandle_t__StaticFields {
};
struct InputActionSetHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputActionSetHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputActionSetHandle_t__VTable vtable;
};

struct InputActionSetHandle_t__Array {
  struct InputActionSetHandle_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InputActionSetHandle_t vector[32];
};

struct InputDigitalActionHandle_t {
  uint64_t m_InputDigitalActionHandle;
};
struct InputDigitalActionHandle_t__Boxed {
  struct InputDigitalActionHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct InputDigitalActionHandle_t fields;
};
struct InputDigitalActionHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct InputDigitalActionHandle_t__StaticFields {
};
struct InputDigitalActionHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputDigitalActionHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputDigitalActionHandle_t__VTable vtable;
};

struct InputDigitalActionData_t {
  uint8_t bState;
  uint8_t bActive;
};
struct InputDigitalActionData_t__Boxed {
  struct InputDigitalActionData_t__Class *klass;
  struct MonitorData *monitor;
  struct InputDigitalActionData_t fields;
};
struct InputDigitalActionData_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InputDigitalActionData_t__StaticFields {
};
struct InputDigitalActionData_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputDigitalActionData_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputDigitalActionData_t__VTable vtable;
};

enum EInputActionOrigin__Enum : int32_t {
  EInputActionOrigin__Enum_k_EInputActionOrigin_None = 0,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_A = 1,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_B = 2,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_X = 3,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Y = 4,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftBumper = 5,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightBumper = 6,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftGrip = 7,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightGrip = 8,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Start = 9,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Back = 10,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftPad_Touch = 11,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftPad_Swipe = 12,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftPad_Click = 13,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftPad_DPadNorth = 14,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftPad_DPadSouth = 15,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftPad_DPadWest = 16,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftPad_DPadEast = 17,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightPad_Touch = 18,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightPad_Swipe = 19,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightPad_Click = 20,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightPad_DPadNorth = 21,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightPad_DPadSouth = 22,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightPad_DPadWest = 23,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightPad_DPadEast = 24,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftTrigger_Pull = 25,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftTrigger_Click = 26,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightTrigger_Pull = 27,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_RightTrigger_Click = 28,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftStick_Move = 29,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftStick_Click = 30,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftStick_DPadNorth = 31,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftStick_DPadSouth = 32,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftStick_DPadWest = 33,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_LeftStick_DPadEast = 34,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Gyro_Move = 35,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Gyro_Pitch = 36,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Gyro_Yaw = 37,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Gyro_Roll = 38,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved0 = 39,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved1 = 40,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved2 = 41,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved3 = 42,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved4 = 43,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved5 = 44,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved6 = 45,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved7 = 46,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved8 = 47,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved9 = 48,
  EInputActionOrigin__Enum_k_EInputActionOrigin_SteamController_Reserved10 = 49,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_X = 50,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Circle = 51,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Triangle = 52,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Square = 53,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftBumper = 54,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightBumper = 55,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Options = 56,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Share = 57,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftPad_Touch = 58,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftPad_Swipe = 59,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftPad_Click = 60,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftPad_DPadNorth = 61,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftPad_DPadSouth = 62,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftPad_DPadWest = 63,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftPad_DPadEast = 64,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightPad_Touch = 65,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightPad_Swipe = 66,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightPad_Click = 67,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightPad_DPadNorth = 68,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightPad_DPadSouth = 69,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightPad_DPadWest = 70,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightPad_DPadEast = 71,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_CenterPad_Touch = 72,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_CenterPad_Swipe = 73,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_CenterPad_Click = 74,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_CenterPad_DPadNorth = 75,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_CenterPad_DPadSouth = 76,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_CenterPad_DPadWest = 77,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_CenterPad_DPadEast = 78,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftTrigger_Pull = 79,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftTrigger_Click = 80,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightTrigger_Pull = 81,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightTrigger_Click = 82,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftStick_Move = 83,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftStick_Click = 84,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftStick_DPadNorth = 85,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftStick_DPadSouth = 86,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftStick_DPadWest = 87,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_LeftStick_DPadEast = 88,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightStick_Move = 89,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightStick_Click = 90,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightStick_DPadNorth = 91,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightStick_DPadSouth = 92,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightStick_DPadWest = 93,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_RightStick_DPadEast = 94,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_DPad_North = 95,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_DPad_South = 96,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_DPad_West = 97,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_DPad_East = 98,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Gyro_Move = 99,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Gyro_Pitch = 100,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Gyro_Yaw = 101,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Gyro_Roll = 102,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_DPad_Move = 103,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved1 = 104,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved2 = 105,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved3 = 106,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved4 = 107,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved5 = 108,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved6 = 109,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved7 = 110,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved8 = 111,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved9 = 112,
  EInputActionOrigin__Enum_k_EInputActionOrigin_PS4_Reserved10 = 113,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_A = 114,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_B = 115,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_X = 116,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Y = 117,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftBumper = 118,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightBumper = 119,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Menu = 120,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_View = 121,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftTrigger_Pull = 122,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftTrigger_Click = 123,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightTrigger_Pull = 124,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightTrigger_Click = 125,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftStick_Move = 126,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftStick_Click = 127,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftStick_DPadNorth = 128,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftStick_DPadSouth = 129,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftStick_DPadWest = 130,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_LeftStick_DPadEast = 131,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightStick_Move = 132,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightStick_Click = 133,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightStick_DPadNorth = 134,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightStick_DPadSouth = 135,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightStick_DPadWest = 136,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_RightStick_DPadEast = 137,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_DPad_North = 138,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_DPad_South = 139,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_DPad_West = 140,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_DPad_East = 141,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_DPad_Move = 142,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved1 = 143,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved2 = 144,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved3 = 145,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved4 = 146,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved5 = 147,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved6 = 148,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved7 = 149,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved8 = 150,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved9 = 151,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBoxOne_Reserved10 = 152,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_A = 153,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_B = 154,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_X = 155,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Y = 156,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftBumper = 157,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightBumper = 158,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Start = 159,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Back = 160,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftTrigger_Pull = 161,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftTrigger_Click = 162,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightTrigger_Pull = 163,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightTrigger_Click = 164,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftStick_Move = 165,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftStick_Click = 166,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftStick_DPadNorth = 167,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftStick_DPadSouth = 168,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftStick_DPadWest = 169,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_LeftStick_DPadEast = 170,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightStick_Move = 171,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightStick_Click = 172,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightStick_DPadNorth = 173,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightStick_DPadSouth = 174,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightStick_DPadWest = 175,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_RightStick_DPadEast = 176,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_DPad_North = 177,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_DPad_South = 178,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_DPad_West = 179,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_DPad_East = 180,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_DPad_Move = 181,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved1 = 182,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved2 = 183,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved3 = 184,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved4 = 185,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved5 = 186,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved6 = 187,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved7 = 188,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved8 = 189,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved9 = 190,
  EInputActionOrigin__Enum_k_EInputActionOrigin_XBox360_Reserved10 = 191,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_A = 192,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_B = 193,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_X = 194,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Y = 195,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftBumper = 196,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightBumper = 197,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Plus = 198,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Minus = 199,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Capture = 200,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftTrigger_Pull = 201,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftTrigger_Click = 202,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightTrigger_Pull = 203,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightTrigger_Click = 204,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftStick_Move = 205,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftStick_Click = 206,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftStick_DPadNorth = 207,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftStick_DPadSouth = 208,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftStick_DPadWest = 209,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftStick_DPadEast = 210,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightStick_Move = 211,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightStick_Click = 212,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightStick_DPadNorth = 213,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightStick_DPadSouth = 214,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightStick_DPadWest = 215,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightStick_DPadEast = 216,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_DPad_North = 217,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_DPad_South = 218,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_DPad_West = 219,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_DPad_East = 220,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_ProGyro_Move = 221,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_ProGyro_Pitch = 222,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_ProGyro_Yaw = 223,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_ProGyro_Roll = 224,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_DPad_Move = 225,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved1 = 226,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved2 = 227,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved3 = 228,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved4 = 229,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved5 = 230,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved6 = 231,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved7 = 232,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved8 = 233,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved9 = 234,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved10 = 235,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightGyro_Move = 236,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightGyro_Pitch = 237,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightGyro_Yaw = 238,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightGyro_Roll = 239,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftGyro_Move = 240,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftGyro_Pitch = 241,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftGyro_Yaw = 242,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftGyro_Roll = 243,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftGrip_Lower = 244,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_LeftGrip_Upper = 245,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightGrip_Lower = 246,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_RightGrip_Upper = 247,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved11 = 248,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved12 = 249,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved13 = 250,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved14 = 251,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved15 = 252,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved16 = 253,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved17 = 254,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved18 = 255,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved19 = 256,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Switch_Reserved20 = 257,
  EInputActionOrigin__Enum_k_EInputActionOrigin_Count = 258,
  EInputActionOrigin__Enum_k_EInputActionOrigin_MaximumPossibleValue = 32767,
};
struct EInputActionOrigin__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EInputActionOrigin__Enum value;
};
struct EInputActionOrigin__Enum__Array {
  struct EInputActionOrigin__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum EInputActionOrigin__Enum vector[32];
};

struct InputAnalogActionHandle_t {
  uint64_t m_InputAnalogActionHandle;
};
struct InputAnalogActionHandle_t__Boxed {
  struct InputAnalogActionHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct InputAnalogActionHandle_t fields;
};
struct InputAnalogActionHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct InputAnalogActionHandle_t__StaticFields {
};
struct InputAnalogActionHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputAnalogActionHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputAnalogActionHandle_t__VTable vtable;
};

enum EInputSourceMode__Enum : int32_t {
  EInputSourceMode__Enum_k_EInputSourceMode_None = 0,
  EInputSourceMode__Enum_k_EInputSourceMode_Dpad = 1,
  EInputSourceMode__Enum_k_EInputSourceMode_Buttons = 2,
  EInputSourceMode__Enum_k_EInputSourceMode_FourButtons = 3,
  EInputSourceMode__Enum_k_EInputSourceMode_AbsoluteMouse = 4,
  EInputSourceMode__Enum_k_EInputSourceMode_RelativeMouse = 5,
  EInputSourceMode__Enum_k_EInputSourceMode_JoystickMove = 6,
  EInputSourceMode__Enum_k_EInputSourceMode_JoystickMouse = 7,
  EInputSourceMode__Enum_k_EInputSourceMode_JoystickCamera = 8,
  EInputSourceMode__Enum_k_EInputSourceMode_ScrollWheel = 9,
  EInputSourceMode__Enum_k_EInputSourceMode_Trigger = 10,
  EInputSourceMode__Enum_k_EInputSourceMode_TouchMenu = 11,
  EInputSourceMode__Enum_k_EInputSourceMode_MouseJoystick = 12,
  EInputSourceMode__Enum_k_EInputSourceMode_MouseRegion = 13,
  EInputSourceMode__Enum_k_EInputSourceMode_RadialMenu = 14,
  EInputSourceMode__Enum_k_EInputSourceMode_SingleButton = 15,
  EInputSourceMode__Enum_k_EInputSourceMode_Switches = 16,
};
struct EInputSourceMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EInputSourceMode__Enum value;
};
struct InputAnalogActionData_t {
  enum EInputSourceMode__Enum eMode;
  float x;
  float y;
  uint8_t bActive;
};
struct InputAnalogActionData_t__Boxed {
  struct InputAnalogActionData_t__Class *klass;
  struct MonitorData *monitor;
  struct InputAnalogActionData_t fields;
};
struct InputAnalogActionData_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InputAnalogActionData_t__StaticFields {
};
struct InputAnalogActionData_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputAnalogActionData_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputAnalogActionData_t__VTable vtable;
};

struct InputMotionData_t {
  float rotQuatX;
  float rotQuatY;
  float rotQuatZ;
  float rotQuatW;
  float posAccelX;
  float posAccelY;
  float posAccelZ;
  float rotVelX;
  float rotVelY;
  float rotVelZ;
};
struct InputMotionData_t__Boxed {
  struct InputMotionData_t__Class *klass;
  struct MonitorData *monitor;
  struct InputMotionData_t fields;
};
struct InputMotionData_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InputMotionData_t__StaticFields {
};
struct InputMotionData_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputMotionData_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputMotionData_t__VTable vtable;
};

enum ELobbyComparison__Enum : int32_t {
  ELobbyComparison__Enum_k_ELobbyComparisonEqualToOrLessThan = -2,
  ELobbyComparison__Enum_k_ELobbyComparisonLessThan = -1,
  ELobbyComparison__Enum_k_ELobbyComparisonEqual = 0,
  ELobbyComparison__Enum_k_ELobbyComparisonGreaterThan = 1,
  ELobbyComparison__Enum_k_ELobbyComparisonEqualToOrGreaterThan = 2,
  ELobbyComparison__Enum_k_ELobbyComparisonNotEqual = 3,
};
struct ELobbyComparison__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ELobbyComparison__Enum value;
};

enum ELobbyDistanceFilter__Enum : int32_t {
  ELobbyDistanceFilter__Enum_k_ELobbyDistanceFilterClose = 0,
  ELobbyDistanceFilter__Enum_k_ELobbyDistanceFilterDefault = 1,
  ELobbyDistanceFilter__Enum_k_ELobbyDistanceFilterFar = 2,
  ELobbyDistanceFilter__Enum_k_ELobbyDistanceFilterWorldwide = 3,
};
struct ELobbyDistanceFilter__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ELobbyDistanceFilter__Enum value;
};

enum ELobbyType__Enum : int32_t {
  ELobbyType__Enum_k_ELobbyTypePrivate = 0,
  ELobbyType__Enum_k_ELobbyTypeFriendsOnly = 1,
  ELobbyType__Enum_k_ELobbyTypePublic = 2,
  ELobbyType__Enum_k_ELobbyTypeInvisible = 3,
  ELobbyType__Enum_k_ELobbyTypePrivateUnique = 4,
};
struct ELobbyType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ELobbyType__Enum value;
};

struct HServerListRequest {
  void * m_HServerListRequest;
};
struct HServerListRequest__Boxed {
  struct HServerListRequest__Class *klass;
  struct MonitorData *monitor;
  struct HServerListRequest fields;
};
struct MatchMakingKeyValuePair_t {
  struct String * m_szKey;
  struct String * m_szValue;
};
struct MatchMakingKeyValuePair_t__Boxed {
  struct MatchMakingKeyValuePair_t__Class *klass;
  struct MonitorData *monitor;
  struct MatchMakingKeyValuePair_t fields;
};
struct MatchMakingKeyValuePair_t__Array {
  struct MatchMakingKeyValuePair_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MatchMakingKeyValuePair_t vector[32];
};
struct __declspec(align(8)) ISteamMatchmakingServerListResponse__Fields {
  struct ISteamMatchmakingServerListResponse_VTable * m_VTable;
  void * m_pVTable;
  struct GCHandle m_pGCHandle;
  struct ISteamMatchmakingServerListResponse_ServerResponded * m_ServerResponded;
  struct ISteamMatchmakingServerListResponse_ServerFailedToRespond * m_ServerFailedToRespond;
  struct ISteamMatchmakingServerListResponse_RefreshComplete * m_RefreshComplete;
};
struct ISteamMatchmakingServerListResponse {
  struct ISteamMatchmakingServerListResponse__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse__Fields fields;
};
struct __declspec(align(8)) ISteamMatchmakingServerListResponse_VTable__Fields {
  struct ISteamMatchmakingServerListResponse_InternalServerResponded * m_VTServerResponded;
  struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond * m_VTServerFailedToRespond;
  struct ISteamMatchmakingServerListResponse_InternalRefreshComplete * m_VTRefreshComplete;
};
struct ISteamMatchmakingServerListResponse_VTable {
  struct ISteamMatchmakingServerListResponse_VTable__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse_VTable__Fields fields;
};
struct ISteamMatchmakingServerListResponse_InternalServerResponded__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingServerListResponse_InternalServerResponded {
  struct ISteamMatchmakingServerListResponse_InternalServerResponded__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse_InternalServerResponded__Fields fields;
};
struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond {
  struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Fields fields;
};
struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingServerListResponse_InternalRefreshComplete {
  struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Fields fields;
};
enum EMatchMakingServerResponse__Enum : int32_t {
  EMatchMakingServerResponse__Enum_eServerResponded = 0,
  EMatchMakingServerResponse__Enum_eServerFailedToRespond = 1,
  EMatchMakingServerResponse__Enum_eNoServersListedOnMasterServer = 2,
};
struct EMatchMakingServerResponse__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EMatchMakingServerResponse__Enum value;
};
struct ISteamMatchmakingServerListResponse_ServerResponded__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingServerListResponse_ServerResponded {
  struct ISteamMatchmakingServerListResponse_ServerResponded__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse_ServerResponded__Fields fields;
};
struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingServerListResponse_ServerFailedToRespond {
  struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Fields fields;
};
struct ISteamMatchmakingServerListResponse_RefreshComplete__Fields {
  struct MulticastDelegate__Fields _;
};
struct ISteamMatchmakingServerListResponse_RefreshComplete {
  struct ISteamMatchmakingServerListResponse_RefreshComplete__Class *klass;
  struct MonitorData *monitor;
  struct ISteamMatchmakingServerListResponse_RefreshComplete__Fields fields;
};
struct HServerListRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct HServerListRequest__StaticFields {
  struct HServerListRequest Invalid;
};
struct HServerListRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HServerListRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HServerListRequest__VTable vtable;
};
struct MatchMakingKeyValuePair_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchMakingKeyValuePair_t__StaticFields {
};
struct MatchMakingKeyValuePair_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchMakingKeyValuePair_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchMakingKeyValuePair_t__VTable vtable;
};
struct ISteamMatchmakingServerListResponse_InternalServerResponded__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct ISteamMatchmakingServerListResponse_InternalServerResponded__StaticFields {
};
struct ISteamMatchmakingServerListResponse_InternalServerResponded__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse_InternalServerResponded__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse_InternalServerResponded__VTable vtable;
};
struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__StaticFields {
};
struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse_InternalServerFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__StaticFields {
};
struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse_InternalRefreshComplete__VTable vtable;
};
struct ISteamMatchmakingServerListResponse_VTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingServerListResponse_VTable__StaticFields {
};
struct ISteamMatchmakingServerListResponse_VTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse_VTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse_VTable__VTable vtable;
};
struct ISteamMatchmakingServerListResponse_ServerResponded__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct ISteamMatchmakingServerListResponse_ServerResponded__StaticFields {
};
struct ISteamMatchmakingServerListResponse_ServerResponded__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse_ServerResponded__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse_ServerResponded__VTable vtable;
};
struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__StaticFields {
};
struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse_ServerFailedToRespond__VTable vtable;
};
struct ISteamMatchmakingServerListResponse_RefreshComplete__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct ISteamMatchmakingServerListResponse_RefreshComplete__StaticFields {
};
struct ISteamMatchmakingServerListResponse_RefreshComplete__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse_RefreshComplete__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse_RefreshComplete__VTable vtable;
};
struct ISteamMatchmakingServerListResponse__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ISteamMatchmakingServerListResponse__StaticFields {
};
struct ISteamMatchmakingServerListResponse__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISteamMatchmakingServerListResponse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISteamMatchmakingServerListResponse__VTable vtable;
};

struct servernetadr_t {
  uint16_t m_usConnectionPort;
  uint16_t m_usQueryPort;
  uint32_t m_unIP;
};
struct servernetadr_t__Boxed {
  struct servernetadr_t__Class *klass;
  struct MonitorData *monitor;
  struct servernetadr_t fields;
};}