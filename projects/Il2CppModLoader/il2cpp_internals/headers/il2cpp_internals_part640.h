namespace app {
struct Comparison_1_CameraTarget_TargetLayer___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_CameraTarget_TargetLayer_ {
  struct Comparison_1_CameraTarget_TargetLayer___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_CameraTarget_TargetLayer___Fields fields;
};
struct Comparison_1_CameraTarget_TargetLayer___VTable {
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
struct Comparison_1_CameraTarget_TargetLayer___StaticFields {
};
struct Comparison_1_CameraTarget_TargetLayer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_CameraTarget_TargetLayer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_CameraTarget_TargetLayer___VTable vtable;
};
struct CameraTarget_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CameraTarget_c__StaticFields {
  struct CameraTarget_c * __9;
  struct Comparison_1_CameraTarget_TargetLayer_ * __9__10_0;
};
struct CameraTarget_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraTarget_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraTarget_c__VTable vtable;
};

struct CurrentCameraTransformProvider__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
};
struct CurrentCameraTransformProvider {
  struct CurrentCameraTransformProvider__Class *klass;
  struct MonitorData *monitor;
  struct CurrentCameraTransformProvider__Fields fields;
};
struct CurrentCameraTransformProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};
struct CurrentCameraTransformProvider__StaticFields {
};
struct CurrentCameraTransformProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CurrentCameraTransformProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CurrentCameraTransformProvider__VTable vtable;
};

struct MaintainAspectRatio__Fields {
  struct MonoBehaviour__Fields _;
  struct Camera * m_camera;
};
struct MaintainAspectRatio {
  struct MaintainAspectRatio__Class *klass;
  struct MonitorData *monitor;
  struct MaintainAspectRatio__Fields fields;
};
struct MaintainAspectRatio__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MaintainAspectRatio__StaticFields {
};
struct MaintainAspectRatio__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaintainAspectRatio__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaintainAspectRatio__VTable vtable;
};

enum SceneSettingsTransitionZone_Direction__Enum : int32_t {
  SceneSettingsTransitionZone_Direction__Enum_TransitionLeft = 0,
  SceneSettingsTransitionZone_Direction__Enum_TransitionRight = 1,
  SceneSettingsTransitionZone_Direction__Enum_TransitionUp = 2,
  SceneSettingsTransitionZone_Direction__Enum_TransitionDown = 3,
};
struct SceneSettingsTransitionZone_Direction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneSettingsTransitionZone_Direction__Enum value;
};
struct SceneSettingsTransitionZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Rect m_boundingRect;
  struct SceneSettings * m_fromSettings;
  struct SceneSettings * m_toSettings;
  enum SceneSettingsTransitionZone_Direction__Enum m_direction;
};
struct SceneSettingsTransitionZone {
  struct SceneSettingsTransitionZone__Class *klass;
  struct MonitorData *monitor;
  struct SceneSettingsTransitionZone__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_SceneSettingsTransitionZone___Fields {
  struct List_1_SceneSettingsTransitionZone_ * m_objects;
};
struct AllContainer_1_SceneSettingsTransitionZone_ {
  struct AllContainer_1_SceneSettingsTransitionZone___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_SceneSettingsTransitionZone___Fields fields;
};
struct __declspec(align(8)) List_1_SceneSettingsTransitionZone___Fields {
  struct SceneSettingsTransitionZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SceneSettingsTransitionZone_ {
  struct List_1_SceneSettingsTransitionZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SceneSettingsTransitionZone___Fields fields;
};
struct SceneSettingsTransitionZone__Array {
  struct SceneSettingsTransitionZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneSettingsTransitionZone * vector[32];
};
struct IEnumerator_1_SceneSettingsTransitionZone_ {
  struct IEnumerator_1_SceneSettingsTransitionZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SceneSettingsTransitionZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SceneSettingsTransitionZone___StaticFields {
};
struct IEnumerator_1_SceneSettingsTransitionZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SceneSettingsTransitionZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SceneSettingsTransitionZone___VTable vtable;
};
struct List_1_SceneSettingsTransitionZone___VTable {
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
struct List_1_SceneSettingsTransitionZone___StaticFields {
  struct SceneSettingsTransitionZone__Array * _emptyArray;
};
struct List_1_SceneSettingsTransitionZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SceneSettingsTransitionZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SceneSettingsTransitionZone___VTable vtable;
};
struct AllContainer_1_SceneSettingsTransitionZone___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_SceneSettingsTransitionZone___StaticFields {
};
struct AllContainer_1_SceneSettingsTransitionZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_SceneSettingsTransitionZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_SceneSettingsTransitionZone___VTable vtable;
};
struct SceneSettingsTransitionZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct SceneSettingsTransitionZone__StaticFields {
  struct AllContainer_1_SceneSettingsTransitionZone_ * All;
};
struct SceneSettingsTransitionZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneSettingsTransitionZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneSettingsTransitionZone__VTable vtable;
};

struct SetCameraSettingsAction__Fields {
  struct ActionMethod__Fields _;
  struct CameraSettingsAsset * Settings;
  struct Gradient * FogGradient;
  struct Gradient * MultiplyFogGradient;
  int32_t Range;
};
struct SetCameraSettingsAction {
  struct SetCameraSettingsAction__Class *klass;
  struct MonitorData *monitor;
  struct SetCameraSettingsAction__Fields fields;
};
struct SetCameraSettingsAction__VTable {
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
struct SetCameraSettingsAction__StaticFields {
};
struct SetCameraSettingsAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetCameraSettingsAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetCameraSettingsAction__VTable vtable;
};

enum VerticalCameraSettingsZone_Mode__Enum : int32_t {
  VerticalCameraSettingsZone_Mode__Enum_Vertical = 0,
  VerticalCameraSettingsZone_Mode__Enum_Horizontal = 1,
  VerticalCameraSettingsZone_Mode__Enum_Radial = 2,
};
struct VerticalCameraSettingsZone_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VerticalCameraSettingsZone_Mode__Enum value;
};
struct VerticalCameraSettingsZone__Fields {
  struct MonoBehaviour__Fields _;
  enum VerticalCameraSettingsZone_Mode__Enum mode;
  float Time;
  float Duration;
  struct CameraSettings * m_currentSettings;
  struct Rect m_bounds;
  float _Weight_k__BackingField;
  bool m_jobsQueued;
  struct List_1_VerticalCameraSettingsZone_CameraPostMetaData_ * Items;
};
struct VerticalCameraSettingsZone {
  struct VerticalCameraSettingsZone__Class *klass;
  struct MonitorData *monitor;
  struct VerticalCameraSettingsZone__Fields fields;
};
struct __declspec(align(8)) List_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields {
  struct VerticalCameraSettingsZone_CameraPostMetaData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_VerticalCameraSettingsZone_CameraPostMetaData_ {
  struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields fields;
};
struct __declspec(align(8)) VerticalCameraSettingsZone_CameraPostMetaData__Fields {
  struct CameraSettings * CameraSettings;
  struct CameraSettingsAsset * CameraSettingsAsset;
  struct Gradient * Fog;
  struct Gradient * MultiplyFog;
  float FogRange;
  float Time;
};
struct VerticalCameraSettingsZone_CameraPostMetaData {
  struct VerticalCameraSettingsZone_CameraPostMetaData__Class *klass;
  struct MonitorData *monitor;
  struct VerticalCameraSettingsZone_CameraPostMetaData__Fields fields;
};
struct VerticalCameraSettingsZone_CameraPostMetaData__Array {
  struct VerticalCameraSettingsZone_CameraPostMetaData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VerticalCameraSettingsZone_CameraPostMetaData * vector[32];
};
struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData_ {
  struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___Class *klass;
  struct MonitorData *monitor;
};
enum PostProcessInfluencerOrder__Enum : int32_t {
  PostProcessInfluencerOrder__Enum_PostStateController = -1,
  PostProcessInfluencerOrder__Enum_CameraSettingsZones = 0,
  PostProcessInfluencerOrder__Enum_PostAnimator = 1,
};
struct PostProcessInfluencerOrder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PostProcessInfluencerOrder__Enum value;
};
struct VerticalCameraSettingsZone_CameraPostMetaData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VerticalCameraSettingsZone_CameraPostMetaData__StaticFields {
};
struct VerticalCameraSettingsZone_CameraPostMetaData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VerticalCameraSettingsZone_CameraPostMetaData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VerticalCameraSettingsZone_CameraPostMetaData__VTable vtable;
};
struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields {
};
struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable vtable;
};
struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable {
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
struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields {
  struct VerticalCameraSettingsZone_CameraPostMetaData__Array * _emptyArray;
};
struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable vtable;
};
struct VerticalCameraSettingsZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Settings;
  VirtualInvokeData get_Weight;
  VirtualInvokeData get_PostInfluenceApplyOrder;
  VirtualInvokeData get_SettingsAssetForDebug;
  VirtualInvokeData UpdatePostInfluence;
  VirtualInvokeData PostUpdatePostInfluence;
};
struct VerticalCameraSettingsZone__StaticFields {
};
struct VerticalCameraSettingsZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VerticalCameraSettingsZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VerticalCameraSettingsZone__VTable vtable;
};

struct VerticalCameraSettingsZone_c {
  struct VerticalCameraSettingsZone_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData_ {
  struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Fields fields;
};
struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable {
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
struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields {
};
struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData___VTable vtable;
};
struct VerticalCameraSettingsZone_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VerticalCameraSettingsZone_c__StaticFields {
  struct VerticalCameraSettingsZone_c * __9;
  struct Comparison_1_VerticalCameraSettingsZone_CameraPostMetaData_ * __9__24_0;
};
struct VerticalCameraSettingsZone_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VerticalCameraSettingsZone_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VerticalCameraSettingsZone_c__VTable vtable;
};

enum ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum : int32_t {
  ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum_MovePlayerToWave = 0,
  ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum_MovePlayerToEnd = 1,
  ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum_StartWave = 2,
  ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum_EndWave = 3,
  ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum_CollectedReward = 4,
};
struct ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum value;
};
struct ChallengeShrineAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
  enum ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum TriggerType;
};
struct ChallengeShrineAnimatorEntity {
  struct ChallengeShrineAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct ChallengeShrineAnimatorEntity__Fields fields;
};
struct ChallengeShrineAnimatorEntity__VTable {
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
struct ChallengeShrineAnimatorEntity__StaticFields {
};
struct ChallengeShrineAnimatorEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChallengeShrineAnimatorEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChallengeShrineAnimatorEntity__VTable vtable;
};

struct ChallengeShrineManager__Fields {
  struct MonoBehaviour__Fields _;
  struct ChallengeShrineManager_ChallengeWave__Array * ChallengeWaves;
  struct ChallengeShrineManager_AddTimeTrigger__Array * AdditionalTimeEnemyKillTriggers;
  struct MoonReference_1_ColosseumTimer_ * ColosseumTimer;
  struct MoonReference_1_UnityEngine_GameObject_ * InitialRewardObject;
  struct MoonReference_1_UnityEngine_GameObject_ * AlreadyCompletedRewardObject;
  struct MoonReference_1_UnityEngine_GameObject_ * ShrineUI;
  struct MoonReference_1_UnityEngine_Transform_ * RewardRoomPosition;
  struct MoonReference_1_UnityEngine_Transform_ * MainRoomPosition;
  struct DesiredUberStateBool * CollectedShrineRewardUberState;
  struct MoonTimeline * ChallengeFailedTimeline;
  struct MoonTimeline * NextWaveTimeline;
  struct MoonTimeline * ChallengeCompletedTimeline;
  struct MoonTimeline * TimeAddedTimeline;
  struct MoonTimeline * RewardCollectedTimeline;
  struct MessageProvider * WaveCompletedMessage;
  float m_challengeTimer;
  int32_t m_currentWave;
  bool m_challengeOngoing;
  bool m_timerPaused;
  struct List_1_ChallengeShrineTrigger_ * m_triggeredTriggers;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ChallengeShrineManager {
  struct ChallengeShrineManager__Class *klass;
  struct MonitorData *monitor;
  struct ChallengeShrineManager__Fields fields;
};
struct ChallengeShrineManager_ChallengeWave {
  struct MoonReference_1_UnityEngine_Transform_ * StartPosition;
  float TimeToComplete;
  struct MessageProvider * WaveStartMessage;
  struct MoonReference_1_LegacyTrigger_ * OptionalEndWaveTrigger;
};
struct ChallengeShrineManager_ChallengeWave__Boxed {
  struct ChallengeShrineManager_ChallengeWave__Class *klass;
  struct MonitorData *monitor;
  struct ChallengeShrineManager_ChallengeWave fields;
};
struct ChallengeShrineManager_ChallengeWave__Array {
  struct ChallengeShrineManager_ChallengeWave__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ChallengeShrineManager_ChallengeWave vector[32];
};
struct __declspec(align(8)) MoonReference_1_LegacyTrigger___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_LegacyTrigger_ * m_cachedProxyType;
  struct LegacyTrigger * m_volatileValue;
};
struct MoonReference_1_LegacyTrigger_ {
  struct MoonReference_1_LegacyTrigger___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_LegacyTrigger___Fields fields;
};
struct IMoonType_1_LegacyTrigger_ {
  struct IMoonType_1_LegacyTrigger___Class *klass;
  struct MonitorData *monitor;
};
struct ChallengeShrineManager_AddTimeTrigger {
  struct MoonReference_1_LegacyTrigger_ * Trigger;
  float TimeToAdd;
};
struct ChallengeShrineManager_AddTimeTrigger__Boxed {
  struct ChallengeShrineManager_AddTimeTrigger__Class *klass;
  struct MonitorData *monitor;
  struct ChallengeShrineManager_AddTimeTrigger fields;
};
struct ChallengeShrineManager_AddTimeTrigger__Array {
  struct ChallengeShrineManager_AddTimeTrigger__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ChallengeShrineManager_AddTimeTrigger vector[32];
};
struct __declspec(align(8)) MoonReference_1_ColosseumTimer___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ColosseumTimer_ * m_cachedProxyType;
  struct ColosseumTimer * m_volatileValue;
};
struct MoonReference_1_ColosseumTimer_ {
  struct MoonReference_1_ColosseumTimer___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ColosseumTimer___Fields fields;
};
struct IMoonType_1_ColosseumTimer_ {
  struct IMoonType_1_ColosseumTimer___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ChallengeShrineTrigger___Fields {
  struct ChallengeShrineTrigger__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ChallengeShrineTrigger_ {
  struct List_1_ChallengeShrineTrigger___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ChallengeShrineTrigger___Fields fields;
};
enum ChallengeShrineTrigger_ShrineTriggerType__Enum : int32_t {
  ChallengeShrineTrigger_ShrineTriggerType__Enum_StartShrine = 0,
  ChallengeShrineTrigger_ShrineTriggerType__Enum_AddTime = 1,
  ChallengeShrineTrigger_ShrineTriggerType__Enum_EndWave = 2,
};
struct ChallengeShrineTrigger_ShrineTriggerType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ChallengeShrineTrigger_ShrineTriggerType__Enum value;
};
struct ChallengeShrineTrigger__Fields {
  struct MonoBehaviour__Fields _;
  enum ChallengeShrineTrigger_ShrineTriggerType__Enum TriggerType;
  float CheckpointTimeToAdd;
  bool m_alreadyTriggered;
};
struct ChallengeShrineTrigger {
  struct ChallengeShrineTrigger__Class *klass;
  struct MonitorData *monitor;
  struct ChallengeShrineTrigger__Fields fields;
};
struct ChallengeShrineTrigger__Array {
  struct ChallengeShrineTrigger__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ChallengeShrineTrigger * vector[32];
};
struct IEnumerator_1_ChallengeShrineTrigger_ {
  struct IEnumerator_1_ChallengeShrineTrigger___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_LegacyTrigger___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_LegacyTrigger___StaticFields {
};
struct IMoonType_1_LegacyTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_LegacyTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_LegacyTrigger___VTable vtable;
};
struct MoonReference_1_LegacyTrigger___VTable {
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
struct MoonReference_1_LegacyTrigger___StaticFields {
};
struct MoonReference_1_LegacyTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_LegacyTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_LegacyTrigger___VTable vtable;
};
struct ChallengeShrineManager_ChallengeWave__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChallengeShrineManager_ChallengeWave__StaticFields {
};
struct ChallengeShrineManager_ChallengeWave__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChallengeShrineManager_ChallengeWave__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChallengeShrineManager_ChallengeWave__VTable vtable;
};
struct ChallengeShrineManager_AddTimeTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChallengeShrineManager_AddTimeTrigger__StaticFields {
};
struct ChallengeShrineManager_AddTimeTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChallengeShrineManager_AddTimeTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChallengeShrineManager_AddTimeTrigger__VTable vtable;
};
struct IMoonType_1_ColosseumTimer___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ColosseumTimer___StaticFields {
};
struct IMoonType_1_ColosseumTimer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ColosseumTimer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ColosseumTimer___VTable vtable;
};
struct MoonReference_1_ColosseumTimer___VTable {
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
struct MoonReference_1_ColosseumTimer___StaticFields {
};
struct MoonReference_1_ColosseumTimer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ColosseumTimer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ColosseumTimer___VTable vtable;
};
struct ChallengeShrineTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChallengeShrineTrigger__StaticFields {
};
struct ChallengeShrineTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChallengeShrineTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChallengeShrineTrigger__VTable vtable;
};
struct IEnumerator_1_ChallengeShrineTrigger___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ChallengeShrineTrigger___StaticFields {
};
struct IEnumerator_1_ChallengeShrineTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ChallengeShrineTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ChallengeShrineTrigger___VTable vtable;
};
struct List_1_ChallengeShrineTrigger___VTable {
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
struct List_1_ChallengeShrineTrigger___StaticFields {
  struct ChallengeShrineTrigger__Array * _emptyArray;
};
struct List_1_ChallengeShrineTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ChallengeShrineTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ChallengeShrineTrigger___VTable vtable;
};
struct ChallengeShrineManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct ChallengeShrineManager__StaticFields {
  struct ChallengeShrineManager * ActiveChallengeShrine;
};
struct ChallengeShrineManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChallengeShrineManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChallengeShrineManager__VTable vtable;
};

struct CharacterAnimationController__Fields {
  struct Suspendable__Fields _;
  struct List_1_CharacterAnimationStateBase_ * States;
  struct CharacterAnimationStateBase * CurrentState;
  struct SpriteAnimatorWithTransitions * SpriteAnimator;
  struct CharacterSpriteMirror * SpriteMirror;
  bool m_wasFacingLeft;
  bool _IsSuspended_k__BackingField;
};
struct CharacterAnimationController {
  struct CharacterAnimationController__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationController__Fields fields;
};
struct __declspec(align(8)) List_1_CharacterAnimationStateBase___Fields {
  struct CharacterAnimationStateBase__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CharacterAnimationStateBase_ {
  struct List_1_CharacterAnimationStateBase___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CharacterAnimationStateBase___Fields fields;
};
struct CharacterAnimationStateBase__Fields {
  struct MonoBehaviour__Fields _;
};
struct CharacterAnimationStateBase {
  struct CharacterAnimationStateBase__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationStateBase__Fields fields;
};
struct CharacterAnimationStateBase__Array {
  struct CharacterAnimationStateBase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CharacterAnimationStateBase * vector[32];
};
struct IEnumerator_1_CharacterAnimationStateBase_ {
  struct IEnumerator_1_CharacterAnimationStateBase___Class *klass;
  struct MonitorData *monitor;
};
struct CharacterAnimationStateBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData OnAnimationEnd;
  VirtualInvokeData __unknown_1;
};}