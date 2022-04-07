namespace app {
struct CartographerPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
  VirtualInvokeData OnSceneRootPreDisable;
  VirtualInvokeData get_Prefab;
  VirtualInvokeData get_RequiresGroundToSpawn;
  VirtualInvokeData get_CheckForOverlap;
  VirtualInvokeData ClearPrefabLinks;
  VirtualInvokeData get_CanSpawn;
  VirtualInvokeData InstantiateInstance;
  VirtualInvokeData PoolCurrentInstance;
  VirtualInvokeData Spawn;
  VirtualInvokeData OnStart;
  VirtualInvokeData OnPlaceholderEnable;
  VirtualInvokeData OnPlaceholderDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnHealthZero;
  VirtualInvokeData OnDeath;
  VirtualInvokeData UpdateAutoSpawnState;
  VirtualInvokeData UpdateSpawnOnEventState;
  VirtualInvokeData get_IsOnScreenPaddedExtended;
  VirtualInvokeData get_IsOnScreenPadded;
  VirtualInvokeData get_IsOnScreen;
  VirtualInvokeData InstantiateFromPooledObj;
  VirtualInvokeData IsUsingVariations;
  VirtualInvokeData CanUseAutosetupPositionInOnSand;
};
struct CartographerPlaceholder__StaticFields {
};
struct CartographerPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartographerPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartographerPlaceholder__VTable vtable;
};

enum NPCMessageBox_State__Enum : int32_t {
  NPCMessageBox_State__Enum_Writing = 0,
  NPCMessageBox_State__Enum_Completed = 1,
  NPCMessageBox_State__Enum_Inactive = 2,
};
struct NPCMessageBox_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPCMessageBox_State__Enum value;
};
struct NPCMessageBox__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * MessageBox;
  struct InteractionBinding * XInteractionBinding;
  struct InteractionBinding * YInteractionBinding;
  struct InteractionBinding * AInteractionBinding;
  struct InteractionBinding * BInteractionBinding;
  struct GameObject * ButtonGroup;
  struct GameObject * ButtonX;
  struct GameObject * ButtonY;
  struct GameObject * ButtonA;
  struct GameObject * ButtonB;
  float ButtonXStep;
  enum NPCMessageBox_State__Enum m_state;
  struct BaseAnimator * ButtonAnimator;
  float WaitTimeFirstMessage;
  float m_remainingWaitTime;
  bool m_prevLockState;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
  struct SoundHost * SoundHost;
  struct SoundSource * MessageProviderSoundSource;
  struct SoundSource * MessageFinishedSound;
  struct SoundSource * NextMessageSound;
  struct SoundSource * CloseMessageBoxSound;
  float m_buttonLayoutOffset;
  float m_lastButtonRightX;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct NPCMessageBox {
  struct NPCMessageBox__Class *klass;
  struct MonitorData *monitor;
  struct NPCMessageBox__Fields fields;
};
struct NPCMessageBox__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct NPCMessageBox__StaticFields {
};
struct NPCMessageBox__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NPCMessageBox__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NPCMessageBox__VTable vtable;
};

struct NPCMessageBoxModifier__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject__Array * HideableGameObjects;
};
struct NPCMessageBoxModifier {
  struct NPCMessageBoxModifier__Class *klass;
  struct MonitorData *monitor;
  struct NPCMessageBoxModifier__Fields fields;
};
struct NPCMessageBoxModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NPCMessageBoxModifier__StaticFields {
};
struct NPCMessageBoxModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NPCMessageBoxModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NPCMessageBoxModifier__VTable vtable;
};

struct LookBlendAnimationControl__Fields {
  struct MonoBehaviour__Fields _;
  struct FloatAnimationParameter * LookAngleParameter;
  struct MoonAnimator * Animator;
  float LookOffsetX;
  struct Sensor * m_sensor;
};
struct LookBlendAnimationControl {
  struct LookBlendAnimationControl__Class *klass;
  struct MonitorData *monitor;
  struct LookBlendAnimationControl__Fields fields;
};
struct LookBlendAnimationControl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LookBlendAnimationControl__StaticFields {
};
struct LookBlendAnimationControl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LookBlendAnimationControl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LookBlendAnimationControl__VTable vtable;
};

enum ShardTraderNPC_State__Enum : int32_t {
  ShardTraderNPC_State__Enum_Idle = 0,
  ShardTraderNPC_State__Enum_MoveOriToPosition = 1,
  ShardTraderNPC_State__Enum_Interaction = 2,
  ShardTraderNPC_State__Enum_OpenShop = 3,
  ShardTraderNPC_State__Enum_AfterShop = 4,
  ShardTraderNPC_State__Enum_DidNotBuy = 5,
};
struct ShardTraderNPC_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShardTraderNPC_State__Enum value;
};
struct ShardTraderNPC__Fields {
  struct BaseNPC__Fields _;
  struct LayerMask CollisionMaskCanInteract;
  struct List_1_SpiritShardType_ * ShardsInStock;
  struct MessageProvider * InteractionHintMessage;
  struct MessageProvider * InteractionMessageProvider;
  struct InteractionSettings * OpenShopInteraction;
  struct InteractionSettings * ShardsPurcahsedInteraction;
  struct MessageProvider * NoPurchaseMessageProvider;
  struct MessageProvider * AfterShopMessageProvider;
  struct CameraOffsetZone * InteractionCameraOffsetZone;
  struct MoonTimeline * TalkingTimeline;
  struct MoonTimeline * OpenShopTimeline;
  struct Locomotion * TurningHandler;
  struct Transform * OriPositionForInteraction;
  float OriPositionMoveRate;
  struct MoonAnimation * OriMoveToPositionAnimation;
  struct GameObject * m_shardEntity;
  enum ShardTraderNPC_State__Enum m_currentState;
  float m_currentStateTime;
  struct MessageBox * m_interactionHintMessageBox;
  struct RuntimeGameWorldArea * m_runtimeArea;
  bool m_moveOri;
  struct Vector2 m_oriInteractionPosition;
  struct DynamicDataResolver * m_dataResolver;
};
struct ShardTraderNPC {
  struct ShardTraderNPC__Class *klass;
  struct MonitorData *monitor;
  struct ShardTraderNPC__Fields fields;
};
struct ShardTraderNPC__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
};
struct ShardTraderNPC__StaticFields {
};
struct ShardTraderNPC__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShardTraderNPC__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShardTraderNPC__VTable vtable;
};

struct __declspec(align(8)) MeshRendererFrustrumOptimiser__Fields {
  struct GameObject * GameObject;
  struct Bounds BoundingBox;
  bool m_outsideFrustum;
};
struct MeshRendererFrustrumOptimiser {
  struct MeshRendererFrustrumOptimiser__Class *klass;
  struct MonitorData *monitor;
  struct MeshRendererFrustrumOptimiser__Fields fields;
};
struct MeshRendererFrustrumOptimiser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct MeshRendererFrustrumOptimiser__StaticFields {
};
struct MeshRendererFrustrumOptimiser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshRendererFrustrumOptimiser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshRendererFrustrumOptimiser__VTable vtable;
};

struct CameraFrustumArtOptimizer__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_MeshRendererFrustrumOptimiser_ * Sprites;
};
struct CameraFrustumArtOptimizer {
  struct CameraFrustumArtOptimizer__Class *klass;
  struct MonitorData *monitor;
  struct CameraFrustumArtOptimizer__Fields fields;
};
struct __declspec(align(8)) List_1_MeshRendererFrustrumOptimiser___Fields {
  struct MeshRendererFrustrumOptimiser__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MeshRendererFrustrumOptimiser_ {
  struct List_1_MeshRendererFrustrumOptimiser___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MeshRendererFrustrumOptimiser___Fields fields;
};
struct MeshRendererFrustrumOptimiser__Array {
  struct MeshRendererFrustrumOptimiser__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeshRendererFrustrumOptimiser * vector[32];
};
struct IEnumerator_1_MeshRendererFrustrumOptimiser_ {
  struct IEnumerator_1_MeshRendererFrustrumOptimiser___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_MeshRendererFrustrumOptimiser___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MeshRendererFrustrumOptimiser___StaticFields {
};
struct IEnumerator_1_MeshRendererFrustrumOptimiser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MeshRendererFrustrumOptimiser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MeshRendererFrustrumOptimiser___VTable vtable;
};
struct List_1_MeshRendererFrustrumOptimiser___VTable {
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
struct List_1_MeshRendererFrustrumOptimiser___StaticFields {
  struct MeshRendererFrustrumOptimiser__Array * _emptyArray;
};
struct List_1_MeshRendererFrustrumOptimiser___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MeshRendererFrustrumOptimiser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MeshRendererFrustrumOptimiser___VTable vtable;
};
struct CameraFrustumArtOptimizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CameraFrustumArtOptimizer__StaticFields {
};
struct CameraFrustumArtOptimizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraFrustumArtOptimizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraFrustumArtOptimizer__VTable vtable;
};

struct Timer_2 {
  struct Timer_2__Class *klass;
  struct MonitorData *monitor;
};
struct Timer_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Timer_2__StaticFields {
};
struct Timer_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Timer_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Timer_2__VTable vtable;
};

struct CameraFrustumOptimizer__Fields {
  struct MonoBehaviour__Fields _;
  bool m_visualDebugRegistered;
  bool m_debugEnabled;
  bool EnableDebugForArtCells;
  bool Debug;
  bool m_enabled;
  struct Vector3 m_lastCalculationCameraPosition;
  bool m_activating;
  struct NativeArray_1_System_Byte_ insideResults;
  int32_t m_forceCount;
};
struct CameraFrustumOptimizer {
  struct CameraFrustumOptimizer__Class *klass;
  struct MonitorData *monitor;
  struct CameraFrustumOptimizer__Fields fields;
};
struct CameraFrustumOptimizer_BoundsCache {
  struct NativeArray_1_UnityEngine_Bounds_ cachedBounds;
  struct Int32__Array * nonCachable;
  int32_t cachedBoundsCount;
  int32_t nonCachableCount;
  bool dirty;
};
struct CameraFrustumOptimizer_BoundsCache__Boxed {
  struct CameraFrustumOptimizer_BoundsCache__Class *klass;
  struct MonitorData *monitor;
  struct CameraFrustumOptimizer_BoundsCache fields;
};
struct __declspec(align(8)) AllContainer_1_IFrustumOptimizable___Fields {
  struct List_1_IFrustumOptimizable_ * m_objects;
};
struct AllContainer_1_IFrustumOptimizable_ {
  struct AllContainer_1_IFrustumOptimizable___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_IFrustumOptimizable___Fields fields;
};
struct __declspec(align(8)) List_1_IFrustumOptimizable___Fields {
  struct IFrustumOptimizable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IFrustumOptimizable_ {
  struct List_1_IFrustumOptimizable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IFrustumOptimizable___Fields fields;
};
struct IFrustumOptimizable {
  struct IFrustumOptimizable__Class *klass;
  struct MonitorData *monitor;
};
struct IFrustumOptimizable__Array {
  struct IFrustumOptimizable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IFrustumOptimizable * vector[32];
};
struct IEnumerator_1_IFrustumOptimizable_ {
  struct IEnumerator_1_IFrustumOptimizable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Game_IFrustumEnabled___Fields {
  struct IFrustumEnabled__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Game_IFrustumEnabled_ {
  struct List_1_Game_IFrustumEnabled___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Game_IFrustumEnabled___Fields fields;
};
struct IFrustumEnabled {
  struct IFrustumEnabled__Class *klass;
  struct MonitorData *monitor;
};
struct IFrustumEnabled__Array {
  struct IFrustumEnabled__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IFrustumEnabled * vector[32];
};
struct IEnumerator_1_Game_IFrustumEnabled_ {
  struct IEnumerator_1_Game_IFrustumEnabled___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_CameraFrustumOptimizer_EarlyZActivation___Fields {
  struct CameraFrustumOptimizer_EarlyZActivation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CameraFrustumOptimizer_EarlyZActivation_ {
  struct List_1_CameraFrustumOptimizer_EarlyZActivation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CameraFrustumOptimizer_EarlyZActivation___Fields fields;
};
struct CameraFrustumOptimizer_EarlyZActivation {
  struct MeshRenderer * renderer;
  int32_t delayCount;
};
struct CameraFrustumOptimizer_EarlyZActivation__Boxed {
  struct CameraFrustumOptimizer_EarlyZActivation__Class *klass;
  struct MonitorData *monitor;
  struct CameraFrustumOptimizer_EarlyZActivation fields;
};
struct CameraFrustumOptimizer_EarlyZActivation__Array {
  struct CameraFrustumOptimizer_EarlyZActivation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CameraFrustumOptimizer_EarlyZActivation vector[32];
};
struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation_ {
  struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___Class *klass;
  struct MonitorData *monitor;
};
enum RenderingType__Enum : int32_t {
  RenderingType__Enum_Primitives = 0,
  RenderingType__Enum_Meshes = 1,
};
struct RenderingType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderingType__Enum value;
};
struct CameraFrustumOptimizer_BoundsCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CameraFrustumOptimizer_BoundsCache__StaticFields {
};
struct CameraFrustumOptimizer_BoundsCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraFrustumOptimizer_BoundsCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraFrustumOptimizer_BoundsCache__VTable vtable;
};
struct IFrustumOptimizable__VTable {
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct IFrustumOptimizable__StaticFields {
};
struct IFrustumOptimizable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IFrustumOptimizable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IFrustumOptimizable__VTable vtable;
};
struct IEnumerator_1_IFrustumOptimizable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_IFrustumOptimizable___StaticFields {
};
struct IEnumerator_1_IFrustumOptimizable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_IFrustumOptimizable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_IFrustumOptimizable___VTable vtable;
};
struct List_1_IFrustumOptimizable___VTable {
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
struct List_1_IFrustumOptimizable___StaticFields {
  struct IFrustumOptimizable__Array * _emptyArray;
};
struct List_1_IFrustumOptimizable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_IFrustumOptimizable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_IFrustumOptimizable___VTable vtable;
};
struct AllContainer_1_IFrustumOptimizable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_IFrustumOptimizable___StaticFields {
};
struct AllContainer_1_IFrustumOptimizable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_IFrustumOptimizable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_IFrustumOptimizable___VTable vtable;
};
struct IFrustumEnabled__VTable {
  VirtualInvokeData OnFrustumInstantEnabled;
};
struct IFrustumEnabled__StaticFields {
};
struct IFrustumEnabled__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IFrustumEnabled__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IFrustumEnabled__VTable vtable;
};
struct IEnumerator_1_Game_IFrustumEnabled___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Game_IFrustumEnabled___StaticFields {
};
struct IEnumerator_1_Game_IFrustumEnabled___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Game_IFrustumEnabled___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Game_IFrustumEnabled___VTable vtable;
};
struct List_1_Game_IFrustumEnabled___VTable {
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
struct List_1_Game_IFrustumEnabled___StaticFields {
  struct IFrustumEnabled__Array * _emptyArray;
};
struct List_1_Game_IFrustumEnabled___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Game_IFrustumEnabled___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Game_IFrustumEnabled___VTable vtable;
};
struct CameraFrustumOptimizer_EarlyZActivation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CameraFrustumOptimizer_EarlyZActivation__StaticFields {
};
struct CameraFrustumOptimizer_EarlyZActivation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraFrustumOptimizer_EarlyZActivation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraFrustumOptimizer_EarlyZActivation__VTable vtable;
};
struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields {
};
struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CameraFrustumOptimizer_EarlyZActivation___VTable vtable;
};
struct List_1_CameraFrustumOptimizer_EarlyZActivation___VTable {
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
struct List_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields {
  struct CameraFrustumOptimizer_EarlyZActivation__Array * _emptyArray;
};
struct List_1_CameraFrustumOptimizer_EarlyZActivation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CameraFrustumOptimizer_EarlyZActivation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CameraFrustumOptimizer_EarlyZActivation___VTable vtable;
};
struct CameraFrustumOptimizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RenderDebug;
};
struct CameraFrustumOptimizer__StaticFields {
  struct CameraFrustumOptimizer_BoundsCache s_cachedBounds1;
  struct CameraFrustumOptimizer_BoundsCache s_cachedBounds2;
  float UpdateDelta;
  float Padding;
  bool m_useBatchedFrustumChecks;
  bool m_deferActivations;
  bool m_useBoundsCache;
  bool m_verifyCacheCorrectness;
  bool UseMoonFlags;
  struct AllContainer_1_IFrustumOptimizable_ * s_frustumOptimizables;
  struct List_1_IFrustumOptimizable_ * s_unitializedFrustumOptimizables;
  struct List_1_Game_IFrustumEnabled_ * s_instantEnabledToProcess;
  struct List_1_IFrustumOptimizable_ * m_deferredOnEnter;
  struct List_1_IFrustumOptimizable_ * m_deferredOnExit;
  struct List_1_CameraFrustumOptimizer_EarlyZActivation_ * s_earlyZActivations;
};
struct CameraFrustumOptimizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraFrustumOptimizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraFrustumOptimizer__VTable vtable;
};

enum CameraFrustumOptimizer_IntersectionResult__Enum : int32_t {
  CameraFrustumOptimizer_IntersectionResult__Enum_NOTHING = 0,
  CameraFrustumOptimizer_IntersectionResult__Enum_DEFERRED_ENTER = 1,
  CameraFrustumOptimizer_IntersectionResult__Enum_DEFERRED_EXIT = 2,
  CameraFrustumOptimizer_IntersectionResult__Enum_ENTER = 3,
  CameraFrustumOptimizer_IntersectionResult__Enum_EXIT = 4,
};
struct CameraFrustumOptimizer_IntersectionResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CameraFrustumOptimizer_IntersectionResult__Enum value;
};

struct DisableGameObjectWhenOutOfFrustrum__Fields {
  struct MonoBehaviour__Fields _;
  bool Activated;
  bool isArtCell;
  bool tightBounds;
  bool AssumeStationaryTransform;
  float BoundsBorder;
  bool SpecifyBoundingBox;
  struct Rect BoundingBox;
  float BoundingBoxDepth;
  float BoundingBoxDepthOffset;
  bool SpecifyBounds;
  struct Bounds SetBounds;
  struct Vector2 BoundsIncreaseWhenEnabled;
  struct TimeSlicedActivationTask * m_activationTask;
  struct List_1_UnityEngine_GameObject_ * m_updateTargetObjectsChildToParent;
  struct List_1_UnityEngine_GameObject_ * m_targetObjectsChildToParent;
  struct List_1_UnityEngine_Component_ * m_postEnabledObservers;
  struct List_1_UnityEngine_Component_ * m_preDisableObservers;
  struct Renderer__Array * m_cachedRenderers;
  struct SceneRoot * m_root;
  bool m_insideFrustum;
  bool m_awakeCalled;
  bool m_needsToRegister;
  struct Bounds m_bounds;
};
struct DisableGameObjectWhenOutOfFrustrum {
  struct DisableGameObjectWhenOutOfFrustrum__Class *klass;
  struct MonitorData *monitor;
  struct DisableGameObjectWhenOutOfFrustrum__Fields fields;
};
struct DisableGameObjectWhenOutOfFrustrum__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData OnFrustumInstantEnabled;
  VirtualInvokeData OnSceneRootPostEnable;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_ShouldDisable;
  VirtualInvokeData get_ShouldEnable;
  VirtualInvokeData get_ShouldChildrenEnable;
  VirtualInvokeData get_ShouldSetMoonReady;
  VirtualInvokeData OnSceneRootPreDisable;
  VirtualInvokeData Prewarm;
};
struct DisableGameObjectWhenOutOfFrustrum__StaticFields {
  bool SetHiddenTrue;
  bool UseSerializationToggle;
};
struct DisableGameObjectWhenOutOfFrustrum__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisableGameObjectWhenOutOfFrustrum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisableGameObjectWhenOutOfFrustrum__VTable vtable;
};

struct DisableGameObjectWithHealthWhenOutOfFrustum__Fields {
  struct MonoBehaviour__Fields _;
  struct HealthController * HealthController;
  bool m_insideFrustum;
  struct Bounds m_bounds;
};
struct DisableGameObjectWithHealthWhenOutOfFrustum {
  struct DisableGameObjectWithHealthWhenOutOfFrustum__Class *klass;
  struct MonitorData *monitor;
  struct DisableGameObjectWithHealthWhenOutOfFrustum__Fields fields;
};
struct DisableGameObjectWithHealthWhenOutOfFrustum__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct DisableGameObjectWithHealthWhenOutOfFrustum__StaticFields {
};
struct DisableGameObjectWithHealthWhenOutOfFrustum__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisableGameObjectWithHealthWhenOutOfFrustum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisableGameObjectWithHealthWhenOutOfFrustum__VTable vtable;
};

struct DisableRendererWhenOutOfFrustrum__Fields {
  struct MonoBehaviour__Fields _;
  bool m_insideFrustum;
  struct Bounds m_bounds;
};
struct DisableRendererWhenOutOfFrustrum {
  struct DisableRendererWhenOutOfFrustrum__Class *klass;
  struct MonitorData *monitor;
  struct DisableRendererWhenOutOfFrustrum__Fields fields;
};
struct DisableRendererWhenOutOfFrustrum__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
};
struct DisableRendererWhenOutOfFrustrum__StaticFields {
};
struct DisableRendererWhenOutOfFrustrum__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisableRendererWhenOutOfFrustrum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisableRendererWhenOutOfFrustrum__VTable vtable;
};

struct SuspendWhenOtherOutOfFrustrum__Fields {
  struct SuspendWhenOutOfFrustrumWithCondition__Fields _;
  struct MoonReference_1_UnityEngine_Transform_ * Other;
  struct Transform * m_cachedTransform;
};
struct SuspendWhenOtherOutOfFrustrum {
  struct SuspendWhenOtherOutOfFrustrum__Class *klass;
  struct MonitorData *monitor;
  struct SuspendWhenOtherOutOfFrustrum__Fields fields;
};
struct SuspendWhenOtherOutOfFrustrum__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData get_ShouldDisable;
  VirtualInvokeData get_ShouldEnable;
  VirtualInvokeData get_ShouldChildrenEnable;
  VirtualInvokeData get_ShouldSetMoonReady;
  VirtualInvokeData Prewarm;
  VirtualInvokeData OnFrustumEnter_1;
  VirtualInvokeData OnFrustumExit_1;
  VirtualInvokeData get_Bounds_1;
};
struct SuspendWhenOtherOutOfFrustrum__StaticFields {
};
struct SuspendWhenOtherOutOfFrustrum__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SuspendWhenOtherOutOfFrustrum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SuspendWhenOtherOutOfFrustrum__VTable vtable;
};}