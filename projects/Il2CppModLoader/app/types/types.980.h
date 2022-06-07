namespace app {
struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2_ {
    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___Class *klass;
    MonitorData *monitor;
    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___Fields fields;
};

struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___VTable {
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

struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___StaticFields {
};

struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2___VTable vtable;
};

struct NegativeScaleFixer_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NegativeScaleFixer_c__StaticFields {
    struct NegativeScaleFixer_c *__9;
    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector2_ *__9__4_0;
};

struct NegativeScaleFixer_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NegativeScaleFixer_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NegativeScaleFixer_c__VTable vtable;
};

struct OptionalInstantiationHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct OptionalInstantiationHandler_InstanceInfo__Array *m_instances;
    int32_t m_index;
};

struct OptionalInstantiationHandler {
    struct OptionalInstantiationHandler__Class *klass;
    MonitorData *monitor;
    struct OptionalInstantiationHandler__Fields fields;
};

struct OptionalInstantiationHandler_InstanceInfo {
    int32_t InstanceID;
    int32_t FrameNumber;
    struct Vector3 Position;
};

struct OptionalInstantiationHandler_InstanceInfo__Boxed {
    struct OptionalInstantiationHandler_InstanceInfo__Class *klass;
    MonitorData *monitor;
    struct OptionalInstantiationHandler_InstanceInfo fields;
};

struct OptionalInstantiationHandler_InstanceInfo__Array {
    struct OptionalInstantiationHandler_InstanceInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct OptionalInstantiationHandler_InstanceInfo vector[32];
};

struct OptionalInstantiationHandler_InstanceInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OptionalInstantiationHandler_InstanceInfo__StaticFields {
};

struct OptionalInstantiationHandler_InstanceInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OptionalInstantiationHandler_InstanceInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OptionalInstantiationHandler_InstanceInfo__VTable vtable;
};

struct OptionalInstantiationHandler_InstanceInfo__Array__VTable {
};

struct OptionalInstantiationHandler_InstanceInfo__Array__StaticFields {
};

struct OptionalInstantiationHandler_InstanceInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OptionalInstantiationHandler_InstanceInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OptionalInstantiationHandler_InstanceInfo__Array__VTable vtable;
};

struct OptionalInstantiationHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OptionalInstantiationHandler__StaticFields {
    struct OptionalInstantiationHandler *Instance;
};

struct OptionalInstantiationHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OptionalInstantiationHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OptionalInstantiationHandler__VTable vtable;
};

struct ApplyForceToPhysicsSystem_ExplosionSettings {
    struct Vector3 postion;
    float radius;
    struct Vector3 force;
    float radialForce;
    float randomForce;
    float torque;
    float randomTorque;
};

struct ApplyForceToPhysicsSystem_ExplosionSettings__Boxed {
    struct ApplyForceToPhysicsSystem_ExplosionSettings__Class *klass;
    MonitorData *monitor;
    struct ApplyForceToPhysicsSystem_ExplosionSettings fields;
};

struct ApplyForceToPhysicsSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct PhysicalSystemManager *PhysicalSystemManager;
    struct Rigidbody *ApplyToSpecificBody;
    struct EventTriggerAnimator *TimelineTrigger;
    struct FloatAnimator *TimelineForceCurve;
    struct ApplyForceToPhysicsSystem_ExplosionSettings Explosion;
    bool ReverseForceEveryFrameShaking;
    struct Vector3 setVelocity;
    bool m_isSuspended;
    float m_reversing;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct ApplyForceToPhysicsSystem {
    struct ApplyForceToPhysicsSystem__Class *klass;
    MonitorData *monitor;
    struct ApplyForceToPhysicsSystem__Fields fields;
};

struct ApplyForceToPhysicsSystem_ExplosionSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ApplyForceToPhysicsSystem_ExplosionSettings__StaticFields {
};

struct ApplyForceToPhysicsSystem_ExplosionSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ApplyForceToPhysicsSystem_ExplosionSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ApplyForceToPhysicsSystem_ExplosionSettings__VTable vtable;
};

struct ApplyForceToPhysicsSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnUpdatePhysics;
};

struct ApplyForceToPhysicsSystem__StaticFields {
};

struct ApplyForceToPhysicsSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ApplyForceToPhysicsSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ApplyForceToPhysicsSystem__VTable vtable;
};

struct AttachInteractionToPhysicsSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct AttachInteractionToPhysicsSystem_SoundInteractionSettings *sound;
    float movementThreshold;
    float rotationThreshold;
    float stretchThreshold;
    float sampleTime;
    float cooldownTime;
    struct Transform *attachToSystem;
    bool use2Points;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    struct Transform *m_connectedTransform1;
    struct Transform *m_connectedTransform2;
    struct IPhysicsAttachable *m_physicsSystem;
    struct Vector3 m_connectedAnchor1;
    struct Vector3 m_connectedAnchor2;
    float m_initiaStretchDistance;
    bool m_isSuspended;
    struct Vector3 m_oldPosition;
    float m_oldRotation;
    float m_oldLength;
    float m_time;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct AttachInteractionToPhysicsSystem {
    struct AttachInteractionToPhysicsSystem__Class *klass;
    MonitorData *monitor;
    struct AttachInteractionToPhysicsSystem__Fields fields;
};

struct __declspec(align(8)) AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields {
    struct Rect movementVolumeRemapping;
    struct Rect rotationVolumeRemapping;
    struct Rect stretchVolumeRemapping;
    struct SoundProvider *SoundProvider;
    struct Event_1 *WiseEvent;
    struct RTPC *ImpactRtpc;
    float volume;
};

struct AttachInteractionToPhysicsSystem_SoundInteractionSettings {
    struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class *klass;
    MonitorData *monitor;
    struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields fields;
};

struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__StaticFields {
};

struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__VTable vtable;
};

struct AttachInteractionToPhysicsSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PerformAttachment;
    VirtualInvokeData OnUpdatePhysics;
};

struct AttachInteractionToPhysicsSystem__StaticFields {
    bool LogDetailsAboutIssues;
};

struct AttachInteractionToPhysicsSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachInteractionToPhysicsSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachInteractionToPhysicsSystem__VTable vtable;
};

enum class AttachSoundToPhysicsSystem_SoundTypes__Enum : int32_t {
    Stretching = 0x00000000,
    Bending = 0x00000001,
};

struct AttachSoundToPhysicsSystem_SoundTypes__Enum__Boxed {
    struct AttachSoundToPhysicsSystem_SoundTypes__Enum__Class *klass;
    MonitorData *monitor;
    AttachSoundToPhysicsSystem_SoundTypes__Enum value;
    
};

struct AttachSoundToPhysicsSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundHost *SoundHost;
    struct RTPC *RTPC;
    AttachSoundToPhysicsSystem_SoundTypes__Enum SoundType;
    
    float SpeedScaling;
    struct Transform *attachToSystem;
    bool AttachToWorld;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    struct Transform *m_connectedTransform1;
    struct Transform *m_connectedTransform2;
    struct IPhysicsAttachable *m_physicsSystem;
    struct Vector3 m_connectedAnchor1;
    struct Vector3 m_connectedAnchor2;
    float m_initiaStretchDistance;
    bool m_isSuspended;
    struct Transform *m_transform;
    float m_oldDistance;
    float m_oldDeltaAngle;
    float m_oldAngle;
    float m_rtpcValue;
    float m_distanceSpeed;
    float m_rotationSpeed;
    bool m_initialized;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct AttachSoundToPhysicsSystem {
    struct AttachSoundToPhysicsSystem__Class *klass;
    MonitorData *monitor;
    struct AttachSoundToPhysicsSystem__Fields fields;
};

struct AttachSoundToPhysicsSystem_SoundTypes__Enum__VTable {
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

struct AttachSoundToPhysicsSystem_SoundTypes__Enum__StaticFields {
};

struct AttachSoundToPhysicsSystem_SoundTypes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSoundToPhysicsSystem_SoundTypes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSoundToPhysicsSystem_SoundTypes__Enum__VTable vtable;
};

struct AttachSoundToPhysicsSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnUpdatePhysics;
    VirtualInvokeData PerformAttachment;
};

struct AttachSoundToPhysicsSystem__StaticFields {
};

struct AttachSoundToPhysicsSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSoundToPhysicsSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSoundToPhysicsSystem__VTable vtable;
};

struct AttachSpriteToPhysicsSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *attachToSystem;
    bool use2Points;
    bool attachToWorld;
    float movementAmount;
    float rotationAmount;
    float stretchAmount;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    struct PhysicMaterial *overridePhysicsMaterial;
    bool Record;
    struct Transform *m_connectedTransform1;
    struct Transform *m_connectedTransform2;
    struct Vector3 m_connectedAnchor1;
    struct Vector3 m_connectedAnchor2;
    struct Vector3 m_initialPosition;
    struct Quaternion m_InitialRotation;
    struct Quaternion m_rotationDelta;
    struct Vector3 m_initialScale;
    float m_initiaStretchDistance;
    bool m_stretchHorizontally;
    struct Transform *transform;
    bool _Moon_ISuspendable_IsSuspended_k__BackingField;
    SuspendableMask__Enum _Moon_ISuspendable_Mask_k__BackingField;
    
    struct Matrix4x4 m_connectedTransform1Matrix;
    bool m_connectedTransform2Valid;
    struct Matrix4x4 m_connectedTransform2Matrix;
};

struct AttachSpriteToPhysicsSystem {
    struct AttachSpriteToPhysicsSystem__Class *klass;
    MonitorData *monitor;
    struct AttachSpriteToPhysicsSystem__Fields fields;
};

struct AttachSpriteToPhysicsSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Moon_ISuspendable_get_Mask;
    VirtualInvokeData Moon_ISuspendable_set_Mask;
    VirtualInvokeData Moon_ISuspendable_get_IsSuspended;
    VirtualInvokeData Moon_ISuspendable_set_IsSuspended;
    VirtualInvokeData Moon_IPhysicsUpdateHandler_OnUpdatePhysics;
    VirtualInvokeData Moon_IPhysicsUpdateHandlerValidable_get_IsValid;
    VirtualInvokeData IRecordableTransform_get_TrackTranformChangesForRecording;
    VirtualInvokeData IRecordableTransform_get_TrackingExclusions;
    VirtualInvokeData IRecordable_get_ParsingGroup;
};

struct AttachSpriteToPhysicsSystem__StaticFields {
};

struct AttachSpriteToPhysicsSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToPhysicsSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToPhysicsSystem__VTable vtable;
};

struct __declspec(align(8)) AttachSpriteToPhysicsSystem_JobSystem__Fields {
    struct AttachSpriteToPhysicsSystem__Array *entities;
    bool isInit;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour *systemWithMonoBehaviour;
};

struct AttachSpriteToPhysicsSystem_JobSystem {
    struct AttachSpriteToPhysicsSystem_JobSystem__Class *klass;
    MonitorData *monitor;
    struct AttachSpriteToPhysicsSystem_JobSystem__Fields fields;
};

struct AttachSpriteToPhysicsSystem__Array {
    struct AttachSpriteToPhysicsSystem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AttachSpriteToPhysicsSystem *vector[32];
};

struct __declspec(align(8)) AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Fields {
    struct AttachSpriteToPhysicsSystem__Array *entities;
    struct TransformAccessArray transforms;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour {
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class *klass;
    MonitorData *monitor;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Fields fields;
};

struct AttachSpriteToPhysicsSystem__Array__VTable {
};

struct AttachSpriteToPhysicsSystem__Array__StaticFields {
};

struct AttachSpriteToPhysicsSystem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToPhysicsSystem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToPhysicsSystem__Array__VTable vtable;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__StaticFields {
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__VTable vtable;
};

struct AttachSpriteToPhysicsSystem_JobSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Execute;
    VirtualInvokeData ExecuteLate;
    VirtualInvokeData Dispose;
};

struct AttachSpriteToPhysicsSystem_JobSystem__StaticFields {
    JobMode__Enum jobMode;
    
    bool forceComplete;
};

struct AttachSpriteToPhysicsSystem_JobSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToPhysicsSystem_JobSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToPhysicsSystem_JobSystem__VTable vtable;
};

struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_ {
    struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___Class *klass;
    MonitorData *monitor;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers {
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class *klass;
    MonitorData *monitor;
};

struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___StaticFields {
    struct CustomSampler *Pre;
    struct CustomSampler *Post;
    struct CustomSampler *Schedule;
    struct CustomSampler *Complete;
    struct CustomSampler *ScheduleBatchedJobs;
};

struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___VTable vtable;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__StaticFields {
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__VTable vtable;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c {
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Fields {
    struct MulticastDelegate__Fields _;
};

struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform_ {
    struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Class *klass;
    MonitorData *monitor;
    struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Fields fields;
};

struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___VTable {
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

struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___StaticFields {
};

struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___VTable vtable;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__StaticFields {
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c *__9;
    struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform_ *__9__2_0;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__VTable vtable;
};

struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour {
    struct AttachSpriteToPhysicsSystem__Array *items;
};

struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed {
    struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class *klass;
    MonitorData *monitor;
    struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour fields;
};

struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Execute;
};

struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__StaticFields {
};

struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__VTable vtable;
};

struct AttachSpriteToTransform__Fields {
    struct MonoBehaviour__Fields _;
    bool use2Points;
    bool attachToWorld;
    float movementAmount;
    float rotationAmount;
    float stretchAmount;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    struct Transform *ConnectedTransform1;
    struct Transform *ConnectedTransform2;
    struct Vector3 m_connectedAnchor1;
    struct Vector3 m_connectedAnchor2;
    struct Vector3 m_initialPosition;
    struct Quaternion m_InitialRotation;
    struct Quaternion m_rotationDelta;
    struct Vector3 m_initialScale;
    float m_initiaStretchDistance;
    bool m_stretchHorizontally;
    bool m_shouldBeAttachedAfterLoading;
    bool m_isSuspended;
    struct Transform *m_transform;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct AttachSpriteToTransform {
    struct AttachSpriteToTransform__Class *klass;
    MonitorData *monitor;
    struct AttachSpriteToTransform__Fields fields;
};

struct AttachSpriteToTransform__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
};

struct AttachSpriteToTransform__StaticFields {
};

struct AttachSpriteToTransform__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachSpriteToTransform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachSpriteToTransform__VTable vtable;
};

struct AttachToPhysicsSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *attachToSystem;
    struct Rigidbody *attachToSpecificBody;
    struct Vector3 anchor;
    struct AttachJointSettings *jointSettings;
    bool UseDebug;
    struct ConfigurableJoint *m_generatedConfigurableJoint;
    struct IPhysicsAttachable *m_physicsSystem;
};

struct AttachToPhysicsSystem {
    struct AttachToPhysicsSystem__Class *klass;
    MonitorData *monitor;
    struct AttachToPhysicsSystem__Fields fields;
};

struct AttachToPhysicsSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData PerformAttachment;
};

struct AttachToPhysicsSystem__StaticFields {
};

struct AttachToPhysicsSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AttachToPhysicsSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AttachToPhysicsSystem__VTable vtable;
};

struct LimitRigidbodyMovement__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *attachToSystem;
    struct Bounds bounds;
    float limitForce;
    float feedback;
    struct Vector3 anchor;
    struct Rigidbody *m_rigidBody;
    struct Vector3 m_connectedAnchor;
    struct IPhysicsAttachable *m_physicsSystem;
};

struct LimitRigidbodyMovement {
    struct LimitRigidbodyMovement__Class *klass;
    MonitorData *monitor;
    struct LimitRigidbodyMovement__Fields fields;
};

struct LimitRigidbodyMovement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnUpdatePhysics;
    VirtualInvokeData PerformAttachment;
};

struct LimitRigidbodyMovement__StaticFields {
};

struct LimitRigidbodyMovement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LimitRigidbodyMovement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LimitRigidbodyMovement__VTable vtable;
};

struct PhysicalInteractable__Fields {
    struct MonoBehaviour__Fields _;
    float Radius;
    float AddFallGravityMultiplier;
    struct MoonTimeline *DamageTimeline;
    float Cooldown;
    float ContactDamageReceived;
    struct FloatRange_1 ForceRandomness;
    struct Vector2 InteractionMinForceToReact;
    float InteractionForceMultipler;
    struct FloatRange_1 InteractionXVelocityRange;
    struct FloatRange_1 InteractionYVelocityRange;
    struct Vector2 DamageMinForceToReact;
    float DamageForceMultipler;
    struct FloatRange_1 DamageXVelocityRange;
    struct FloatRange_1 DamageYVelocityRange;
    struct Event_1 *ForceAppliedEvent;
    struct Event_1 *CollisionEvent;
    struct RTPC *ForceRtpc;
    struct SoundHost *SoundHost;
    struct DamageReceiver *m_damageReceiver;
    struct Rigidbody *m_rigidBody;
    struct Transform *m_transform;
    float m_timer;
    struct Damage *m_interactionDamage;
    bool m_canApplyExtraGravity;
    int32_t _Index_k__BackingField;
    bool _IsRegistered_k__BackingField;
    SuspendableMask__Enum _Mask_k__BackingField;
    
    bool _IsSuspended_k__BackingField;
};

struct PhysicalInteractable {
    struct PhysicalInteractable__Class *klass;
    MonitorData *monitor;
    struct PhysicalInteractable__Fields fields;
};

struct PhysicalInteractable__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetInteraction;
    VirtualInvokeData RemoveInteraction;
    VirtualInvokeData DoesOverlap;
    VirtualInvokeData GetPosition;
    VirtualInvokeData GetExplodePoint;
    VirtualInvokeData MaxRadius;
    VirtualInvokeData OnRegistered;
    VirtualInvokeData IsWater;
    VirtualInvokeData get_Index;
    VirtualInvokeData set_Index;
    VirtualInvokeData get_IsRegistered;
    VirtualInvokeData set_IsRegistered;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct PhysicalInteractable__StaticFields {
};

struct PhysicalInteractable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicalInteractable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicalInteractable__VTable vtable;
};

struct PhysicalSoftInteraction__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    float radius;
    float velocityInteractionForce;
    bool drawGizmo;
    struct Rigidbody *RigidBody;
    struct Transform *m_transform;
    int32_t _Index_k__BackingField;
    bool _IsRegistered_k__BackingField;
    bool _WantsToRegister_k__BackingField;
};

struct PhysicalSoftInteraction {
    struct PhysicalSoftInteraction__Class *klass;
    MonitorData *monitor;
    struct PhysicalSoftInteraction__Fields fields;
};

struct PhysicalSoftInteraction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData SetInteraction;
    VirtualInvokeData RemoveInteraction;
    VirtualInvokeData DoesOverlap;
    VirtualInvokeData GetPosition;
    VirtualInvokeData GetExplodePoint;
    VirtualInvokeData MaxRadius;
    VirtualInvokeData OnRegistered;
    VirtualInvokeData IsWater;
    VirtualInvokeData get_Index;
    VirtualInvokeData set_Index;
    VirtualInvokeData get_IsRegistered;
    VirtualInvokeData set_IsRegistered;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_IsStatic;
};

struct PhysicalSoftInteraction__StaticFields {
    bool DisableDeltaTimeBasedScaling;
};

struct PhysicalSoftInteraction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicalSoftInteraction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicalSoftInteraction__VTable vtable;
};

struct GoThroughPlatform___VTable {
};

struct GoThroughPlatform___StaticFields {
};

}
