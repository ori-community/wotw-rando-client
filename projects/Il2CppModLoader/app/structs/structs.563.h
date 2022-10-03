namespace app {
    struct CollectablePlaceholder {
        struct CollectablePlaceholder__Class* klass;
        MonitorData* monitor;
        struct CollectablePlaceholder__Fields fields;
    };

    struct __declspec(align(8)) AllContainer_1_CollectablePlaceholder___Fields {
        struct List_1_CollectablePlaceholder_* m_objects;
    };

    struct AllContainer_1_CollectablePlaceholder_ {
        struct AllContainer_1_CollectablePlaceholder___Class* klass;
        MonitorData* monitor;
        struct AllContainer_1_CollectablePlaceholder___Fields fields;
    };

    struct __declspec(align(8)) List_1_CollectablePlaceholder___Fields {
        struct CollectablePlaceholder__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CollectablePlaceholder_ {
        struct List_1_CollectablePlaceholder___Class* klass;
        MonitorData* monitor;
        struct List_1_CollectablePlaceholder___Fields fields;
    };

    struct CollectablePlaceholder__Array {
        struct CollectablePlaceholder__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CollectablePlaceholder* vector[32];
    };

    struct IEnumerator_1_CollectablePlaceholder_ {
        struct IEnumerator_1_CollectablePlaceholder___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CollectableCheckpointSettings__Fields {
        bool CreateCheckPointOnCollect;
        struct Vector3 CheckpointPositionOffset;
    };

    struct CollectableCheckpointSettings {
        struct CollectableCheckpointSettings__Class* klass;
        MonitorData* monitor;
        struct CollectableCheckpointSettings__Fields fields;
    };

    struct VisibleOnWorldMap__Fields {
        struct GuidOwner__Fields _;
        WorldMapIconType__Enum Icon;

        struct Vector2 Offset;
        bool RevealWhenOnScreen;
        struct Condition_1* RevealCondition;
        bool IsSecret;
        struct SerializedBooleanUberState* VisibilityOverrideUberState;
        struct ConditionUberState* VisibilityOverrideCondition;
        bool m_alwaysAddToAll;
    };

    struct VisibleOnWorldMap {
        struct VisibleOnWorldMap__Class* klass;
        MonitorData* monitor;
        struct VisibleOnWorldMap__Fields fields;
    };

    struct PickupCameraTarget__Fields {
        struct PickupBase__Fields _;
        struct SceneRoot* m_sceneRoot;
        bool UseAsCameraTarget;
    };

    struct PickupCameraTarget {
        struct PickupCameraTarget__Class* klass;
        MonitorData* monitor;
        struct PickupCameraTarget__Fields fields;
    };

    struct QuestItemPickup__Fields {
        struct PickupCameraTarget__Fields _;
        QuestItemType__Enum ItemType;

        struct MessageProvider* PickupName;
        struct MessageProvider* PickupMessage;
        struct GameObject* PickupMessageIcon;
        struct Texture2D* PickupIcon;
        struct GameObject* InHandsPrefab;
    };

    struct QuestItemPickup {
        struct QuestItemPickup__Class* klass;
        MonitorData* monitor;
        struct QuestItemPickup__Fields fields;
    };

    enum class ExpOrbPickup_ExpOrbMessageType__Enum : int32_t {
        None = 0x00000000,
        PickupSmall = 0x00000001,
        PickupMedium = 0x00000002,
        PickupLarge = 0x00000003,
    };

    struct ExpOrbPickup_ExpOrbMessageType__Enum__Boxed {
        struct ExpOrbPickup_ExpOrbMessageType__Enum__Class* klass;
        MonitorData* monitor;
        ExpOrbPickup_ExpOrbMessageType__Enum value;
    };

    struct ExpOrbPickup__Fields {
        struct PickupBase__Fields _;
        ExpOrbPickup_ExpOrbMessageType__Enum MessageType;

        int32_t Amount;
    };

    struct ExpOrbPickup {
        struct ExpOrbPickup__Class* klass;
        MonitorData* monitor;
        struct ExpOrbPickup__Fields fields;
    };

    struct OrePickup__Fields {
        struct PickupCameraTarget__Fields _;
        int32_t Amount;
    };

    struct OrePickup {
        struct OrePickup__Class* klass;
        MonitorData* monitor;
        struct OrePickup__Fields fields;
    };

    struct SkillPointPickup__Fields {
        struct PickupCameraTarget__Fields _;
        int32_t Amount;
    };

    struct SkillPointPickup {
        struct SkillPointPickup__Class* klass;
        MonitorData* monitor;
        struct SkillPointPickup__Fields fields;
    };

    struct EnergyOrbPickup__Fields {
        struct PickupBase__Fields _;
        int32_t Amount;
        int32_t m_originalAmount;
    };

    struct EnergyOrbPickup {
        struct EnergyOrbPickup__Class* klass;
        MonitorData* monitor;
        struct EnergyOrbPickup__Fields fields;
    };

    struct MaxEnergyContainerPickup__Fields {
        struct PickupCameraTarget__Fields _;
        int32_t Amount;
    };

    struct MaxEnergyContainerPickup {
        struct MaxEnergyContainerPickup__Class* klass;
        MonitorData* monitor;
        struct MaxEnergyContainerPickup__Fields fields;
    };

    struct MaxEnergyHalfContainerPickup__Fields {
        struct PickupCameraTarget__Fields _;
        struct GameObject* CollectedEffectSecondHalf;
    };

    struct MaxEnergyHalfContainerPickup {
        struct MaxEnergyHalfContainerPickup__Class* klass;
        MonitorData* monitor;
        struct MaxEnergyHalfContainerPickup__Fields fields;
    };

    enum class KeystonePickup_KeystoneType__Enum : int32_t {
        Keystone = 0x00000000,
        Eyestone = 0x00000001,
    };

    struct KeystonePickup_KeystoneType__Enum__Boxed {
        struct KeystonePickup_KeystoneType__Enum__Class* klass;
        MonitorData* monitor;
        KeystonePickup_KeystoneType__Enum value;
    };

    struct KeystonePickup__Fields {
        struct PickupCameraTarget__Fields _;
        KeystonePickup_KeystoneType__Enum Type;

        int32_t Amount;
        struct GameObject* KeystoneFlyToUIPrefab;
        struct VisibleOnWorldMap* m_visibleOnWorldMap;
        bool m_currentState;
    };

    struct KeystonePickup {
        struct KeystonePickup__Class* klass;
        MonitorData* monitor;
        struct KeystonePickup__Fields fields;
    };

    struct RestoreHealthPickup__Fields {
        struct PickupBase__Fields _;
        int32_t Amount;
    };

    struct RestoreHealthPickup {
        struct RestoreHealthPickup__Class* klass;
        MonitorData* monitor;
        struct RestoreHealthPickup__Fields fields;
    };

    struct MaxHealthContainerPickup__Fields {
        struct PickupCameraTarget__Fields _;
    };

    struct MaxHealthContainerPickup {
        struct MaxHealthContainerPickup__Class* klass;
        MonitorData* monitor;
        struct MaxHealthContainerPickup__Fields fields;
    };

    struct MaxHealthHalfContainerPickup__Fields {
        struct PickupCameraTarget__Fields _;
        struct GameObject* CollectedEffectSecondHalf;
    };

    struct MaxHealthHalfContainerPickup {
        struct MaxHealthHalfContainerPickup__Class* klass;
        MonitorData* monitor;
        struct MaxHealthHalfContainerPickup__Fields fields;
    };

    struct MapStonePickup__Fields {
        struct PickupCameraTarget__Fields _;
        int32_t Amount;
    };

    struct MapStonePickup {
        struct MapStonePickup__Class* klass;
        MonitorData* monitor;
        struct MapStonePickup__Fields fields;
    };

    struct SpiritShardPickup__Fields {
        struct PickupCameraTarget__Fields _;
        SpiritShardType__Enum SpiritShardType;
    };

    struct SpiritShardPickup {
        struct SpiritShardPickup__Class* klass;
        MonitorData* monitor;
        struct SpiritShardPickup__Fields fields;
    };

    struct ShardSlotUpgradePickup__Fields {
        struct PickupCameraTarget__Fields _;
        struct VisibleOnWorldMap* m_visibleOnWorldMap;
    };

    struct ShardSlotUpgradePickup {
        struct ShardSlotUpgradePickup__Class* klass;
        MonitorData* monitor;
        struct ShardSlotUpgradePickup__Fields fields;
    };

    struct PlayerAbilities__Fields {
        struct MonoBehaviour__Fields _;
        struct PlayerUberStateDescriptor* StateDescriptor;
        struct Dictionary_2_AbilityType_System_Boolean_* m_abilitiesCache;
        struct CharacterAbility* Bash;
        struct CharacterAbility* ChargeFlame;
        struct CharacterAbility* WallJump;
        struct CharacterAbility* Stomp;
        struct CharacterAbility* DoubleJump;
        struct CharacterAbility* ChargeJump;
        struct CharacterAbility* Magnet;
        struct CharacterAbility* UltraMagnet;
        struct CharacterAbility* Climb;
        struct CharacterAbility* Glide;
        struct CharacterAbility* FeatherFlap;
        struct CharacterAbility* SpiritFlame;
        struct CharacterAbility* RapidFire;
        struct CharacterAbility* Digging;
        struct CharacterAbility* DashNew;
        struct CharacterAbility* WaterDash;
        struct CharacterAbility* Drill;
        struct CharacterAbility* SoulEfficiency;
        struct CharacterAbility* WaterBreath;
        struct CharacterAbility* ChargeFlameBlast;
        struct CharacterAbility* ChargeFlameBurn;
        struct CharacterAbility* DoubleJumpUpgrade;
        struct CharacterAbility* BashBuff;
        struct CharacterAbility* UltraDefense;
        struct CharacterAbility* HealthEfficiency;
        struct CharacterAbility* Sense;
        struct CharacterAbility* StompUpgrade;
        struct CharacterAbility* QuickFlame;
        struct CharacterAbility* MapMarkers;
        struct CharacterAbility* EnergyEfficiency;
        struct CharacterAbility* HealthMarkers;
        struct CharacterAbility* EnergyMarkers;
        struct CharacterAbility* AbilityMarkers;
        struct CharacterAbility* Rekindle;
        struct CharacterAbility* Regroup;
        struct CharacterAbility* ChargeFlameEfficiency;
        struct CharacterAbility* UltraSoulFlame;
        struct CharacterAbility* SoulFlameEfficiency;
        struct CharacterAbility* SplitFlameUpgrade;
        struct CharacterAbility* SparkFlame;
        struct CharacterAbility* CinderFlame;
        struct CharacterAbility* UltraSplitFlame;
        struct CharacterAbility* Grenade;
        struct CharacterAbility* Dash;
        struct CharacterAbility* GrenadeUpgrade;
        struct CharacterAbility* ChargeDash;
        struct CharacterAbility* AirDash;
        struct CharacterAbility* GrenadeEfficiency;
        struct CharacterAbility* Bounce;
        struct CharacterAbility* SpiritLeash;
        struct CharacterAbility* SpiritSlash;
        struct CharacterAbility* HeavySpiritSlash;
        struct CharacterAbility* Bow;
        struct CharacterAbility* Hammer;
        struct CharacterAbility* Torch;
        struct CharacterAbility* Sword;
        struct CharacterAbility* Chainsword;
        struct CharacterAbility* Swordstaff;
        struct CharacterAbility* FireburstSpell;
        struct CharacterAbility* FirewhirlSpell;
        struct CharacterAbility* GlowSpell;
        struct CharacterAbility* LockOnSpell;
        struct CharacterAbility* TimeWarpSpell;
        struct CharacterAbility* ShieldSpell;
        struct CharacterAbility* EnergyWallSpell;
        struct CharacterAbility* InvisibilitySpell;
        struct CharacterAbility* TrapSpell;
        struct CharacterAbility* WarpSpell;
        struct CharacterAbility* LightSpell;
        struct CharacterAbility* MindControlSpell;
        struct CharacterAbility* MirageSpell;
        struct CharacterAbility* StickyMineSpell;
        struct CharacterAbility* SpiritSpearSpell;
        struct CharacterAbility* LightSpearSpell;
        struct CharacterAbility* LifeAbsorbSpell;
        struct CharacterAbility* MeditateSpell;
        struct CharacterAbility* ChargeShotSpell;
        struct CharacterAbility* SpiritShardsSpell;
        struct CharacterAbility* SpiritSentrySpell;
        struct CharacterAbility* PowerslideSpell;
        struct CharacterAbility* EarthShatterSpell;
        struct CharacterAbility* JumpShotSpell;
        struct CharacterAbility* RoundupLeashSpell;
        struct CharacterAbility* PowerOfFriendshipSpell;
        struct CharacterAbility* LightningSpell;
        struct CharacterAbility* SpiritFlareSpell;
        struct CharacterAbility* EntanglingRootsSpell;
        struct CharacterAbility* MarkOfTheWildsSpell;
        struct CharacterAbility* HomingMissileSpell;
        struct CharacterAbility* SpiritCrescentSpell;
        struct CharacterAbility* MineSpell;
        struct CharacterAbility* TeleportSpell;
        struct CharacterAbility* ChakramSpell;
        struct CharacterAbility* GoldenSein;
        struct CharacterAbility* BlazeSpell;
        struct CharacterAbility* TurretSpell;
        struct CharacterAbility* Pinned;
        struct CharacterAbility* Leached;
        struct CharacterAbility* Launch;
        struct CharacterAbility* SpiritMagnet;
        struct CharacterAbility* BowCharge;
        struct CharacterAbility* SwordCharge;
        struct CharacterAbility* HammerCharge;
        struct CharacterAbility* WeaponCharge;
        struct ActionMethod* GainAbilityAction;
        struct Action* OnSetAbility;
        struct Action* OnUpgradeAbility;
        struct SeinCharacter* m_sein;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct PlayerAbilities {
        struct PlayerAbilities__Class* klass;
        MonitorData* monitor;
        struct PlayerAbilities__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_AbilityType_System_Boolean___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_AbilityType_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_AbilityType_System_Boolean_ {
        struct Dictionary_2_AbilityType_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_AbilityType_System_Boolean___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean_ {
        int32_t hashCode;
        int32_t next;
        AbilityType__Enum key;

        bool value;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Array {
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean___Fields {
        struct Dictionary_2_AbilityType_System_Boolean_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean___Fields {
        struct Dictionary_2_AbilityType_System_Boolean_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean___Fields fields;
    };

    struct KeyValuePair_2_AbilityType_System_Boolean_ {
        AbilityType__Enum key;

        bool value;
    };

    struct KeyValuePair_2_AbilityType_System_Boolean___Boxed {
        struct KeyValuePair_2_AbilityType_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_AbilityType_System_Boolean_ fields;
    };

    struct KeyValuePair_2_AbilityType_System_Boolean___Array {
        struct KeyValuePair_2_AbilityType_System_Boolean___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_AbilityType_System_Boolean_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_AbilityType_System_Boolean_ {
        struct IEnumerator_1_KeyValuePair_2_AbilityType_System_Boolean___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CharacterAbility__Fields {
        AbilityType__Enum m_abilityType;

        struct PlayerAbilities* m_playerAbilities;
    };

    struct CharacterAbility {
        struct CharacterAbility__Class* klass;
        MonitorData* monitor;
        struct CharacterAbility__Fields fields;
    };

    struct PlayerSpiritShards__Fields {
        struct MonoBehaviour__Fields _;
        struct SeinCharacter* m_sein;
        struct List_1_SpiritShardType_* InventoryItemsAvailableToBuy;
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* OnInventoryUpdated;
        struct Action* OnGlobalShardsUpdated;
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* OnGlobalShardsEquip;
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* OnGlobalShardsUnequip;
        struct Boolean__Array* m_hasShard;
        struct Boolean__Array* m_isShardEquipped;
        struct Int32__Array* m_shardLevel;
        struct Int32__Array* m_shardMaxLevel;
        struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_currentEquippedShards;
        struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_shardsToEquip;
        struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_shardsToUnequip;
        struct IUberState__Array* m_affectingUberStates;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    };

    struct PlayerSpiritShards {
        struct PlayerSpiritShards__Class* klass;
        MonitorData* monitor;
        struct PlayerSpiritShards__Fields fields;
    };

    struct __declspec(align(8)) List_1_SpiritShardType___Fields {
        struct SpiritShardType__Enum__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SpiritShardType_ {
        struct List_1_SpiritShardType___Class* klass;
        MonitorData* monitor;
        struct List_1_SpiritShardType___Fields fields;
    };

    struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class* klass;
        MonitorData* monitor;
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields fields;
    };

    struct SpellInventory__Fields {
        struct MonoBehaviour__Fields _;
        struct SeinCharacter* m_sein;
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_* OnInventoryUpdated;
        struct Action_1_SpellInventory_Binding_* OnBindingsUpdated;
        struct Action* OnSpellSharded;
        bool _ApplyOnEditor_k__BackingField;
        struct IUberState__Array* _AffectingUberStates_k__BackingField;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    };

    struct SpellInventory {
        struct SpellInventory__Class* klass;
        MonitorData* monitor;
        struct SpellInventory__Fields fields;
    };

    struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ {
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Class* klass;
        MonitorData* monitor;
        struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Fields fields;
    };

    struct Action_1_SpellInventory_Binding___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_SpellInventory_Binding_ {
        struct Action_1_SpellInventory_Binding___Class* klass;
        MonitorData* monitor;
        struct Action_1_SpellInventory_Binding___Fields fields;
    };

    enum class SpellInventory_Binding__Enum : int32_t {
        ButtonX = 0x00000000,
        ButtonY = 0x00000001,
        ButtonB = 0x00000002,
        Count = 0x00000003,
        None = 0x000000ff,
    };

    struct SpellInventory_Binding__Enum__Boxed {
        struct SpellInventory_Binding__Enum__Class* klass;
        MonitorData* monitor;
        SpellInventory_Binding__Enum value;
    };

    struct PlayerQuestItems__Fields {
        struct GuidOwner__Fields _;
    };

    struct PlayerQuestItems {
        struct PlayerQuestItems__Class* klass;
        MonitorData* monitor;
        struct PlayerQuestItems__Fields fields;
    };

    struct CharacterFovController__Fields {
        struct MonoBehaviour__Fields _;
        float ClampSpeed;
        float TransitionTime;
        bool DebugGUI;
        float MaxSpeedBasedOffset;
        float SpeedForMaxOffset;
        struct StateFovModifier__Array* StateModifiers;
        float m_velocity;
        struct Vector3 m_focalCenter;
        float m_lastTargetOffset;
        float m_currentOffset;
        float m_lastDeltaPassed;
    };

    struct CharacterFovController {
        struct CharacterFovController__Class* klass;
        MonitorData* monitor;
        struct CharacterFovController__Fields fields;
    };

    enum class SeinEvent__Enum : int32_t {
        DigOutOfZone = 0x00000000,
        DigOutOfZoneDashing = 0x00000001,
        DigDigging = 0x00000002,
        DigDashing = 0x00000003,
        DigExitingSand = 0x00000004,
        BowIdle = 0x00000005,
        BowDraw = 0x00000006,
        BowAim = 0x00000007,
        BowPullCharge = 0x00000008,
        BowRecover = 0x00000009,
        Bash = 0x0000000a,
        Bounce = 0x0000000b,
        DashNew = 0x0000000c,
    };

    struct SeinEvent__Enum__Boxed {
        struct SeinEvent__Enum__Class* klass;
        MonitorData* monitor;
        SeinEvent__Enum value;
    };

    struct StateFovModifier {
        SeinEvent__Enum State;

        float Offset;
        float TransitionTime;
    };

    struct StateFovModifier__Boxed {
        struct StateFovModifier__Class* klass;
        MonitorData* monitor;
        struct StateFovModifier fields;
    };

    struct StateFovModifier__Array {
        struct StateFovModifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct StateFovModifier vector[32];
    };

    struct SeinPrefabFactory__Fields {
        struct MonoBehaviour__Fields _;
        struct SeinCharacter* Sein;
        struct SeinPrefabSet* SeinPrefabSet;
        struct SeinNestedPrefab__Array* m_prefabs;
        struct SeinNestedPrefab* Bash;
        struct SeinNestedPrefab* Hold;
        struct SeinNestedPrefab* ChargeJump;
        struct SeinNestedPrefab* Crouch;
        struct SeinNestedPrefab* DoubleJump;
        struct SeinNestedPrefab* Fall;
        struct SeinNestedPrefab* Glide;
        struct SeinNestedPrefab* FeatherFlap;
        struct SeinNestedPrefab* GrabPushPull;
        struct SeinNestedPrefab* GrabWall;
        struct SeinNestedPrefab* Jump;
        struct SeinNestedPrefab* PushAgainstWall;
        struct SeinNestedPrefab* Run;
        struct SeinNestedPrefab* Idle;
        struct SeinNestedPrefab* SpiritFlame;
        struct SeinNestedPrefab* StandingOnEdge;
        struct SeinNestedPrefab* WallJump;
        struct SeinNestedPrefab* WallSlide;
        struct SeinNestedPrefab* Swimming;
        struct SeinNestedPrefab* SoulFlame;
        struct SeinNestedPrefab* Grenade;
        struct SeinNestedPrefab* SpiritLeash;
        struct SeinNestedPrefab* GrabRope;
        struct SeinNestedPrefab* GrabSurface;
        struct SeinNestedPrefab* PickupProcessor;
        struct SeinNestedPrefab* SpiritMagnet;
        struct SeinNestedPrefab* Bow;
        struct SeinNestedPrefab* Melee;
        struct SeinNestedPrefab* Combo;
        struct SeinNestedPrefab* Digging;
        struct SeinNestedPrefab* DashNew;
        struct SeinNestedPrefab* GlowSpell;
        struct SeinNestedPrefab* InvisibilitySpell;
        struct SeinNestedPrefab* StickyMineSpell;
        struct SeinNestedPrefab* ChakramSpell;
        struct SeinNestedPrefab* GoldenSein;
        struct SeinNestedPrefab* Blaze;
        struct SeinNestedPrefab* TurretSpell;
        struct SeinNestedPrefab* SpiritSpearSpell;
        struct SeinNestedPrefab* MeditateSpell;
        struct SeinNestedPrefab* SpiritSentrySpell;
        struct SeinNestedPrefab* HomingMissileSpell;
        struct SeinNestedPrefab* Launch;
        struct SeinNestedPrefab* CinematicToGameplay;
    };

    struct SeinPrefabFactory {
        struct SeinPrefabFactory__Class* klass;
        MonitorData* monitor;
        struct SeinPrefabFactory__Fields fields;
    };

    struct SeinPrefabSet__Fields {
        struct ScriptableObject__Fields _;
        struct GameObject* Bash;
        struct GameObject* Carry;
        struct GameObject* Hold;
        struct GameObject* ChargeJump;
        struct GameObject* Crouch;
        struct GameObject* DoubleJump;
        struct GameObject* Fall;
        struct GameObject* Glide;
        struct GameObject* FeatherFlap;
        struct GameObject* GrabPushPull;
        struct GameObject* GrabWall;
        struct GameObject* Jump;
        struct GameObject* PushAgainstWall;
        struct GameObject* Run;
        struct GameObject* Idle;
        struct GameObject* SpiritFlame;
        struct GameObject* StandingOnEdge;
        struct GameObject* Stomp;
        struct GameObject* WallJump;
        struct GameObject* WallSlide;
        struct GameObject* Swimming;
        struct GameObject* SoulFlame;
        struct GameObject* PickupProcessor;
        struct GameObject* Dash;
        struct GameObject* Grenade;
        struct GameObject* Bounce;
        struct GameObject* SpiritLeash;
        struct GameObject* SpiritSlash;
        struct GameObject* HeavySpiritSlash;
        struct GameObject* CutsceneBlock;
        struct GameObject* CutsceneMovement;
        struct GameObject* GrabRope;
        struct GameObject* GrabSurface;
        struct GameObject* Bow;
        struct GameObject* Melee;
        struct GameObject* Combo;
        struct GameObject* Digging;
        struct GameObject* DashNew;
        struct GameObject* Drill;
        struct GameObject* FireburstSpell;
        struct GameObject* FirewhirlSpell;
        struct GameObject* GlowSpell;
        struct GameObject* LockOnSpell;
        struct GameObject* TimeWarpSpell;
        struct GameObject* ShieldSpell;
        struct GameObject* EnergyWallSpell;
        struct GameObject* InvisibilitySpell;
        struct GameObject* TrapSpell;
        struct GameObject* WarpSpell;
        struct GameObject* LightSpell;
        struct GameObject* MindControlSpell;
        struct GameObject* MirageSpell;
        struct GameObject* StickyMineSpell;
        struct GameObject* SpiritSpearSpell;
        struct GameObject* LightSpearSpell;
        struct GameObject* LifeAbsorbSpell;
        struct GameObject* MeditateSpell;
        struct GameObject* ChargeShotSpell;
        struct GameObject* SpiritShardsSpell;
        struct GameObject* SpiritSentrySpell;
        struct GameObject* PowerslideSpell;
        struct GameObject* EarthShatterSpell;
        struct GameObject* JumpShotSpell;
        struct GameObject* RoundupLeashSpell;
        struct GameObject* BurrowSpell;
        struct GameObject* PowerOfFriendshipSpell;
        struct GameObject* LightningSpell;
        struct GameObject* SpiritFlareSpell;
        struct GameObject* EntanglingRootsSpell;
        struct GameObject* MarkOfTheWildsSpell;
        struct GameObject* HomingMissleSpell;
        struct GameObject* SpiritCrescentSpell;
        struct GameObject* MineSpell;
        struct GameObject* TeleportSpell;
        struct GameObject* ChakramSpell;
        struct GameObject* GoldenSeinAbility;
        struct GameObject* BlazeSpell;
        struct GameObject* TurretSpell;
        struct GameObject* Pinned;
        struct GameObject* Leached;
        struct GameObject* Launch;
        struct GameObject* StompPuppet;
        struct GameObject* CinematicToGameplay;
        struct GameObject* SpiritMagnet;
    };

    struct SeinPrefabSet {
        struct SeinPrefabSet__Class* klass;
        MonitorData* monitor;
        struct SeinPrefabSet__Fields fields;
    };

    struct __declspec(align(8)) SeinNestedPrefab__Fields {
        struct SeinCharacter* Sein;
        struct GameObject* m_prefab;
        struct GameObject* m_gameObject;
    };

    struct SeinNestedPrefab {
        struct SeinNestedPrefab__Class* klass;
        MonitorData* monitor;
        struct SeinNestedPrefab__Fields fields;
    };

    struct SeinNestedPrefab__Array {
        struct SeinNestedPrefab__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SeinNestedPrefab* vector[32];
    };

    struct __declspec(align(8)) List_1_CharacterAnimationSystem_CharacterAnimationState___Fields {
        struct CharacterAnimationSystem_CharacterAnimationState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CharacterAnimationSystem_CharacterAnimationState_ {
        struct List_1_CharacterAnimationSystem_CharacterAnimationState___Class* klass;
        MonitorData* monitor;
        struct List_1_CharacterAnimationSystem_CharacterAnimationState___Fields fields;
    };

    struct __declspec(align(8)) CharacterAnimationSystem_CharacterAnimationState__Fields {
        int32_t Layer;
        struct TextureAnimationWithTransitions* Animation;
        struct String* AnimationName;
        struct Func_1_Boolean_* ConditionFunction;
        bool PlayOnce;
        struct Action* OnStopPlaying;
        struct Action* OnStartPlaying;
        bool KeepFrame;
        bool m_onStopPlayingActionInvoked;
    };

    struct CharacterAnimationSystem_CharacterAnimationState {
        struct CharacterAnimationSystem_CharacterAnimationState__Class* klass;
        MonitorData* monitor;
        struct CharacterAnimationSystem_CharacterAnimationState__Fields fields;
    };

    struct CharacterAnimationSystem_CharacterAnimationState__Array {
        struct CharacterAnimationSystem_CharacterAnimationState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CharacterAnimationSystem_CharacterAnimationState* vector[32];
    };

    struct IEnumerator_1_CharacterAnimationSystem_CharacterAnimationState_ {
        struct IEnumerator_1_CharacterAnimationSystem_CharacterAnimationState___Class* klass;
        MonitorData* monitor;
    };

    struct SpriteAnimatorWithTransitions__Fields {
        struct Suspendable__Fields _;
        bool UseSpriteSpaceUvs;
        bool m_useSpriteSpaceUvs;
        struct TextureAnimationWithTransitions_TextureAnimationPair* m_transition;
        struct Mesh* m_mesh;
        struct Renderer* m_renderer;
        bool m_editorEnabled;
        struct AnimationMeshingSettings* MeshSettings;
        struct AtlasSpriteTextureBinder* m_binder;
        float m_lastTime;
        struct AtlasSpriteTexture* m_lastTexture;
        struct TextureAnimationWithTransitions* DefaultAnimation;
        struct TextureAnimationWithTransitions* CurrentTextureAnimationTransitions;
        struct TextureAnimationWithTransitions* PreviousTextureAnimationTransitions;
        struct TextureAnimator* m_animator;
        bool Flip;
        bool m_isInScene;
        struct Action_1_TextureAnimation_* OnAnimationEndEvent;
        struct Action_1_TextureAnimation_* OnAnimationLoopEvent;
        bool m_isSuspended;
        struct MeshFilter* m_meshFilter;
    };

    struct SpriteAnimatorWithTransitions {
        struct SpriteAnimatorWithTransitions__Class* klass;
        MonitorData* monitor;
        struct SpriteAnimatorWithTransitions__Fields fields;
    };

    struct __declspec(align(8)) AnimationMeshingSettings__Fields {
        int32_t XDivisions;
        int32_t YDivisions;
    };

    struct AnimationMeshingSettings {
        struct AnimationMeshingSettings__Class* klass;
        MonitorData* monitor;
        struct AnimationMeshingSettings__Fields fields;
    };

    struct __declspec(align(8)) AtlasSpriteTextureBinder__Fields {
        struct Vector3__Array* m_vertices;
        struct Vector2__Array* m_uvs;
        struct Int32__Array* m_triangles;
        bool m_spriceSpaceuvs;
        struct Mesh* m_mesh;
        struct MeshFilter* m_lastFilter;
        int32_t m_frame;
        int32_t m_divX;
        int32_t m_divY;
        UberScreenMode__Enum m_lastMode;

        struct Atlas* m_lastAtlas;
        struct Renderer* m_lastRenderer;
    };

    struct AtlasSpriteTextureBinder {
        struct AtlasSpriteTextureBinder__Class* klass;
        MonitorData* monitor;
        struct AtlasSpriteTextureBinder__Fields fields;
    };

    struct __declspec(align(8)) TextureAnimator__Fields {
        float _SpeedMultiplier_k__BackingField;
        struct Action* OnAnimationStart;
        int32_t m_currentLoop;
        struct TextureAnimation* m_animation;
        float m_time;
    };

    struct TextureAnimator {
        struct TextureAnimator__Class* klass;
        MonitorData* monitor;
        struct TextureAnimator__Fields fields;
    };

    struct Action_1_TextureAnimation___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_TextureAnimation_ {
        struct Action_1_TextureAnimation___Class* klass;
        MonitorData* monitor;
        struct Action_1_TextureAnimation___Fields fields;
    };

    struct GhostCharacterAbilitiesPlugin__Fields {
        struct IGhostRecorderPlugin__Fields _;
    };

    struct GhostCharacterAbilitiesPlugin {
        struct GhostCharacterAbilitiesPlugin__Class* klass;
        MonitorData* monitor;
        struct GhostCharacterAbilitiesPlugin__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_RecordableObjectPuppet___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RecordableObjectPuppet___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RecordableObjectPuppet_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RecordableObjectPuppet_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_RecordableObjectPuppet_ {
        struct Dictionary_2_System_Int32_RecordableObjectPuppet___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_RecordableObjectPuppet___Fields fields;
    };

} // namespace app
