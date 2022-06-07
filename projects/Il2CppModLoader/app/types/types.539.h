namespace app {
struct __declspec(align(8)) List_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Fields {
    struct SceneMetaData_ReverseSceneLoadingZoneInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo_ {
    struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Fields fields;
};

struct __declspec(align(8)) SceneMetaData_ReverseSceneLoadingZoneInfo__Fields {
    struct Rect Rectangle;
    struct SceneMetaData *SceneToLoad;
};

struct SceneMetaData_ReverseSceneLoadingZoneInfo {
    struct SceneMetaData_ReverseSceneLoadingZoneInfo__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_ReverseSceneLoadingZoneInfo__Fields fields;
};

struct SceneMetaData_ReverseSceneLoadingZoneInfo__Array {
    struct SceneMetaData_ReverseSceneLoadingZoneInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneMetaData_ReverseSceneLoadingZoneInfo *vector[32];
};

struct IEnumerator_1_SceneMetaData_ReverseSceneLoadingZoneInfo_ {
    struct IEnumerator_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SceneMetaData_WorldMapIcon___Fields {
    struct SceneMetaData_WorldMapIcon__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SceneMetaData_WorldMapIcon_ {
    struct List_1_SceneMetaData_WorldMapIcon___Class *klass;
    MonitorData *monitor;
    struct List_1_SceneMetaData_WorldMapIcon___Fields fields;
};

enum class WorldMapIconType__Enum : int32_t {
    Keystone = 0x00000000,
    Mapstone = 0x00000001,
    BreakableWall = 0x00000002,
    BreakableWallBroken = 0x00000003,
    StompableFloor = 0x00000004,
    StompableFloorBroken = 0x00000005,
    EnergyGateTwo = 0x00000006,
    EnergyGateOpen = 0x00000007,
    KeystoneDoorFour = 0x00000008,
    KeystoneDoorOpen = 0x00000009,
    AbilityPedestal = 0x0000000a,
    HealthUpgrade = 0x0000000b,
    EnergyUpgrade = 0x0000000c,
    SavePedestal = 0x0000000d,
    AbilityPoint = 0x0000000e,
    KeystoneDoorTwo = 0x0000000f,
    Invisible = 0x00000010,
    Experience = 0x00000011,
    MapstonePickup = 0x00000012,
    EnergyGateTwelve = 0x00000013,
    EnergyGateTen = 0x00000014,
    EnergyGateEight = 0x00000015,
    EnergyGateSix = 0x00000016,
    EnergyGateFour = 0x00000017,
    SpiritShard = 0x00000018,
    NPC = 0x00000019,
    QuestItem = 0x0000001a,
    ShardSlotUpgrade = 0x0000001b,
    Teleporter = 0x0000001c,
    Ore = 0x0000001d,
    HealthFragment = 0x00000021,
    EnergyFragment = 0x00000022,
    Seed = 0x00000023,
    QuestStart = 0x0000001e,
    QuestEnd = 0x0000001f,
    RaceStart = 0x00000020,
    RaceEnd = 0x00000024,
    Eyestone = 0x00000025,
    WatermillDoor = 0x00000028,
    TempleDoor = 0x00000029,
    SmallDoor = 0x0000002a,
    Shrine = 0x0000002b,
    Loremaster = 0x00000032,
    Weaponmaster = 0x00000033,
    Gardener = 0x00000034,
    Mapmaker = 0x00000035,
    Shardtrader = 0x00000036,
    Wanderer = 0x00000037,
    Treekeeper = 0x00000038,
    Builder = 0x00000039,
    Kwolok = 0x0000003a,
    Statistician = 0x0000003b,
    CreepHeart = 0x0000003c,
    Miner = 0x0000003d,
    Spiderling = 0x0000003e,
    Moki = 0x0000003f,
    MokiBrave = 0x00000040,
    MokiAdventurer = 0x00000041,
    MokiArtist = 0x00000042,
    MokiDarkness = 0x00000043,
    MokiFashionable = 0x00000044,
    MokiFisherman = 0x00000045,
    MokiFrozen = 0x00000046,
    MokiKwolokAmulet = 0x00000047,
    MokiSpyglass = 0x00000048,
    Ku = 0x00000049,
    IceFisher = 0x0000004a,
    Siira = 0x0000004b,
};

struct WorldMapIconType__Enum__Boxed {
    struct WorldMapIconType__Enum__Class *klass;
    MonitorData *monitor;
    WorldMapIconType__Enum value;
    
};

struct __declspec(align(8)) SceneMetaData_WorldMapIcon__Fields {
    struct MoonGuid *Guid;
    WorldMapIconType__Enum Icon;
    
    struct Vector2 Position;
    bool IsSecret;
    struct SerializedBooleanUberState *State;
    struct ConditionUberState *Condition;
    struct SerializedIntUberState *SpecialState;
};

struct SceneMetaData_WorldMapIcon {
    struct SceneMetaData_WorldMapIcon__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_WorldMapIcon__Fields fields;
};

struct SceneMetaData_WorldMapIcon__Array {
    struct SceneMetaData_WorldMapIcon__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneMetaData_WorldMapIcon *vector[32];
};

struct IEnumerator_1_SceneMetaData_WorldMapIcon_ {
    struct IEnumerator_1_SceneMetaData_WorldMapIcon___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SceneMetaData_RaceInfo___Fields {
    struct SceneMetaData_RaceInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SceneMetaData_RaceInfo_ {
    struct List_1_SceneMetaData_RaceInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_SceneMetaData_RaceInfo___Fields fields;
};

struct __declspec(align(8)) SceneMetaData_RaceInfo__Fields {
    struct Vector2 Position;
    struct SerializedIntUberState *State;
};

struct SceneMetaData_RaceInfo {
    struct SceneMetaData_RaceInfo__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_RaceInfo__Fields fields;
};

struct SceneMetaData_RaceInfo__Array {
    struct SceneMetaData_RaceInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneMetaData_RaceInfo *vector[32];
};

struct IEnumerator_1_SceneMetaData_RaceInfo_ {
    struct IEnumerator_1_SceneMetaData_RaceInfo___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SceneMetaData_PlayerAbilityInfo___Fields {
    struct SceneMetaData_PlayerAbilityInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SceneMetaData_PlayerAbilityInfo_ {
    struct List_1_SceneMetaData_PlayerAbilityInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_SceneMetaData_PlayerAbilityInfo___Fields fields;
};

struct __declspec(align(8)) SceneMetaData_PlayerAbilityInfo__Fields {
    struct Vector2 Position;
    struct PlayerUberStateDescriptor *Descriptor;
    AbilityType__Enum Ability;
    
};

struct SceneMetaData_PlayerAbilityInfo {
    struct SceneMetaData_PlayerAbilityInfo__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_PlayerAbilityInfo__Fields fields;
};

struct PlayerUberStateDescriptor__Fields {
    struct ObjectUberState__Fields _;
    struct PlayerUberState *EditorValue;
    struct PlayerUberState *m_state;
    struct GameWorld *GameWorld;
    struct UberStateGroup *Group;
    struct UberID *m_cachedGroupID;
    bool m_isGroupIDCached;
    int32_t m_cachedValueStoreID;
    bool m_isActive;
    struct Rect m_scrollViewRect;
    struct Rect m_previousRect;
    struct Rect m_lastRect;
    struct NavigableOnGUI *m_navigatableGui;
    struct Vector2 m_scroll;
    bool inputDetected;
};

struct PlayerUberStateDescriptor {
    struct PlayerUberStateDescriptor__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateDescriptor__Fields fields;
};

struct __declspec(align(8)) PlayerUberState__Fields {
    struct PlayerUberStateAbilities *Abilities;
    struct PlayerUberStateInventory *Inventory;
    struct PlayerUberStateShards *Shards;
    struct PlayerUberStateStats *Stats;
    struct PlayerUberStateHoldables *Holdables;
    struct PlayerUberStateAreaMapInformation *AreaMapInfo;
    struct PlayerUberStatePinInformation *PinInfo;
    struct PlayerUberStateGeneral *General;
};

struct PlayerUberState {
    struct PlayerUberState__Class *klass;
    MonitorData *monitor;
    struct PlayerUberState__Fields fields;
};

struct __declspec(align(8)) PlayerUberStateAbilities__Fields {
    struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ *m_abilities;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ *m_abilitiesList;
    struct Action *m_setDirtyCallback;
    bool m_abilitiesFoldout;
};

struct PlayerUberStateAbilities {
    struct PlayerUberStateAbilities__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateAbilities__Fields fields;
};

struct Action_2_AbilityType_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_AbilityType_Boolean_ {
    struct Action_2_AbilityType_Boolean___Class *klass;
    MonitorData *monitor;
    struct Action_2_AbilityType_Boolean___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_AbilityType_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    int32_t hashCode;
    int32_t next;
    AbilityType__Enum key;
    
    struct PlayerUberStateAbilities_Ability *value;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ fields;
};

struct __declspec(align(8)) PlayerUberStateAbilities_Ability__Fields {
    AbilityType__Enum Type;
    
    bool HasAbility;
    int32_t AbilityLevel;
    uint8_t UnlockOrder;
};

struct PlayerUberStateAbilities_Ability {
    struct PlayerUberStateAbilities_Ability__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateAbilities_Ability__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array {
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ vector[32];
};

struct IEqualityComparer_1_AbilityType_ {
    struct IEqualityComparer_1_AbilityType___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields {
    struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields fields;
};

struct AbilityType__Enum__Array {
    struct AbilityType__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    AbilityType__Enum vector[32];
};

struct IEnumerator_1_AbilityType_ {
    struct IEnumerator_1_AbilityType___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields {
    struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields fields;
};

struct PlayerUberStateAbilities_Ability__Array {
    struct PlayerUberStateAbilities_Ability__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerUberStateAbilities_Ability *vector[32];
};

struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_AbilityType_ {
    struct ICollection_1_AbilityType___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct ICollection_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    AbilityType__Enum key;
    
    struct PlayerUberStateAbilities_Ability *value;
};

struct KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Boxed {
    struct KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ fields;
};

struct KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array {
    struct KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct IEnumerator_1_KeyValuePair_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_AbilityType_ {
    struct IEnumerable_1_AbilityType___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct IEnumerable_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields {
    struct PlayerUberStateAbilities_Ability__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ {
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability___Fields fields;
};

struct __declspec(align(8)) PlayerUberStateInventory__Fields {
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ *m_inventory;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ *m_bindings;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_ *m_questItems;
    int32_t m_keystones;
    int32_t m_mapStones;
    int32_t m_experience;
    int32_t m_ore;
    int32_t m_partialHealthContainers;
    int32_t m_partialEnergyContainers;
    bool m_expOrbHasBeenCollectedBefore;
    bool m_keystoneHasBeenCollectedBefore;
    bool m_energyOrbHasBeenCollectedBefore;
    bool m_healthOrbHasBeenCollectedBefore;
    bool m_smallExpOrbHasBeenCollectedBefore;
    bool m_mediumExpOrbHasBeenCollectedBefore;
    bool m_largeExpOrbHasBeenCollectedBefore;
    struct Action *m_setDirtyCallback;
    bool m_inventoryFoldout;
};

struct PlayerUberStateInventory {
    struct PlayerUberStateInventory__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateInventory__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Fields {
    struct PlayerUberStateInventory_InventoryItem__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ {
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Fields fields;
};

struct __declspec(align(8)) PlayerUberStateInventory_InventoryItem__Fields {
    EquipmentType__Enum m_type;
    
    bool m_isNew;
    bool m_gained;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ *Shards;
    struct Action *m_setDirtyCallback;
};

struct PlayerUberStateInventory_InventoryItem {
    struct PlayerUberStateInventory_InventoryItem__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateInventory_InventoryItem__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields {
    struct PlayerUberStateShards_Shard__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields fields;
};

struct __declspec(align(8)) PlayerUberStateShards_Shard__Fields {
    SpiritShardType__Enum m_type;
    
    int32_t m_level;
    bool m_isNew;
    bool m_gained;
    bool m_equipOnStart;
    int32_t m_index;
    struct Action *m_setDirtyCallback;
};

struct PlayerUberStateShards_Shard {
    struct PlayerUberStateShards_Shard__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateShards_Shard__Fields fields;
};

struct PlayerUberStateShards_Shard__Array {
    struct PlayerUberStateShards_Shard__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerUberStateShards_Shard *vector[32];
};

struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
};

struct PlayerUberStateInventory_InventoryItem__Array {
    struct PlayerUberStateInventory_InventoryItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerUberStateInventory_InventoryItem *vector[32];
};

struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ {
    struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem___Fields {
    struct PlayerUberStateInventory_QuestItem__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_ {
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem___Fields fields;
};

enum class QuestItemType__Enum : uint8_t {
    None = 0x00,
    IronNeedle = 0x01,
};

struct QuestItemType__Enum__Boxed {
    struct QuestItemType__Enum__Class *klass;
    MonitorData *monitor;
    QuestItemType__Enum value;
    
};

struct __declspec(align(8)) PlayerUberStateInventory_QuestItem__Fields {
    bool Collected;
    QuestItemType__Enum Type;
    
};

struct PlayerUberStateInventory_QuestItem {
    struct PlayerUberStateInventory_QuestItem__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateInventory_QuestItem__Fields fields;
};

struct PlayerUberStateInventory_QuestItem__Array {
    struct PlayerUberStateInventory_QuestItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PlayerUberStateInventory_QuestItem *vector[32];
};

struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem_ {
    struct IEnumerator_1_Moon_uberSerializationWisp_PlayerUberStateInventory_QuestItem___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PlayerUberStateShards__Fields {
    struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ *m_shards;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ *m_shardsList;
    struct Action *m_setDirtyCallback;
    int32_t m_shardSlotCount;
    bool m_shardsFoldout;
};

struct PlayerUberStateShards {
    struct PlayerUberStateShards__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateShards__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_SpiritShardType_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    int32_t hashCode;
    int32_t next;
    SpiritShardType__Enum key;
    
    struct PlayerUberStateShards_Shard *value;
};

struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Array {
    struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ vector[32];
};

struct IEqualityComparer_1_SpiritShardType_ {
    struct IEqualityComparer_1_SpiritShardType___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields {
    struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields fields;
};

struct SpiritShardType__Enum__Array {
    struct SpiritShardType__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    SpiritShardType__Enum vector[32];
};

struct IEnumerator_1_SpiritShardType_ {
    struct IEnumerator_1_SpiritShardType___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields {
    struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields fields;
};

struct ICollection_1_SpiritShardType_ {
    struct ICollection_1_SpiritShardType___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct ICollection_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    SpiritShardType__Enum key;
    
    struct PlayerUberStateShards_Shard *value;
};

struct KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Boxed {
    struct KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ fields;
};

struct KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Array {
    struct KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct IEnumerator_1_KeyValuePair_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_SpiritShardType_ {
    struct IEnumerable_1_SpiritShardType___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
    struct IEnumerable_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PlayerUberStateStats__Fields {
    float m_health;
    int32_t m_maxHealth;
    float m_energy;
    float m_maxEnergy;
    int32_t m_completion;
    int32_t m_hours;
    int32_t m_minutes;
    int32_t m_seconds;
    bool m_completed;
    bool m_wasKilled;
    bool m_completedWithEverything;
    int32_t _MinRespawnHealth_k__BackingField;
    struct Action *m_setDirtyCallback;
    bool m_statsFoldout;
};

struct PlayerUberStateStats {
    struct PlayerUberStateStats__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateStats__Fields fields;
};

struct __declspec(align(8)) PlayerUberStateHoldables__Fields {
    uint8_t State;
    struct Action *m_setDirtyCallback;
    bool m_foldout;
};

struct PlayerUberStateHoldables {
    struct PlayerUberStateHoldables__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateHoldables__Fields fields;
};

struct __declspec(align(8)) PlayerUberStateAreaMapInformation__Fields {
    struct Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ *m_areaFaceData;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_ *m_trail;
    struct PlayerUberStateAreaMapInformation_MapTrailEntryPool *m_mapTrailEntryPool;
    struct Action *m_setDirtyCallback;
    struct PlayerUberStateDescriptor *m_descriptor;
    bool m_pinFoldout;
    struct Rect m_tempRect;
};

struct PlayerUberStateAreaMapInformation {
    struct PlayerUberStateAreaMapInformation__Class *klass;
    MonitorData *monitor;
    struct PlayerUberStateAreaMapInformation__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_GameWorldAreaID_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ {
    struct Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Fields fields;
};

enum class GameWorldAreaID__Enum : int32_t {
    None = 0x00000000,
    InkwaterMarsh = 0x00000001,
    KwoloksHollow = 0x00000002,
    WellspringGlades = 0x00000003,
    WaterMill = 0x00000004,
    MidnightBurrow = 0x00000005,
    SilentWoodland = 0x00000006,
    BaursReach = 0x00000007,
    LumaPools = 0x00000008,
    MouldwoodDepths = 0x00000009,
    WeepingRidge = 0x0000000a,
    WindsweptWastes = 0x0000000b,
    GorlekMines = 0x0000000c,
    WindtornRuins = 0x0000000d,
    WillowsEnd = 0x0000000e,
    Riverlands = 0x0000000f,
};

struct GameWorldAreaID__Enum__Boxed {
    struct GameWorldAreaID__Enum__Class *klass;
    MonitorData *monitor;
    GameWorldAreaID__Enum value;
    
};

struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ {
    int32_t hashCode;
    int32_t next;
    GameWorldAreaID__Enum key;
    
    struct Dictionary_2_System_Int32_WorldMapAreaState_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_WorldMapAreaState___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_WorldMapAreaState_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_WorldMapAreaState_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_WorldMapAreaState_ {
    struct Dictionary_2_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_WorldMapAreaState___Fields fields;
};

enum class WorldMapAreaState__Enum : uint8_t {
    Hidden = 0x00,
    Discovered = 0x01,
    Visited = 0x02,
};

struct WorldMapAreaState__Enum__Boxed {
    struct WorldMapAreaState__Enum__Class *klass;
    MonitorData *monitor;
    WorldMapAreaState__Enum value;
    
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    WorldMapAreaState__Enum value;
    
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_WorldMapAreaState_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_WorldMapAreaState___Fields {
    struct Dictionary_2_System_Int32_WorldMapAreaState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_WorldMapAreaState_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_WorldMapAreaState___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_WorldMapAreaState___Fields {
    struct Dictionary_2_System_Int32_WorldMapAreaState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_WorldMapAreaState_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_WorldMapAreaState___Fields fields;
};

struct WorldMapAreaState__Enum__Array {
    struct WorldMapAreaState__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    WorldMapAreaState__Enum vector[32];
};

struct IEnumerator_1_WorldMapAreaState_ {
    struct IEnumerator_1_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_WorldMapAreaState_ {
    struct ICollection_1_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_WorldMapAreaState_ {
    int32_t key;
    WorldMapAreaState__Enum value;
    
};

struct KeyValuePair_2_System_Int32_WorldMapAreaState___Boxed {
    struct KeyValuePair_2_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_WorldMapAreaState_ fields;
};

struct KeyValuePair_2_System_Int32_WorldMapAreaState___Array {
    struct KeyValuePair_2_System_Int32_WorldMapAreaState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_WorldMapAreaState_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_WorldMapAreaState_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_WorldMapAreaState_ {
    struct IEnumerable_1_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Array {
    struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ vector[32];
};

struct IEqualityComparer_1_GameWorldAreaID_ {
    struct IEqualityComparer_1_GameWorldAreaID___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Fields {
    struct Dictionary_2_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameWorldAreaID_Dictionary_2_System_Int32_WorldMapAreaState___Fields fields;
};

}
