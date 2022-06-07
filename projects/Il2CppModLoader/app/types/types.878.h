namespace app {
struct TimelineSequenceLabel__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimelineSequenceLabel__StaticFields {
    struct List_1_TimelineSequenceLabel_ *All;
};

struct TimelineSequenceLabel__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineSequenceLabel__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineSequenceLabel__VTable vtable;
};

struct MaterialVFXManager__Fields {
    struct MonoBehaviour__Fields _;
    struct MaterialBasedSeinEffectsMap *EffectsMap;
    struct PhysicsEffectsMap *PhysicsMap;
};

struct MaterialVFXManager {
    struct MaterialVFXManager__Class *klass;
    MonitorData *monitor;
    struct MaterialVFXManager__Fields fields;
};

struct MaterialVFXManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MaterialVFXManager__StaticFields {
    struct MaterialVFXManager *Instance;
};

struct MaterialVFXManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaterialVFXManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaterialVFXManager__VTable vtable;
};

enum class ButtonPressedCondition_ButtonStates__Enum : int32_t {
    Pressed = 0x00000000,
    Released = 0x00000001,
    OnPressed = 0x00000002,
    OnReleased = 0x00000003,
};

struct ButtonPressedCondition_ButtonStates__Enum__Boxed {
    struct ButtonPressedCondition_ButtonStates__Enum__Class *klass;
    MonitorData *monitor;
    ButtonPressedCondition_ButtonStates__Enum value;
    
};

struct ButtonPressedCondition__Fields {
    struct Condition_1__Fields _;
    Input_Button__Enum Button;
    
    ButtonPressedCondition_ButtonStates__Enum State;
    
    bool IgnoreInputLock;
    bool IgnoreWhenMenusAreOpened;
};

struct ButtonPressedCondition {
    struct ButtonPressedCondition__Class *klass;
    MonitorData *monitor;
    struct ButtonPressedCondition__Fields fields;
};

struct ButtonPressedCondition_ButtonStates__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ButtonPressedCondition_ButtonStates__Enum__StaticFields {
};

struct ButtonPressedCondition_ButtonStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ButtonPressedCondition_ButtonStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ButtonPressedCondition_ButtonStates__Enum__VTable vtable;
};

struct ButtonPressedCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct ButtonPressedCondition__StaticFields {
};

struct ButtonPressedCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ButtonPressedCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ButtonPressedCondition__VTable vtable;
};

enum class CommandPressedCondition_ButtonStates__Enum : int32_t {
    Pressed = 0x00000000,
    Released = 0x00000001,
    OnPressed = 0x00000002,
    OnReleased = 0x00000003,
};

struct CommandPressedCondition_ButtonStates__Enum__Boxed {
    struct CommandPressedCondition_ButtonStates__Enum__Class *klass;
    MonitorData *monitor;
    CommandPressedCondition_ButtonStates__Enum value;
    
};

struct CommandPressedCondition__Fields {
    struct Condition_1__Fields _;
    Input_Command__Enum Command;
    
    CommandPressedCondition_ButtonStates__Enum State;
    
    bool IgnoreInputLock;
};

struct CommandPressedCondition {
    struct CommandPressedCondition__Class *klass;
    MonitorData *monitor;
    struct CommandPressedCondition__Fields fields;
};

struct CommandPressedCondition_ButtonStates__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct CommandPressedCondition_ButtonStates__Enum__StaticFields {
};

struct CommandPressedCondition_ButtonStates__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CommandPressedCondition_ButtonStates__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CommandPressedCondition_ButtonStates__Enum__VTable vtable;
};

struct CommandPressedCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct CommandPressedCondition__StaticFields {
};

struct CommandPressedCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CommandPressedCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CommandPressedCondition__VTable vtable;
};

struct MessageBoxMessageScreen__Fields {
    struct Suspendable__Fields _;
    struct AnimationCurve *ScaleIn;
    struct AnimationCurve *OpacityIn;
    struct AnimationCurve *ScaleOut;
    struct AnimationCurve *OpacityOut;
    float TransitionInDuration;
    float TransitionOutDuration;
    float WaitDuration;
    float m_time;
    float m_timeSpeed;
    float m_delayTime;
    bool m_fadingOut;
    struct Vector3 m_originalScale;
    struct Renderer *m_renderer;
    struct GUITexture *m_guiTexture;
    bool _IsSuspended_k__BackingField;
};

struct MessageBoxMessageScreen {
    struct MessageBoxMessageScreen__Class *klass;
    MonitorData *monitor;
    struct MessageBoxMessageScreen__Fields fields;
};

struct MessageBoxMessageScreen__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
};

struct MessageBoxMessageScreen__StaticFields {
};

struct MessageBoxMessageScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MessageBoxMessageScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MessageBoxMessageScreen__VTable vtable;
};

struct PlayerDistanceCondition__Fields {
    struct Condition_1__Fields _;
    float Distance;
};

struct PlayerDistanceCondition {
    struct PlayerDistanceCondition__Class *klass;
    MonitorData *monitor;
    struct PlayerDistanceCondition__Fields fields;
};

struct PlayerDistanceCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct PlayerDistanceCondition__StaticFields {
};

struct PlayerDistanceCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerDistanceCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerDistanceCondition__VTable vtable;
};

enum class Button__Enum : int32_t {
    GamepadButtonA = 0x00000000,
    GamepadButtonB = 0x00000001,
    GamepadButtonX = 0x00000002,
    GamepadButtonY = 0x00000003,
    GamepadButtonLeftShoulder = 0x00000004,
    GamepadButtonRightShoulder = 0x00000005,
    GamepadButtonView = 0x00000006,
    GamepadButtonMenu = 0x00000007,
    GamepadButtonLeftThumbstick = 0x00000008,
    GamepadButtonRightThumbstick = 0x00000009,
    GamepadButtonDPadUp = 0x0000000a,
    GamepadButtonDPadDown = 0x0000000b,
    GamepadButtonDPadLeft = 0x0000000c,
    GamepadButtonDPadRight = 0x0000000d,
    LeftTrigger = 0x0000000e,
    RightTrigger = 0x0000000f,
};

struct Button__Enum__Boxed {
    struct Button__Enum__Class *klass;
    MonitorData *monitor;
    Button__Enum value;
    
};

struct Button__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct Button__Enum__StaticFields {
};

struct Button__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Button__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Button__Enum__VTable vtable;
};

enum class XboxOneController_Button__Enum : int32_t {
    GamepadButtonA = 0x0000014a,
    GamepadButtonB = 0x0000014b,
    GamepadButtonX = 0x0000014c,
    GamepadButtonY = 0x0000014d,
    GamepadButtonLeftShoulder = 0x0000014e,
    GamepadButtonRightShoulder = 0x0000014f,
    GamepadButtonView = 0x00000150,
    GamepadButtonMenu = 0x00000151,
    GamepadButtonLeftThumbstick = 0x00000152,
    GamepadButtonRightThumbstick = 0x00000153,
    GamepadButtonDPadUp = 0x00000156,
    GamepadButtonDPadDown = 0x00000157,
    GamepadButtonDPadLeft = 0x00000158,
    GamepadButtonDPadRight = 0x00000159,
    Gamepad1ButtonA = 0x0000015e,
    Gamepad1ButtonB = 0x0000015f,
    Gamepad1ButtonX = 0x00000160,
    Gamepad1ButtonY = 0x00000161,
    Gamepad1ButtonLeftShoulder = 0x00000162,
    Gamepad1ButtonRightShoulder = 0x00000163,
    Gamepad1ButtonView = 0x00000164,
    Gamepad1ButtonMenu = 0x00000165,
    Gamepad1ButtonLeftThumbstick = 0x00000166,
    Gamepad1ButtonRightThumbstick = 0x00000167,
    Gamepad1ButtonDPadUp = 0x0000016a,
    Gamepad1ButtonDPadDown = 0x0000016b,
    Gamepad1ButtonDPadLeft = 0x0000016c,
    Gamepad1ButtonDPadRight = 0x0000016d,
    Gamepad2ButtonA = 0x00000172,
    Gamepad2ButtonB = 0x00000173,
    Gamepad2ButtonX = 0x00000174,
    Gamepad2ButtonY = 0x00000175,
    Gamepad2ButtonLeftShoulder = 0x00000176,
    Gamepad2ButtonRightShoulder = 0x00000177,
    Gamepad2ButtonView = 0x00000178,
    Gamepad2ButtonMenu = 0x00000179,
    Gamepad2ButtonLeftThumbstick = 0x0000017a,
    Gamepad2ButtonRightThumbstick = 0x0000017b,
    Gamepad2ButtonDPadUp = 0x0000017e,
    Gamepad2ButtonDPadDown = 0x0000017f,
    Gamepad2ButtonDPadLeft = 0x00000180,
    Gamepad2ButtonDPadRight = 0x00000181,
    Gamepad3ButtonA = 0x00000186,
    Gamepad3ButtonB = 0x00000187,
    Gamepad3ButtonX = 0x00000188,
    Gamepad3ButtonY = 0x00000189,
    Gamepad3ButtonLeftShoulder = 0x0000018a,
    Gamepad3ButtonRightShoulder = 0x0000018b,
    Gamepad3ButtonView = 0x0000018c,
    Gamepad3ButtonMenu = 0x0000018d,
    Gamepad3ButtonLeftThumbstick = 0x0000018e,
    Gamepad3ButtonRightThumbstick = 0x0000018f,
    Gamepad3ButtonDPadUp = 0x00000192,
    Gamepad3ButtonDPadDown = 0x00000193,
    Gamepad3ButtonDPadLeft = 0x00000194,
    Gamepad3ButtonDPadRight = 0x00000195,
    Gamepad4ButtonA = 0x0000019a,
    Gamepad4ButtonB = 0x0000019b,
    Gamepad4ButtonX = 0x0000019c,
    Gamepad4ButtonY = 0x0000019d,
    Gamepad4ButtonLeftShoulder = 0x0000019e,
    Gamepad4ButtonRightShoulder = 0x0000019f,
    Gamepad4ButtonView = 0x000001a0,
    Gamepad4ButtonMenu = 0x000001a1,
    Gamepad4ButtonLeftThumbstick = 0x000001a2,
    Gamepad4ButtonRightThumbstick = 0x000001a3,
    Gamepad4ButtonDPadUp = 0x000001a6,
    Gamepad4ButtonDPadDown = 0x000001a7,
    Gamepad4ButtonDPadLeft = 0x000001a8,
    Gamepad4ButtonDPadRight = 0x000001a9,
    Gamepad5ButtonA = 0x000001ae,
    Gamepad5ButtonB = 0x000001af,
    Gamepad5ButtonX = 0x000001b0,
    Gamepad5ButtonY = 0x000001b1,
    Gamepad5ButtonLeftShoulder = 0x000001b2,
    Gamepad5ButtonRightShoulder = 0x000001b3,
    Gamepad5ButtonView = 0x000001b4,
    Gamepad5ButtonMenu = 0x000001b5,
    Gamepad5ButtonLeftThumbstick = 0x000001b6,
    Gamepad5ButtonRightThumbstick = 0x000001b7,
    Gamepad5ButtonDPadUp = 0x000001ba,
    Gamepad5ButtonDPadDown = 0x000001bb,
    Gamepad5ButtonDPadLeft = 0x000001bc,
    Gamepad5ButtonDPadRight = 0x000001bd,
    Gamepad6ButtonA = 0x000001c2,
    Gamepad6ButtonB = 0x000001c3,
    Gamepad6ButtonX = 0x000001c4,
    Gamepad6ButtonY = 0x000001c5,
    Gamepad6ButtonLeftShoulder = 0x000001c6,
    Gamepad6ButtonRightShoulder = 0x000001c7,
    Gamepad6ButtonView = 0x000001c8,
    Gamepad6ButtonMenu = 0x000001c9,
    Gamepad6ButtonLeftThumbstick = 0x000001ca,
    Gamepad6ButtonRightThumbstick = 0x000001cb,
    Gamepad6ButtonDPadUp = 0x000001ce,
    Gamepad6ButtonDPadDown = 0x000001cf,
    Gamepad6ButtonDPadLeft = 0x000001d0,
    Gamepad6ButtonDPadRight = 0x000001d1,
    Gamepad7ButtonA = 0x000001d6,
    Gamepad7ButtonB = 0x000001d7,
    Gamepad7ButtonX = 0x000001d8,
    Gamepad7ButtonY = 0x000001d9,
    Gamepad7ButtonLeftShoulder = 0x000001da,
    Gamepad7ButtonRightShoulder = 0x000001db,
    Gamepad7ButtonView = 0x000001dc,
    Gamepad7ButtonMenu = 0x000001dd,
    Gamepad7ButtonLeftThumbstick = 0x000001de,
    Gamepad7ButtonRightThumbstick = 0x000001df,
    Gamepad7ButtonDPadUp = 0x000001e2,
    Gamepad7ButtonDPadDown = 0x000001e3,
    Gamepad7ButtonDPadLeft = 0x000001e4,
    Gamepad7ButtonDPadRight = 0x000001e5,
    Gamepad8ButtonA = 0x000001ea,
    Gamepad8ButtonB = 0x000001eb,
    Gamepad8ButtonX = 0x000001ec,
    Gamepad8ButtonY = 0x000001ed,
    Gamepad8ButtonLeftShoulder = 0x000001ee,
    Gamepad8ButtonRightShoulder = 0x000001ef,
    Gamepad8ButtonView = 0x000001f0,
    Gamepad8ButtonMenu = 0x000001f1,
    Gamepad8ButtonLeftThumbstick = 0x000001f2,
    Gamepad8ButtonRightThumbstick = 0x000001f3,
    Gamepad8ButtonDPadUp = 0x000001f6,
    Gamepad8ButtonDPadDown = 0x000001f7,
    Gamepad8ButtonDPadLeft = 0x000001f8,
    Gamepad8ButtonDPadRight = 0x000001f9,
};

struct XboxOneController_Button__Enum__Boxed {
    struct XboxOneController_Button__Enum__Class *klass;
    MonitorData *monitor;
    XboxOneController_Button__Enum value;
    
};

struct XboxOneController_Button__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct XboxOneController_Button__Enum__StaticFields {
};

struct XboxOneController_Button__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XboxOneController_Button__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XboxOneController_Button__Enum__VTable vtable;
};

enum class XboxOneController_Axis__Enum : int32_t {
    LeftStickX = 0x00000000,
    LeftStickY = 0x00000001,
    RightStickX = 0x00000002,
    RightStickY = 0x00000003,
    Trigger = 0x00000004,
    LeftTrigger = 0x00000005,
    RightTrigger = 0x00000006,
    DpadX = 0x00000007,
    DpadY = 0x00000008,
    Gamepad1LeftStickX = 0x00000009,
    Gamepad1LeftStickY = 0x0000000a,
    Gamepad1RightStickX = 0x0000000b,
    Gamepad1RightStickY = 0x0000000c,
    Gamepad1Trigger = 0x0000000d,
    Gamepad1LeftTrigger = 0x0000000e,
    Gamepad1RightTrigger = 0x0000000f,
    Gamepad1DpadX = 0x00000010,
    Gamepad1DpadY = 0x00000011,
    Gamepad2LeftStickX = 0x00000012,
    Gamepad2LeftStickY = 0x00000013,
    Gamepad2RightStickX = 0x00000014,
    Gamepad2RightStickY = 0x00000015,
    Gamepad2Trigger = 0x00000016,
    Gamepad2LeftTrigger = 0x00000017,
    Gamepad2RightTrigger = 0x00000018,
    Gamepad2DpadX = 0x00000019,
    Gamepad2DpadY = 0x0000001a,
    Gamepad3LeftStickX = 0x0000001b,
    Gamepad3LeftStickY = 0x0000001c,
    Gamepad3RightStickX = 0x0000001d,
    Gamepad3RightStickY = 0x0000001e,
    Gamepad3Trigger = 0x0000001f,
    Gamepad3LeftTrigger = 0x00000020,
    Gamepad3RightTrigger = 0x00000021,
    Gamepad3DpadX = 0x00000022,
    Gamepad3DpadY = 0x00000023,
    Gamepad4LeftStickX = 0x00000024,
    Gamepad4LeftStickY = 0x00000025,
    Gamepad4RightStickX = 0x00000026,
    Gamepad4RightStickY = 0x00000027,
    Gamepad4Trigger = 0x00000028,
    Gamepad4LeftTrigger = 0x00000029,
    Gamepad4RightTrigger = 0x0000002a,
    Gamepad4DpadX = 0x0000002b,
    Gamepad4DpadY = 0x0000002c,
    Gamepad5LeftStickX = 0x0000002d,
    Gamepad5LeftStickY = 0x0000002e,
    Gamepad5RightStickX = 0x0000002f,
    Gamepad5RightStickY = 0x00000030,
    Gamepad5Trigger = 0x00000031,
    Gamepad5LeftTrigger = 0x00000032,
    Gamepad5RightTrigger = 0x00000033,
    Gamepad5DpadX = 0x00000034,
    Gamepad5DpadY = 0x00000035,
    Gamepad6LeftStickX = 0x00000036,
    Gamepad6LeftStickY = 0x00000037,
    Gamepad6RightStickX = 0x00000038,
    Gamepad6RightStickY = 0x00000039,
    Gamepad6Trigger = 0x0000003a,
    Gamepad6LeftTrigger = 0x0000003b,
    Gamepad6RightTrigger = 0x0000003c,
    Gamepad6DpadX = 0x0000003d,
    Gamepad6DpadY = 0x0000003e,
    Gamepad7LeftStickX = 0x0000003f,
    Gamepad7LeftStickY = 0x00000040,
    Gamepad7RightStickX = 0x00000041,
    Gamepad7RightStickY = 0x00000042,
    Gamepad7Trigger = 0x00000043,
    Gamepad7LeftTrigger = 0x00000044,
    Gamepad7RightTrigger = 0x00000045,
    Gamepad7DpadX = 0x00000046,
    Gamepad7DpadY = 0x00000047,
    Gamepad8LeftStickX = 0x00000048,
    Gamepad8LeftStickY = 0x00000049,
    Gamepad8RightStickX = 0x0000004a,
    Gamepad8RightStickY = 0x0000004b,
    Gamepad8Trigger = 0x0000004c,
    Gamepad8LeftTrigger = 0x0000004d,
    Gamepad8RightTrigger = 0x0000004e,
    Gamepad8DpadX = 0x0000004f,
    Gamepad8DpadY = 0x00000050,
};

struct XboxOneController_Axis__Enum__Boxed {
    struct XboxOneController_Axis__Enum__Class *klass;
    MonitorData *monitor;
    XboxOneController_Axis__Enum value;
    
};

struct XboxOneController_Axis__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct XboxOneController_Axis__Enum__StaticFields {
};

struct XboxOneController_Axis__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XboxOneController_Axis__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XboxOneController_Axis__Enum__VTable vtable;
};

enum class Axis__Enum_1 : int32_t {
    LeftStickX = 0x00000000,
    LeftStickY = 0x00000001,
    RightStickX = 0x00000002,
    RightStickY = 0x00000003,
    LeftTrigger = 0x00000004,
    RightTrigger = 0x00000005,
    DpadX = 0x00000006,
    DpadY = 0x00000007,
};

struct Axis__Enum_1__Boxed {
    struct Axis__Enum_1__Class *klass;
    MonitorData *monitor;
    Axis__Enum_1 value;
    
};

struct Axis__Enum_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct Axis__Enum_1__StaticFields {
};

struct Axis__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Axis__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Axis__Enum_1__VTable vtable;
};

struct AxisInput__Fields {
    struct CachedAxisInput__Fields _;
};

struct AxisInput {
    struct AxisInput__Class *klass;
    MonitorData *monitor;
    struct AxisInput__Fields fields;
};

struct AxisInput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DeclareSources;
    VirtualInvokeData Refresh;
    VirtualInvokeData GetValue;
    VirtualInvokeData DeclareSources_1;
    VirtualInvokeData AxisValue;
};

struct AxisInput__StaticFields {
};

struct AxisInput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AxisInput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AxisInput__VTable vtable;
};

struct ControllerButtonInput__Fields {
    struct CachedButtonInput__Fields _;
    XboxControllerInput_Button__Enum Button;
    
};

struct ControllerButtonInput {
    struct ControllerButtonInput__Class *klass;
    MonitorData *monitor;
    struct ControllerButtonInput__Fields fields;
};

struct ControllerButtonInput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DeclareSources;
    VirtualInvokeData Refresh;
    VirtualInvokeData GetValue;
    VirtualInvokeData DeclareSources_1;
    VirtualInvokeData GetButton;
};

struct ControllerButtonInput__StaticFields {
};

struct ControllerButtonInput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ControllerButtonInput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ControllerButtonInput__VTable vtable;
};

enum class AxisButtonInput_AxisMode__Enum : int32_t {
    LessThan = 0x00000000,
    GreaterThan = 0x00000001,
};

struct AxisButtonInput_AxisMode__Enum__Boxed {
    struct AxisButtonInput_AxisMode__Enum__Class *klass;
    MonitorData *monitor;
    AxisButtonInput_AxisMode__Enum value;
    
};

struct AxisButtonInput__Fields {
    struct CachedButtonInput__Fields _;
    struct IAxisInput *m_axis;
    AxisButtonInput_AxisMode__Enum m_axisMode;
    
    float m_comparisonValue;
};

struct AxisButtonInput {
    struct AxisButtonInput__Class *klass;
    MonitorData *monitor;
    struct AxisButtonInput__Fields fields;
};

struct AxisButtonInput_AxisMode__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct AxisButtonInput_AxisMode__Enum__StaticFields {
};

struct AxisButtonInput_AxisMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AxisButtonInput_AxisMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AxisButtonInput_AxisMode__Enum__VTable vtable;
};

struct AxisButtonInput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DeclareSources;
    VirtualInvokeData Refresh;
    VirtualInvokeData GetValue;
    VirtualInvokeData DeclareSources_1;
    VirtualInvokeData GetButton;
};

struct AxisButtonInput__StaticFields {
};

struct AxisButtonInput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AxisButtonInput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AxisButtonInput__VTable vtable;
};

struct ButtonInput__Fields {
    struct CachedButtonInput__Fields _;
};

struct ButtonInput {
    struct ButtonInput__Class *klass;
    MonitorData *monitor;
    struct ButtonInput__Fields fields;
};

struct ButtonInput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DeclareSources;
    VirtualInvokeData Refresh;
    VirtualInvokeData GetValue;
    VirtualInvokeData DeclareSources_1;
    VirtualInvokeData GetButton;
};

struct ButtonInput__StaticFields {
};

struct ButtonInput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ButtonInput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ButtonInput__VTable vtable;
};

struct CombinedMessageProvider__Fields {
    struct MessageProvider__Fields _;
    struct MessageProvider *FirstMessageProvider;
    struct String *CombiningString;
    struct MessageProvider *SecondMessageProvider;
};

struct CombinedMessageProvider {
    struct CombinedMessageProvider__Class *klass;
    MonitorData *monitor;
    struct CombinedMessageProvider__Fields fields;
};

struct CombinedMessageProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetAllMessages;
    VirtualInvokeData GetMessages;
};

struct CombinedMessageProvider__StaticFields {
};

struct CombinedMessageProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CombinedMessageProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CombinedMessageProvider__VTable vtable;
};

struct __declspec(align(8)) CombinedMessageProvider_GetMessages_d_3__Fields {
    int32_t __1__state;
    struct MessageDescriptor __2__current;
    int32_t __l__initialThreadId;
    struct CombinedMessageProvider *__4__this;
};

struct CombinedMessageProvider_GetMessages_d_3 {
    struct CombinedMessageProvider_GetMessages_d_3__Class *klass;
    MonitorData *monitor;
    struct CombinedMessageProvider_GetMessages_d_3__Fields fields;
};

struct CombinedMessageProvider_GetMessages_d_3__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_MessageDescriptor__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_MessageDescriptor__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct CombinedMessageProvider_GetMessages_d_3__StaticFields {
};

}
