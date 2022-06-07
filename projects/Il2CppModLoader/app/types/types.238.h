namespace app {
struct AnimatorStateInfo__StaticFields {
};

struct AnimatorStateInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorStateInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorStateInfo__VTable vtable;
};

struct AnimatorControllerPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimatorControllerPlayable__StaticFields {
    struct AnimatorControllerPlayable m_NullPlayable;
};

struct AnimatorControllerPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorControllerPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorControllerPlayable__VTable vtable;
};

struct StateMachineBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnStateEnter;
    VirtualInvokeData OnStateUpdate;
    VirtualInvokeData OnStateExit;
    VirtualInvokeData OnStateMove;
    VirtualInvokeData OnStateIK;
    VirtualInvokeData OnStateMachineEnter;
    VirtualInvokeData OnStateMachineExit;
    VirtualInvokeData OnStateEnter_1;
    VirtualInvokeData OnStateUpdate_1;
    VirtualInvokeData OnStateExit_1;
    VirtualInvokeData OnStateMove_1;
    VirtualInvokeData OnStateIK_1;
    VirtualInvokeData OnStateMachineEnter_1;
    VirtualInvokeData OnStateMachineExit_1;
};

struct StateMachineBehaviour__StaticFields {
};

struct StateMachineBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateMachineBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateMachineBehaviour__VTable vtable;
};

struct Motion__Fields {
    struct Object_1__Fields _;
    bool _isAnimatorMotion_k__BackingField;
};

struct Motion {
    struct Motion__Class *klass;
    MonitorData *monitor;
    struct Motion__Fields fields;
};

struct AnimationClip__Fields {
    struct Motion__Fields _;
};

struct AnimationClip {
    struct AnimationClip__Class *klass;
    MonitorData *monitor;
    struct AnimationClip__Fields fields;
};

struct Motion__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Motion__StaticFields {
};

struct Motion__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Motion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Motion__VTable vtable;
};

struct AnimationClip__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationClip__StaticFields {
};

struct AnimationClip__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationClip__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationClip__VTable vtable;
};

enum class AnimationEventSource__Enum : int32_t {
    NoSource = 0x00000000,
    Legacy = 0x00000001,
    Animator = 0x00000002,
};

struct AnimationEventSource__Enum__Boxed {
    struct AnimationEventSource__Enum__Class *klass;
    MonitorData *monitor;
    AnimationEventSource__Enum value;
    
};

struct AnimatorClipInfo {
    int32_t m_ClipInstanceID;
    float m_Weight;
};

struct AnimatorClipInfo__Boxed {
    struct AnimatorClipInfo__Class *klass;
    MonitorData *monitor;
    struct AnimatorClipInfo fields;
};

struct __declspec(align(8)) AnimationEvent__Fields {
    float m_Time;
    struct String *m_FunctionName;
    struct String *m_StringParameter;
    struct Object_1 *m_ObjectReferenceParameter;
    float m_FloatParameter;
    int32_t m_IntParameter;
    int32_t m_MessageOptions;
    AnimationEventSource__Enum m_Source;
    
    struct AnimationState *m_StateSender;
    struct AnimatorStateInfo m_AnimatorStateInfo;
    struct AnimatorClipInfo m_AnimatorClipInfo;
};

struct AnimationEvent {
    struct AnimationEvent__Class *klass;
    MonitorData *monitor;
    struct AnimationEvent__Fields fields;
};

struct AnimationState__Fields {
    struct TrackedReference__Fields _;
};

struct AnimationState {
    struct AnimationState__Class *klass;
    MonitorData *monitor;
    struct AnimationState__Fields fields;
};

struct AnimationEventSource__Enum__VTable {
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

struct AnimationEventSource__Enum__StaticFields {
};

struct AnimationEventSource__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationEventSource__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationEventSource__Enum__VTable vtable;
};

struct AnimationState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationState__StaticFields {
};

struct AnimationState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationState__VTable vtable;
};

struct AnimatorClipInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimatorClipInfo__StaticFields {
};

struct AnimatorClipInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorClipInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorClipInfo__VTable vtable;
};

struct AnimationEvent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationEvent__StaticFields {
};

struct AnimationEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationEvent__VTable vtable;
};

struct AnimationEvent__Array {
    struct AnimationEvent__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationEvent *vector[32];
};

struct AnimationEvent__Array__VTable {
};

struct AnimationEvent__Array__StaticFields {
};

struct AnimationEvent__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationEvent__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationEvent__Array__VTable vtable;
};

struct AnimationClipPlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationClipPlayable__Boxed {
    struct AnimationClipPlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationClipPlayable fields;
};

struct AnimationClipPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationClipPlayable__StaticFields {
};

struct AnimationClipPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationClipPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationClipPlayable__VTable vtable;
};

struct AnimationLayerMixerPlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationLayerMixerPlayable__Boxed {
    struct AnimationLayerMixerPlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationLayerMixerPlayable fields;
};

struct AnimationLayerMixerPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationLayerMixerPlayable__StaticFields {
    struct AnimationLayerMixerPlayable m_NullPlayable;
};

struct AnimationLayerMixerPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationLayerMixerPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationLayerMixerPlayable__VTable vtable;
};

struct AvatarMask__Fields {
    struct Object_1__Fields _;
};

struct AvatarMask {
    struct AvatarMask__Class *klass;
    MonitorData *monitor;
    struct AvatarMask__Fields fields;
};

struct AvatarMask__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AvatarMask__StaticFields {
};

struct AvatarMask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AvatarMask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AvatarMask__VTable vtable;
};

struct AnimationMixerPlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationMixerPlayable__Boxed {
    struct AnimationMixerPlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationMixerPlayable fields;
};

struct AnimationMixerPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationMixerPlayable__StaticFields {
    struct AnimationMixerPlayable m_NullPlayable;
};

struct AnimationMixerPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationMixerPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationMixerPlayable__VTable vtable;
};

struct AnimationMotionXToDeltaPlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationMotionXToDeltaPlayable__Boxed {
    struct AnimationMotionXToDeltaPlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationMotionXToDeltaPlayable fields;
};

struct AnimationMotionXToDeltaPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationMotionXToDeltaPlayable__StaticFields {
    struct AnimationMotionXToDeltaPlayable m_NullPlayable;
};

struct AnimationMotionXToDeltaPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationMotionXToDeltaPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationMotionXToDeltaPlayable__VTable vtable;
};

struct AnimationOffsetPlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationOffsetPlayable__Boxed {
    struct AnimationOffsetPlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationOffsetPlayable fields;
};

struct AnimationOffsetPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationOffsetPlayable__StaticFields {
    struct AnimationOffsetPlayable m_NullPlayable;
};

struct AnimationOffsetPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationOffsetPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationOffsetPlayable__VTable vtable;
};

struct AnimationPlayableOutput {
    struct PlayableOutputHandle m_Handle;
};

struct AnimationPlayableOutput__Boxed {
    struct AnimationPlayableOutput__Class *klass;
    MonitorData *monitor;
    struct AnimationPlayableOutput fields;
};

struct AnimationPlayableOutput__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
};

struct AnimationPlayableOutput__StaticFields {
};

struct AnimationPlayableOutput__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationPlayableOutput__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationPlayableOutput__VTable vtable;
};

struct AnimationPosePlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationPosePlayable__Boxed {
    struct AnimationPosePlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationPosePlayable fields;
};

struct AnimationPosePlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationPosePlayable__StaticFields {
    struct AnimationPosePlayable m_NullPlayable;
};

struct AnimationPosePlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationPosePlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationPosePlayable__VTable vtable;
};

struct AnimationRemoveScalePlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationRemoveScalePlayable__Boxed {
    struct AnimationRemoveScalePlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationRemoveScalePlayable fields;
};

struct AnimationRemoveScalePlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationRemoveScalePlayable__StaticFields {
    struct AnimationRemoveScalePlayable m_NullPlayable;
};

struct AnimationRemoveScalePlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationRemoveScalePlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationRemoveScalePlayable__VTable vtable;
};

struct AnimationScriptPlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationScriptPlayable__Boxed {
    struct AnimationScriptPlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationScriptPlayable fields;
};

struct AnimationScriptPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
    VirtualInvokeData SetJobData;
};

struct AnimationScriptPlayable__StaticFields {
    struct AnimationScriptPlayable m_NullPlayable;
};

struct AnimationScriptPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationScriptPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationScriptPlayable__VTable vtable;
};

struct AnimationStream {
    uint32_t m_AnimatorBindingsVersion;
    void *constant;
    void *input;
    void *output;
    void *workspace;
    void *inputStreamAccessor;
    void *animationHandleBinder;
};

struct AnimationStream__Boxed {
    struct AnimationStream__Class *klass;
    MonitorData *monitor;
    struct AnimationStream fields;
};

struct AnimationStream__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationStream__StaticFields {
};

struct AnimationStream__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationStream__VTable vtable;
};

struct AnimationHumanStream {
    void *stream;
};

struct AnimationHumanStream__Boxed {
    struct AnimationHumanStream__Class *klass;
    MonitorData *monitor;
    struct AnimationHumanStream fields;
};

struct AnimationHumanStream__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationHumanStream__StaticFields {
};

struct AnimationHumanStream__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationHumanStream__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationHumanStream__VTable vtable;
};

struct AnimationStream___VTable {
};

struct AnimationStream___StaticFields {
};

struct AnimationStream___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationStream___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationStream___VTable vtable;
};

struct AnimationHumanStream___VTable {
};

struct AnimationHumanStream___StaticFields {
};

struct AnimationHumanStream___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationHumanStream___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationHumanStream___VTable vtable;
};

struct TransformStreamHandle {
    uint32_t m_AnimatorBindingsVersion;
    int32_t handleIndex;
    int32_t skeletonIndex;
};

struct TransformStreamHandle__Boxed {
    struct TransformStreamHandle__Class *klass;
    MonitorData *monitor;
    struct TransformStreamHandle fields;
};

struct TransformStreamHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformStreamHandle__StaticFields {
};

struct TransformStreamHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformStreamHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformStreamHandle__VTable vtable;
};

struct TransformStreamHandle___VTable {
};

struct TransformStreamHandle___StaticFields {
};

struct TransformStreamHandle___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformStreamHandle___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformStreamHandle___VTable vtable;
};

struct AnimationVerletPlayable {
    struct PlayableHandle m_Handle;
};

struct AnimationVerletPlayable__Boxed {
    struct AnimationVerletPlayable__Class *klass;
    MonitorData *monitor;
    struct AnimationVerletPlayable fields;
};

struct AnimationVerletPlayable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetHandle;
    VirtualInvokeData Equals_1;
};

struct AnimationVerletPlayable__StaticFields {
};

struct AnimationVerletPlayable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationVerletPlayable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationVerletPlayable__VTable vtable;
};

struct AnimationVerletPlayableConfiguration {
    bool UseJobs;
    bool EnableDebugDraw;
};

struct AnimationVerletPlayableConfiguration__Boxed {
    struct AnimationVerletPlayableConfiguration__Class *klass;
    MonitorData *monitor;
    struct AnimationVerletPlayableConfiguration fields;
};

struct AnimationVerletPlayableConfiguration__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationVerletPlayableConfiguration__StaticFields {
};

struct AnimationVerletPlayableConfiguration__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationVerletPlayableConfiguration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationVerletPlayableConfiguration__VTable vtable;
};

struct AnimationVerletPlayableParametersAsset__Fields {
    struct Object_1__Fields _;
};

struct AnimationVerletPlayableParametersAsset {
    struct AnimationVerletPlayableParametersAsset__Class *klass;
    MonitorData *monitor;
    struct AnimationVerletPlayableParametersAsset__Fields fields;
};

struct AnimationVerletPlayableParametersAsset__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationVerletPlayableParametersAsset__StaticFields {
};

struct AnimationVerletPlayableParametersAsset__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationVerletPlayableParametersAsset__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationVerletPlayableParametersAsset__VTable vtable;
};

struct AnimationVerletPlayableConfiguration___VTable {
};

struct AnimationVerletPlayableConfiguration___StaticFields {
};

struct AnimationVerletPlayableConfiguration___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationVerletPlayableConfiguration___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationVerletPlayableConfiguration___VTable vtable;
};

enum class AnimatorUpdateMode__Enum : int32_t {
    Normal = 0x00000000,
    AnimatePhysics = 0x00000001,
    UnscaledTime = 0x00000002,
};

struct AnimatorUpdateMode__Enum__Boxed {
    struct AnimatorUpdateMode__Enum__Class *klass;
    MonitorData *monitor;
    AnimatorUpdateMode__Enum value;
    
};

struct AnimatorUpdateMode__Enum__VTable {
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

struct AnimatorUpdateMode__Enum__StaticFields {
};

struct AnimatorUpdateMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorUpdateMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorUpdateMode__Enum__VTable vtable;
};

enum class AvatarIKGoal__Enum : int32_t {
    LeftFoot = 0x00000000,
    RightFoot = 0x00000001,
    LeftHand = 0x00000002,
    RightHand = 0x00000003,
};

struct AvatarIKGoal__Enum__Boxed {
    struct AvatarIKGoal__Enum__Class *klass;
    MonitorData *monitor;
    AvatarIKGoal__Enum value;
    
};

struct AvatarIKGoal__Enum__VTable {
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

struct AvatarIKGoal__Enum__StaticFields {
};

struct AvatarIKGoal__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AvatarIKGoal__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AvatarIKGoal__Enum__VTable vtable;
};

enum class AvatarIKHint__Enum : int32_t {
    LeftKnee = 0x00000000,
    RightKnee = 0x00000001,
    LeftElbow = 0x00000002,
    RightElbow = 0x00000003,
};

struct AvatarIKHint__Enum__Boxed {
    struct AvatarIKHint__Enum__Class *klass;
    MonitorData *monitor;
    AvatarIKHint__Enum value;
    
};

struct AvatarIKHint__Enum__VTable {
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

}
