namespace app {
struct Archive {
    struct Archive__Class *klass;
    MonitorData *monitor;
    struct Archive__Fields fields;
};

enum class PhysicalSystemState_PhysicalSystemStateType__Enum : int32_t {
    originalState = 0x00000000,
    lastState = 0x00000001,
    restingState = 0x00000002,
    dynamicSettingsState = 0x00000003,
};

struct PhysicalSystemState_PhysicalSystemStateType__Enum__Boxed {
    struct PhysicalSystemState_PhysicalSystemStateType__Enum__Class *klass;
    MonitorData *monitor;
    PhysicalSystemState_PhysicalSystemStateType__Enum value;
    
};

struct __declspec(align(8)) PhysicalSystemState__Fields {
    struct String *StateName;
    bool Active;
    bool stateSaved;
    int32_t StateGUID;
    PhysicalSystemState_PhysicalSystemStateType__Enum StateType;
    
    struct RigidbodyState__Array *RigidbodyStates;
    struct JointState__Array *JointStates;
    struct PhysicalSystemManager *Manager;
    struct EventTriggerAnimator *TimelineApplyStateTrigger;
};

struct PhysicalSystemState {
    struct PhysicalSystemState__Class *klass;
    MonitorData *monitor;
    struct PhysicalSystemState__Fields fields;
};

struct __declspec(align(8)) RigidbodyState__Fields {
    struct Rigidbody *Rigidbody;
    struct GoThroughPlatform *m_goThrough;
    bool m_hasGoThorugh;
    bool m_GoThorughCached;
    bool Active;
    struct Vector3 OriginalPosition;
    struct Quaternion OriginalRotation;
    int32_t Layer;
    bool UseGravity;
    bool wasKinematic;
    bool LockPosition;
    bool LockRotation;
    float Mass;
    float Drag;
    float AngularDrag;
    bool GoThroughDisable;
    struct RigidbodyInertiaModifier *inertiaModifier;
    bool overrideInertia;
    struct Vector3 inertiaTensor;
    int32_t iterations;
    struct ConfigurableJoint__Array *ConfigurableJoints;
    bool ConfigurableJointsInitialized;
    struct Vector3 SuspendVelocity;
    struct Vector3 SuspendAngularVelocity;
    struct Vector3 SuspendPosition;
    bool SuspendPositionSaved;
};

struct RigidbodyState {
    struct RigidbodyState__Class *klass;
    MonitorData *monitor;
    struct RigidbodyState__Fields fields;
};

struct GoThroughPlatform__Fields {
    struct MonoBehaviour__Fields _;
    struct Collider__Array *Colliders;
    struct Transform__Array *Transforms;
    struct LightPlatform *LightPlatform;
};

struct GoThroughPlatform {
    struct GoThroughPlatform__Class *klass;
    MonitorData *monitor;
    struct GoThroughPlatform__Fields fields;
};

struct LightPlatform__Fields {
    struct MonoBehaviour__Fields _;
    bool InsideLight;
};

struct LightPlatform {
    struct LightPlatform__Class *klass;
    MonitorData *monitor;
    struct LightPlatform__Fields fields;
};

struct __declspec(align(8)) List_1_LightPlatform___Fields {
    struct LightPlatform__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LightPlatform_ {
    struct List_1_LightPlatform___Class *klass;
    MonitorData *monitor;
    struct List_1_LightPlatform___Fields fields;
};

struct LightPlatform__Array {
    struct LightPlatform__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LightPlatform *vector[32];
};

struct IEnumerator_1_LightPlatform_ {
    struct IEnumerator_1_LightPlatform___Class *klass;
    MonitorData *monitor;
};

struct RigidbodyInertiaModifier__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody *rigidBody;
    struct Vector3 inertia;
    RigidbodyConstraints__Enum m_oldConstraints;
    
    bool m_constraintsSaved;
};

struct RigidbodyInertiaModifier {
    struct RigidbodyInertiaModifier__Class *klass;
    MonitorData *monitor;
    struct RigidbodyInertiaModifier__Fields fields;
};

struct RigidbodyState__Array {
    struct RigidbodyState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RigidbodyState *vector[32];
};

struct __declspec(align(8)) JointState__Fields {
    struct ConfigurableJoint *joint;
    bool active;
    struct ConfigurableJointMotion__Enum__Array *JointMotions;
    bool SetAngularDrive;
    float AngularDriveSpring;
    float AngularDamper;
};

struct JointState {
    struct JointState__Class *klass;
    MonitorData *monitor;
    struct JointState__Fields fields;
};

struct ConfigurableJointMotion__Enum__Array {
    struct ConfigurableJointMotion__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    ConfigurableJointMotion__Enum vector[32];
};

struct JointState__Array {
    struct JointState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct JointState *vector[32];
};

struct PhysicalSystemState__Array {
    struct PhysicalSystemState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PhysicalSystemState *vector[32];
};

struct __declspec(align(8)) FrustumOptimizable__Fields {
    struct Bounds CachedBounds;
    bool Initialized;
    bool IsTransformBased;
    struct Transform *Transform;
    bool LockBounds;
    bool m_insideFrustum;
};

struct FrustumOptimizable {
    struct FrustumOptimizable__Class *klass;
    MonitorData *monitor;
    struct FrustumOptimizable__Fields fields;
};

struct __declspec(align(8)) TimeSlicedCoroutineJob__Fields {
    struct IEnumerator *m_routine;
    float _EnqueuedTime_k__BackingField;
    struct Action_1_Boolean_ *OnJobCompleted;
    struct Action *OnJobCancelled;
    bool m_hasStarted;
    bool m_isRunning;
    bool m_canceled;
    struct String *m_jobName;
    struct String *m_ownerName;
    struct String *m_sceneNameData;
    struct String *m_contextualDebugData;
    struct Func_1_String_ *m_getCustomName;
    struct Func_1_String_ *m_contextualDebugDataFunc;
    float _CustomTimeBudget_k__BackingField;
    float _AvailableBudget_k__BackingField;
};

struct TimeSlicedCoroutineJob {
    struct TimeSlicedCoroutineJob__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedCoroutineJob__Fields fields;
};

struct TimeSlicedRigidbodyTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct PhysicalSystemManager *manager;
    bool m_activate;
};

struct TimeSlicedRigidbodyTask {
    struct TimeSlicedRigidbodyTask__Class *klass;
    MonitorData *monitor;
    struct TimeSlicedRigidbodyTask__Fields fields;
};

enum class SceneState__Enum : int32_t {
    Loading = 0x00000000,
    LoadingCancelled = 0x00000001,
    Loaded = 0x00000002,
    Enabling = 0x00000003,
    Enabled = 0x00000004,
    WaitingToDisable = 0x00000005,
    Disabling = 0x00000006,
    Disabled = 0x00000007,
    Unloading = 0x00000008,
};

struct SceneState__Enum__Boxed {
    struct SceneState__Enum__Class *klass;
    MonitorData *monitor;
    SceneState__Enum value;
    
};

struct SceneRoot__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneMetaData *MetaData;
    struct List_1_UnityEngine_Object_ *SceneResources;
    struct SceneRootData *SceneRootData;
    struct Component_1__Array *m_sceneRootPreEnabledObservers;
    struct Component_1__Array *m_sceneRootPostEnabledObservers;
    struct List_1_System_Boolean_ *m_allPotentialObjectsToTimeSliceEnableModifier;
    struct List_1_UnityEngine_Component_ *m_postEnabledObservers;
    struct List_1_UnityEngine_Component_ *m_preDisableObservers;
    struct List_1_UnityEngine_GameObject_ *m_objectsToTimeSliceEnable;
    struct List_1_UnityEngine_GameObject_ *m_allPotentialObjectsToTimeSliceEnable;
    struct List_1_UnityEngine_GameObject_ *m_objectsToTimesliceDisable;
    struct Component_1__Array *m_frustumOptimizedObjects;
    bool IsUnloading;
    struct Component_1__Array *sceneRootPreDisableObservers;
    struct Object_1__Array *ResourcesToUnload;
    struct TimeSlicedActivationTask *m_activationTask;
    struct TimesliceSceneUnloadTask *m_unloadTask;
    int32_t UnloadJobPriority;
    bool m_highPriorityEnabling;
    SceneState__Enum m_state;
    
    struct Vector3 m_previousPosition;
    struct SceneSettingsComponent *m_sceneSettings;
    bool _IsReady_k__BackingField;
    bool _IsVisible_k__BackingField;
    struct HashSet_1_UnityEngine_GameObject_ *m_lightCanvases;
};

struct SceneRoot {
    struct SceneRoot__Class *klass;
    MonitorData *monitor;
    struct SceneRoot__Fields fields;
};

enum class SceneType__Enum : int32_t {
    Unspecified = 0x00000000,
    Puzzle = 0x00000001,
    Challenge = 0x00000002,
    Mood = 0x00000003,
    Cinematic = 0x00000004,
};

struct SceneType__Enum__Boxed {
    struct SceneType__Enum__Class *klass;
    MonitorData *monitor;
    SceneType__Enum value;
    
};

enum class UberAtlasArea__Enum : int32_t {
    None = -1,
    TitleScreen = 0x00000000,
    SwallowsNest = 0x00000001,
    SpiritTree = 0x00000002,
    SunkenGlades = 0x00000003,
    WestGlades = 0x00000004,
    UpperGlades = 0x00000005,
    ThornfeltSwamp = 0x00000006,
    MoonGrotto = 0x00000007,
    GinsoTree = 0x00000008,
    GinsoEntrance = 0x00000009,
    MistyWoods = 0x0000000a,
    ForlornRuins = 0x0000000b,
    ValleyOfTheWind = 0x0000000c,
    HoruFields = 0x0000000d,
    MountHoru = 0x0000000e,
    CatAndMouse = 0x0000000f,
    Outro = 0x00000010,
    KuroAttack = 0x00000011,
    KuroNest = 0x00000012,
    KuroMoment = 0x00000013,
    TheSacrifice = 0x00000014,
    WorldMap = 0x00000015,
    Prefab = 0x00000016,
    SorrowPass = 0x00000017,
    Shared = 0x00000018,
    MangroveFalls = 0x00000019,
    NorthMangroveFalls = 0x0000001a,
    SouthMangroveFalls = 0x0000001b,
    Credits = 0x0000001c,
    WotWLagoon = 0x0000001d,
    Swamp = 0x0000001e,
    Sedgewicks = 0x0000001f,
    KwoloksCavern = 0x00000020,
    Watermill = 0x00000021,
    Hub = 0x00000022,
    Arena = 0x00000023,
    PetrifiedForest = 0x00000024,
    Mine = 0x00000025,
    Spring = 0x00000026,
    Desert = 0x00000027,
    MouldwoodDepths = 0x00000028,
    VisualTargets = 0x00000029,
    Prologue = 0x0000002a,
};

struct UberAtlasArea__Enum__Boxed {
    struct UberAtlasArea__Enum__Class *klass;
    MonitorData *monitor;
    UberAtlasArea__Enum value;
    
};

struct SceneMetaData__Fields {
    struct ScriptableObject__Fields _;
    struct SceneMetaData_SeinInitialValuesWotW *InitialValuesWisp;
    struct SceneMetaData_SeinInitialValuesBlindForest *InitialValuesBlindForest;
    struct List_1_SceneMetaData_SceneSavePedestal_ *Pedestals;
    bool Exclude;
    struct MoonGuid *SceneMoonGuid;
    int32_t LinearId;
    struct List_1_SceneMetaData_ *IncludedScenes;
    bool DependantScene;
    bool ShowOnlyInPadding;
    SceneType__Enum SceneType;
    
    bool PrewarmEvenIfCinematic;
    float EstimatedPlayDuration;
    bool ExcludeFromFogTask;
    bool RecoverSwitchDisableGroups;
    struct List_1_UnityEngine_Rect_ *SceneLoadingBoundaries;
    struct List_1_UnityEngine_Rect_ *SceneBoundaries;
    struct List_1_UnityEngine_Rect_ *ScenePaddingBoundaries;
    struct List_1_System_Single_ *ScenePaddingWideScreenExpansion;
    struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo_ *ReverseLoadingBoundaries;
    struct Condition_1 *LoadingCondition;
    struct Vector3 SeinPlaceholderPosition;
    struct Vector3 RootPosition;
    bool OverrideOriPositionInMap;
    struct Vector3 OverridePosition;
    struct String *Notes;
    struct List_1_SceneMetaData_ *ConnectedScenes;
    bool ExcludeIcons;
    struct List_1_SceneMetaData_WorldMapIcon_ *Icons;
    struct List_1_SceneMetaData_RaceInfo_ *Races;
    struct List_1_SceneMetaData_PlayerAbilityInfo_ *AbilityTrees;
    bool ShouldRegenerateAllGUIDs;
    struct List_1_UnityEngine_Vector3_ *FPSTestPosition;
    struct List_1_ScreenshotIcon_ *ScreenshotIcons;
    struct List_1_ScreenshotText_ *ScreenshotText;
    struct List_1_ScreenshotIconData_ *ScreenshotIconsNew;
    struct List_1_ScreenshotLegacySetup_ *LegacySetups;
    struct List_1_ScreenshotCheckpointData_ *Checkpoints;
    float SceneTimelineDuration;
    bool IsMasterScene;
    bool InArtMode;
    bool IsRecordableMasterScene;
    bool CanTimeSlice;
    UberAtlasArea__Enum AtlasAreaOverride;
    
    bool HasBigDOF;
    float DynamicCameraEnemyFOVMultiplier;
    struct String *m_cachedSceneMoonGuid;
    struct String *m_sceneTexturePath;
    struct String *m_sceneSolidsTexturePath;
    struct String *m_previousTexturePath;
    struct String *m_previousSolidsTexturePath;
    struct Texture *m_previousTexture;
    struct Texture *m_previousSolidsTexture;
    struct SceneTracking *SceneTracking;
    struct List_1_Moon_ReviewFramework_ReviewTargetMetadata_ *ReviewModules;
    struct ArtOptimizerDataContainer *ArtOptimizationData;
    struct SceneSoundBankData *SoundBankData;
};

struct SceneMetaData {
    struct SceneMetaData__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData__Fields fields;
};

struct __declspec(align(8)) SceneMetaData_SeinInitialValuesWotW__Fields {
    int32_t Hearts;
    int32_t Energy;
    int32_t MinRespawnHealth;
    struct SceneMetaData_SeinWorldStateWisp *World;
    struct SceneMetaData_SeinAbilitiesWotW *Abilities;
    struct SceneMetaData_SeinEquipmentWotW *DefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW *DefaultBButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW__Array *OtherEquipment;
    struct SceneMetaData_InitialShard__Array *PassiveShards;
    struct Quest__Array *ActiveQuests;
    struct DesiredUberStateComposite *InitialUberStateValues;
    int32_t ShardSlots;
};

struct SceneMetaData_SeinInitialValuesWotW {
    struct SceneMetaData_SeinInitialValuesWotW__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SeinInitialValuesWotW__Fields fields;
};

struct __declspec(align(8)) SceneMetaData_SeinWorldStateWisp__Fields {
    bool WaterCleansed;
};

struct SceneMetaData_SeinWorldStateWisp {
    struct SceneMetaData_SeinWorldStateWisp__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SeinWorldStateWisp__Fields fields;
};

struct __declspec(align(8)) SceneMetaData_SeinAbilitiesWotW__Fields {
    bool SpiritFlame;
    bool DoubleJump;
    bool WallJump;
    bool DashNew;
    bool WaterDash;
    bool Glide;
    bool FeatherFlap;
    bool ChargeJump;
    bool Bash;
    bool SpiritLeash;
    bool Digging;
    bool SpiritMagnet;
    bool SwordCharge;
    bool BowCharge;
    bool HammerCharge;
    bool GrenadeUpgrade;
};

struct SceneMetaData_SeinAbilitiesWotW {
    struct SceneMetaData_SeinAbilitiesWotW__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SeinAbilitiesWotW__Fields fields;
};

enum class EquipmentType__Enum : int32_t {
    None = 0x00000000,
    Weapon_Hammer = 0x000003e8,
    Weapon_Bow = 0x000003e9,
    Weapon_Sword = 0x000003ea,
    Weapon_Torch = 0x000003eb,
    Weapon_Swordstaff = 0x000003ec,
    Weapon_Chainsword = 0x000003ed,
    Spell_Shot = 0x000007d0,
    Spell_HomingMissiles = 0x000007d1,
    Spell_Wave = 0x000007d2,
    Spell_Whirl = 0x000007d3,
    Spell_Glow = 0x000007d4,
    Spell_LockOn = 0x000007d5,
    Spell_Shield = 0x000007d6,
    Spell_Invisibility = 0x000007d7,
    Spell_LifeAbsorb = 0x000007d8,
    Spell_Shards = 0x000007d9,
    Spell_StickyMine = 0x000007da,
    Spell_Sentry = 0x000007db,
    Spell_Spear = 0x000007dc,
    Spell_Meditate = 0x000007dd,
    Spell_Teleport = 0x000007de,
    Spell_Chakram = 0x000007df,
    Spell_Blaze = 0x000007e0,
    Spell_Turret = 0x000007e1,
    Spell_GoldenSein = 0x000007e2,
    Spell_ChargeJump = 0x000007e3,
    Ability_Bash = 0x00000bb8,
    Ability_Leash = 0x00000bb9,
    Ability_Digging = 0x00000bba,
    Ability_Drill = 0x00000bbb,
    Ability_DoubleJump = 0x00000bbc,
    Ability_FeatherFlap = 0x00000bbd,
    AutoAbility_Dash = 0x00000fa0,
    AutoAbility_Bounce = 0x00000fa1,
    AutoAbility_Glide = 0x00000fa2,
    AutoAbility_ChargeJump = 0x00000fa3,
    AutoAbility_WaterDash = 0x00000fa4,
    AutoAbility_Climb = 0x00000fa5,
    AutoAbility_WeaponCharge = 0x00000fa6,
    AutoAbility_DamageUpgradeA = 0x00000fa7,
    AutoAbility_DamageUpgradeB = 0x00000fa8,
    AutoAbility_WaterBreath = 0x00000fa9,
};

struct EquipmentType__Enum__Boxed {
    struct EquipmentType__Enum__Class *klass;
    MonitorData *monitor;
    EquipmentType__Enum value;
    
};

struct __declspec(align(8)) SceneMetaData_SeinEquipmentWotW__Fields {
    EquipmentType__Enum Type;
    
};

struct SceneMetaData_SeinEquipmentWotW {
    struct SceneMetaData_SeinEquipmentWotW__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SeinEquipmentWotW__Fields fields;
};

struct SceneMetaData_SeinEquipmentWotW__Array {
    struct SceneMetaData_SeinEquipmentWotW__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneMetaData_SeinEquipmentWotW *vector[32];
};

enum class SpiritShardType__Enum : uint8_t {
    None = 0x00,
    GlassCannon = 0x01,
    TripleJump = 0x02,
    AntiAir = 0x03,
    Focus = 0x04,
    Swap = 0x05,
    CrescentShot_Deprecated = 0x06,
    Pierce = 0x07,
    SpiritMagnet = 0x08,
    Splinter = 0x09,
    Blaze_Deprecated = 0x0a,
    Frost_Deprecated = 0x0b,
    LifeLeech_Deprecated = 0x0c,
    Reckless = 0x0d,
    Frenzy = 0x0e,
    Explosive_Deprecated = 0x0f,
    Ricochet = 0x10,
    Climb_Deprecated = 0x11,
    Barrier = 0x12,
    SpiritLightLuck = 0x13,
    Compass_Deprecated = 0x14,
    Waterbreathing_Deprecated = 0x15,
    Vitality = 0x16,
    VitalityLuck = 0x17,
    SpiritWellShield_Deprecated = 0x18,
    EnergyLuck = 0x19,
    Energy = 0x1a,
    BloodPact = 0x1b,
    LastResort = 0x1c,
    HarvestOfLight_Deprecated = 0x1d,
    Sense = 0x1e,
    UnderwaterEfficiency_Deprecated = 0x1f,
    UltraBash = 0x20,
    UltraLeash = 0x21,
    Recycler = 0x22,
    Counterstrike = 0x23,
    HollowEnergy = 0x24,
    Supressor = 0x25,
    Aggressor = 0x26,
    Glue = 0x27,
    CombatLuck = 0x28,
    SpiritPower = 0x29,
    Overcharge_Deprecated = 0x2a,
    Untouchable = 0x2b,
    MirrorStrike = 0x2c,
    Stinger = 0x2d,
    Fracture = 0x2e,
    ChainLightning = 0x2f,
};

struct SpiritShardType__Enum__Boxed {
    struct SpiritShardType__Enum__Class *klass;
    MonitorData *monitor;
    SpiritShardType__Enum value;
    
};

struct __declspec(align(8)) SceneMetaData_InitialShard__Fields {
    SpiritShardType__Enum Type;
    
    int32_t Level;
    bool EquipOnStart;
};

struct SceneMetaData_InitialShard {
    struct SceneMetaData_InitialShard__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_InitialShard__Fields fields;
};

struct SceneMetaData_InitialShard__Array {
    struct SceneMetaData_InitialShard__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneMetaData_InitialShard *vector[32];
};

enum class Quest_QuestType__Enum : int32_t {
    Main = 0x00000000,
    Side = 0x00000001,
    Rumor = 0x00000002,
};

struct Quest_QuestType__Enum__Boxed {
    struct Quest_QuestType__Enum__Class *klass;
    MonitorData *monitor;
    Quest_QuestType__Enum value;
    
};

struct Quest__Fields {
    struct GuidOwner__Fields _;
    struct MessageProvider *NameMessageProvider;
    struct MessageProvider *ShortDescriptionMessageProvider;
    struct MessageProvider *DescriptionMessageProvider;
    struct MessageProvider *RewardMessageProvider;
    Quest_QuestType__Enum Type;
    
    bool SilentUpdate;
    bool HideObjectiveMarker;
    struct Vector2 Position;
    struct Texture2D *Icon;
    struct Quest *ChainQuest;
    struct QuestReward *OnWelcomeReward;
    struct QuestReward *OnCompleteReward;
    struct QuestReward *NonInteractionReward;
    int32_t StateOffset;
    bool SaveOnUpdate;
    bool _ShownOnMapByTimeline_k__BackingField;
    struct IGenericUberState *m_resolvedUberState;
    struct MoonReference_1_IGenericUberState_ *m_uberState;
};

struct Quest {
    struct Quest__Class *klass;
    MonitorData *monitor;
    struct Quest__Fields fields;
};

struct QuestReward__Fields {
    struct ScriptableObject__Fields _;
    int32_t Keystone;
    int32_t SpiritLight;
    int32_t Ore;
    struct Transform *RewardPrefab;
    struct MessageProvider *CustomText;
};

struct QuestReward {
    struct QuestReward__Class *klass;
    MonitorData *monitor;
    struct QuestReward__Fields fields;
};

struct Quest__Array {
    struct Quest__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Quest *vector[32];
};

enum class AbilityType__Enum : uint8_t {
    None = 0xff,
    Bash = 0x00,
    ChargeFlame = 0x02,
    WallJump = 0x03,
    Stomp = 0x04,
    DoubleJump = 0x05,
    ChargeJump = 0x08,
    Magnet = 0x0a,
    UltraMagnet = 0x0b,
    Climb = 0x0c,
    Glide = 0x0e,
    SpiritFlame = 0x0f,
    RapidFlame = 0x11,
    SplitFlameUpgrade = 0x12,
    SoulEfficiency = 0x16,
    WaterBreath = 0x17,
    ChargeFlameBlast = 0x1b,
    ChargeFlameBurn = 0x1c,
    DoubleJumpUpgrade = 0x1d,
    BashBuff = 0x1e,
    UltraDefense = 0x1f,
    HealthEfficiency = 0x20,
    Sense = 0x21,
    UltraStomp = 0x22,
    SparkFlame = 0x24,
    QuickFlame = 0x25,
    MapMarkers = 0x26,
    EnergyEfficiency = 0x27,
    HealthMarkers = 0x28,
    EnergyMarkers = 0x29,
    AbilityMarkers = 0x2a,
    Rekindle = 0x2b,
    Regroup = 0x2c,
    ChargeFlameEfficiency = 0x2d,
    UltraSoulFlame = 0x2e,
    SoulFlameEfficiency = 0x2f,
    CinderFlame = 0x30,
    UltraSplitFlame = 0x31,
    Dash = 0x32,
    Grenade = 0x33,
    GrenadeUpgrade = 0x34,
    ChargeDash = 0x35,
    AirDash = 0x36,
    GrenadeEfficiency = 0x37,
    Bounce = 0x38,
    SpiritLeash = 0x39,
    SpiritSlash = 0x3a,
    HeavySpiritSlash = 0x3b,
    FireburstSpell = 0x3c,
    FirewhirlSpell = 0x3d,
    GlowSpell = 0x3e,
    LockOnSpell = 0x3f,
    TimeWarpSpell = 0x40,
    ShieldSpell = 0x41,
    EnergyWallSpell = 0x42,
    InvisibilitySpell = 0x43,
    TrapSpell = 0x44,
    WarpSpell = 0x45,
    LightSpell = 0x46,
    MindControlSpell = 0x47,
    MirageSpell = 0x48,
    StickyMineSpell = 0x49,
    SpiritSpearSpell = 0x4a,
    LightSpearSpell = 0x4b,
    LifeAbsorbSpell = 0x4c,
    MeditateSpell = 0x4d,
    ChargeShotSpell = 0x4e,
    SpiritShardsSpell = 0x4f,
    SpiritSentrySpell = 0x50,
    PowerslideSpell = 0x51,
    CounterstrikeSpell = 0x52,
    EarthShatterSpell = 0x53,
    JumpShotSpell = 0x54,
    RoundupLeashSpell = 0x55,
    BurrowSpell = 0x56,
    PowerOfFriendshipSpell = 0x57,
    LightningSpell = 0x58,
    SpiritFlareSpell = 0x59,
    EntanglingRootsSpell = 0x5a,
    MarkOfTheWildsSpell = 0x5b,
    HomingMissileSpell = 0x5c,
    SpiritCrescentSpell = 0x5d,
    MineSpell = 0x5e,
    Pinned = 0x5f,
    Leached = 0x60,
    Bow = 0x61,
    Hammer = 0x62,
    Torch = 0x63,
    Sword = 0x64,
    Digging = 0x65,
    DashNew = 0x66,
    Launch = 0x67,
    WaterDash = 0x68,
    TeleportSpell = 0x69,
    ChakramSpell = 0x6a,
    Drill = 0x6b,
    GoldenSein = 0x6c,
    BowCharge = 0x6d,
    Swordstaff = 0x6e,
    Chainsword = 0x6f,
    SpiritMagnet = 0x70,
    SwordCharge = 0x71,
    HammerCharge = 0x72,
    Blaze = 0x73,
    TurretSpell = 0x74,
    Regenerate = 0x75,
    FeatherFlap = 0x76,
    WeaponCharge = 0x77,
    DamageUpgradeA = 0x78,
    DamageUpgradeB = 0x79,
};

struct AbilityType__Enum__Boxed {
    struct AbilityType__Enum__Class *klass;
    MonitorData *monitor;
    AbilityType__Enum value;
    
};

struct __declspec(align(8)) SceneMetaData_SeinInitialValuesBlindForest__Fields {
    int32_t Level;
    int32_t Hearts;
    int32_t Energy;
    struct SceneMetaData_SeinAbilities *Abilities;
    struct SceneMetaData_SeinWorldState *World;
    AbilityType__Enum DefaultXButtonBinding;
    
    AbilityType__Enum DefaultYButtonBinding;
    
    AbilityType__Enum DefaultBButtonBinding;
    
};

struct SceneMetaData_SeinInitialValuesBlindForest {
    struct SceneMetaData_SeinInitialValuesBlindForest__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SeinInitialValuesBlindForest__Fields fields;
};

struct __declspec(align(8)) SceneMetaData_SeinAbilities__Fields {
    bool SpiritFlame;
    bool WallJump;
    bool ChargeFlame;
    bool DoubleJump;
    bool Bash;
    bool Digging;
    bool Stomp;
    bool Glide;
    bool FeatherFlap;
    bool Climb;
    bool ChargeJump;
    bool QuickFlame;
    bool SparkFlame;
    bool ChargeFlameBurn;
    bool SplitFlame;
    bool BashBuff;
    bool CinderFlame;
    bool StompUpgrade;
    bool RapidFlame;
    bool ChargeFlameBlast;
    bool UltraSplitFlame;
    bool Magnet;
    bool MapMarkers;
    bool HealthEfficiency;
    bool UltraMagnet;
    bool EnergyEfficiency;
    bool AbilityMarkers;
    bool SoulFlameEfficiency;
    bool HealthMarkers;
    bool EnergyMarkers;
    bool Sense;
    bool Rekindle;
    bool Regroup;
    bool ChargeFlameEfficiency;
    bool UltraSoulFlame;
    bool UnlimitedAir;
    bool SoulEfficiency;
    bool DoubleJumpUpgrade;
    bool UltraDefense;
    bool Grenade;
    bool Dash;
    bool SpiritLeash;
    bool SpiritSlash;
    bool HeavySpiritSlash;
    bool Bounce;
    bool Pinned;
    bool Leached;
    bool ChargeShotSpell;
    bool Hammer;
    bool Bow;
    bool Sword;
    bool DashNew;
    bool Launch;
};

struct SceneMetaData_SeinAbilities {
    struct SceneMetaData_SeinAbilities__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SeinAbilities__Fields fields;
};

struct __declspec(align(8)) SceneMetaData_SeinWorldState__Fields {
    bool WaterCleansed;
    bool WindReleased;
};

struct SceneMetaData_SeinWorldState {
    struct SceneMetaData_SeinWorldState__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SeinWorldState__Fields fields;
};

struct __declspec(align(8)) List_1_SceneMetaData_SceneSavePedestal___Fields {
    struct SceneMetaData_SceneSavePedestal__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SceneMetaData_SceneSavePedestal_ {
    struct List_1_SceneMetaData_SceneSavePedestal___Class *klass;
    MonitorData *monitor;
    struct List_1_SceneMetaData_SceneSavePedestal___Fields fields;
};

struct __declspec(align(8)) SceneMetaData_SceneSavePedestal__Fields {
    struct String *Identifier;
    struct Vector3 SceneLocalPosition;
    struct SavePedestalUberState *SerializedState;
};

struct SceneMetaData_SceneSavePedestal {
    struct SceneMetaData_SceneSavePedestal__Class *klass;
    MonitorData *monitor;
    struct SceneMetaData_SceneSavePedestal__Fields fields;
};

struct SavePedestalUberState__Fields {
    struct ObjectUberState__Fields _;
    struct SavePedestalUberState_PedestalState *DefaultState;
    struct UberStateGroup *Group;
    struct UberID *m_cachedGroupID;
    bool m_isGroupIDCached;
    struct SavePedestalUberState_PedestalState *EditorOnlyDebugState;
};

struct SavePedestalUberState {
    struct SavePedestalUberState__Class *klass;
    MonitorData *monitor;
    struct SavePedestalUberState__Fields fields;
};

struct __declspec(align(8)) SavePedestalUberState_PedestalState__Fields {
    bool HasGameBeenSaved;
    bool IsTeleporterActive;
};

struct SavePedestalUberState_PedestalState {
    struct SavePedestalUberState_PedestalState__Class *klass;
    MonitorData *monitor;
    struct SavePedestalUberState_PedestalState__Fields fields;
};

struct SceneMetaData_SceneSavePedestal__Array {
    struct SceneMetaData_SceneSavePedestal__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneMetaData_SceneSavePedestal *vector[32];
};

struct IEnumerator_1_SceneMetaData_SceneSavePedestal_ {
    struct IEnumerator_1_SceneMetaData_SceneSavePedestal___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SceneMetaData___Fields {
    struct SceneMetaData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SceneMetaData_ {
    struct List_1_SceneMetaData___Class *klass;
    MonitorData *monitor;
    struct List_1_SceneMetaData___Fields fields;
};

struct SceneMetaData__Array {
    struct SceneMetaData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SceneMetaData *vector[32];
};

struct IEnumerator_1_SceneMetaData_ {
    struct IEnumerator_1_SceneMetaData___Class *klass;
    MonitorData *monitor;
};

}
