namespace app {
struct PositionAnimatorEntity_PositionMovementType__Enum__VTable {
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

struct PositionAnimatorEntity_PositionMovementType__Enum__StaticFields {
};

struct PositionAnimatorEntity_PositionMovementType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PositionAnimatorEntity_PositionMovementType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PositionAnimatorEntity_PositionMovementType__Enum__VTable vtable;
};

struct PositionAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData GetTransformTarget;
    VirtualInvokeData GetCurrentValueAssociatedWithCurve;
    VirtualInvokeData get_ObservedTarget;
    VirtualInvokeData get_ObservedModifierType;
    VirtualInvokeData get_FromStateGuid;
    VirtualInvokeData set_FromStateGuid;
    VirtualInvokeData get_ToStateGuid;
    VirtualInvokeData set_ToStateGuid;
    VirtualInvokeData OnStartObserving;
    VirtualInvokeData OnStopObserving;
    VirtualInvokeData OnSetupChanged;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData GetManagedEarlyZDynamicGraphicTargets;
};

struct PositionAnimatorEntity__StaticFields {
};

struct PositionAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PositionAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PositionAnimatorEntity__VTable vtable;
};

struct QuaternionRotationAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    bool EnabledX;
    bool EnabledY;
    bool EnabledZ;
    bool EnabledW;
    struct AnimationCurve *RotationX;
    struct AnimationCurve *RotationY;
    struct AnimationCurve *RotationZ;
    struct AnimationCurve *RotationW;
    Space__Enum Space;
    
    struct Quaternion m_currentLocalStartRotation;
    float m_time;
};

struct QuaternionRotationAnimatorEntity {
    struct QuaternionRotationAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct QuaternionRotationAnimatorEntity__Fields fields;
};

struct QuaternionRotationAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData GetTransformTarget;
    VirtualInvokeData GetCurrentValueAssociatedWithCurve;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData OnTimelineSample;
};

struct QuaternionRotationAnimatorEntity__StaticFields {
};

struct QuaternionRotationAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QuaternionRotationAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QuaternionRotationAnimatorEntity__VTable vtable;
};

enum class ScaleAnimatorEntity_ScaleMode__Enum : int32_t {
    Absolute = 0x00000000,
    Relative = 0x00000001,
    Multiply = 0x00000002,
};

struct ScaleAnimatorEntity_ScaleMode__Enum__Boxed {
    struct ScaleAnimatorEntity_ScaleMode__Enum__Class *klass;
    MonitorData *monitor;
    ScaleAnimatorEntity_ScaleMode__Enum value;
    
};

struct ScaleAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    ScaleAnimatorEntity_ScaleMode__Enum ClipScaleMode;
    
    bool EnabledX;
    bool EnabledY;
    bool EnabledZ;
    struct AnimationCurve *X;
    struct AnimationCurve *Y;
    struct AnimationCurve *Z;
    struct Vector3 m_startingScale;
    float m_time;
    int32_t m_fromStateGuid;
    int32_t m_toStateGuid;
};

struct ScaleAnimatorEntity {
    struct ScaleAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct ScaleAnimatorEntity__Fields fields;
};

struct ScaleAnimatorEntity_ScaleMode__Enum__VTable {
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

struct ScaleAnimatorEntity_ScaleMode__Enum__StaticFields {
};

struct ScaleAnimatorEntity_ScaleMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScaleAnimatorEntity_ScaleMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScaleAnimatorEntity_ScaleMode__Enum__VTable vtable;
};

struct ScaleAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData GetCurrentValueAssociatedWithCurve;
    VirtualInvokeData get_ObservedTarget;
    VirtualInvokeData get_ObservedModifierType;
    VirtualInvokeData get_FromStateGuid;
    VirtualInvokeData set_FromStateGuid;
    VirtualInvokeData get_ToStateGuid;
    VirtualInvokeData set_ToStateGuid;
    VirtualInvokeData OnStartObserving;
    VirtualInvokeData OnStopObserving;
    VirtualInvokeData OnSetupChanged;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData OnEntityCreated;
};

struct ScaleAnimatorEntity__StaticFields {
};

struct ScaleAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScaleAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScaleAnimatorEntity__VTable vtable;
};

struct ScenariosParticleSystemAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    struct AnimationCurve *Curve;
};

struct ScenariosParticleSystemAnimator {
    struct ScenariosParticleSystemAnimator__Class *klass;
    MonitorData *monitor;
    struct ScenariosParticleSystemAnimator__Fields fields;
};

struct ScenariosParticleSystemAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData GetCurrentValueAssociatedWithCurve;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData OnEntityCreated;
};

struct ScenariosParticleSystemAnimator__StaticFields {
};

struct ScenariosParticleSystemAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenariosParticleSystemAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenariosParticleSystemAnimator__VTable vtable;
};

struct TimelineInterruptionAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *TargetTimeline;
    struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline_ *m_resolvedTimeline;
};

struct TimelineInterruptionAnimatorEntity {
    struct TimelineInterruptionAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct TimelineInterruptionAnimatorEntity__Fields fields;
};

struct __declspec(align(8)) MoonReferenceCache_1_Moon_Timeline_MoonTimeline___Fields {
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *m_moonRef;
    struct MoonTimeline *m_resolvedRef;
    bool m_alwaysResolveOnEditor;
};

struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline_ {
    struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline___Class *klass;
    MonitorData *monitor;
    struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline___Fields fields;
};

struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline___StaticFields {
};

struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReferenceCache_1_Moon_Timeline_MoonTimeline___VTable vtable;
};

struct TimelineInterruptionAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
};

struct TimelineInterruptionAnimatorEntity__StaticFields {
};

struct TimelineInterruptionAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineInterruptionAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineInterruptionAnimatorEntity__VTable vtable;
};

struct TrailAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_MoonTrail_ *TargetTrail;
};

struct TrailAnimatorEntity {
    struct TrailAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct TrailAnimatorEntity__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_MoonTrail___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_MoonTrail_ *m_cachedProxyType;
    struct MoonTrail *m_volatileValue;
};

struct MoonReference_1_MoonTrail_ {
    struct MoonReference_1_MoonTrail___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_MoonTrail___Fields fields;
};

struct IMoonType_1_MoonTrail_ {
    struct IMoonType_1_MoonTrail___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_MoonTrail___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_MoonTrail___StaticFields {
};

struct IMoonType_1_MoonTrail___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_MoonTrail___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_MoonTrail___VTable vtable;
};

struct MoonTrail___VTable {
};

struct MoonTrail___StaticFields {
};

struct MoonTrail___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonTrail___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonTrail___VTable vtable;
};

struct MoonReference_1_MoonTrail___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_MoonTrail___StaticFields {
};

struct MoonReference_1_MoonTrail___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_MoonTrail___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_MoonTrail___VTable vtable;
};

struct TrailAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
};

struct TrailAnimatorEntity__StaticFields {
};

struct TrailAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TrailAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TrailAnimatorEntity__VTable vtable;
};

struct TransformFollowAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct UberTransformFollow *UberTransformFollow;
};

struct TransformFollowAnimator {
    struct TransformFollowAnimator__Class *klass;
    MonitorData *monitor;
    struct TransformFollowAnimator__Fields fields;
};

struct TransformFollowAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
};

struct TransformFollowAnimator__StaticFields {
};

struct TransformFollowAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformFollowAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformFollowAnimator__VTable vtable;
};

struct EulerXYZRotationTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    struct MoonVector3 *LocalStartEulerAngles;
    struct MoonVector3 *LocalEndEulerAngles;
    struct MoonFloat *Speed;
    bool ShouldApplyDeltaTimeToSpeed;
    HandoverMode__Enum HandoverWrite;
    
    HandoverMode__Enum HandoverReadStart;
    
    HandoverMode__Enum HandoverReadEnd;
    
    struct Quaternion m_currentLocalStart;
    struct Quaternion m_currentLocalEnd;
    bool m_hasStarted;
    bool m_isFinished;
    float m_duration;
    float m_timer;
};

struct EulerXYZRotationTweenAnimator {
    struct EulerXYZRotationTweenAnimator__Class *klass;
    MonitorData *monitor;
    struct EulerXYZRotationTweenAnimator__Fields fields;
};

struct EulerXYZRotationTweenAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData HasFinished;
    VirtualInvokeData GetTransformTarget;
    VirtualInvokeData ApproximateEvent;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData OnEntityCreated;
};

struct EulerXYZRotationTweenAnimator__StaticFields {
};

struct EulerXYZRotationTweenAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EulerXYZRotationTweenAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EulerXYZRotationTweenAnimator__VTable vtable;
};

struct EulerZRotationTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct Transform *TargetTransform;
    struct MoonFloat *LocalStartEulerAngle;
    struct MoonFloat *LocalEndEulerAngle;
    float Speed;
    HandoverMode__Enum HandoverWrite;
    
    HandoverMode__Enum HandoverReadStart;
    
    HandoverMode__Enum HandoverReadEnd;
    
    float m_currentLocalStartEulerAngles;
    float m_currentLocalEndEulerAngles;
    float m_currentAngle;
    bool m_isFinished;
    struct MoveTowardsFloatTweenable *m_floatTween;
};

struct EulerZRotationTweenAnimator {
    struct EulerZRotationTweenAnimator__Class *klass;
    MonitorData *monitor;
    struct EulerZRotationTweenAnimator__Fields fields;
};

struct EulerZRotationTweenAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData HasFinished;
};

struct EulerZRotationTweenAnimator__StaticFields {
};

struct EulerZRotationTweenAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EulerZRotationTweenAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EulerZRotationTweenAnimator__VTable vtable;
};

struct PositionTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_ *Target;
    struct MoonVector3 *LocalStartPosition;
    struct MoonVector3 *LocalEndPosition;
    struct MoonFloat *Speed;
    HandoverMode__Enum HandoverWrite;
    
    HandoverMode__Enum HandoverReadStart;
    
    HandoverMode__Enum HandoverReadEnd;
    
    struct Vector3 m_currentStartPos;
    struct Vector3 m_currentEndPos;
    bool m_hasStarted;
    bool m_isFinished;
    struct MoveTowardsVector3Tweenable *m_tweenPosition;
    struct Vector3 m_lastCurrentPostTweenProvider;
    float m_lastTweenProviderValue;
};

struct PositionTweenAnimator {
    struct PositionTweenAnimator__Class *klass;
    MonitorData *monitor;
    struct PositionTweenAnimator__Fields fields;
};

struct PositionTweenAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData HasFinished;
    VirtualInvokeData GetGameObjectTarget;
    VirtualInvokeData GetTweenNormalizedValue;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData GetDynamicGraphicTarget;
    VirtualInvokeData ApproximateEvent;
    VirtualInvokeData get_ExternalTarget;
};

}
