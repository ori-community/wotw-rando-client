namespace app {
struct IEnumerator_1_UberBrightnessContrastAnimator___StaticFields {
};
struct IEnumerator_1_UberBrightnessContrastAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberBrightnessContrastAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberBrightnessContrastAnimator___VTable vtable;
};
struct List_1_UberBrightnessContrastAnimator___VTable {
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
struct List_1_UberBrightnessContrastAnimator___StaticFields {
  struct UberBrightnessContrastAnimator__Array * _emptyArray;
};
struct List_1_UberBrightnessContrastAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UberBrightnessContrastAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UberBrightnessContrastAnimator___VTable vtable;
};
struct UberBrightnessContrastAnimator__VTable {
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
struct UberBrightnessContrastAnimator__StaticFields {
  struct List_1_UberBrightnessContrastAnimator_ * Influencers;
};
struct UberBrightnessContrastAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberBrightnessContrastAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberBrightnessContrastAnimator__VTable vtable;
};

enum UberExplosionAnimator_AnimatorType__Enum : int32_t {
  UberExplosionAnimator_AnimatorType__Enum_ExplodeOnceOnStart = 0,
  UberExplosionAnimator_AnimatorType__Enum_ExplodeEveryFrame = 1,
};
struct UberExplosionAnimator_AnimatorType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberExplosionAnimator_AnimatorType__Enum value;
};
enum UberExplosionAnimator_ExplosionType__Enum : int32_t {
  UberExplosionAnimator_ExplosionType__Enum_Circle = 0,
  UberExplosionAnimator_ExplosionType__Enum_Arc = 1,
};
struct UberExplosionAnimator_ExplosionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberExplosionAnimator_ExplosionType__Enum value;
};
struct UberExplosionAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct AnimationCurve * WeightCurve;
  float OutwardSpeed;
  float Radius;
  struct Vector4 ExplodeStrength;
  enum UberExplosionAnimator_AnimatorType__Enum Type;
  enum UberExplosionAnimator_ExplosionType__Enum ExplosionMode;
  float Angle;
  float Direction;
  struct Vector3 m_directionVector;
  float m_time;
  struct Transform * m_actor;
};
struct UberExplosionAnimator {
  struct UberExplosionAnimator__Class *klass;
  struct MonitorData *monitor;
  struct UberExplosionAnimator__Fields fields;
};
struct UberExplosionAnimator__VTable {
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
struct UberExplosionAnimator__StaticFields {
};
struct UberExplosionAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberExplosionAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberExplosionAnimator__VTable vtable;
};

struct UberPostProcessAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct AnimationCurve * Curve;
  struct CameraSettingsAsset * Asset;
  struct FogSettings * Fog;
  float m_time;
  bool m_registered;
  float _Weight_k__BackingField;
  struct CameraSettings * _Settings_k__BackingField;
};
struct UberPostProcessAnimator {
  struct UberPostProcessAnimator__Class *klass;
  struct MonitorData *monitor;
  struct UberPostProcessAnimator__Fields fields;
};
struct __declspec(align(8)) FogSettings__Fields {
  struct Gradient * Gradient;
  struct Gradient * MultiplyGradient;
  float Range;
};
struct FogSettings {
  struct FogSettings__Class *klass;
  struct MonitorData *monitor;
  struct FogSettings__Fields fields;
};
struct FogSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FogSettings__StaticFields {
};
struct FogSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FogSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FogSettings__VTable vtable;
};
struct UberPostProcessAnimator__VTable {
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
  VirtualInvokeData get_Settings;
  VirtualInvokeData get_Weight;
  VirtualInvokeData get_PostInfluenceApplyOrder;
  VirtualInvokeData get_SettingsAssetForDebug;
};
struct UberPostProcessAnimator__StaticFields {
};
struct UberPostProcessAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberPostProcessAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberPostProcessAnimator__VTable vtable;
};

struct UberTurbulanceAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct AnimationCurve * SpeedWeightCurve;
  struct AnimationCurve * MagnitudeWeightCurve;
  float Speed;
  float Magnitude;
  float m_time;
};
struct UberTurbulanceAnimator {
  struct UberTurbulanceAnimator__Class *klass;
  struct MonitorData *monitor;
  struct UberTurbulanceAnimator__Fields fields;
};
struct UberTurbulanceAnimator__VTable {
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
  VirtualInvokeData get_TurbulenceMagnitude;
  VirtualInvokeData get_MagnitudeWeight;
  VirtualInvokeData get_TurbulenceSpeed;
  VirtualInvokeData get_SpeedWeight;
  VirtualInvokeData get_TurbulenceApplyOrder;
};
struct UberTurbulanceAnimator__StaticFields {
};
struct UberTurbulanceAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberTurbulanceAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberTurbulanceAnimator__VTable vtable;
};

struct __declspec(align(8)) BehaviourTreeVirtualAnimator__Fields {
  struct Nullable_1_Single_ _CustomStart_k__BackingField;
  struct Nullable_1_Single_ _CustomEnd_k__BackingField;
  struct BehaviourTree * _BehaviourTree_k__BackingField;
  struct PlaybackStatus * _PlaybackStatus_k__BackingField;
};
struct BehaviourTreeVirtualAnimator {
  struct BehaviourTreeVirtualAnimator__Class *klass;
  struct MonitorData *monitor;
  struct BehaviourTreeVirtualAnimator__Fields fields;
};
struct BehaviourTreeVirtualAnimator__VTable {
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
  VirtualInvokeData get_CustomStart;
  VirtualInvokeData set_CustomStart;
  VirtualInvokeData get_CustomEnd;
  VirtualInvokeData set_CustomEnd;
};
struct BehaviourTreeVirtualAnimator__StaticFields {
};
struct BehaviourTreeVirtualAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BehaviourTreeVirtualAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BehaviourTreeVirtualAnimator__VTable vtable;
};

struct EnemyArenaVirtualAnimator__Fields {
  struct VirtualMoonTimeline__Fields _;
  struct EnemyArenaController * _Controller_k__BackingField;
  bool m_rebuildingHiearachy;
};
struct EnemyArenaVirtualAnimator {
  struct EnemyArenaVirtualAnimator__Class *klass;
  struct MonitorData *monitor;
  struct EnemyArenaVirtualAnimator__Fields fields;
};
struct EnemyArenaVirtualAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
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
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_ConstrainedEntitiesCount;
  VirtualInvokeData get_Progress;
  VirtualInvokeData GetConstrainedEntityFrom;
  VirtualInvokeData GetConstrainedEntity;
  VirtualInvokeData get_GetITimelineEntityParent;
  VirtualInvokeData IsTheSame;
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
  VirtualInvokeData HasFinished;
  VirtualInvokeData ApproximateEvent;
  VirtualInvokeData get_UseHorizontalCollapse;
  VirtualInvokeData set_UseHorizontalCollapse;
  VirtualInvokeData OnBeforeAddChild;
  VirtualInvokeData CustomAddChild;
  VirtualInvokeData OnBeforeRemoveChild;
  VirtualInvokeData CustomRemoveChild;
  VirtualInvokeData Reset;
};
struct EnemyArenaVirtualAnimator__StaticFields {
};
struct EnemyArenaVirtualAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyArenaVirtualAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyArenaVirtualAnimator__VTable vtable;
};

struct EnemyArenaVirtualAnimator_Context {
  struct EnemyArenaController * Controller;
};
struct EnemyArenaVirtualAnimator_Context__Boxed {
  struct EnemyArenaVirtualAnimator_Context__Class *klass;
  struct MonitorData *monitor;
  struct EnemyArenaVirtualAnimator_Context fields;
};
struct EnemyArenaVirtualAnimator_Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnemyArenaVirtualAnimator_Context__StaticFields {
};
struct EnemyArenaVirtualAnimator_Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyArenaVirtualAnimator_Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyArenaVirtualAnimator_Context__VTable vtable;
};

struct EnemyArenaWaveVirtualAnimator__Fields {
  struct VirtualMoonTimeline__Fields _;
  struct EnemyArenaController * _Controller_k__BackingField;
  int32_t _WaveIndex_k__BackingField;
  struct DesiredUberStateGeneric * _DesiredState_k__BackingField;
  bool m_rebuildingHiearachy;
  struct Dictionary_2_System_Int32_System_Single_ * _EventBoard_k__BackingField;
  struct Nullable_1_Single_ _CustomStart_k__BackingField;
  struct Nullable_1_Single_ _CustomEnd_k__BackingField;
};
struct EnemyArenaWaveVirtualAnimator {
  struct EnemyArenaWaveVirtualAnimator__Class *klass;
  struct MonitorData *monitor;
  struct EnemyArenaWaveVirtualAnimator__Fields fields;
};
struct EnemyArenaWaveVirtualAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EntityRecords;
  VirtualInvokeData get_ConstraintMetaDatas;
  VirtualInvokeData get_MarkerRecords;
  VirtualInvokeData get_ExternalRecords;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData RecursivelySetupExecutionOrder;
  VirtualInvokeData get_TrimController;
  VirtualInvokeData set_TrimController;
  VirtualInvokeData get_FullAddress;
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
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_ConstrainedEntitiesCount;
  VirtualInvokeData get_Progress;
  VirtualInvokeData GetConstrainedEntityFrom;
  VirtualInvokeData GetConstrainedEntity;
  VirtualInvokeData get_GetITimelineEntityParent;
  VirtualInvokeData IsTheSame;
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
  VirtualInvokeData HasFinished;
  VirtualInvokeData ApproximateEvent;
  VirtualInvokeData get_UseHorizontalCollapse;
  VirtualInvokeData set_UseHorizontalCollapse;
  VirtualInvokeData OnBeforeAddChild;
  VirtualInvokeData CustomAddChild;
  VirtualInvokeData OnBeforeRemoveChild;
  VirtualInvokeData CustomRemoveChild;
  VirtualInvokeData get_CustomStart;
  VirtualInvokeData set_CustomStart;
  VirtualInvokeData get_CustomEnd;
  VirtualInvokeData set_CustomEnd;
  VirtualInvokeData Reset;
};
struct EnemyArenaWaveVirtualAnimator__StaticFields {
};
struct EnemyArenaWaveVirtualAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyArenaWaveVirtualAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyArenaWaveVirtualAnimator__VTable vtable;
};

struct EnemyArenaWaveVirtualAnimator_Context {
  struct EnemyArenaController * Controller;
  int32_t Index;
};
struct EnemyArenaWaveVirtualAnimator_Context__Boxed {
  struct EnemyArenaWaveVirtualAnimator_Context__Class *klass;
  struct MonitorData *monitor;
  struct EnemyArenaWaveVirtualAnimator_Context fields;
};
struct EnemyArenaWaveVirtualAnimator_Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnemyArenaWaveVirtualAnimator_Context__StaticFields {
};
struct EnemyArenaWaveVirtualAnimator_Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyArenaWaveVirtualAnimator_Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyArenaWaveVirtualAnimator_Context__VTable vtable;
};

struct BaseAnimator_c {
  struct BaseAnimator_c__Class *klass;
  struct MonitorData *monitor;
};
struct BaseAnimator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BaseAnimator_c__StaticFields {
  struct BaseAnimator_c * __9;
  struct Action * __9__83_0;
};
struct BaseAnimator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseAnimator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseAnimator_c__VTable vtable;
};

struct BaseAnimatorSerializer__Fields {
  struct SaveSerialize__Fields _;
  struct BaseAnimator__Array * m_animators;
};
struct BaseAnimatorSerializer {
  struct BaseAnimatorSerializer__Class *klass;
  struct MonitorData *monitor;
  struct BaseAnimatorSerializer__Fields fields;
};
struct BaseAnimatorSerializer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct BaseAnimatorSerializer__StaticFields {
};
struct BaseAnimatorSerializer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseAnimatorSerializer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseAnimatorSerializer__VTable vtable;
};

struct CameraAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * TargetSwitchCurve;
  struct AnimationCurve * ZoomOffsetCurve;
  struct Transform * Target;
  bool IgnoreTargetZ;
  float TimeToReturnToCharacter;
  float TransitionDuration;
  bool IgnoreScrollLock;
  float m_smoothMoveDuration;
  float m_originalZoom;
  struct Vector3 m_desiredPosition;
  bool m_restored;
};
struct CameraAnimator {
  struct CameraAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CameraAnimator__Fields fields;
};
struct CameraAnimator__VTable {
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
struct CameraAnimator__StaticFields {
};
struct CameraAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraAnimator__VTable vtable;
};

struct CameraMultiplyMotionBlurAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * AnimationCurve;
};
struct CameraMultiplyMotionBlurAnimator {
  struct CameraMultiplyMotionBlurAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CameraMultiplyMotionBlurAnimator__Fields fields;
};
struct CameraMultiplyMotionBlurAnimator__VTable {
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
struct CameraMultiplyMotionBlurAnimator__StaticFields {
};
struct CameraMultiplyMotionBlurAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraMultiplyMotionBlurAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraMultiplyMotionBlurAnimator__VTable vtable;
};

struct CapsuleColliderAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct CapsuleCollider * Target;
  struct AnimationCurve * HeigthCurve;
  bool Loop;
  float m_originalHeight;
};
struct CapsuleColliderAnimator {
  struct CapsuleColliderAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CapsuleColliderAnimator__Fields fields;
};
struct CapsuleColliderAnimator__VTable {
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
struct CapsuleColliderAnimator__StaticFields {
};
struct CapsuleColliderAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CapsuleColliderAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CapsuleColliderAnimator__VTable vtable;
};

struct CharacterMaxSpeedAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * HorizontalInputMultiplier;
  float m_currentTime;
  bool m_restored;
};
struct CharacterMaxSpeedAnimator {
  struct CharacterMaxSpeedAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CharacterMaxSpeedAnimator__Fields fields;
};
struct CharacterMaxSpeedAnimator__VTable {
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
struct CharacterMaxSpeedAnimator__StaticFields {
};
struct CharacterMaxSpeedAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterMaxSpeedAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterMaxSpeedAnimator__VTable vtable;
};

enum DamagerAnimator_DamagerShape__Enum : int32_t {
  DamagerAnimator_DamagerShape__Enum_Box = 0,
  DamagerAnimator_DamagerShape__Enum_Circle = 1,
};
struct DamagerAnimator_DamagerShape__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DamagerAnimator_DamagerShape__Enum value;
};
enum DamagerAnimator_DirectionType__Enum : int32_t {
  DamagerAnimator_DirectionType__Enum_Circular = 0,
  DamagerAnimator_DirectionType__Enum_Directional = 1,
};
struct DamagerAnimator_DirectionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DamagerAnimator_DirectionType__Enum value;
};
struct DamagerAnimator__Fields {
  struct BaseAnimator__Fields _;
  float ClipDuration;
  int32_t priority;
  enum DamagerAnimator_DamagerShape__Enum Shape;
  struct Vector3 Size;
  float Radius;
  struct Transform * attachBone;
  struct VelocityBezierSplineComponent * Spline;
  float DamageAmount;
  enum DamageType__Enum DamageType;
  enum AbilityType__Enum AbilityType;
  struct LayerMask layerMask;
  struct DamageOwner * DamageOwner;
  struct AnimationCurve * KickbackCurve;
  float DamageKickbackStrength;
  struct GameObject * DamageReceivedEffectPrefab;
  struct GameObject * DamageBlockedEffectPrefab;
  enum DamagerAnimator_DirectionType__Enum directionType;
  struct Vector3 DamageDirection;
  int32_t m_damageID;
  float m_lastTime;
  struct BaseSpline_SplineIterator * m_splineIterator;
  bool enteredSampling;
};
struct DamagerAnimator {
  struct DamagerAnimator__Class *klass;
  struct MonitorData *monitor;
  struct DamagerAnimator__Fields fields;
};
struct DamagerAnimator__VTable {
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
};}