namespace app {
struct SpiritGrenadeDamageDealer {
  struct SpiritGrenadeDamageDealer__Class *klass;
  struct MonitorData *monitor;
  struct SpiritGrenadeDamageDealer__Fields fields;
};
struct SpiritGrenadeDamageDealer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnterPhysicsTrigger;
  VirtualInvokeData get_VirtualTimelineTarget;
  VirtualInvokeData get_VirtualTimelineGroup;
  VirtualInvokeData get_NameDisplayedOnClip;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData Prewarm;
  VirtualInvokeData get_BypassPlayerInvincibility;
  VirtualInvokeData AmountOfDamage;
  VirtualInvokeData Awake;
  VirtualInvokeData ApplyDamageToCollider;
  VirtualInvokeData DealDamage;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
};
struct SpiritGrenadeDamageDealer__StaticFields {
};
struct SpiritGrenadeDamageDealer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritGrenadeDamageDealer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritGrenadeDamageDealer__VTable vtable;
};

struct TextureAnimationGUIText__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimatorWithTransitions * TextureAnimator;
};
struct TextureAnimationGUIText {
  struct TextureAnimationGUIText__Class *klass;
  struct MonitorData *monitor;
  struct TextureAnimationGUIText__Fields fields;
};
struct TextureAnimationGUIText__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextureAnimationGUIText__StaticFields {
};
struct TextureAnimationGUIText__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextureAnimationGUIText__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextureAnimationGUIText__VTable vtable;
};

struct DetachOnKill__Fields {
  struct MonoBehaviour__Fields _;
  bool LimitLifetime;
  bool StopParticleEmission;
  float LifetimeLimit;
  float m_minEmit;
  float m_maxEmit;
  float m_emit;
  struct ParticleSystem * m_particleSystem;
  bool m_killed;
  float m_countDown;
};
struct DetachOnKill {
  struct DetachOnKill__Class *klass;
  struct MonitorData *monitor;
  struct DetachOnKill__Fields fields;
};
struct DetachOnKill__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnKill;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct DetachOnKill__StaticFields {
  struct GameObject * s_detachOnKillObjectsParent;
};
struct DetachOnKill__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DetachOnKill__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DetachOnKill__VTable vtable;
};

struct DisableEmitterOnKill__Fields {
  struct MonoBehaviour__Fields _;
  struct ParticleSystem * m_particleSystem;
  bool m_doEmit;
};
struct DisableEmitterOnKill {
  struct DisableEmitterOnKill__Class *klass;
  struct MonitorData *monitor;
  struct DisableEmitterOnKill__Fields fields;
};
struct DisableEmitterOnKill__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnKill;
};
struct DisableEmitterOnKill__StaticFields {
};
struct DisableEmitterOnKill__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisableEmitterOnKill__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisableEmitterOnKill__VTable vtable;
};

struct DisableOnKill__Fields {
  struct MonoBehaviour__Fields _;
};
struct DisableOnKill {
  struct DisableOnKill__Class *klass;
  struct MonitorData *monitor;
  struct DisableOnKill__Fields fields;
};
struct DisableOnKill__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnKill;
};
struct DisableOnKill__StaticFields {
};
struct DisableOnKill__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisableOnKill__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisableOnKill__VTable vtable;
};

struct SpawnOnKill__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * ObjectToSpawn;
  struct Vector3 PositionOffset;
  float Scale;
  bool TransferRotation;
  int32_t PrewarmAmount;
};
struct SpawnOnKill {
  struct SpawnOnKill__Class *klass;
  struct MonitorData *monitor;
  struct SpawnOnKill__Fields fields;
};
struct SpawnOnKill__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnKill;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct SpawnOnKill__StaticFields {
  struct GameObject * m_spawnOnKillObjectsParent;
};
struct SpawnOnKill__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpawnOnKill__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpawnOnKill__VTable vtable;
};

struct CharacterFactory__Fields {
  struct GuidOwner__Fields _;
  enum CharacterFactory_Characters__Enum Current;
  struct GameObject * OriPrefab;
  struct GameObject * KuPrefab;
};
struct CharacterFactory {
  struct CharacterFactory__Class *klass;
  struct MonitorData *monitor;
  struct CharacterFactory__Fields fields;
};
struct CharacterFactory__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterFactory__StaticFields {
  struct CharacterFactory * Instance;
};
struct CharacterFactory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterFactory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterFactory__VTable vtable;
};

struct CharactersDynamicProvider__Fields {
  struct ScriptableObject__Fields _;
  struct DynamicDataResolver * m_dataResolver;
};
struct CharactersDynamicProvider {
  struct CharactersDynamicProvider__Class *klass;
  struct MonitorData *monitor;
  struct CharactersDynamicProvider__Fields fields;
};
struct CharactersDynamicProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};
struct CharactersDynamicProvider__StaticFields {
};
struct CharactersDynamicProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharactersDynamicProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharactersDynamicProvider__VTable vtable;
};

struct __declspec(align(8)) SeinAttack__Fields {
  struct SeinBashAttack * Bash;
  struct SeinSpiritFlameAbility * SpiritFlame;
};
struct SeinAttack {
  struct SeinAttack__Class *klass;
  struct MonitorData *monitor;
  struct SeinAttack__Fields fields;
};
struct SeinAttack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinAttack__StaticFields {
};
struct SeinAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinAttack__VTable vtable;
};

struct SeinCharacter_c {
  struct SeinCharacter_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinCharacter_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinCharacter_c__StaticFields {
  struct SeinCharacter_c * __9;
  struct Action * __9__161_0;
};
struct SeinCharacter_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinCharacter_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinCharacter_c__VTable vtable;
};

struct SeinLogicCycle_c {
  struct SeinLogicCycle_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinLogicCycle_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinLogicCycle_c__StaticFields {
  struct SeinLogicCycle_c * __9;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_9;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_10;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_11;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_12;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_13;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_41;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_42;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_45;
  struct SeinLogicCycle_IsAllowedDelegate * __9__237_46;
};
struct SeinLogicCycle_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinLogicCycle_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinLogicCycle_c__VTable vtable;
};

enum SeinSoulFlame_SoulFlamePlacementSafety__Enum : int32_t {
  SeinSoulFlame_SoulFlamePlacementSafety__Enum_Safe = 0,
  SeinSoulFlame_SoulFlamePlacementSafety__Enum_UnsafeEnemies = 1,
  SeinSoulFlame_SoulFlamePlacementSafety__Enum_UnsafeGround = 2,
  SeinSoulFlame_SoulFlamePlacementSafety__Enum_UnsafeZone = 3,
  SeinSoulFlame_SoulFlamePlacementSafety__Enum_SavePedestal = 4,
};
struct SeinSoulFlame_SoulFlamePlacementSafety__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinSoulFlame_SoulFlamePlacementSafety__Enum value;
};

struct SeinSoulFlame_c {
  struct SeinSoulFlame_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinSoulFlame_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinSoulFlame_c__StaticFields {
  struct SeinSoulFlame_c * __9;
};
struct SeinSoulFlame_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinSoulFlame_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinSoulFlame_c__VTable vtable;
};

struct SoulFlameCastTrigger__Fields {
  struct LegacyTrigger__Fields _;
};
struct SoulFlameCastTrigger {
  struct SoulFlameCastTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SoulFlameCastTrigger__Fields fields;
};
struct SoulFlameCastTrigger__VTable {
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
  VirtualInvokeData OnTriggerEnable;
  VirtualInvokeData OnTriggerDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnTriggerActivated;
};
struct SoulFlameCastTrigger__StaticFields {
};
struct SoulFlameCastTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoulFlameCastTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoulFlameCastTrigger__VTable vtable;
};

struct OffsetSpriteWhenGrabbingBlock__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinGrabBlock * CharacterGrabBlock;
  bool m_isPushing;
  float Distance;
};
struct OffsetSpriteWhenGrabbingBlock {
  struct OffsetSpriteWhenGrabbingBlock__Class *klass;
  struct MonitorData *monitor;
  struct OffsetSpriteWhenGrabbingBlock__Fields fields;
};
struct OffsetSpriteWhenGrabbingBlock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OffsetSpriteWhenGrabbingBlock__StaticFields {
};
struct OffsetSpriteWhenGrabbingBlock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OffsetSpriteWhenGrabbingBlock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OffsetSpriteWhenGrabbingBlock__VTable vtable;
};

struct PlayerInput__Fields {
  struct MonoBehaviour__Fields _;
  bool Active;
  struct CompoundAxisInput * HorizontalAnalogLeft;
  struct CompoundAxisInput * VerticalAnalogLeft;
  struct CompoundAxisInput * HorizontalAnalogRight;
  struct CompoundAxisInput * VerticalAnalogRight;
  struct CompoundAxisInput * HorizontalDigiPad;
  struct CompoundAxisInput * VerticalDigiPad;
  struct CompoundAxisInput * LeftTriggerAxis;
  struct CompoundAxisInput * RightTriggerAxis;
  struct CompoundButtonInput * Down;
  struct CompoundButtonInput * Up;
  struct CompoundButtonInput * Left;
  struct CompoundButtonInput * Right;
  struct CompoundButtonInput * ChargeJump;
  struct CompoundButtonInput * LeftShoulder;
  struct CompoundButtonInput * RightShoulder;
  struct CompoundButtonInput * LeftTrigger;
  struct CompoundButtonInput * RightTrigger;
  struct CompoundButtonInput * Select;
  struct CompoundButtonInput * Start;
  struct CompoundButtonInput * LeftStick;
  struct CompoundButtonInput * RightStick;
  struct CompoundButtonInput * MenuCycleFilter;
  struct CompoundButtonInput * ActionButtonA;
  struct CompoundButtonInput * ActionButtonB;
  struct CompoundButtonInput * ActionButtonX;
  struct CompoundButtonInput * ActionButtonY;
  struct CompoundButtonInput * Cancel;
  struct CompoundButtonInput * MainMenuSaveCopy;
  struct CompoundButtonInput * MainMenuSaveDelete;
  struct CompoundButtonInput * Focus;
  struct CompoundButtonInput * LeaderboardDifficultyFilter;
  struct CompoundButtonInput * Legend;
  struct CompoundButtonInput * Pause;
  struct CompoundButtonInput * KeyboardOnly;
  struct CompoundButtonInput * Interact;
  struct CompoundButtonInput * Jump;
  struct CompoundButtonInput * Ability1;
  struct CompoundButtonInput * Ability2;
  struct CompoundButtonInput * Ability3;
  struct CompoundButtonInput * Glide;
  struct CompoundButtonInput * Grab;
  struct CompoundButtonInput * Dash;
  struct CompoundButtonInput * Burrow;
  struct CompoundButtonInput * Bash;
  struct CompoundButtonInput * Grapple;
  struct CompoundButtonInput * DialogueAdvance;
  struct CompoundButtonInput * DialogueOption1;
  struct CompoundButtonInput * DialogueOption2;
  struct CompoundButtonInput * DialogueOption3;
  struct CompoundButtonInput * DialogueExit;
  struct CompoundButtonInput * OpenMapsShardsInventory;
  struct CompoundButtonInput * OpenInventory;
  struct CompoundButtonInput * OpenWorldMap;
  struct CompoundButtonInput * OpenAreaMap;
  struct CompoundButtonInput * OpenShards;
  struct CompoundButtonInput * OpenWeaponWheel;
  struct CompoundButtonInput * PauseScreen;
  struct CompoundButtonInput * LiveSignIn;
  struct CompoundButtonInput * MapZoomIn;
  struct CompoundButtonInput * MapZoomOut;
  struct CompoundButtonInput * MenuSelect;
  struct CompoundButtonInput * MenuBack;
  struct CompoundButtonInput * MenuClose;
  struct CompoundButtonInput * MenuDown;
  struct CompoundButtonInput * MenuUp;
  struct CompoundButtonInput * MenuLeft;
  struct CompoundButtonInput * MenuRight;
  struct CompoundButtonInput * MenuPageLeft;
  struct CompoundButtonInput * MenuPageRight;
  struct CompoundButtonInput * LeaderboardCycleFilter;
  struct CompoundButtonInput * MapFilter;
  struct CompoundButtonInput * MapDetails;
  struct CompoundButtonInput * MapFocusOri;
  struct CompoundButtonInput * MapFocusObjective;
  struct IButtonInput * LeftClick;
  struct IButtonInput * RightClick;
  struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * m_InputProcessorPairs;
  struct List_1_SmartInput_IAxisInput_ * m_allAxisInput;
  struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * m_sharedKeyCodeButtonInput;
  struct InputCacheManager * m_inputCache;
  struct IButtonInput * m_lastPressedButtonInput;
  int32_t m_lastPressedAxisInput;
};
struct PlayerInput {
  struct PlayerInput__Class *klass;
  struct MonitorData *monitor;
  struct PlayerInput__Fields fields;
};
struct __declspec(align(8)) CachedInput_1_System_Single___Fields {
  float m_cache;
};
struct CachedInput_1_System_Single_ {
  struct CachedInput_1_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct CachedInput_1_System_Single___Fields fields;
};
struct CachedAxisInput__Fields {
  struct CachedInput_1_System_Single___Fields _;
};
struct CachedAxisInput {
  struct CachedAxisInput__Class *klass;
  struct MonitorData *monitor;
  struct CachedAxisInput__Fields fields;
};
struct CompoundAxisInput__Fields {
  struct CachedAxisInput__Fields _;
  struct IAxisInput__Array * Axis;
  int32_t m_lastPressedIndex;
};
struct CompoundAxisInput {
  struct CompoundAxisInput__Class *klass;
  struct MonitorData *monitor;
  struct CompoundAxisInput__Fields fields;
};
struct __declspec(align(8)) InputCacheManager__Fields {
  struct InputCacheManager_SetupTempData * m_setupData;
  struct List_1_SmartInput_ICachableInput_ * m_inputList;
  struct List_1_System_Boolean_ * m_dirtyList;
  struct List_1_System_Boolean_ * m_leafList;
  struct List_1_System_Int32_ * m_readersRangesList;
  struct List_1_System_Int32_ * m_readersLists;
};
struct InputCacheManager {
  struct InputCacheManager__Class *klass;
  struct MonitorData *monitor;
  struct InputCacheManager__Fields fields;
};
struct __declspec(align(8)) InputCacheManager_SetupTempData__Fields {
  int32_t m_index;
  struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * m_nodes;
  struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_ * m_stack;
};
struct InputCacheManager_SetupTempData {
  struct InputCacheManager_SetupTempData__Class *klass;
  struct MonitorData *monitor;
  struct InputCacheManager_SetupTempData__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_SmartInput_ICachableInput_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  int32_t hashCode;
  int32_t next;
  struct ICachableInput * key;
  struct InputCacheManager_SetupTempData_Node * value;
};
struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array {
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ vector[32];
};
struct ICachableInput {
  struct ICachableInput__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) InputCacheManager_SetupTempData_Node__Fields {
  int32_t index;
  struct ICachableInput * input;
  struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_ * sources;
  struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_ * readers;
};
struct InputCacheManager_SetupTempData_Node {
  struct InputCacheManager_SetupTempData_Node__Class *klass;
  struct MonitorData *monitor;
  struct InputCacheManager_SetupTempData_Node__Fields fields;
};
struct __declspec(align(8)) List_1_SmartInput_InputCacheManager_SetupTempData_Node___Fields {
  struct InputCacheManager_SetupTempData_Node__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct List_1_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SmartInput_InputCacheManager_SetupTempData_Node___Fields fields;
};
struct InputCacheManager_SetupTempData_Node__Array {
  struct InputCacheManager_SetupTempData_Node__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InputCacheManager_SetupTempData_Node * vector[32];
};
struct IEnumerator_1_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct IEnumerator_1_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_SmartInput_ICachableInput_ {
  struct IEqualityComparer_1_SmartInput_ICachableInput___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Fields {
  struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Fields fields;
};
struct ICachableInput__Array {
  struct ICachableInput__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ICachableInput * vector[32];
};
struct IEnumerator_1_SmartInput_ICachableInput_ {
  struct IEnumerator_1_SmartInput_ICachableInput___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Fields {
  struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Fields fields;
};
struct ICollection_1_SmartInput_ICachableInput_ {
  struct ICollection_1_SmartInput_ICachableInput___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct ICollection_1_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct ICachableInput * key;
  struct InputCacheManager_SetupTempData_Node * value;
};
struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Boxed {
  struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ fields;
};
struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array {
  struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct IEnumerator_1_KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SmartInput_ICachableInput_ {
  struct IEnumerable_1_SmartInput_ICachableInput___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct IEnumerable_1_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SmartInput_ICachableInput___Fields {
  struct ICachableInput__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SmartInput_ICachableInput_ {
  struct List_1_SmartInput_ICachableInput___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SmartInput_ICachableInput___Fields fields;
};
struct XboxOneController_AxisInput__Fields {
  struct CachedAxisInput__Fields _;
};
struct XboxOneController_AxisInput {
  struct XboxOneController_AxisInput__Class *klass;
  struct MonitorData *monitor;
  struct XboxOneController_AxisInput__Fields fields;
};
struct IAxisInput {
  struct IAxisInput__Class *klass;
  struct MonitorData *monitor;
};
struct IAxisInput__Array {
  struct IAxisInput__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IAxisInput * vector[32];
};
struct __declspec(align(8)) CachedInput_1_System_Boolean___Fields {
  bool m_cache;
};
struct CachedInput_1_System_Boolean_ {
  struct CachedInput_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct CachedInput_1_System_Boolean___Fields fields;
};
struct CachedButtonInput__Fields {
  struct CachedInput_1_System_Boolean___Fields _;
};
struct CachedButtonInput {
  struct CachedButtonInput__Class *klass;
  struct MonitorData *monitor;
  struct CachedButtonInput__Fields fields;
};
struct CompoundButtonInput__Fields {
  struct CachedButtonInput__Fields _;
  struct List_1_SmartInput_IButtonInput_ * Buttons;
  int32_t m_lastPressedIndex;
};
struct CompoundButtonInput {
  struct CompoundButtonInput__Class *klass;
  struct MonitorData *monitor;
  struct CompoundButtonInput__Fields fields;
};
struct XboxOneController_ButtonInput__Fields {
  struct CachedButtonInput__Fields _;
};
struct XboxOneController_ButtonInput {
  struct XboxOneController_ButtonInput__Class *klass;
  struct MonitorData *monitor;
  struct XboxOneController_ButtonInput__Fields fields;
};
struct __declspec(align(8)) List_1_SmartInput_IButtonInput___Fields {
  struct IButtonInput__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SmartInput_IButtonInput_ {
  struct List_1_SmartInput_IButtonInput___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SmartInput_IButtonInput___Fields fields;
};
struct IButtonInput__Array {
  struct IButtonInput__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IButtonInput * vector[32];
};
struct IEnumerator_1_SmartInput_IButtonInput_ {
  struct IEnumerator_1_SmartInput_IButtonInput___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_SmartInput_IButtonInput_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ {
  struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ {
  int32_t hashCode;
  int32_t next;
  struct IButtonInput * key;
  struct Input_InputButtonProcessor * value;
};
struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Array {
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ vector[32];
};
struct IEqualityComparer_1_SmartInput_IButtonInput_ {
  struct IEqualityComparer_1_SmartInput_IButtonInput___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Fields {
  struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Fields {
  struct Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Fields fields;
};
struct Input_InputButtonProcessor__Array {
  struct Input_InputButtonProcessor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Input_InputButtonProcessor * vector[32];
};
struct IEnumerator_1_Core_Input_InputButtonProcessor_ {
  struct IEnumerator_1_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SmartInput_IButtonInput_ {
  struct ICollection_1_SmartInput_IButtonInput___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Core_Input_InputButtonProcessor_ {
  struct ICollection_1_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ {
  struct IButtonInput * key;
  struct Input_InputButtonProcessor * value;
};
struct KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Boxed {
  struct KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ fields;
};
struct KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Array {
  struct KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ {
  struct IEnumerator_1_KeyValuePair_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SmartInput_IButtonInput_ {
  struct IEnumerable_1_SmartInput_IButtonInput___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Core_Input_InputButtonProcessor_ {
  struct IEnumerable_1_Core_Input_InputButtonProcessor___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SmartInput_IAxisInput___Fields {
  struct IAxisInput__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SmartInput_IAxisInput_ {
  struct List_1_SmartInput_IAxisInput___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SmartInput_IAxisInput___Fields fields;
};
struct IEnumerator_1_SmartInput_IAxisInput_ {
  struct IEnumerator_1_SmartInput_IAxisInput___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_KeyCode_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ {
  struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ {
  int32_t hashCode;
  int32_t next;
  enum KeyCode__Enum key;
  struct KeyCodeButtonInput * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ vector[32];
};
struct KeyCodeButtonInput__Fields {
  struct CachedButtonInput__Fields _;
  enum KeyCode__Enum m_keyCode;
};
struct KeyCodeButtonInput {
  struct KeyCodeButtonInput__Class *klass;
  struct MonitorData *monitor;
  struct KeyCodeButtonInput__Fields fields;
};
struct IEqualityComparer_1_UnityEngine_KeyCode_ {
  struct IEqualityComparer_1_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Fields {
  struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Fields {
  struct Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Fields fields;
};
struct KeyCodeButtonInput__Array {
  struct KeyCodeButtonInput__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyCodeButtonInput * vector[32];
};
struct IEnumerator_1_SmartInput_KeyCodeButtonInput_ {
  struct IEnumerator_1_SmartInput_KeyCodeButtonInput___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SmartInput_KeyCodeButtonInput_ {
  struct ICollection_1_SmartInput_KeyCodeButtonInput___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ {
  enum KeyCode__Enum key;
  struct KeyCodeButtonInput * value;
};
struct KeyValuePair_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Boxed {
  struct KeyValuePair_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ fields;
};
struct KeyValuePair_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Array {
  struct KeyValuePair_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ vector[32];
};}