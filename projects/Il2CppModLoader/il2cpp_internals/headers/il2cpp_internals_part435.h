namespace app {
struct ScreenshotIcon_EnemyType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScreenshotIcon_EnemyType__Enum value;
};
enum EntityPlaceholderScalingData_EntityCategory__Enum : int32_t {
  EntityPlaceholderScalingData_EntityCategory__Enum_Enemy = 0,
  EntityPlaceholderScalingData_EntityCategory__Enum_Boss = 1,
};
struct EntityPlaceholderScalingData_EntityCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EntityPlaceholderScalingData_EntityCategory__Enum value;
};
struct EntityPlaceholderScalingData_SelectedAttackProperties {
  struct Int32__Array * DamagePropertyIDs;
};
struct EntityPlaceholderScalingData_SelectedAttackProperties__Boxed {
  struct EntityPlaceholderScalingData_SelectedAttackProperties__Class *klass;
  struct MonitorData *monitor;
  struct EntityPlaceholderScalingData_SelectedAttackProperties fields;
};
struct EntityPlaceholderScalingData__Fields {
  struct ScriptableObject__Fields _;
  struct Texture2D * DisplayTexture;
  struct String * Name;
  struct ExposedProperties * Prefab;
  enum ScreenshotIcon_EnemyType__Enum IconType;
  float BaseHealth;
  int32_t NumberOfExperienceOrbs;
  float HeartLootChance;
  float EnergyLootChance;
  enum EntityPlaceholderScalingData_EntityCategory__Enum Category;
  struct EntityPlaceholderScalingData_Difficulties * Scaling;
  struct EntityPlaceholderScalingData_SelectedAttackProperties SelectedAttacks;
};
struct EntityPlaceholderScalingData {
  struct EntityPlaceholderScalingData__Class *klass;
  struct MonitorData *monitor;
  struct EntityPlaceholderScalingData__Fields fields;
};
struct __declspec(align(8)) EntityPlaceholderScalingData_Difficulties__Fields {
  struct EntityPlaceholderScalingData_EntityScalingValues__Array * Difficulty;
};
struct EntityPlaceholderScalingData_Difficulties {
  struct EntityPlaceholderScalingData_Difficulties__Class *klass;
  struct MonitorData *monitor;
  struct EntityPlaceholderScalingData_Difficulties__Fields fields;
};
struct __declspec(align(8)) EntityPlaceholderScalingData_EntityScalingValues__Fields {
  float HealthMultiplier;
  float DamageMultiplier;
  float ExperienceMultiplier;
  int32_t HeartLootCount;
  int32_t EnergyLootCount;
};
struct EntityPlaceholderScalingData_EntityScalingValues {
  struct EntityPlaceholderScalingData_EntityScalingValues__Class *klass;
  struct MonitorData *monitor;
  struct EntityPlaceholderScalingData_EntityScalingValues__Fields fields;
};
struct EntityPlaceholderScalingData_EntityScalingValues__Array {
  struct EntityPlaceholderScalingData_EntityScalingValues__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityPlaceholderScalingData_EntityScalingValues * vector[32];
};
struct EntityPlaceholderScalingData__Array {
  struct EntityPlaceholderScalingData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityPlaceholderScalingData * vector[32];
};
struct __declspec(align(8)) List_1_Moon_SerializedIntUberState___Fields {
  struct SerializedIntUberState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_SerializedIntUberState_ {
  struct List_1_Moon_SerializedIntUberState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_SerializedIntUberState___Fields fields;
};
struct SerializedIntUberState__Array {
  struct SerializedIntUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SerializedIntUberState * vector[32];
};
struct IEnumerator_1_Moon_SerializedIntUberState_ {
  struct IEnumerator_1_Moon_SerializedIntUberState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_GameWorldArea_PlayerAbilityInfo___Fields {
  struct GameWorldArea_PlayerAbilityInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_GameWorldArea_PlayerAbilityInfo_ {
  struct List_1_GameWorldArea_PlayerAbilityInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_GameWorldArea_PlayerAbilityInfo___Fields fields;
};
struct __declspec(align(8)) GameWorldArea_PlayerAbilityInfo__Fields {
  struct Vector2 Position;
  struct PlayerUberStateDescriptor * Descriptor;
  enum AbilityType__Enum Ability;
};
struct GameWorldArea_PlayerAbilityInfo {
  struct GameWorldArea_PlayerAbilityInfo__Class *klass;
  struct MonitorData *monitor;
  struct GameWorldArea_PlayerAbilityInfo__Fields fields;
};
struct GameWorldArea_PlayerAbilityInfo__Array {
  struct GameWorldArea_PlayerAbilityInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GameWorldArea_PlayerAbilityInfo * vector[32];
};
struct IEnumerator_1_GameWorldArea_PlayerAbilityInfo_ {
  struct IEnumerator_1_GameWorldArea_PlayerAbilityInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ConditionUberState___Fields {
  struct ConditionUberState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ConditionUberState_ {
  struct List_1_Moon_ConditionUberState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ConditionUberState___Fields fields;
};
struct ConditionUberState__Array {
  struct ConditionUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConditionUberState * vector[32];
};
struct IEnumerator_1_Moon_ConditionUberState_ {
  struct IEnumerator_1_Moon_ConditionUberState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_GameWorldArea_ {
  struct IEnumerator_1_GameWorldArea___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_RuntimeGameWorldArea___Fields {
  struct RuntimeGameWorldArea__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RuntimeGameWorldArea_ {
  struct List_1_RuntimeGameWorldArea___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RuntimeGameWorldArea___Fields fields;
};
struct __declspec(align(8)) RuntimeGameWorldArea__Fields {
  struct GameWorldArea * Area;
  struct List_1_RuntimeWorldMapIcon_ * Icons;
  struct List_1_Moon_SerializedBooleanUberState_ * CollectableIconStates;
  struct List_1_Moon_SerializedBooleanUberState_ * ShrineStates;
  struct List_1_Moon_SerializedIntUberState_ * RaceStates;
  struct List_1_GameWorldArea_PlayerAbilityInfo_ * AbilityTrees;
  struct List_1_Moon_ConditionUberState_ * OtherAreaProgressionStates;
  struct IUberState__Array * m_statesThatDirtyArea;
  struct PlayerUberStateDescriptor * PlayerUberState;
  float m_collectablesCompletionAmount;
  float m_completionAmount;
  bool m_dirtyCompletionAmount;
};
struct RuntimeGameWorldArea {
  struct RuntimeGameWorldArea__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeGameWorldArea__Fields fields;
};
struct RuntimeGameWorldArea__Array {
  struct RuntimeGameWorldArea__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RuntimeGameWorldArea * vector[32];
};
struct __declspec(align(8)) List_1_RuntimeWorldMapIcon___Fields {
  struct RuntimeWorldMapIcon__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RuntimeWorldMapIcon_ {
  struct List_1_RuntimeWorldMapIcon___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RuntimeWorldMapIcon___Fields fields;
};
struct __declspec(align(8)) RuntimeWorldMapIcon__Fields {
  struct MoonGuid * Guid;
  enum WorldMapIconType__Enum Icon;
  struct Vector2 Position;
  struct RuntimeGameWorldArea * Area;
  bool IsSecret;
  struct SerializedBooleanUberState * IsCollectedState;
  struct ConditionUberState * Condition;
  struct SerializedIntUberState * SpecialState;
  struct AreaMapIcon * m_areaMapIcon;
  struct GameObject * IconGameObject;
};
struct RuntimeWorldMapIcon {
  struct RuntimeWorldMapIcon__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeWorldMapIcon__Fields fields;
};
struct RuntimeWorldMapIcon__Array {
  struct RuntimeWorldMapIcon__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RuntimeWorldMapIcon * vector[32];
};
struct AreaMapIcon__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * MapIconActive;
  struct GameObject * MapIconSpecial;
  struct GameObject * MapIconInactive;
  struct GameObject * Label;
  struct GameObject * AttentionMarker;
  struct AreaMapIcon_AttentionMarkerActiveCondition__Array * AttentionMarkerActiveConditions;
  struct MessageBox * m_labelBox;
  struct GameObject * m_transparancyAnimatorContainer;
  struct ConditionUberState * AttentionMarkerState;
};
struct AreaMapIcon {
  struct AreaMapIcon__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapIcon__Fields fields;
};
struct AreaMapIcon_AttentionMarkerActiveCondition {
  enum GameWorldAreaID__Enum AreaID;
  struct ConditionUberState * Condition;
};
struct AreaMapIcon_AttentionMarkerActiveCondition__Boxed {
  struct AreaMapIcon_AttentionMarkerActiveCondition__Class *klass;
  struct MonitorData *monitor;
  struct AreaMapIcon_AttentionMarkerActiveCondition fields;
};
struct AreaMapIcon_AttentionMarkerActiveCondition__Array {
  struct AreaMapIcon_AttentionMarkerActiveCondition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AreaMapIcon_AttentionMarkerActiveCondition vector[32];
};
struct IEnumerator_1_RuntimeWorldMapIcon_ {
  struct IEnumerator_1_RuntimeWorldMapIcon___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_SerializedBooleanUberState___Fields {
  struct SerializedBooleanUberState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_SerializedBooleanUberState_ {
  struct List_1_Moon_SerializedBooleanUberState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_SerializedBooleanUberState___Fields fields;
};
struct SerializedBooleanUberState__Array {
  struct SerializedBooleanUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SerializedBooleanUberState * vector[32];
};
struct IEnumerator_1_Moon_SerializedBooleanUberState_ {
  struct IEnumerator_1_Moon_SerializedBooleanUberState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_RuntimeGameWorldArea_ {
  struct IEnumerator_1_RuntimeGameWorldArea___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_MoonGuid___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_MoonGuid___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_MoonGuid_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_MoonGuid_ {
  struct HashSet_1_MoonGuid___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_MoonGuid___Fields fields;
};
struct HashSet_1_T_Slot_MoonGuid_ {
  int32_t hashCode;
  int32_t next;
  struct MoonGuid * value;
};
struct HashSet_1_T_Slot_MoonGuid___Boxed {
  struct HashSet_1_T_Slot_MoonGuid___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_MoonGuid_ fields;
};
struct HashSet_1_T_Slot_MoonGuid___Array {
  struct HashSet_1_T_Slot_MoonGuid___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_MoonGuid_ vector[32];
};
struct __declspec(align(8)) List_1_MessageProvider___Fields {
  struct MessageProvider__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MessageProvider_ {
  struct List_1_MessageProvider___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MessageProvider___Fields fields;
};
struct MessageProvider__Array {
  struct MessageProvider__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MessageProvider * vector[32];
};
struct IEnumerator_1_MessageProvider_ {
  struct IEnumerator_1_MessageProvider___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SceneMetaData_PlayerAbilityInfo_ {
  struct IEnumerator_1_SceneMetaData_PlayerAbilityInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ScreenshotIcon___Fields {
  struct ScreenshotIcon__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ScreenshotIcon_ {
  struct List_1_ScreenshotIcon___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ScreenshotIcon___Fields fields;
};
struct __declspec(align(8)) ScreenshotIcon__Fields {
  struct String * FullTypeName;
  int32_t EnumIntegerValue;
  struct Vector2 Position;
  struct Type * m_type;
};
struct ScreenshotIcon {
  struct ScreenshotIcon__Class *klass;
  struct MonitorData *monitor;
  struct ScreenshotIcon__Fields fields;
};
struct ScreenshotIcon__Array {
  struct ScreenshotIcon__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScreenshotIcon * vector[32];
};
struct IEnumerator_1_ScreenshotIcon_ {
  struct IEnumerator_1_ScreenshotIcon___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ScreenshotText___Fields {
  struct ScreenshotText__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ScreenshotText_ {
  struct List_1_ScreenshotText___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ScreenshotText___Fields fields;
};
struct __declspec(align(8)) ScreenshotText__Fields {
  struct Vector2 Position;
  struct String * Text;
  struct Color Color;
};
struct ScreenshotText {
  struct ScreenshotText__Class *klass;
  struct MonitorData *monitor;
  struct ScreenshotText__Fields fields;
};
struct ScreenshotText__Array {
  struct ScreenshotText__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScreenshotText * vector[32];
};
struct IEnumerator_1_ScreenshotText_ {
  struct IEnumerator_1_ScreenshotText___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ScreenshotIconData___Fields {
  struct ScreenshotIconData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ScreenshotIconData_ {
  struct List_1_ScreenshotIconData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ScreenshotIconData___Fields fields;
};
enum ScreenshotIconGroup__Enum : int32_t {
  ScreenshotIconGroup__Enum_NotIdentified = -1,
  ScreenshotIconGroup__Enum_Vessel = 0,
  ScreenshotIconGroup__Enum_Lootable = 1,
  ScreenshotIconGroup__Enum_Experience = 2,
  ScreenshotIconGroup__Enum_Energy = 3,
  ScreenshotIconGroup__Enum_QuestItems = 4,
  ScreenshotIconGroup__Enum_Gate = 5,
  ScreenshotIconGroup__Enum_SpiritWells = 6,
  ScreenshotIconGroup__Enum_Race = 7,
  ScreenshotIconGroup__Enum_SpiritShard = 8,
  ScreenshotIconGroup__Enum_SpiritShardUpgrade = 9,
  ScreenshotIconGroup__Enum_Enemy = 10,
  ScreenshotIconGroup__Enum_NPC = 11,
  ScreenshotIconGroup__Enum_Spell = 12,
  ScreenshotIconGroup__Enum_LegacySetup = 13,
  ScreenshotIconGroup__Enum_Checkpoints = 14,
  ScreenshotIconGroup__Enum_Ores = 15,
  ScreenshotIconGroup__Enum_Seeds = 16,
  ScreenshotIconGroup__Enum_Wall = 17,
  ScreenshotIconGroup__Enum_KeyStones = 18,
};
struct ScreenshotIconGroup__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScreenshotIconGroup__Enum value;
};
struct __declspec(align(8)) ScreenshotIconData__Fields {
  struct String * Name;
  enum ScreenshotIconGroup__Enum Group;
  int32_t SubGroup;
  struct String * IconPath;
  struct Vector3 Position;
  bool Legacy;
};
struct ScreenshotIconData {
  struct ScreenshotIconData__Class *klass;
  struct MonitorData *monitor;
  struct ScreenshotIconData__Fields fields;
};
struct ScreenshotIconData__Array {
  struct ScreenshotIconData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScreenshotIconData * vector[32];
};
struct IEnumerator_1_ScreenshotIconData_ {
  struct IEnumerator_1_ScreenshotIconData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ScreenshotLegacySetup___Fields {
  struct ScreenshotLegacySetup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ScreenshotLegacySetup_ {
  struct List_1_ScreenshotLegacySetup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ScreenshotLegacySetup___Fields fields;
};
struct __declspec(align(8)) ScreenshotLegacySetup__Fields {
  struct String * GameObjectName;
  struct String * TypeName;
  struct String * HierarchyPath;
  struct Vector2 Position;
  struct String * PrefabGUID;
  bool MarkedAsTurd;
  struct Type * m_type;
  struct String * m_formattedName;
};
struct ScreenshotLegacySetup {
  struct ScreenshotLegacySetup__Class *klass;
  struct MonitorData *monitor;
  struct ScreenshotLegacySetup__Fields fields;
};
struct ScreenshotLegacySetup__Array {
  struct ScreenshotLegacySetup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScreenshotLegacySetup * vector[32];
};
struct IEnumerator_1_ScreenshotLegacySetup_ {
  struct IEnumerator_1_ScreenshotLegacySetup___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ScreenshotCheckpointData___Fields {
  struct ScreenshotCheckpointData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ScreenshotCheckpointData_ {
  struct List_1_ScreenshotCheckpointData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ScreenshotCheckpointData___Fields fields;
};
struct __declspec(align(8)) ScreenshotCheckpointData__Fields {
  struct Rect Bounds;
  struct Vector2 LocalRespawnPosition;
};
struct ScreenshotCheckpointData {
  struct ScreenshotCheckpointData__Class *klass;
  struct MonitorData *monitor;
  struct ScreenshotCheckpointData__Fields fields;
};
struct ScreenshotCheckpointData__Array {
  struct ScreenshotCheckpointData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScreenshotCheckpointData * vector[32];
};
struct IEnumerator_1_ScreenshotCheckpointData_ {
  struct IEnumerator_1_ScreenshotCheckpointData___Class *klass;
  struct MonitorData *monitor;
};
enum SceneDeletionFlags__Enum : int32_t {
  SceneDeletionFlags__Enum_Art = 1,
  SceneDeletionFlags__Enum_Design = 4,
  SceneDeletionFlags__Enum_Tech = 8,
  SceneDeletionFlags__Enum_ThomasApproved = 16,
};
struct SceneDeletionFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneDeletionFlags__Enum value;
};
struct __declspec(align(8)) SceneTracking__Fields {
  bool TrackProgress;
  int32_t TotalProgress;
  int32_t ArtProgressInteger;
  struct Single__Array * ArtProgressValues;
  int32_t ArtPriority;
  enum SceneDeletionFlags__Enum SceneDeletion;
  struct List_1_System_Int32_ * Areas;
  bool IsKeyScene;
  bool IsProduction;
  struct String * Comments;
  struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_ * History;
};
struct SceneTracking {
  struct SceneTracking__Class *klass;
  struct MonitorData *monitor;
  struct SceneTracking__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Fields {
  struct SceneTrackingChange__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_ {
  struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Fields fields;
};
struct __declspec(align(8)) SceneTrackingChange__Fields {
  int32_t TotalProgress;
  int32_t ArtProgressInteger;
  enum SceneDeletionFlags__Enum SceneDeletion;
  struct List_1_System_Int32_ * Areas;
  bool IsKeyScene;
  bool IsProduction;
  struct String * Comments;
  struct String * Timestamp;
  struct String * Author;
};
struct SceneTrackingChange {
  struct SceneTrackingChange__Class *klass;
  struct MonitorData *monitor;
  struct SceneTrackingChange__Fields fields;
};
struct SceneTrackingChange__Array {
  struct SceneTrackingChange__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneTrackingChange * vector[32];
};
struct IEnumerator_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_ {
  struct IEnumerator_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ReviewFramework_ReviewTargetMetadata___Fields {
  struct ReviewTargetMetadata__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ReviewFramework_ReviewTargetMetadata_ {
  struct List_1_Moon_ReviewFramework_ReviewTargetMetadata___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ReviewFramework_ReviewTargetMetadata___Fields fields;
};
enum ReviewStatus__Enum : int32_t {
  ReviewStatus__Enum_NotReviewed = 0,
  ReviewStatus__Enum_Reopened = 1,
  ReviewStatus__Enum_Approved = 2,
};
struct ReviewStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReviewStatus__Enum value;
};
struct __declspec(align(8)) ReviewTargetMetadata__Fields {
  struct String * Guid;
  struct String * ObjectName;
  enum ReviewStatus__Enum Status;
  struct ReviewTargetChangesSerialization * Changes;
};
struct ReviewTargetMetadata {
  struct ReviewTargetMetadata__Class *klass;
  struct MonitorData *monitor;
  struct ReviewTargetMetadata__Fields fields;
};
struct ReviewTargetMetadata__Array {
  struct ReviewTargetMetadata__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ReviewTargetMetadata * vector[32];
};
struct __declspec(align(8)) ReviewTargetChangesSerialization__Fields {
  struct List_1_Moon_ReviewFramework_ComponentChanges_ * Components;
  struct List_1_Moon_ReviewFramework_GameObjectChanges_ * Children;
};
struct ReviewTargetChangesSerialization {
  struct ReviewTargetChangesSerialization__Class *klass;
  struct MonitorData *monitor;
  struct ReviewTargetChangesSerialization__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_ReviewFramework_ComponentChanges___Fields {
  struct ComponentChanges__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ReviewFramework_ComponentChanges_ {
  struct List_1_Moon_ReviewFramework_ComponentChanges___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ReviewFramework_ComponentChanges___Fields fields;
};
enum ChangesStatus__Enum : int32_t {
  ChangesStatus__Enum_None = 0,
  ChangesStatus__Enum_Modified = 1,
  ChangesStatus__Enum_Removed = 2,
  ChangesStatus__Enum_Added = 3,
};
struct ChangesStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ChangesStatus__Enum value;
};
struct __declspec(align(8)) ComponentChanges__Fields {
  struct String * Type;
  enum ChangesStatus__Enum Status;
  struct List_1_Moon_ReviewFramework_PropertyChanges_ * Properties;
};
struct ComponentChanges {
  struct ComponentChanges__Class *klass;
  struct MonitorData *monitor;
  struct ComponentChanges__Fields fields;
};
struct ComponentChanges__Array {
  struct ComponentChanges__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ComponentChanges * vector[32];
};
struct __declspec(align(8)) List_1_Moon_ReviewFramework_PropertyChanges___Fields {
  struct PropertyChanges__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ReviewFramework_PropertyChanges_ {
  struct List_1_Moon_ReviewFramework_PropertyChanges___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ReviewFramework_PropertyChanges___Fields fields;
};
struct __declspec(align(8)) PropertyChanges__Fields {
  struct String * Path;
  struct String * Name;
  struct String * OldValue;
  struct String * NewValue;
};
struct PropertyChanges {
  struct PropertyChanges__Class *klass;
  struct MonitorData *monitor;
  struct PropertyChanges__Fields fields;
};
struct PropertyChanges__Array {
  struct PropertyChanges__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PropertyChanges * vector[32];
};
struct IEnumerator_1_Moon_ReviewFramework_PropertyChanges_ {
  struct IEnumerator_1_Moon_ReviewFramework_PropertyChanges___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_ReviewFramework_ComponentChanges_ {
  struct IEnumerator_1_Moon_ReviewFramework_ComponentChanges___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ReviewFramework_GameObjectChanges___Fields {
  struct GameObjectChanges__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ReviewFramework_GameObjectChanges_ {
  struct List_1_Moon_ReviewFramework_GameObjectChanges___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ReviewFramework_GameObjectChanges___Fields fields;
};
struct __declspec(align(8)) GameObjectChanges__Fields {
  enum ChangesStatus__Enum Status;
  struct String * Path;
  struct List_1_Moon_ReviewFramework_ComponentChanges_ * Components;
};
struct GameObjectChanges {
  struct GameObjectChanges__Class *klass;
  struct MonitorData *monitor;
  struct GameObjectChanges__Fields fields;
};
struct GameObjectChanges__Array {
  struct GameObjectChanges__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GameObjectChanges * vector[32];
};
struct IEnumerator_1_Moon_ReviewFramework_GameObjectChanges_ {
  struct IEnumerator_1_Moon_ReviewFramework_GameObjectChanges___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_ReviewFramework_ReviewTargetMetadata_ {
  struct IEnumerator_1_Moon_ReviewFramework_ReviewTargetMetadata___Class *klass;
  struct MonitorData *monitor;
};
struct ArtOptimizerDataContainer__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_System_Int32_ * IgnoredObjectIds;
  bool IgnoreModifiers;
  struct List_1_System_String_ * Modifiers;
  float m_objectEnergyLimit;
  float m_modifiersEnergyLimit;
  float AnimationModifierBoost;
  float CenterLayerBoost;
  struct ArtOptimizationDataModel * Data;
  float m_cachedObjectsEnergyLimit;
  float m_cachedModifiersEnergyLimit;
  struct Dictionary_2_UnityEngine_GameObject_System_Int32_ * m_fileIdsCache;
};
struct ArtOptimizerDataContainer {
  struct ArtOptimizerDataContainer__Class *klass;
  struct MonitorData *monitor;
  struct ArtOptimizerDataContainer__Fields fields;
};
struct __declspec(align(8)) ArtOptimizationDataModel__Fields {
  float Timestamp;
  float ScanningTime;
  struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ * m_serializedUberShaderWrappers;
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_SerializableUberShaderWrapper_ * m_serializableUberShadersMap;
  struct List_1_Moon_ArtOptimization_UberShaderWrapper_ * m_uberShaders;
  struct Dictionary_2_UberShaderComponent_Moon_ArtOptimization_UberShaderWrapper_ * m_uberShadersMap;
  struct TexturesPool * m_pool;
  struct String * _SceneGuid_k__BackingField;
  struct String * m_outputFolder;
  struct String * m_fullPath;
};
struct ArtOptimizationDataModel {
  struct ArtOptimizationDataModel__Class *klass;
  struct MonitorData *monitor;
  struct ArtOptimizationDataModel__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields {
  struct SerializableUberShaderWrapper__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
  struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ArtOptimization_SerializableUberShaderWrapper___Fields fields;
};
struct __declspec(align(8)) SerializableUberShaderWrapper__Fields {
  int32_t Id;
  float Energy;
  float MaxEnergy;
  struct UberShaderComponent * UberShader;
  struct HashSet_1_Moon_ArtOptimization_Sample_ * Samples;
  struct List_1_System_Single_ * SamplesEnergy;
  struct List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * m_modifiers;
  struct Dictionary_2_UberShaderModifier_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ * m_modifiersMap;
};
struct SerializableUberShaderWrapper {
  struct SerializableUberShaderWrapper__Class *klass;
  struct MonitorData *monitor;
  struct SerializableUberShaderWrapper__Fields fields;
};
struct SerializableUberShaderWrapper__Array {
  struct SerializableUberShaderWrapper__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SerializableUberShaderWrapper * vector[32];
};
struct UberShaderComponent__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UberShaderTexture_ * WorldProjectedTextures;
  bool m_executeUpdate;
  struct String * m_materialStringIdentifier;
  struct Renderer * m_rendererTarget;
  bool registeredToEditorUpdate;
  struct Dictionary_2_System_Type_System_Reflection_FieldInfo_ * m_reflectModifierFields;
  struct List_1_UberShaderModifier_ * m_tempModifiers;
  bool _IsDoingRebinding_k__BackingField;
  bool _RequiresContinuosZUpdateInEditor_k__BackingField;
  bool _RequiresWorldProjectedTexturesUpdate_k__BackingField;
  struct Transform * m_transformCached;
};
struct UberShaderComponent {
  struct UberShaderComponent__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderComponent__Fields fields;
};
struct __declspec(align(8)) List_1_UberShaderTexture___Fields {
  struct UberShaderTexture__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UberShaderTexture_ {
  struct List_1_UberShaderTexture___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UberShaderTexture___Fields fields;
};
enum TextureUvMode__Enum : int32_t {
  TextureUvMode__Enum_UvSpace = 0,
  TextureUvMode__Enum_WorldProjection = 1,
  TextureUvMode__Enum_WorldRotation = 2,
};
struct TextureUvMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextureUvMode__Enum value;
};
enum ProjectionAxis__Enum : int32_t {
  ProjectionAxis__Enum_Z = 0,
  ProjectionAxis__Enum_Y = 1,
};
struct ProjectionAxis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ProjectionAxis__Enum value;
};
struct UberShaderTextureBase_SubBindIdCache {
  int32_t US_ST;
  int32_t Parralax;
  int32_t Polar;
};
struct UberShaderTextureBase_SubBindIdCache__Boxed {
  struct UberShaderTextureBase_SubBindIdCache__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderTextureBase_SubBindIdCache fields;
};
struct UberShaderTextureBase__Fields {
  struct UberShaderProperty__Fields _;
  enum TextureUvMode__Enum UvMode;
  enum ProjectionAxis__Enum WorldProjectionAxis;
  bool IsPolarUvs;
  bool DoParralax;
  bool IsCubemap;
  float ParralaxAmount;
  struct Transform * Anchor;
  struct Transform * LookAtTarget;
  struct Vector2 AnchorOffset;
  float RotationOffset;
  bool LockToAnchorX;
  bool LockToAnchorY;
  bool LockToAnchorRotation;
  bool UpdateInEditor;
  bool DisableBinding;
  struct Vector4 PolarUvSettings;
  struct Vector2 ProTextureScale;
  struct Vector2 ProTextureScroll;
  struct Vector2 ProTextureScrollMultiplier;
  struct Vector2 ProTextureOffset;
  float ProTextureRotation;
  float ProTextureRotationSpeed;
  struct UberShaderTextureBase_SubBindIdCache SubBindID;
};
struct UberShaderTextureBase {
  struct UberShaderTextureBase__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderTextureBase__Fields fields;
};
struct UberShaderTexture__Fields {
  struct UberShaderTextureBase__Fields _;
  struct Texture2D * m_texture;
  bool IsVertexTexture;
  struct String * VariantUnboundKeyword;
};
struct UberShaderTexture {
  struct UberShaderTexture__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderTexture__Fields fields;
};
struct UberShaderTexture__Array {
  struct UberShaderTexture__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderTexture * vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
  struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct UberShaderTextureBase_SubBindIdCache value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UberShaderTextureBase_SubBindIdCache_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields {
  struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields {
  struct Dictionary_2_System_Int32_UberShaderTextureBase_SubBindIdCache_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UberShaderTextureBase_SubBindIdCache___Fields fields;
};
struct UberShaderTextureBase_SubBindIdCache__Array {
  struct UberShaderTextureBase_SubBindIdCache__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberShaderTextureBase_SubBindIdCache vector[32];
};}