namespace app {
struct PositionTweenAnimator__StaticFields {
};

struct PositionTweenAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PositionTweenAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PositionTweenAnimator__VTable vtable;
};

struct PositionTweenCurveAnimator__Fields {
    struct PositionTweenAnimator__Fields _;
    struct AnimationCurve *Tween;
    float m_time;
};

struct PositionTweenCurveAnimator {
    struct PositionTweenCurveAnimator__Class *klass;
    MonitorData *monitor;
    struct PositionTweenCurveAnimator__Fields fields;
};

struct PositionTweenCurveAnimator__VTable {
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

struct PositionTweenCurveAnimator__StaticFields {
};

struct PositionTweenCurveAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PositionTweenCurveAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PositionTweenCurveAnimator__VTable vtable;
};

struct ScaleAxisTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    HandoverMode__Enum HandoverWrite;
    
    HandoverMode__Enum HandoverReadStart;
    
    HandoverMode__Enum HandoverReadEnd;
    
    struct MoonVector3 *LocalStartScale;
    struct MoonVector3 *LocalEndScale;
    struct MoonFloat *Speed;
    struct Vector3 m_velocity;
    bool m_hasStarted;
    bool m_isFinished;
    struct Vector3 m_currentStartScale;
    struct Vector3 m_currentEndScale;
    struct MoveTowardsVector3Tweenable *m_tweenScale;
};

struct ScaleAxisTweenAnimator {
    struct ScaleAxisTweenAnimator__Class *klass;
    MonitorData *monitor;
    struct ScaleAxisTweenAnimator__Fields fields;
};

struct ScaleAxisTweenAnimator__VTable {
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
    VirtualInvokeData ApproximateEvent;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
};

struct ScaleAxisTweenAnimator__StaticFields {
};

struct ScaleAxisTweenAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScaleAxisTweenAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScaleAxisTweenAnimator__VTable vtable;
};

struct ScaleTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    struct MoonFloat *LocalStartUniformScale;
    struct MoonFloat *LocalEndUniformScale;
    struct MoonReference_1_ITweenSpeedProvider_ *TweenSpeedProvider;
    struct ITweenSpeedProvider *m_tweenSpeed;
    float m_CurrentLocalStartScale;
    float m_CurrentLocalEndScale;
    float m_CurrentLocalScale;
    float m_time;
    bool m_isFinished;
    struct MoveTowardsFloatTweenable *m_tweenScale;
};

struct ScaleTweenAnimator {
    struct ScaleTweenAnimator__Class *klass;
    MonitorData *monitor;
    struct ScaleTweenAnimator__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_ITweenSpeedProvider___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_ITweenSpeedProvider_ *m_cachedProxyType;
    struct ITweenSpeedProvider *m_volatileValue;
};

struct MoonReference_1_ITweenSpeedProvider_ {
    struct MoonReference_1_ITweenSpeedProvider___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_ITweenSpeedProvider___Fields fields;
};

struct IMoonType_1_ITweenSpeedProvider_ {
    struct IMoonType_1_ITweenSpeedProvider___Class *klass;
    MonitorData *monitor;
};

struct ITweenSpeedProvider {
    struct ITweenSpeedProvider__Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_ITweenSpeedProvider___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_ITweenSpeedProvider___StaticFields {
};

struct IMoonType_1_ITweenSpeedProvider___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_ITweenSpeedProvider___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_ITweenSpeedProvider___VTable vtable;
};

struct ITweenSpeedProvider__VTable {
    VirtualInvokeData GetTweenSpeed;
};

struct ITweenSpeedProvider__StaticFields {
};

struct ITweenSpeedProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITweenSpeedProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITweenSpeedProvider__VTable vtable;
};

struct ITweenSpeedProvider___VTable {
};

struct ITweenSpeedProvider___StaticFields {
};

struct ITweenSpeedProvider___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITweenSpeedProvider___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITweenSpeedProvider___VTable vtable;
};

struct MoonReference_1_ITweenSpeedProvider___VTable {
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

struct MoonReference_1_ITweenSpeedProvider___StaticFields {
};

struct MoonReference_1_ITweenSpeedProvider___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_ITweenSpeedProvider___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_ITweenSpeedProvider___VTable vtable;
};

struct ScaleTweenAnimator__VTable {
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
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
};

struct ScaleTweenAnimator__StaticFields {
};

struct ScaleTweenAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScaleTweenAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScaleTweenAnimator__VTable vtable;
};

struct FloatAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve *Curve;
    struct DynamicDataResolver *m_dataResolver;
    float m_time;
};

struct FloatAnimator {
    struct FloatAnimator__Class *klass;
    MonitorData *monitor;
    struct FloatAnimator__Fields fields;
};

struct FloatAnimator__VTable {
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
    VirtualInvokeData GetResolverForType;
};

struct FloatAnimator__StaticFields {
};

struct FloatAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FloatAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FloatAnimator__VTable vtable;
};

struct WaitForKeyTimelineEntity__Fields {
    struct TimelineEntity__Fields _;
    KeyCode__Enum Key;
    
    float m_time;
    bool m_isFinished;
};

struct WaitForKeyTimelineEntity {
    struct WaitForKeyTimelineEntity__Class *klass;
    MonitorData *monitor;
    struct WaitForKeyTimelineEntity__Fields fields;
};

struct WaitForKeyTimelineEntity__VTable {
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
    VirtualInvokeData HasFinished;
};

struct WaitForKeyTimelineEntity__StaticFields {
};

struct WaitForKeyTimelineEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitForKeyTimelineEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitForKeyTimelineEntity__VTable vtable;
};

struct WaitForTimeTimelineEntity__Fields {
    struct TimelineEntity__Fields _;
    float m_time;
};

struct WaitForTimeTimelineEntity {
    struct WaitForTimeTimelineEntity__Class *klass;
    MonitorData *monitor;
    struct WaitForTimeTimelineEntity__Fields fields;
};

struct WaitForTimeTimelineEntity__VTable {
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

struct WaitForTimeTimelineEntity__StaticFields {
};

struct WaitForTimeTimelineEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitForTimeTimelineEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitForTimeTimelineEntity__VTable vtable;
};

struct WaitForWaitContextEntity__Fields {
    struct TimelineEntity__Fields _;
    float m_time;
    bool m_isFinished;
    struct IWaitContext *m_WaitContext;
};

struct WaitForWaitContextEntity {
    struct WaitForWaitContextEntity__Class *klass;
    MonitorData *monitor;
    struct WaitForWaitContextEntity__Fields fields;
};

struct IWaitContext {
    struct IWaitContext__Class *klass;
    MonitorData *monitor;
};

struct IWaitContext__VTable {
    VirtualInvokeData get_WaitReason;
    VirtualInvokeData HasWaitFinished;
};

struct IWaitContext__StaticFields {
};

struct IWaitContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IWaitContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IWaitContext__VTable vtable;
};

struct WaitForWaitContextEntity__VTable {
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
    VirtualInvokeData HasFinished;
};

struct WaitForWaitContextEntity__StaticFields {
};

struct WaitForWaitContextEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitForWaitContextEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitForWaitContextEntity__VTable vtable;
};

struct WaitTimelineEntity__Fields {
    struct TimelineEntity__Fields _;
    float m_time;
};

struct WaitTimelineEntity {
    struct WaitTimelineEntity__Class *klass;
    MonitorData *monitor;
    struct WaitTimelineEntity__Fields fields;
};

struct WaitTimelineEntity__VTable {
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

struct WaitTimelineEntity__StaticFields {
};

struct WaitTimelineEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitTimelineEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitTimelineEntity__VTable vtable;
};

struct __declspec(align(8)) StaticEventDescriptor__Fields {
    int32_t _EventId_k__BackingField;
    float _StaticTime_k__BackingField;
    struct String *_Name_k__BackingField;
    float _VolatilePreviewTime_k__BackingField;
    bool _IsConstrainable_k__BackingField;
    bool _IsDeletable_k__BackingField;
};

struct StaticEventDescriptor {
    struct StaticEventDescriptor__Class *klass;
    MonitorData *monitor;
    struct StaticEventDescriptor__Fields fields;
};

struct StaticEventDescriptor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventId;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData get_StaticTime;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_IsConstrainable;
    VirtualInvokeData get_IsDeletable;
};

struct StaticEventDescriptor__StaticFields {
};

struct StaticEventDescriptor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StaticEventDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StaticEventDescriptor__VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_Object___Fields {
    struct Object_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_Object_ {
    struct List_1_UnityEngine_Object___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_Object___Fields fields;
};

struct IEnumerator_1_UnityEngine_Object_ {
    struct IEnumerator_1_UnityEngine_Object___Class *klass;
    MonitorData *monitor;
};

struct ITimelineEntityCreationListener {
    struct ITimelineEntityCreationListener__Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_UnityEngine_Object___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_Object___StaticFields {
};

struct IEnumerator_1_UnityEngine_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UnityEngine_Object___VTable vtable;
};

struct List_1_UnityEngine_Object___VTable {
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

struct List_1_UnityEngine_Object___StaticFields {
    struct Object_1__Array *_emptyArray;
};

struct List_1_UnityEngine_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_Object___VTable vtable;
};

struct ITimelineEntityCreationListener__VTable {
    VirtualInvokeData OnEntityCreated;
};

struct ITimelineEntityCreationListener__StaticFields {
};

struct ITimelineEntityCreationListener__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ITimelineEntityCreationListener__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ITimelineEntityCreationListener__VTable vtable;
};

enum class AutoFillOnCreationAttribute_ResolveConflict__Enum : int32_t {
    PickFirst = 0x00000000,
    PickLast = 0x00000001,
};

struct AutoFillOnCreationAttribute_ResolveConflict__Enum__Boxed {
    struct AutoFillOnCreationAttribute_ResolveConflict__Enum__Class *klass;
    MonitorData *monitor;
    AutoFillOnCreationAttribute_ResolveConflict__Enum value;
    
};

struct __declspec(align(8)) AutoFillOnCreationAttribute__Fields {
    AutoFillOnCreationAttribute_ResolveConflict__Enum m_resolveConflict;
    
};

struct AutoFillOnCreationAttribute {
    struct AutoFillOnCreationAttribute__Class *klass;
    MonitorData *monitor;
    struct AutoFillOnCreationAttribute__Fields fields;
};

struct AutoFillOnCreationAttribute_ResolveConflict__Enum__VTable {
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

struct AutoFillOnCreationAttribute_ResolveConflict__Enum__StaticFields {
};

struct AutoFillOnCreationAttribute_ResolveConflict__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoFillOnCreationAttribute_ResolveConflict__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoFillOnCreationAttribute_ResolveConflict__Enum__VTable vtable;
};

struct AutoFillOnCreationAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct AutoFillOnCreationAttribute__StaticFields {
};

struct AutoFillOnCreationAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoFillOnCreationAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoFillOnCreationAttribute__VTable vtable;
};

struct __declspec(align(8)) MarkerEntity__Fields {
    AnimatorPlayState__Enum _PlayState_k__BackingField;
    
    struct PlaybackStatus *_PlaybackStatus_k__BackingField;
    struct EntityId m_entityId;
    struct MoonReference_1_Moon_Timeline_ITimelineEntityParent_ *m_entityParent;
    struct Nullable_1_Boolean_ m_isFinished;
    double _PreviewTime_k__BackingField;
    int32_t m_hash;
    struct IEventReciever *_EventReciever_k__BackingField;
};

}
