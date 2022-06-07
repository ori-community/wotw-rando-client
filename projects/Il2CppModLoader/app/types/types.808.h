namespace app {
struct SeinAnimationSystemSwitcher__StaticFields {
};

struct SeinAnimationSystemSwitcher__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinAnimationSystemSwitcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinAnimationSystemSwitcher__VTable vtable;
};

struct SeinController3D_c {
    struct SeinController3D_c__Class *klass;
    MonitorData *monitor;
};

struct SeinController3D_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinController3D_c__StaticFields {
    struct SeinController3D_c *__9;
    struct Action_1_SeinController3D_EventId_ *__9__89_0;
    struct Action_1_String_ *__9__89_1;
};

struct SeinController3D_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinController3D_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinController3D_c__VTable vtable;
};

struct PlayerSettingsPerScene___VTable {
};

struct PlayerSettingsPerScene___StaticFields {
};

struct PlayerSettingsPerScene___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerSettingsPerScene___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerSettingsPerScene___VTable vtable;
};

struct AnimationCharacterProvider__Fields {
    struct MonoBehaviour__Fields _;
};

struct AnimationCharacterProvider {
    struct AnimationCharacterProvider__Class *klass;
    MonitorData *monitor;
    struct AnimationCharacterProvider__Fields fields;
};

struct AnimationCharacterProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationCharacterProvider__StaticFields {
    struct GameObject *s_oriCharacter;
    struct MoonAnimator *s_oriAnimator;
    struct GameObject *s_kuCharacter;
    struct MoonAnimator *s_kuAnimator;
};

struct AnimationCharacterProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationCharacterProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationCharacterProvider__VTable vtable;
};

struct LegacyAnimationPlayer__Fields {
    struct BaseAnimator__Fields _;
    struct MoonAnimation *Animation;
    struct GameObject *AnimatedObject;
    float DurationOverride;
    bool UseDurationOverride;
    int32_t Priority;
    CharacterFactory_Characters__Enum AnimatedCharacter;
    
    bool Loop;
    struct MoonAnimator *m_moonAnimator;
    bool m_started;
    struct ActiveAnimationHandle m_animationState;
};

struct LegacyAnimationPlayer {
    struct LegacyAnimationPlayer__Class *klass;
    MonitorData *monitor;
    struct LegacyAnimationPlayer__Fields fields;
};

struct LegacyAnimationPlayer__VTable {
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
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct LegacyAnimationPlayer__StaticFields {
};

struct LegacyAnimationPlayer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyAnimationPlayer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyAnimationPlayer__VTable vtable;
};

struct LegacyBlendAnimationPlayer__Fields {
    struct LegacyAnimationPlayer__Fields _;
    struct FloatAnimationParameter *floatAnimationParameter;
    float previewParameterValue;
};

struct LegacyBlendAnimationPlayer {
    struct LegacyBlendAnimationPlayer__Class *klass;
    MonitorData *monitor;
    struct LegacyBlendAnimationPlayer__Fields fields;
};

struct LegacyBlendAnimationPlayer__VTable {
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
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct LegacyBlendAnimationPlayer__StaticFields {
};

struct LegacyBlendAnimationPlayer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyBlendAnimationPlayer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyBlendAnimationPlayer__VTable vtable;
};

struct LegacyFloatAnimationParameterAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct FloatAnimationParameter *Parameter;
    struct MoonAnimator *AnimatedObject;
    struct AnimationCurve *AnimationCurve;
    float m_originalValue;
};

struct LegacyFloatAnimationParameterAnimator {
    struct LegacyFloatAnimationParameterAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyFloatAnimationParameterAnimator__Fields fields;
};

struct LegacyFloatAnimationParameterAnimator__VTable {
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
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct LegacyFloatAnimationParameterAnimator__StaticFields {
};

struct LegacyFloatAnimationParameterAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyFloatAnimationParameterAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyFloatAnimationParameterAnimator__VTable vtable;
};

struct LegacyPostprocessAnimationPlayer__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationPostprocess *Postprocess;
    struct AnimationCurve *WeightCurve;
    struct GameObject *AnimatedObject;
    bool TweakMode;
    bool m_started;
    struct MoonAnimator *m_moonAnimator;
    struct AnimationPostprocess *m_postprocessInstance;
};

struct LegacyPostprocessAnimationPlayer {
    struct LegacyPostprocessAnimationPlayer__Class *klass;
    MonitorData *monitor;
    struct LegacyPostprocessAnimationPlayer__Fields fields;
};

struct LegacyPostprocessAnimationPlayer__VTable {
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
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct LegacyPostprocessAnimationPlayer__StaticFields {
};

struct LegacyPostprocessAnimationPlayer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyPostprocessAnimationPlayer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyPostprocessAnimationPlayer__VTable vtable;
};

struct OriAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct ClipAnimation *ClipAnimation;
    struct Vector2 EditorPreviewPosition;
    struct MoonAnimator *m_moonAnimator;
    bool m_started;
    struct IActiveAnimation *m_animationState;
};

struct OriAnimator {
    struct OriAnimator__Class *klass;
    MonitorData *monitor;
    struct OriAnimator__Fields fields;
};

struct OriAnimator__VTable {
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
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct OriAnimator__StaticFields {
};

struct OriAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OriAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OriAnimator__VTable vtable;
};

struct SkeletonAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct ClipAnimation *ClipAnimation;
    struct GameObject *AnimatedObject;
    float Length;
    struct MoonAnimator *m_moonAnimator;
    bool m_started;
    struct ActiveAnimationHandle m_animationState;
};

struct SkeletonAnimator {
    struct SkeletonAnimator__Class *klass;
    MonitorData *monitor;
    struct SkeletonAnimator__Fields fields;
};

struct SkeletonAnimator__VTable {
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
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct SkeletonAnimator__StaticFields {
};

struct SkeletonAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeletonAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeletonAnimator__VTable vtable;
};

struct VectorAnimationParameterAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct VectorAnimationParameter *Parameter;
    struct Vector3 ParameterValue;
    struct GameObject *AnimatedObject;
    float EffectDuration;
};

struct VectorAnimationParameterAnimator {
    struct VectorAnimationParameterAnimator__Class *klass;
    MonitorData *monitor;
    struct VectorAnimationParameterAnimator__Fields fields;
};

struct VectorAnimationParameterAnimator__VTable {
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
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData Convert;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData get_IsLooping;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData set_CurrentTime;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Play;
    VirtualInvokeData Stop;
    VirtualInvokeData Pause;
    VirtualInvokeData OnFixedUpdate_1;
    VirtualInvokeData CacheOriginals;
    VirtualInvokeData SampleValue;
    VirtualInvokeData UpdateDurationAndTimeCache;
    VirtualInvokeData OnStartPlay;
    VirtualInvokeData OnStopPlay;
    VirtualInvokeData get_Duration;
    VirtualInvokeData RestoreToOriginalState;
    VirtualInvokeData Convert_1;
};

struct VectorAnimationParameterAnimator__StaticFields {
};

struct VectorAnimationParameterAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VectorAnimationParameterAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VectorAnimationParameterAnimator__VTable vtable;
};

struct VectorParameterAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct VectorAnimationParameter *Parameter;
    struct Vector3 ParameterValue;
    struct MoonReference_1_MoonAnimator_ *Animator;
    struct MoonAnimator *m_moonAnimator;
};

struct VectorParameterAnimator {
    struct VectorParameterAnimator__Class *klass;
    MonitorData *monitor;
    struct VectorParameterAnimator__Fields fields;
};

struct VectorParameterAnimator__VTable {
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

struct VectorParameterAnimator__StaticFields {
};

struct VectorParameterAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VectorParameterAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VectorParameterAnimator__VTable vtable;
};

struct SpriteTexture__Fields {
    struct ScriptableObject__Fields _;
};

struct SpriteTexture {
    struct SpriteTexture__Class *klass;
    MonitorData *monitor;
    struct SpriteTexture__Fields fields;
};

struct SpriteTexture__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct SpriteTexture__StaticFields {
};

struct SpriteTexture__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpriteTexture__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpriteTexture__VTable vtable;
};

struct __declspec(align(8)) AnimationMetaData_c_DisplayClass19_0__Fields {
    struct String *name;
};

struct AnimationMetaData_c_DisplayClass19_0 {
    struct AnimationMetaData_c_DisplayClass19_0__Class *klass;
    MonitorData *monitor;
    struct AnimationMetaData_c_DisplayClass19_0__Fields fields;
};

struct AnimationMetaData_c_DisplayClass19_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationMetaData_c_DisplayClass19_0__StaticFields {
};

struct AnimationMetaData_c_DisplayClass19_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationMetaData_c_DisplayClass19_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationMetaData_c_DisplayClass19_0__VTable vtable;
};

struct __declspec(align(8)) UnityModelAnimationCurveProcessor__Fields {
    struct GameObject *GameObject;
};

struct UnityModelAnimationCurveProcessor {
    struct UnityModelAnimationCurveProcessor__Class *klass;
    MonitorData *monitor;
    struct UnityModelAnimationCurveProcessor__Fields fields;
};

struct AnimationMetaDataCurveProcessor__Fields {
    struct UnityModelAnimationCurveProcessor__Fields _;
    struct AnimationMetaData *AnimationMetaData;
    struct Transform *m_camera;
    struct Transform *m_cameraTarget;
    struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ *m_data;
};

struct AnimationMetaDataCurveProcessor {
    struct AnimationMetaDataCurveProcessor__Class *klass;
    MonitorData *monitor;
    struct AnimationMetaDataCurveProcessor__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_Transform_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
    struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
    int32_t hashCode;
    int32_t next;
    struct Transform *key;
    struct AnimationMetaData_AnimationData *value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData_ vector[32];
};

struct IEqualityComparer_1_UnityEngine_Transform_ {
    struct IEqualityComparer_1_UnityEngine_Transform___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields {
    struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields {
    struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Fields fields;
};

struct ICollection_1_UnityEngine_Transform_ {
    struct ICollection_1_UnityEngine_Transform___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_AnimationMetaData_AnimationData_ {
    struct ICollection_1_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
    struct Transform *key;
    struct AnimationMetaData_AnimationData *value;
};

struct KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Boxed {
    struct KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ fields;
};

struct KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Array {
    struct KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData_ {
    struct IEnumerator_1_KeyValuePair_2_UnityEngine_Transform_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UnityEngine_Transform_ {
    struct IEnumerable_1_UnityEngine_Transform___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_AnimationMetaData_AnimationData_ {
    struct IEnumerable_1_AnimationMetaData_AnimationData___Class *klass;
    MonitorData *monitor;
};

struct UnityModelAnimationCurveProcessor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
};

struct UnityModelAnimationCurveProcessor__StaticFields {
};

struct UnityModelAnimationCurveProcessor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityModelAnimationCurveProcessor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityModelAnimationCurveProcessor__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Transform_AnimationMetaData_AnimationData___Array__VTable vtable;
};

struct IEqualityComparer_1_UnityEngine_Transform___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_UnityEngine_Transform___StaticFields {
};

struct IEqualityComparer_1_UnityEngine_Transform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_UnityEngine_Transform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_UnityEngine_Transform___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Transform_AnimationMetaData_AnimationData___VTable vtable;
};

struct ICollection_1_UnityEngine_Transform___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_UnityEngine_Transform___StaticFields {
};

struct ICollection_1_UnityEngine_Transform___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_UnityEngine_Transform___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_UnityEngine_Transform___VTable vtable;
};

struct ICollection_1_AnimationMetaData_AnimationData___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_AnimationMetaData_AnimationData___StaticFields {
};

struct ICollection_1_AnimationMetaData_AnimationData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_AnimationMetaData_AnimationData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_AnimationMetaData_AnimationData___VTable vtable;
};

}
