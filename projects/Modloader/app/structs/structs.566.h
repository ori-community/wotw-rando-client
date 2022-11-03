namespace app {
    struct GameWorldArea {
        struct GameWorldArea__Class* klass;
        MonitorData* monitor;
        struct GameWorldArea__Fields fields;
    };

    struct __declspec(align(8)) List_1_GameWorldArea_WorldMapIcon___Fields {
        struct GameWorldArea_WorldMapIcon__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_GameWorldArea_WorldMapIcon_ {
        struct List_1_GameWorldArea_WorldMapIcon___Class* klass;
        MonitorData* monitor;
        struct List_1_GameWorldArea_WorldMapIcon___Fields fields;
    };

    struct __declspec(align(8)) GameWorldArea_WorldMapIcon__Fields {
        struct SerializedIntUberState* SpecialState;
        struct MoonGuid* Guid;
        WorldMapIconType__Enum Icon;

        struct Vector2 Position;
        bool IsSecret;
        struct SerializedBooleanUberState* State;
        struct ConditionUberState* Condition;
    };

    struct GameWorldArea_WorldMapIcon {
        struct GameWorldArea_WorldMapIcon__Class* klass;
        MonitorData* monitor;
        struct GameWorldArea_WorldMapIcon__Fields fields;
    };

    struct GameWorldArea_WorldMapIcon__Array {
        struct GameWorldArea_WorldMapIcon__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GameWorldArea_WorldMapIcon* vector[32];
    };

    struct IEnumerator_1_GameWorldArea_WorldMapIcon_ {
        struct IEnumerator_1_GameWorldArea_WorldMapIcon___Class* klass;
        MonitorData* monitor;
    };

    struct ZoneScalingData__Fields {
        struct ScriptableObject__Fields _;
        int32_t ZoneID;
        struct GameObject* AreaMap;
        struct Texture* DisplayTextureOverride;
        int32_t WaterDamage;
        int32_t DamageColliderDamage;
        int32_t CreepWallHealth;
        int32_t DestructableWallHealth;
        int32_t RedirectWallHealth;
        int32_t DefaultZoneDifficulty;
        struct ZoneScalingData_ZoneMonsterData__Array* EnemyDifficultyLevels;
        struct EntityPlaceholderScalingData__Array* Enemies;
    };

    struct ZoneScalingData {
        struct ZoneScalingData__Class* klass;
        MonitorData* monitor;
        struct ZoneScalingData__Fields fields;
    };

    struct ZoneScalingData_ZoneMonsterData {
        struct EntityPlaceholderScalingData* Enemy;
        int32_t DifficultyLevel;
    };

    struct ZoneScalingData_ZoneMonsterData__Boxed {
        struct ZoneScalingData_ZoneMonsterData__Class* klass;
        MonitorData* monitor;
        struct ZoneScalingData_ZoneMonsterData fields;
    };

    enum class ScreenshotIcon_EnemyType__Enum : int32_t {
        None = 0x000003e8,
        BabySandWorm = 0x00000035,
        BugHorn = 0x00000036,
        Crab = 0x00000037,
        Gasball = 0x00000038,
        GiatWorm = 0x00000039,
        HornBugBoss = 0x0000003a,
        Jumper = 0x0000003b,
        Mantis = 0x0000003c,
        Miner = 0x0000003d,
        SandWorm = 0x0000003e,
        ShellSlug = 0x0000003f,
        Skeeto = 0x00000040,
        SneezeSlug = 0x00000041,
        SpiderBat = 0x00000042,
        SpiderBoss = 0x00000043,
        SpikeSlug = 0x00000044,
        Tentacle = 0x00000045,
        TurtleLizard = 0x00000046,
        DropSlug = 0x00000051,
        LaserShooter = 0x00000052,
        Mortar = 0x00000053,
        Mudkisser = 0x00000054,
        Slug = 0x00000055,
        Swarm = 0x00000056,
        Frog = 0x00000057,
        BombSlug = 0x00000058,
        CorruptGrenadeMiner = 0x00000059,
        CorruptPickaxeGrenadeMiner = 0x0000005a,
        CorruptPickaxeMiner = 0x0000005b,
        CorruptShockwaveMiner = 0x0000005c,
        CorruptUnarmedMiner = 0x0000005d,
        MiniMiner = 0x0000005e,
        FeralPickaxeGrenadeMiner = 0x0000005f,
        FeralPickaxeMiner = 0x00000060,
        FeralUnarmedMiner = 0x00000061,
        IcyFeralPickaxeMiner = 0x00000062,
        IcyFeralPickaxeShieldMiner = 0x00000063,
        LaserShooterBoss = 0x00000064,
        MortarWorm = 0x00000065,
        Piranha = 0x00000066,
        ScaredSkeeto = 0x00000067,
        Spiderling = 0x00000068,
        SpinningCrab = 0x00000069,
    };

    struct ScreenshotIcon_EnemyType__Enum__Boxed {
        struct ScreenshotIcon_EnemyType__Enum__Class* klass;
        MonitorData* monitor;
        ScreenshotIcon_EnemyType__Enum value;
    };

    enum class EntityPlaceholderScalingData_EntityCategory__Enum : int32_t {
        Enemy = 0x00000000,
        Boss = 0x00000001,
    };

    struct EntityPlaceholderScalingData_EntityCategory__Enum__Boxed {
        struct EntityPlaceholderScalingData_EntityCategory__Enum__Class* klass;
        MonitorData* monitor;
        EntityPlaceholderScalingData_EntityCategory__Enum value;
    };

    struct EntityPlaceholderScalingData_SelectedAttackProperties {
        struct Int32__Array* DamagePropertyIDs;
    };

    struct EntityPlaceholderScalingData_SelectedAttackProperties__Boxed {
        struct EntityPlaceholderScalingData_SelectedAttackProperties__Class* klass;
        MonitorData* monitor;
        struct EntityPlaceholderScalingData_SelectedAttackProperties fields;
    };

    struct EntityPlaceholderScalingData__Fields {
        struct ScriptableObject__Fields _;
        struct Texture2D* DisplayTexture;
        struct String* Name;
        struct ExposedProperties* Prefab;
        ScreenshotIcon_EnemyType__Enum IconType;

        float BaseHealth;
        int32_t NumberOfExperienceOrbs;
        float HeartLootChance;
        float EnergyLootChance;
        EntityPlaceholderScalingData_EntityCategory__Enum Category;

        struct EntityPlaceholderScalingData_Difficulties* Scaling;
        struct EntityPlaceholderScalingData_SelectedAttackProperties SelectedAttacks;
    };

    struct EntityPlaceholderScalingData {
        struct EntityPlaceholderScalingData__Class* klass;
        MonitorData* monitor;
        struct EntityPlaceholderScalingData__Fields fields;
    };

    struct __declspec(align(8)) EntityPlaceholderScalingData_Difficulties__Fields {
        struct EntityPlaceholderScalingData_EntityScalingValues__Array* Difficulty;
    };

    struct EntityPlaceholderScalingData_Difficulties {
        struct EntityPlaceholderScalingData_Difficulties__Class* klass;
        MonitorData* monitor;
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
        struct EntityPlaceholderScalingData_EntityScalingValues__Class* klass;
        MonitorData* monitor;
        struct EntityPlaceholderScalingData_EntityScalingValues__Fields fields;
    };

    struct EntityPlaceholderScalingData_EntityScalingValues__Array {
        struct EntityPlaceholderScalingData_EntityScalingValues__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityPlaceholderScalingData_EntityScalingValues* vector[32];
    };

    struct ZoneScalingData_ZoneMonsterData__Array {
        struct ZoneScalingData_ZoneMonsterData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ZoneScalingData_ZoneMonsterData vector[32];
    };

    struct EntityPlaceholderScalingData__Array {
        struct EntityPlaceholderScalingData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityPlaceholderScalingData* vector[32];
    };

    struct __declspec(align(8)) List_1_Moon_SerializedIntUberState___Fields {
        struct SerializedIntUberState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_SerializedIntUberState_ {
        struct List_1_Moon_SerializedIntUberState___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_SerializedIntUberState___Fields fields;
    };

    struct SerializedIntUberState__Array {
        struct SerializedIntUberState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SerializedIntUberState* vector[32];
    };

    struct IEnumerator_1_Moon_SerializedIntUberState_ {
        struct IEnumerator_1_Moon_SerializedIntUberState___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_GameWorldArea_PlayerAbilityInfo___Fields {
        struct GameWorldArea_PlayerAbilityInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_GameWorldArea_PlayerAbilityInfo_ {
        struct List_1_GameWorldArea_PlayerAbilityInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_GameWorldArea_PlayerAbilityInfo___Fields fields;
    };

    struct __declspec(align(8)) GameWorldArea_PlayerAbilityInfo__Fields {
        struct Vector2 Position;
        struct PlayerUberStateDescriptor* Descriptor;
        AbilityType__Enum Ability;
    };

    struct GameWorldArea_PlayerAbilityInfo {
        struct GameWorldArea_PlayerAbilityInfo__Class* klass;
        MonitorData* monitor;
        struct GameWorldArea_PlayerAbilityInfo__Fields fields;
    };

    struct GameWorldArea_PlayerAbilityInfo__Array {
        struct GameWorldArea_PlayerAbilityInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GameWorldArea_PlayerAbilityInfo* vector[32];
    };

    struct IEnumerator_1_GameWorldArea_PlayerAbilityInfo_ {
        struct IEnumerator_1_GameWorldArea_PlayerAbilityInfo___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_ConditionUberState___Fields {
        struct ConditionUberState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_ConditionUberState_ {
        struct List_1_Moon_ConditionUberState___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_ConditionUberState___Fields fields;
    };

    struct ConditionUberState__Array {
        struct ConditionUberState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ConditionUberState* vector[32];
    };

    struct IEnumerator_1_Moon_ConditionUberState_ {
        struct IEnumerator_1_Moon_ConditionUberState___Class* klass;
        MonitorData* monitor;
    };

    struct GameWorldArea__Array {
        struct GameWorldArea__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GameWorldArea* vector[32];
    };

    struct IEnumerator_1_GameWorldArea_ {
        struct IEnumerator_1_GameWorldArea___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_RuntimeGameWorldArea___Fields {
        struct RuntimeGameWorldArea__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_RuntimeGameWorldArea_ {
        struct List_1_RuntimeGameWorldArea___Class* klass;
        MonitorData* monitor;
        struct List_1_RuntimeGameWorldArea___Fields fields;
    };

    struct __declspec(align(8)) RuntimeGameWorldArea__Fields {
        struct GameWorldArea* Area;
        struct List_1_RuntimeWorldMapIcon_* Icons;
        struct List_1_Moon_SerializedBooleanUberState_* CollectableIconStates;
        struct List_1_Moon_SerializedBooleanUberState_* ShrineStates;
        struct List_1_Moon_SerializedIntUberState_* RaceStates;
        struct List_1_GameWorldArea_PlayerAbilityInfo_* AbilityTrees;
        struct List_1_Moon_ConditionUberState_* OtherAreaProgressionStates;
        struct IUberState__Array* m_statesThatDirtyArea;
        struct PlayerUberStateDescriptor* PlayerUberState;
        float m_collectablesCompletionAmount;
        float m_completionAmount;
        bool m_dirtyCompletionAmount;
    };

    struct RuntimeGameWorldArea {
        struct RuntimeGameWorldArea__Class* klass;
        MonitorData* monitor;
        struct RuntimeGameWorldArea__Fields fields;
    };

    struct __declspec(align(8)) List_1_RuntimeWorldMapIcon___Fields {
        struct RuntimeWorldMapIcon__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_RuntimeWorldMapIcon_ {
        struct List_1_RuntimeWorldMapIcon___Class* klass;
        MonitorData* monitor;
        struct List_1_RuntimeWorldMapIcon___Fields fields;
    };

    struct __declspec(align(8)) RuntimeWorldMapIcon__Fields {
        struct MoonGuid* Guid;
        WorldMapIconType__Enum Icon;

        struct Vector2 Position;
        struct RuntimeGameWorldArea* Area;
        bool IsSecret;
        struct SerializedBooleanUberState* IsCollectedState;
        struct ConditionUberState* Condition;
        struct SerializedIntUberState* SpecialState;
        struct AreaMapIcon* m_areaMapIcon;
        struct GameObject* IconGameObject;
    };

    struct RuntimeWorldMapIcon {
        struct RuntimeWorldMapIcon__Class* klass;
        MonitorData* monitor;
        struct RuntimeWorldMapIcon__Fields fields;
    };

    struct AreaMapIcon__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* MapIconActive;
        struct GameObject* MapIconSpecial;
        struct GameObject* MapIconInactive;
        struct GameObject* Label;
        struct GameObject* AttentionMarker;
        struct AreaMapIcon_AttentionMarkerActiveCondition__Array* AttentionMarkerActiveConditions;
        struct MessageBox* m_labelBox;
        struct GameObject* m_transparancyAnimatorContainer;
        struct ConditionUberState* AttentionMarkerState;
    };

    struct AreaMapIcon {
        struct AreaMapIcon__Class* klass;
        MonitorData* monitor;
        struct AreaMapIcon__Fields fields;
    };

    struct AreaMapIcon_AttentionMarkerActiveCondition {
        GameWorldAreaID__Enum AreaID;

        struct ConditionUberState* Condition;
    };

    struct AreaMapIcon_AttentionMarkerActiveCondition__Boxed {
        struct AreaMapIcon_AttentionMarkerActiveCondition__Class* klass;
        MonitorData* monitor;
        struct AreaMapIcon_AttentionMarkerActiveCondition fields;
    };

    struct AreaMapIcon_AttentionMarkerActiveCondition__Array {
        struct AreaMapIcon_AttentionMarkerActiveCondition__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AreaMapIcon_AttentionMarkerActiveCondition vector[32];
    };

    struct RuntimeWorldMapIcon__Array {
        struct RuntimeWorldMapIcon__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RuntimeWorldMapIcon* vector[32];
    };

    struct IEnumerator_1_RuntimeWorldMapIcon_ {
        struct IEnumerator_1_RuntimeWorldMapIcon___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_SerializedBooleanUberState___Fields {
        struct SerializedBooleanUberState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_SerializedBooleanUberState_ {
        struct List_1_Moon_SerializedBooleanUberState___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_SerializedBooleanUberState___Fields fields;
    };

    struct SerializedBooleanUberState__Array {
        struct SerializedBooleanUberState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SerializedBooleanUberState* vector[32];
    };

    struct IEnumerator_1_Moon_SerializedBooleanUberState_ {
        struct IEnumerator_1_Moon_SerializedBooleanUberState___Class* klass;
        MonitorData* monitor;
    };

    struct RuntimeGameWorldArea__Array {
        struct RuntimeGameWorldArea__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RuntimeGameWorldArea* vector[32];
    };

    struct IEnumerator_1_RuntimeGameWorldArea_ {
        struct IEnumerator_1_RuntimeGameWorldArea___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HashSet_1_MoonGuid___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_MoonGuid___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_MoonGuid_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_MoonGuid_ {
        struct HashSet_1_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_MoonGuid___Fields fields;
    };

    struct HashSet_1_T_Slot_MoonGuid_ {
        int32_t hashCode;
        int32_t next;
        struct MoonGuid* value;
    };

    struct HashSet_1_T_Slot_MoonGuid___Boxed {
        struct HashSet_1_T_Slot_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_MoonGuid_ fields;
    };

    struct HashSet_1_T_Slot_MoonGuid___Array {
        struct HashSet_1_T_Slot_MoonGuid___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_MoonGuid_ vector[32];
    };

    struct __declspec(align(8)) List_1_MessageProvider___Fields {
        struct MessageProvider__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_MessageProvider_ {
        struct List_1_MessageProvider___Class* klass;
        MonitorData* monitor;
        struct List_1_MessageProvider___Fields fields;
    };

    struct MessageProvider__Array {
        struct MessageProvider__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MessageProvider* vector[32];
    };

    struct IEnumerator_1_MessageProvider_ {
        struct IEnumerator_1_MessageProvider___Class* klass;
        MonitorData* monitor;
    };

    struct SceneMetaData_PlayerAbilityInfo__Array {
        struct SceneMetaData_PlayerAbilityInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneMetaData_PlayerAbilityInfo* vector[32];
    };

    struct IEnumerator_1_SceneMetaData_PlayerAbilityInfo_ {
        struct IEnumerator_1_SceneMetaData_PlayerAbilityInfo___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_ScreenshotIcon___Fields {
        struct ScreenshotIcon__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ScreenshotIcon_ {
        struct List_1_ScreenshotIcon___Class* klass;
        MonitorData* monitor;
        struct List_1_ScreenshotIcon___Fields fields;
    };

    struct __declspec(align(8)) ScreenshotIcon__Fields {
        struct String* FullTypeName;
        int32_t EnumIntegerValue;
        struct Vector2 Position;
        struct Type* m_type;
    };

    struct ScreenshotIcon {
        struct ScreenshotIcon__Class* klass;
        MonitorData* monitor;
        struct ScreenshotIcon__Fields fields;
    };

    struct ScreenshotIcon__Array {
        struct ScreenshotIcon__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ScreenshotIcon* vector[32];
    };

    struct IEnumerator_1_ScreenshotIcon_ {
        struct IEnumerator_1_ScreenshotIcon___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_ScreenshotText___Fields {
        struct ScreenshotText__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ScreenshotText_ {
        struct List_1_ScreenshotText___Class* klass;
        MonitorData* monitor;
        struct List_1_ScreenshotText___Fields fields;
    };

    struct __declspec(align(8)) ScreenshotText__Fields {
        struct Vector2 Position;
        struct String* Text;
        struct Color Color;
    };

    struct ScreenshotText {
        struct ScreenshotText__Class* klass;
        MonitorData* monitor;
        struct ScreenshotText__Fields fields;
    };

    struct ScreenshotText__Array {
        struct ScreenshotText__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ScreenshotText* vector[32];
    };

    struct IEnumerator_1_ScreenshotText_ {
        struct IEnumerator_1_ScreenshotText___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_ScreenshotIconData___Fields {
        struct ScreenshotIconData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ScreenshotIconData_ {
        struct List_1_ScreenshotIconData___Class* klass;
        MonitorData* monitor;
        struct List_1_ScreenshotIconData___Fields fields;
    };

    enum class ScreenshotIconGroup__Enum : int32_t {
        NotIdentified = -1,
        Vessel = 0x00000000,
        Lootable = 0x00000001,
        Experience = 0x00000002,
        Energy = 0x00000003,
        QuestItems = 0x00000004,
        Gate = 0x00000005,
        SpiritWells = 0x00000006,
        Race = 0x00000007,
        SpiritShard = 0x00000008,
        SpiritShardUpgrade = 0x00000009,
        Enemy = 0x0000000a,
        NPC = 0x0000000b,
        Spell = 0x0000000c,
        LegacySetup = 0x0000000d,
        Checkpoints = 0x0000000e,
        Ores = 0x0000000f,
        Seeds = 0x00000010,
        Wall = 0x00000011,
        KeyStones = 0x00000012,
    };

    struct ScreenshotIconGroup__Enum__Boxed {
        struct ScreenshotIconGroup__Enum__Class* klass;
        MonitorData* monitor;
        ScreenshotIconGroup__Enum value;
    };

    struct __declspec(align(8)) ScreenshotIconData__Fields {
        struct String* Name;
        ScreenshotIconGroup__Enum Group;

        int32_t SubGroup;
        struct String* IconPath;
        struct Vector3 Position;
        bool Legacy;
    };

    struct ScreenshotIconData {
        struct ScreenshotIconData__Class* klass;
        MonitorData* monitor;
        struct ScreenshotIconData__Fields fields;
    };

    struct ScreenshotIconData__Array {
        struct ScreenshotIconData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ScreenshotIconData* vector[32];
    };

    struct IEnumerator_1_ScreenshotIconData_ {
        struct IEnumerator_1_ScreenshotIconData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_ScreenshotLegacySetup___Fields {
        struct ScreenshotLegacySetup__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ScreenshotLegacySetup_ {
        struct List_1_ScreenshotLegacySetup___Class* klass;
        MonitorData* monitor;
        struct List_1_ScreenshotLegacySetup___Fields fields;
    };

    struct __declspec(align(8)) ScreenshotLegacySetup__Fields {
        struct String* GameObjectName;
        struct String* TypeName;
        struct String* HierarchyPath;
        struct Vector2 Position;
        struct String* PrefabGUID;
        bool MarkedAsTurd;
        struct Type* m_type;
        struct String* m_formattedName;
    };

    struct ScreenshotLegacySetup {
        struct ScreenshotLegacySetup__Class* klass;
        MonitorData* monitor;
        struct ScreenshotLegacySetup__Fields fields;
    };

    struct ScreenshotLegacySetup__Array {
        struct ScreenshotLegacySetup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ScreenshotLegacySetup* vector[32];
    };

    struct IEnumerator_1_ScreenshotLegacySetup_ {
        struct IEnumerator_1_ScreenshotLegacySetup___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_ScreenshotCheckpointData___Fields {
        struct ScreenshotCheckpointData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ScreenshotCheckpointData_ {
        struct List_1_ScreenshotCheckpointData___Class* klass;
        MonitorData* monitor;
        struct List_1_ScreenshotCheckpointData___Fields fields;
    };

    struct __declspec(align(8)) ScreenshotCheckpointData__Fields {
        struct Rect Bounds;
        struct Vector2 LocalRespawnPosition;
    };

    struct ScreenshotCheckpointData {
        struct ScreenshotCheckpointData__Class* klass;
        MonitorData* monitor;
        struct ScreenshotCheckpointData__Fields fields;
    };

    struct ScreenshotCheckpointData__Array {
        struct ScreenshotCheckpointData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ScreenshotCheckpointData* vector[32];
    };

    struct IEnumerator_1_ScreenshotCheckpointData_ {
        struct IEnumerator_1_ScreenshotCheckpointData___Class* klass;
        MonitorData* monitor;
    };

    enum class SceneDeletionFlags__Enum : int32_t {
        Art = 0x00000001,
        Design = 0x00000004,
        Tech = 0x00000008,
        ThomasApproved = 0x00000010,
    };

    struct SceneDeletionFlags__Enum__Boxed {
        struct SceneDeletionFlags__Enum__Class* klass;
        MonitorData* monitor;
        SceneDeletionFlags__Enum value;
    };

    struct __declspec(align(8)) SceneTracking__Fields {
        bool TrackProgress;
        int32_t TotalProgress;
        int32_t ArtProgressInteger;
        struct Single__Array* ArtProgressValues;
        int32_t ArtPriority;
        SceneDeletionFlags__Enum SceneDeletion;

        struct List_1_System_Int32_* Areas;
        bool IsKeyScene;
        bool IsProduction;
        struct String* Comments;
        struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_* History;
    };

    struct SceneTracking {
        struct SceneTracking__Class* klass;
        MonitorData* monitor;
        struct SceneTracking__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Fields {
        struct SceneTrackingChange__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_ {
        struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Fields fields;
    };

    struct __declspec(align(8)) SceneTrackingChange__Fields {
        int32_t TotalProgress;
        int32_t ArtProgressInteger;
        SceneDeletionFlags__Enum SceneDeletion;

        struct List_1_System_Int32_* Areas;
        bool IsKeyScene;
        bool IsProduction;
        struct String* Comments;
        struct String* Timestamp;
        struct String* Author;
    };

    struct SceneTrackingChange {
        struct SceneTrackingChange__Class* klass;
        MonitorData* monitor;
        struct SceneTrackingChange__Fields fields;
    };

    struct SceneTrackingChange__Array {
        struct SceneTrackingChange__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneTrackingChange* vector[32];
    };

    struct IEnumerator_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_ {
        struct IEnumerator_1_Moon_EditorTools_SceneTracking_SceneTrackingChange___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_ReviewFramework_ReviewTargetMetadata___Fields {
        struct ReviewTargetMetadata__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_ReviewFramework_ReviewTargetMetadata_ {
        struct List_1_Moon_ReviewFramework_ReviewTargetMetadata___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_ReviewFramework_ReviewTargetMetadata___Fields fields;
    };

    enum class ReviewStatus__Enum : int32_t {
        NotReviewed = 0x00000000,
        Reopened = 0x00000001,
        Approved = 0x00000002,
    };

    struct ReviewStatus__Enum__Boxed {
        struct ReviewStatus__Enum__Class* klass;
        MonitorData* monitor;
        ReviewStatus__Enum value;
    };

    struct __declspec(align(8)) ReviewTargetMetadata__Fields {
        struct String* Guid;
        struct String* ObjectName;
        ReviewStatus__Enum Status;

        struct ReviewTargetChangesSerialization* Changes;
    };

    struct ReviewTargetMetadata {
        struct ReviewTargetMetadata__Class* klass;
        MonitorData* monitor;
        struct ReviewTargetMetadata__Fields fields;
    };

    struct __declspec(align(8)) ReviewTargetChangesSerialization__Fields {
        struct List_1_Moon_ReviewFramework_ComponentChanges_* Components;
        struct List_1_Moon_ReviewFramework_GameObjectChanges_* Children;
    };

    struct ReviewTargetChangesSerialization {
        struct ReviewTargetChangesSerialization__Class* klass;
        MonitorData* monitor;
        struct ReviewTargetChangesSerialization__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_ReviewFramework_ComponentChanges___Fields {
        struct ComponentChanges__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_ReviewFramework_ComponentChanges_ {
        struct List_1_Moon_ReviewFramework_ComponentChanges___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_ReviewFramework_ComponentChanges___Fields fields;
    };

    enum class ChangesStatus__Enum : int32_t {
        None = 0x00000000,
        Modified = 0x00000001,
        Removed = 0x00000002,
        Added = 0x00000003,
    };

    struct ChangesStatus__Enum__Boxed {
        struct ChangesStatus__Enum__Class* klass;
        MonitorData* monitor;
        ChangesStatus__Enum value;
    };

    struct __declspec(align(8)) ComponentChanges__Fields {
        struct String* Type;
        ChangesStatus__Enum Status;

        struct List_1_Moon_ReviewFramework_PropertyChanges_* Properties;
    };

    struct ComponentChanges {
        struct ComponentChanges__Class* klass;
        MonitorData* monitor;
        struct ComponentChanges__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_ReviewFramework_PropertyChanges___Fields {
        struct PropertyChanges__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_ReviewFramework_PropertyChanges_ {
        struct List_1_Moon_ReviewFramework_PropertyChanges___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_ReviewFramework_PropertyChanges___Fields fields;
    };

    struct __declspec(align(8)) PropertyChanges__Fields {
        struct String* Path;
        struct String* Name;
        struct String* OldValue;
        struct String* NewValue;
    };

    struct PropertyChanges {
        struct PropertyChanges__Class* klass;
        MonitorData* monitor;
        struct PropertyChanges__Fields fields;
    };

    struct PropertyChanges__Array {
        struct PropertyChanges__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PropertyChanges* vector[32];
    };

    struct IEnumerator_1_Moon_ReviewFramework_PropertyChanges_ {
        struct IEnumerator_1_Moon_ReviewFramework_PropertyChanges___Class* klass;
        MonitorData* monitor;
    };

} // namespace app
