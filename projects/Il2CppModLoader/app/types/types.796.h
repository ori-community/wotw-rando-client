namespace app {
struct CounterAction_OperationType__Enum__Boxed {
    struct CounterAction_OperationType__Enum__Class *klass;
    MonitorData *monitor;
    CounterAction_OperationType__Enum value;
    
};

struct CounterAction__Fields {
    struct ActionMethod__Fields _;
    struct NumberCounter *Counter;
    CounterAction_OperationType__Enum Operation;
    
    int32_t Value;
};

struct CounterAction {
    struct CounterAction__Class *klass;
    MonitorData *monitor;
    struct CounterAction__Fields fields;
};

struct NumberCounter__Fields {
    struct SaveSerialize__Fields _;
    int32_t Value;
};

struct NumberCounter {
    struct NumberCounter__Class *klass;
    MonitorData *monitor;
    struct NumberCounter__Fields fields;
};

struct NumberCounter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct NumberCounter__StaticFields {
};

struct NumberCounter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NumberCounter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NumberCounter__VTable vtable;
};

struct CounterAction_OperationType__Enum__VTable {
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

struct CounterAction_OperationType__Enum__StaticFields {
};

struct CounterAction_OperationType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CounterAction_OperationType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CounterAction_OperationType__Enum__VTable vtable;
};

struct CounterAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct CounterAction__StaticFields {
};

struct CounterAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CounterAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CounterAction__VTable vtable;
};

struct LogicUtility {
    struct LogicUtility__Class *klass;
    MonitorData *monitor;
};

struct LogicUtility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LogicUtility__StaticFields {
};

struct LogicUtility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogicUtility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogicUtility__VTable vtable;
};

struct CounterCondition__Fields {
    struct Condition_1__Fields _;
    struct NumberCounter *Counter;
    LogicUtility_ComparisonType__Enum Comparison;
    
    float Value;
};

struct CounterCondition {
    struct CounterCondition__Class *klass;
    MonitorData *monitor;
    struct CounterCondition__Fields fields;
};

struct CounterCondition__VTable {
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

struct CounterCondition__StaticFields {
};

struct CounterCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CounterCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CounterCondition__VTable vtable;
};

struct ActivateAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject *Target;
    bool Activate;
    bool Save;
    bool peformedAction;
    bool appliedActivated;
};

struct ActivateAction {
    struct ActivateAction__Class *klass;
    MonitorData *monitor;
    struct ActivateAction__Fields fields;
};

struct ActivateAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
    VirtualInvokeData GetDynamicGraphicTarget;
};

struct ActivateAction__StaticFields {
};

struct ActivateAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivateAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivateAction__VTable vtable;
};

struct ActivateCharacterAction__Fields {
    struct ActionMethod__Fields _;
    bool Active;
};

struct ActivateCharacterAction {
    struct ActivateCharacterAction__Class *klass;
    MonitorData *monitor;
    struct ActivateCharacterAction__Fields fields;
};

struct ActivateCharacterAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ActivateCharacterAction__StaticFields {
};

struct ActivateCharacterAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivateCharacterAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivateCharacterAction__VTable vtable;
};

struct ActivateLaserAction__Fields {
    struct ActionMethod__Fields _;
    struct BlockableLaser *Laser;
    bool ShouldActivate;
    bool Save;
};

struct ActivateLaserAction {
    struct ActivateLaserAction__Class *klass;
    MonitorData *monitor;
    struct ActivateLaserAction__Fields fields;
};

struct ActivateLaserAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ActivateLaserAction__StaticFields {
};

struct ActivateLaserAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivateLaserAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivateLaserAction__VTable vtable;
};

struct ActivateMenuAction__Fields {
    struct ActionMethod__Fields _;
    struct CleverMenuItemSelectionManager *Target;
    bool Activate;
};

struct ActivateMenuAction {
    struct ActivateMenuAction__Class *klass;
    MonitorData *monitor;
    struct ActivateMenuAction__Fields fields;
};

struct ActivateMenuAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ActivateMenuAction__StaticFields {
};

struct ActivateMenuAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivateMenuAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivateMenuAction__VTable vtable;
};

struct ActivateOriAction__Fields {
    struct ActionMethod__Fields _;
    bool ShouldActivate;
};

struct ActivateOriAction {
    struct ActivateOriAction__Class *klass;
    MonitorData *monitor;
    struct ActivateOriAction__Fields fields;
};

struct ActivateOriAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ActivateOriAction__StaticFields {
};

struct ActivateOriAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivateOriAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivateOriAction__VTable vtable;
};

enum class AnimatorAction_FindAnimatorsMode__Enum : int32_t {
    GameObject = 0x00000000,
    GameObjectAndChildren = 0x00000001,
    SpecifyAnimators = 0x00000002,
};

struct AnimatorAction_FindAnimatorsMode__Enum__Boxed {
    struct AnimatorAction_FindAnimatorsMode__Enum__Class *klass;
    MonitorData *monitor;
    AnimatorAction_FindAnimatorsMode__Enum value;
    
};

enum class AnimatorAction_PlayMode__Enum : int32_t {
    Restart = 0x00000000,
    RestartReversed = 0x00000001,
    Reverse = 0x00000002,
    Stop = 0x00000003,
    Continue = 0x00000004,
    ContinueForward = 0x00000005,
    ContinueReversed = 0x00000006,
    StopAtStart = 0x00000007,
    StopAtEnd = 0x00000008,
};

struct AnimatorAction_PlayMode__Enum__Boxed {
    struct AnimatorAction_PlayMode__Enum__Class *klass;
    MonitorData *monitor;
    AnimatorAction_PlayMode__Enum value;
    
};

struct AnimatorAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject *Target;
    AnimatorAction_FindAnimatorsMode__Enum AnimatorsMode;
    
    AnimatorAction_PlayMode__Enum Command;
    
    struct LegacyAnimator__Array *Animators;
    struct DelayedAction *m_delayedAction;
};

struct AnimatorAction {
    struct AnimatorAction__Class *klass;
    MonitorData *monitor;
    struct AnimatorAction__Fields fields;
};

struct AnimatorAction_FindAnimatorsMode__Enum__VTable {
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

struct AnimatorAction_FindAnimatorsMode__Enum__StaticFields {
};

struct AnimatorAction_FindAnimatorsMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorAction_FindAnimatorsMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorAction_FindAnimatorsMode__Enum__VTable vtable;
};

struct AnimatorAction_PlayMode__Enum__VTable {
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

struct AnimatorAction_PlayMode__Enum__StaticFields {
};

struct AnimatorAction_PlayMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorAction_PlayMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorAction_PlayMode__Enum__VTable vtable;
};

struct AnimatorAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct AnimatorAction__StaticFields {
};

struct AnimatorAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorAction__VTable vtable;
};

struct AttachToRopeAction__Fields {
    struct ActionMethod__Fields _;
    struct AttachToRope *AttachToRope;
    struct Rope *Rope;
};

struct AttachToRopeAction {
    struct AttachToRopeAction__Class *klass;
    MonitorData *monitor;
    struct AttachToRopeAction__Fields fields;
};

struct AttachToRope__Fields {
    struct MonoBehaviour__Fields _;
    struct Rope *RopeToAttachTo;
    struct Vector3 AttachmentPointOffset;
    bool UseDebug;
    bool AllowRotation;
    float RotationSpring;
    float RotationDampening;
    bool IsManagedByPhysicsSystemManager;
    struct ConfigurableJoint *m_generatedConfigurableJoint;
    bool m_shouldBeAttachedAfterLoading;
};

struct AttachToRope {
    struct AttachToRope__Class *klass;
    MonitorData *monitor;
    struct AttachToRope__Fields fields;
};

struct AttachToRope__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AttachToRope__StaticFields {
};

struct AttachToRope__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachToRope__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachToRope__VTable vtable;
};

struct AttachToRopeAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct AttachToRopeAction__StaticFields {
};

struct AttachToRopeAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachToRopeAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachToRopeAction__VTable vtable;
};

struct BabySeinRunToTargetAction__Fields {
    struct PerformingAction__Fields _;
    struct Transform *TargetPosition;
    bool m_isPerforming;
};

struct BabySeinRunToTargetAction {
    struct BabySeinRunToTargetAction__Class *klass;
    MonitorData *monitor;
    struct BabySeinRunToTargetAction__Fields fields;
};

struct BabySeinRunToTargetAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
    VirtualInvokeData Stop;
    VirtualInvokeData get_IsPerforming;
    VirtualInvokeData get_IsBlocking;
};

struct BabySeinRunToTargetAction__StaticFields {
};

struct BabySeinRunToTargetAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BabySeinRunToTargetAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BabySeinRunToTargetAction__VTable vtable;
};

struct __declspec(align(8)) BabySeinRunToTargetAction_Perform_d_6__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct BabySeinRunToTargetAction *__4__this;
};

struct BabySeinRunToTargetAction_Perform_d_6 {
    struct BabySeinRunToTargetAction_Perform_d_6__Class *klass;
    MonitorData *monitor;
    struct BabySeinRunToTargetAction_Perform_d_6__Fields fields;
};

struct BabySeinRunToTargetAction_Perform_d_6__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct BabySeinRunToTargetAction_Perform_d_6__StaticFields {
};

struct BabySeinRunToTargetAction_Perform_d_6__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BabySeinRunToTargetAction_Perform_d_6__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BabySeinRunToTargetAction_Perform_d_6__VTable vtable;
};

enum class BaseAnimatorAction_FindAnimatorsMode__Enum : int32_t {
    GameObject = 0x00000000,
    GameObjectAndChildren = 0x00000001,
    SpecifyAnimators = 0x00000002,
};

struct BaseAnimatorAction_FindAnimatorsMode__Enum__Boxed {
    struct BaseAnimatorAction_FindAnimatorsMode__Enum__Class *klass;
    MonitorData *monitor;
    BaseAnimatorAction_FindAnimatorsMode__Enum value;
    
};

enum class BaseAnimatorAction_PlayMode__Enum : int32_t {
    Restart = 0x00000000,
    RestartReversed = 0x00000001,
    Reverse = 0x00000002,
    Stop = 0x00000003,
    Continue = 0x00000004,
    ContinueForward = 0x00000005,
    ContinueReversed = 0x00000006,
    StopAtStart = 0x00000007,
    StopAtEnd = 0x00000008,
    RealContinueForward = 0x00000009,
    RealContinueReversed = 0x0000000a,
    Pause = 0x0000000b,
};

struct BaseAnimatorAction_PlayMode__Enum__Boxed {
    struct BaseAnimatorAction_PlayMode__Enum__Class *klass;
    MonitorData *monitor;
    BaseAnimatorAction_PlayMode__Enum value;
    
};

struct BaseAnimatorAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject *Target;
    BaseAnimatorAction_FindAnimatorsMode__Enum AnimatorsMode;
    
    BaseAnimatorAction_PlayMode__Enum Command;
    
    struct BaseAnimator__Array *Animators;
};

struct BaseAnimatorAction {
    struct BaseAnimatorAction__Class *klass;
    MonitorData *monitor;
    struct BaseAnimatorAction__Fields fields;
};

struct BaseAnimatorAction_FindAnimatorsMode__Enum__VTable {
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

struct BaseAnimatorAction_FindAnimatorsMode__Enum__StaticFields {
};

struct BaseAnimatorAction_FindAnimatorsMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseAnimatorAction_FindAnimatorsMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseAnimatorAction_FindAnimatorsMode__Enum__VTable vtable;
};

struct BaseAnimatorAction_PlayMode__Enum__VTable {
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

struct BaseAnimatorAction_PlayMode__Enum__StaticFields {
};

struct BaseAnimatorAction_PlayMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseAnimatorAction_PlayMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseAnimatorAction_PlayMode__Enum__VTable vtable;
};

struct BaseAnimatorAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct BaseAnimatorAction__StaticFields {
};

struct BaseAnimatorAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseAnimatorAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseAnimatorAction__VTable vtable;
};

struct BindAbilityButtonAction__Fields {
    struct ActionMethod__Fields _;
    AbilityType__Enum AbilityType;
    
    Input_Button__Enum Button;
    
};

struct BindAbilityButtonAction {
    struct BindAbilityButtonAction__Class *klass;
    MonitorData *monitor;
    struct BindAbilityButtonAction__Fields fields;
};

struct BindAbilityButtonAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct BindAbilityButtonAction__StaticFields {
};

struct BindAbilityButtonAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BindAbilityButtonAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BindAbilityButtonAction__VTable vtable;
};

struct BreakPhysicsSystemAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject *partsContainer;
    struct PhysicalSystemManager *physicalManager;
    bool Save;
    struct LayerMask debrisLayer;
};

struct BreakPhysicsSystemAction {
    struct BreakPhysicsSystemAction__Class *klass;
    MonitorData *monitor;
    struct BreakPhysicsSystemAction__Fields fields;
};

struct BreakPhysicsSystemAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
    VirtualInvokeData GetDynamicGraphicTarget;
};

struct BreakPhysicsSystemAction__StaticFields {
};

struct BreakPhysicsSystemAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BreakPhysicsSystemAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BreakPhysicsSystemAction__VTable vtable;
};

struct CacheBaseAnimatorAction__Fields {
    struct ActionMethod__Fields _;
    struct BaseAnimator *Animator;
};

struct CacheBaseAnimatorAction {
    struct CacheBaseAnimatorAction__Class *klass;
    MonitorData *monitor;
    struct CacheBaseAnimatorAction__Fields fields;
};

struct CacheBaseAnimatorAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct CacheBaseAnimatorAction__StaticFields {
};

struct CacheBaseAnimatorAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CacheBaseAnimatorAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CacheBaseAnimatorAction__VTable vtable;
};

struct CameraShakeAction__Fields {
    struct ActionMethod__Fields _;
    struct CameraShake *ShakeCamera;
};

struct CameraShakeAction {
    struct CameraShakeAction__Class *klass;
    MonitorData *monitor;
    struct CameraShakeAction__Fields fields;
};

struct CameraShakeAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct CameraShakeAction__StaticFields {
};

struct CameraShakeAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraShakeAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraShakeAction__VTable vtable;
};

struct CancelLoadBackupSlotAction__Fields {
    struct ActionMethod__Fields _;
};

struct CancelLoadBackupSlotAction {
    struct CancelLoadBackupSlotAction__Class *klass;
    MonitorData *monitor;
    struct CancelLoadBackupSlotAction__Fields fields;
};

struct CancelLoadBackupSlotAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct CancelLoadBackupSlotAction__StaticFields {
};

struct CancelLoadBackupSlotAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CancelLoadBackupSlotAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CancelLoadBackupSlotAction__VTable vtable;
};

}
