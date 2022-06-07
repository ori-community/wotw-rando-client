namespace app {
struct PlayableCharacterAnimator__StaticFields {
};

struct PlayableCharacterAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableCharacterAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableCharacterAnimator__VTable vtable;
};

enum class PlayableCharacterControlAnimator_PlayableCharacters__Enum : int32_t {
    Ori = 0x00000000,
    Ku = 0x00000001,
};

struct PlayableCharacterControlAnimator_PlayableCharacters__Enum__Boxed {
    struct PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class *klass;
    MonitorData *monitor;
    PlayableCharacterControlAnimator_PlayableCharacters__Enum value;
    
};

struct PlayableCharacterControlAnimator__Fields {
    struct TimelineEntity__Fields _;
    PlayableCharacterControlAnimator_PlayableCharacters__Enum PlayableCharacter;
    
    struct Transform *OverrideStartPosition;
    struct ICharacter *m_originalCharacter;
    struct GameObject *m_instance;
    CinematicCharacterAnimator_FacingDirection__Enum Direction;
    
    struct Transform *TargetPosition;
    struct Vector3 TargetOffset;
    struct AnimationCurve *SpeedByDistanceTraveledNormalized;
    float MaxDuration;
    float m_time;
    float m_distance;
    float m_startDistance;
    bool m_ended;
    struct Vector3 m_initPos;
    bool JumpOverGaps;
    struct MoonReference_1_ICharacterInteractable_ *InteractOnEnd;
    struct MoonAnimation *ReachedTargetAnimation;
    struct MoonAnimation *EndAnimation;
};

struct PlayableCharacterControlAnimator {
    struct PlayableCharacterControlAnimator__Class *klass;
    MonitorData *monitor;
    struct PlayableCharacterControlAnimator__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_ICharacterInteractable___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_ICharacterInteractable_ *m_cachedProxyType;
    struct ICharacterInteractable *m_volatileValue;
};

struct MoonReference_1_ICharacterInteractable_ {
    struct MoonReference_1_ICharacterInteractable___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_ICharacterInteractable___Fields fields;
};

struct IMoonType_1_ICharacterInteractable_ {
    struct IMoonType_1_ICharacterInteractable___Class *klass;
    MonitorData *monitor;
};

struct PlayableCharacterControlAnimator_PlayableCharacters__Enum__VTable {
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

struct PlayableCharacterControlAnimator_PlayableCharacters__Enum__StaticFields {
};

struct PlayableCharacterControlAnimator_PlayableCharacters__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableCharacterControlAnimator_PlayableCharacters__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableCharacterControlAnimator_PlayableCharacters__Enum__VTable vtable;
};

struct IMoonType_1_ICharacterInteractable___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_ICharacterInteractable___StaticFields {
};

struct IMoonType_1_ICharacterInteractable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_ICharacterInteractable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_ICharacterInteractable___VTable vtable;
};

struct ICharacterInteractable___VTable {
};

struct ICharacterInteractable___StaticFields {
};

struct ICharacterInteractable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICharacterInteractable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICharacterInteractable___VTable vtable;
};

struct MoonReference_1_ICharacterInteractable___VTable {
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

struct MoonReference_1_ICharacterInteractable___StaticFields {
};

struct MoonReference_1_ICharacterInteractable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_ICharacterInteractable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_ICharacterInteractable___VTable vtable;
};

struct PlayableCharacterControlAnimator__VTable {
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

struct PlayableCharacterControlAnimator__StaticFields {
};

struct PlayableCharacterControlAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayableCharacterControlAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayableCharacterControlAnimator__VTable vtable;
};

struct __declspec(align(8)) AnimationCurve3D__Fields {
    struct AnimationCurve *X;
    struct AnimationCurve *Y;
    struct AnimationCurve *Z;
};

struct AnimationCurve3D {
    struct AnimationCurve3D__Class *klass;
    MonitorData *monitor;
    struct AnimationCurve3D__Fields fields;
};

struct AnimationCurve3D__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationCurve3D__StaticFields {
};

struct AnimationCurve3D__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationCurve3D__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationCurve3D__VTable vtable;
};

struct ReplayCameraAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve3D *Velocity;
    struct AnimationCurve3D *PuppetPosition;
    struct AnimationCurve3D *BaseCameraPosition;
    bool UseVelocity;
    float TimeOffset;
};

struct ReplayCameraAnimator {
    struct ReplayCameraAnimator__Class *klass;
    MonitorData *monitor;
    struct ReplayCameraAnimator__Fields fields;
};

struct ReplayCameraAnimator__VTable {
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
    VirtualInvokeData GetCurrentValueAssociatedWithCurve;
};

struct ReplayCameraAnimator__StaticFields {
    bool _IsControllingCamera_k__BackingField;
    struct Vector3 _CurrentCameraTargetPosition_k__BackingField;
    struct Vector3 _CurrentCameraTargetVelocity_k__BackingField;
};

struct ReplayCameraAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplayCameraAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReplayCameraAnimator__VTable vtable;
};

struct ScenarioLineRendererAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Int32__Array *Lengths;
    struct Vector3__Array__Array *Positions;
    struct AnimationCurve *TransparencyOverTime;
};

struct ScenarioLineRendererAnimatorEntity {
    struct ScenarioLineRendererAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct ScenarioLineRendererAnimatorEntity__Fields fields;
};

struct Vector3__Array__Array {
    struct Vector3__Array__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Vector3__Array *vector[32];
};

struct Vector3__Array__Array__VTable {
};

struct Vector3__Array__Array__StaticFields {
};

struct Vector3__Array__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Vector3__Array__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Vector3__Array__Array__VTable vtable;
};

struct ScenarioLineRendererAnimatorEntity__VTable {
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

struct ScenarioLineRendererAnimatorEntity__StaticFields {
};

struct ScenarioLineRendererAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenarioLineRendererAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenarioLineRendererAnimatorEntity__VTable vtable;
};

struct SceneLoadingEntity__Fields {
    struct TimelineEntity__Fields _;
    struct SceneMetaData *SceneMetaData;
    struct MoonGuid *m_sceneMoonGuid;
    bool m_started;
    bool m_loadedAndEnabled;
};

struct SceneLoadingEntity {
    struct SceneLoadingEntity__Class *klass;
    MonitorData *monitor;
    struct SceneLoadingEntity__Fields fields;
};

struct SceneLoadingEntity__VTable {
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

struct SceneLoadingEntity__StaticFields {
};

struct SceneLoadingEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneLoadingEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneLoadingEntity__VTable vtable;
};

struct SeinUIEntity__Fields {
    struct TimelineEntity__Fields _;
    bool m_show;
    bool ShowSpiritLight;
    bool ShowSeeds;
};

struct SeinUIEntity {
    struct SeinUIEntity__Class *klass;
    MonitorData *monitor;
    struct SeinUIEntity__Fields fields;
};

struct SeinUIEntity__VTable {
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

struct SeinUIEntity__StaticFields {
};

struct SeinUIEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinUIEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinUIEntity__VTable vtable;
};

struct SetBooleanStateDescriptorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct SerializedBooleanUberState *StateDescriptor;
    bool Value;
};

struct SetBooleanStateDescriptorEntity {
    struct SetBooleanStateDescriptorEntity__Class *klass;
    MonitorData *monitor;
    struct SetBooleanStateDescriptorEntity__Fields fields;
};

struct SetBooleanStateDescriptorEntity__VTable {
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

struct SetBooleanStateDescriptorEntity__StaticFields {
};

struct SetBooleanStateDescriptorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetBooleanStateDescriptorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetBooleanStateDescriptorEntity__VTable vtable;
};

struct ShowFixedTimeTextEntity_c {
    struct ShowFixedTimeTextEntity_c__Class *klass;
    MonitorData *monitor;
};

struct ShowFixedTimeTextEntity_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShowFixedTimeTextEntity_c__StaticFields {
    struct ShowFixedTimeTextEntity_c *__9;
    struct Action_1_MessageBox_HideAction_ *__9__58_0;
    struct Action *__9__58_1;
};

struct ShowFixedTimeTextEntity_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowFixedTimeTextEntity_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowFixedTimeTextEntity_c__VTable vtable;
};

struct ShowGetAbilityTextEntity__Fields {
    struct ShowTextEntity__Fields _;
    EquipmentType__Enum Ability;
    
    bool AllowEquipmentWheelWhileMovementIsDisabled;
    struct Renderer__Array *m_renderers;
};

struct ShowGetAbilityTextEntity {
    struct ShowGetAbilityTextEntity__Class *klass;
    MonitorData *monitor;
    struct ShowGetAbilityTextEntity__Fields fields;
};

struct ShowGetAbilityTextEntity__VTable {
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
    VirtualInvokeData HasFinished;
};

struct ShowGetAbilityTextEntity__StaticFields {
};

struct ShowGetAbilityTextEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowGetAbilityTextEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowGetAbilityTextEntity__VTable vtable;
};

struct ShowGetWispTextEntity__Fields {
    struct ShowTextEntity__Fields _;
    WispMessageIcon_Wisp__Enum Wisp;
    
};

struct ShowGetWispTextEntity {
    struct ShowGetWispTextEntity__Class *klass;
    MonitorData *monitor;
    struct ShowGetWispTextEntity__Fields fields;
};

struct ShowGetWispTextEntity__VTable {
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
    VirtualInvokeData HasFinished;
};

struct ShowGetWispTextEntity__StaticFields {
};

struct ShowGetWispTextEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowGetWispTextEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowGetWispTextEntity__VTable vtable;
};

struct ShowHintEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MessageProvider *m_messageProvider;
    bool m_hideExistingHint;
    float m_duration;
};

struct ShowHintEntity {
    struct ShowHintEntity__Class *klass;
    MonitorData *monitor;
    struct ShowHintEntity__Fields fields;
};

struct ShowHintEntity__VTable {
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

struct ShowHintEntity__StaticFields {
};

struct ShowHintEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowHintEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowHintEntity__VTable vtable;
};

enum class ShowQuestEntity_State__Enum : int32_t {
    NotStarted = 0x00000000,
    WaitingForMenu = 0x00000001,
    Started = 0x00000002,
    ShowingPlayer = 0x00000003,
    MovingToQuest = 0x00000004,
    ShowingQuest = 0x00000005,
    WaitingForExit = 0x00000006,
    Finished = 0x00000007,
};

struct ShowQuestEntity_State__Enum__Boxed {
    struct ShowQuestEntity_State__Enum__Class *klass;
    MonitorData *monitor;
    ShowQuestEntity_State__Enum value;
    
};

struct ShowQuestEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Quest *Quest;
    float FocusingOnPlayerDuration;
    float TimeToScrollMap;
    float AppearEffectDelay;
    bool ShouldAssignQuest;
    bool IncrementAlreadyActiveQuest;
    bool Pause;
    ShowQuestEntity_State__Enum CurrentState;
    
    float m_stateTime;
    bool m_killThisHackShouldChangeState;
    bool m_contentEndPost;
};

struct ShowQuestEntity {
    struct ShowQuestEntity__Class *klass;
    MonitorData *monitor;
    struct ShowQuestEntity__Fields fields;
};

struct ShowQuestEntity_State__Enum__VTable {
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

struct ShowQuestEntity_State__Enum__StaticFields {
};

struct ShowQuestEntity_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowQuestEntity_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowQuestEntity_State__Enum__VTable vtable;
};

struct ShowQuestEntity__VTable {
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

}
