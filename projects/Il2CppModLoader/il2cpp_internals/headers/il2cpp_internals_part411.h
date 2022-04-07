namespace app {
struct PhysicalSystemState__Array {
  struct PhysicalSystemState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PhysicalSystemState * vector[32];
};
struct __declspec(align(8)) FrustumOptimizable__Fields {
  struct Bounds CachedBounds;
  bool Initialized;
  bool IsTransformBased;
  struct Transform * Transform;
  bool LockBounds;
  bool m_insideFrustum;
};
struct FrustumOptimizable {
  struct FrustumOptimizable__Class *klass;
  struct MonitorData *monitor;
  struct FrustumOptimizable__Fields fields;
};
struct __declspec(align(8)) TimeSlicedCoroutineJob__Fields {
  struct IEnumerator * m_routine;
  float _EnqueuedTime_k__BackingField;
  struct Action_1_Boolean_ * OnJobCompleted;
  struct Action * OnJobCancelled;
  bool m_hasStarted;
  bool m_isRunning;
  bool m_canceled;
  struct String * m_jobName;
  struct String * m_ownerName;
  struct String * m_sceneNameData;
  struct String * m_contextualDebugData;
  struct Func_1_String_ * m_getCustomName;
  struct Func_1_String_ * m_contextualDebugDataFunc;
  float _CustomTimeBudget_k__BackingField;
  float _AvailableBudget_k__BackingField;
};
struct TimeSlicedCoroutineJob {
  struct TimeSlicedCoroutineJob__Class *klass;
  struct MonitorData *monitor;
  struct TimeSlicedCoroutineJob__Fields fields;
};
struct TimeSlicedRigidbodyTask__Fields {
  struct TimeSlicedCoroutineJob__Fields _;
  struct PhysicalSystemManager * manager;
  bool m_activate;
};
struct TimeSlicedRigidbodyTask {
  struct TimeSlicedRigidbodyTask__Class *klass;
  struct MonitorData *monitor;
  struct TimeSlicedRigidbodyTask__Fields fields;
};
enum SceneState__Enum : int32_t {
  SceneState__Enum_Loading = 0,
  SceneState__Enum_LoadingCancelled = 1,
  SceneState__Enum_Loaded = 2,
  SceneState__Enum_Enabling = 3,
  SceneState__Enum_Enabled = 4,
  SceneState__Enum_WaitingToDisable = 5,
  SceneState__Enum_Disabling = 6,
  SceneState__Enum_Disabled = 7,
  SceneState__Enum_Unloading = 8,
};
struct SceneState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneState__Enum value;
};
struct SceneRoot__Fields {
  struct MonoBehaviour__Fields _;
  struct SceneMetaData * MetaData;
  struct List_1_UnityEngine_Object_ * SceneResources;
  struct SceneRootData * SceneRootData;
  struct Component_1__Array * m_sceneRootPreEnabledObservers;
  struct Component_1__Array * m_sceneRootPostEnabledObservers;
  struct List_1_System_Boolean_ * m_allPotentialObjectsToTimeSliceEnableModifier;
  struct List_1_UnityEngine_Component_ * m_postEnabledObservers;
  struct List_1_UnityEngine_Component_ * m_preDisableObservers;
  struct List_1_UnityEngine_GameObject_ * m_objectsToTimeSliceEnable;
  struct List_1_UnityEngine_GameObject_ * m_allPotentialObjectsToTimeSliceEnable;
  struct List_1_UnityEngine_GameObject_ * m_objectsToTimesliceDisable;
  struct Component_1__Array * m_frustumOptimizedObjects;
  bool IsUnloading;
  struct Component_1__Array * sceneRootPreDisableObservers;
  struct Object_1__Array * ResourcesToUnload;
  struct TimeSlicedActivationTask * m_activationTask;
  struct TimesliceSceneUnloadTask * m_unloadTask;
  int32_t UnloadJobPriority;
  bool m_highPriorityEnabling;
  enum SceneState__Enum m_state;
  struct Vector3 m_previousPosition;
  struct SceneSettingsComponent * m_sceneSettings;
  bool _IsReady_k__BackingField;
  bool _IsVisible_k__BackingField;
  struct HashSet_1_UnityEngine_GameObject_ * m_lightCanvases;
};
struct SceneRoot {
  struct SceneRoot__Class *klass;
  struct MonitorData *monitor;
  struct SceneRoot__Fields fields;
};
enum SceneType__Enum : int32_t {
  SceneType__Enum_Unspecified = 0,
  SceneType__Enum_Puzzle = 1,
  SceneType__Enum_Challenge = 2,
  SceneType__Enum_Mood = 3,
  SceneType__Enum_Cinematic = 4,
};
struct SceneType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneType__Enum value;
};
enum UberAtlasArea__Enum : int32_t {
  UberAtlasArea__Enum_None = -1,
  UberAtlasArea__Enum_TitleScreen = 0,
  UberAtlasArea__Enum_SwallowsNest = 1,
  UberAtlasArea__Enum_SpiritTree = 2,
  UberAtlasArea__Enum_SunkenGlades = 3,
  UberAtlasArea__Enum_WestGlades = 4,
  UberAtlasArea__Enum_UpperGlades = 5,
  UberAtlasArea__Enum_ThornfeltSwamp = 6,
  UberAtlasArea__Enum_MoonGrotto = 7,
  UberAtlasArea__Enum_GinsoTree = 8,
  UberAtlasArea__Enum_GinsoEntrance = 9,
  UberAtlasArea__Enum_MistyWoods = 10,
  UberAtlasArea__Enum_ForlornRuins = 11,
  UberAtlasArea__Enum_ValleyOfTheWind = 12,
  UberAtlasArea__Enum_HoruFields = 13,
  UberAtlasArea__Enum_MountHoru = 14,
  UberAtlasArea__Enum_CatAndMouse = 15,
  UberAtlasArea__Enum_Outro = 16,
  UberAtlasArea__Enum_KuroAttack = 17,
  UberAtlasArea__Enum_KuroNest = 18,
  UberAtlasArea__Enum_KuroMoment = 19,
  UberAtlasArea__Enum_TheSacrifice = 20,
  UberAtlasArea__Enum_WorldMap = 21,
  UberAtlasArea__Enum_Prefab = 22,
  UberAtlasArea__Enum_SorrowPass = 23,
  UberAtlasArea__Enum_Shared = 24,
  UberAtlasArea__Enum_MangroveFalls = 25,
  UberAtlasArea__Enum_NorthMangroveFalls = 26,
  UberAtlasArea__Enum_SouthMangroveFalls = 27,
  UberAtlasArea__Enum_Credits = 28,
  UberAtlasArea__Enum_WotWLagoon = 29,
  UberAtlasArea__Enum_Swamp = 30,
  UberAtlasArea__Enum_Sedgewicks = 31,
  UberAtlasArea__Enum_KwoloksCavern = 32,
  UberAtlasArea__Enum_Watermill = 33,
  UberAtlasArea__Enum_Hub = 34,
  UberAtlasArea__Enum_Arena = 35,
  UberAtlasArea__Enum_PetrifiedForest = 36,
  UberAtlasArea__Enum_Mine = 37,
  UberAtlasArea__Enum_Spring = 38,
  UberAtlasArea__Enum_Desert = 39,
  UberAtlasArea__Enum_MouldwoodDepths = 40,
  UberAtlasArea__Enum_VisualTargets = 41,
  UberAtlasArea__Enum_Prologue = 42,
};
struct UberAtlasArea__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberAtlasArea__Enum value;
};
struct SceneMetaData__Fields {
  struct ScriptableObject__Fields _;
  struct SceneMetaData_SeinInitialValuesWotW * InitialValuesWisp;
  struct SceneMetaData_SeinInitialValuesBlindForest * InitialValuesBlindForest;
  struct List_1_SceneMetaData_SceneSavePedestal_ * Pedestals;
  bool Exclude;
  struct MoonGuid * SceneMoonGuid;
  int32_t LinearId;
  struct List_1_SceneMetaData_ * IncludedScenes;
  bool DependantScene;
  bool ShowOnlyInPadding;
  enum SceneType__Enum SceneType;
  bool PrewarmEvenIfCinematic;
  float EstimatedPlayDuration;
  bool ExcludeFromFogTask;
  bool RecoverSwitchDisableGroups;
  struct List_1_UnityEngine_Rect_ * SceneLoadingBoundaries;
  struct List_1_UnityEngine_Rect_ * SceneBoundaries;
  struct List_1_UnityEngine_Rect_ * ScenePaddingBoundaries;
  struct List_1_System_Single_ * ScenePaddingWideScreenExpansion;
  struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo_ * ReverseLoadingBoundaries;
  struct Condition_1 * LoadingCondition;
  struct Vector3 SeinPlaceholderPosition;
  struct Vector3 RootPosition;
  bool OverrideOriPositionInMap;
  struct Vector3 OverridePosition;
  struct String * Notes;
  struct List_1_SceneMetaData_ * ConnectedScenes;
  bool ExcludeIcons;
  struct List_1_SceneMetaData_WorldMapIcon_ * Icons;
  struct List_1_SceneMetaData_RaceInfo_ * Races;
  struct List_1_SceneMetaData_PlayerAbilityInfo_ * AbilityTrees;
  bool ShouldRegenerateAllGUIDs;
  struct List_1_UnityEngine_Vector3_ * FPSTestPosition;
  struct List_1_ScreenshotIcon_ * ScreenshotIcons;
  struct List_1_ScreenshotText_ * ScreenshotText;
  struct List_1_ScreenshotIconData_ * ScreenshotIconsNew;
  struct List_1_ScreenshotLegacySetup_ * LegacySetups;
  struct List_1_ScreenshotCheckpointData_ * Checkpoints;
  float SceneTimelineDuration;
  bool IsMasterScene;
  bool InArtMode;
  bool IsRecordableMasterScene;
  bool CanTimeSlice;
  enum UberAtlasArea__Enum AtlasAreaOverride;
  bool HasBigDOF;
  float DynamicCameraEnemyFOVMultiplier;
  struct String * m_cachedSceneMoonGuid;
  struct String * m_sceneTexturePath;
  struct String * m_sceneSolidsTexturePath;
  struct String * m_previousTexturePath;
  struct String * m_previousSolidsTexturePath;
  struct Texture * m_previousTexture;
  struct Texture * m_previousSolidsTexture;
  struct SceneTracking * SceneTracking;
  struct List_1_Moon_ReviewFramework_ReviewTargetMetadata_ * ReviewModules;
  struct ArtOptimizerDataContainer * ArtOptimizationData;
  struct SceneSoundBankData * SoundBankData;
};
struct SceneMetaData {
  struct SceneMetaData__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData__Fields fields;
};
struct __declspec(align(8)) SceneMetaData_SeinInitialValuesWotW__Fields {
  int32_t Hearts;
  int32_t Energy;
  int32_t MinRespawnHealth;
  struct SceneMetaData_SeinWorldStateWisp * World;
  struct SceneMetaData_SeinAbilitiesWotW * Abilities;
  struct SceneMetaData_SeinEquipmentWotW * DefaultXButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW * DefaultYButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW * DefaultBButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW__Array * OtherEquipment;
  struct SceneMetaData_InitialShard__Array * PassiveShards;
  struct Quest__Array * ActiveQuests;
  struct DesiredUberStateComposite * InitialUberStateValues;
  int32_t ShardSlots;
};
struct SceneMetaData_SeinInitialValuesWotW {
  struct SceneMetaData_SeinInitialValuesWotW__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_SeinInitialValuesWotW__Fields fields;
};
struct __declspec(align(8)) SceneMetaData_SeinWorldStateWisp__Fields {
  bool WaterCleansed;
};
struct SceneMetaData_SeinWorldStateWisp {
  struct SceneMetaData_SeinWorldStateWisp__Class *klass;
  struct MonitorData *monitor;
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
  struct MonitorData *monitor;
  struct SceneMetaData_SeinAbilitiesWotW__Fields fields;
};
enum EquipmentType__Enum : int32_t {
  EquipmentType__Enum_None = 0,
  EquipmentType__Enum_Weapon_Hammer = 1000,
  EquipmentType__Enum_Weapon_Bow = 1001,
  EquipmentType__Enum_Weapon_Sword = 1002,
  EquipmentType__Enum_Weapon_Torch = 1003,
  EquipmentType__Enum_Weapon_Swordstaff = 1004,
  EquipmentType__Enum_Weapon_Chainsword = 1005,
  EquipmentType__Enum_Spell_Shot = 2000,
  EquipmentType__Enum_Spell_HomingMissiles = 2001,
  EquipmentType__Enum_Spell_Wave = 2002,
  EquipmentType__Enum_Spell_Whirl = 2003,
  EquipmentType__Enum_Spell_Glow = 2004,
  EquipmentType__Enum_Spell_LockOn = 2005,
  EquipmentType__Enum_Spell_Shield = 2006,
  EquipmentType__Enum_Spell_Invisibility = 2007,
  EquipmentType__Enum_Spell_LifeAbsorb = 2008,
  EquipmentType__Enum_Spell_Shards = 2009,
  EquipmentType__Enum_Spell_StickyMine = 2010,
  EquipmentType__Enum_Spell_Sentry = 2011,
  EquipmentType__Enum_Spell_Spear = 2012,
  EquipmentType__Enum_Spell_Meditate = 2013,
  EquipmentType__Enum_Spell_Teleport = 2014,
  EquipmentType__Enum_Spell_Chakram = 2015,
  EquipmentType__Enum_Spell_Blaze = 2016,
  EquipmentType__Enum_Spell_Turret = 2017,
  EquipmentType__Enum_Spell_GoldenSein = 2018,
  EquipmentType__Enum_Spell_ChargeJump = 2019,
  EquipmentType__Enum_Ability_Bash = 3000,
  EquipmentType__Enum_Ability_Leash = 3001,
  EquipmentType__Enum_Ability_Digging = 3002,
  EquipmentType__Enum_Ability_Drill = 3003,
  EquipmentType__Enum_Ability_DoubleJump = 3004,
  EquipmentType__Enum_Ability_FeatherFlap = 3005,
  EquipmentType__Enum_AutoAbility_Dash = 4000,
  EquipmentType__Enum_AutoAbility_Bounce = 4001,
  EquipmentType__Enum_AutoAbility_Glide = 4002,
  EquipmentType__Enum_AutoAbility_ChargeJump = 4003,
  EquipmentType__Enum_AutoAbility_WaterDash = 4004,
  EquipmentType__Enum_AutoAbility_Climb = 4005,
  EquipmentType__Enum_AutoAbility_WeaponCharge = 4006,
  EquipmentType__Enum_AutoAbility_DamageUpgradeA = 4007,
  EquipmentType__Enum_AutoAbility_DamageUpgradeB = 4008,
  EquipmentType__Enum_AutoAbility_WaterBreath = 4009,
};
struct EquipmentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EquipmentType__Enum value;
};
struct __declspec(align(8)) SceneMetaData_SeinEquipmentWotW__Fields {
  enum EquipmentType__Enum Type;
};
struct SceneMetaData_SeinEquipmentWotW {
  struct SceneMetaData_SeinEquipmentWotW__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_SeinEquipmentWotW__Fields fields;
};
struct SceneMetaData_SeinEquipmentWotW__Array {
  struct SceneMetaData_SeinEquipmentWotW__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData_SeinEquipmentWotW * vector[32];
};
enum SpiritShardType__Enum : uint8_t {
  SpiritShardType__Enum_None = 0,
  SpiritShardType__Enum_GlassCannon = 1,
  SpiritShardType__Enum_TripleJump = 2,
  SpiritShardType__Enum_AntiAir = 3,
  SpiritShardType__Enum_Focus = 4,
  SpiritShardType__Enum_Swap = 5,
  SpiritShardType__Enum_CrescentShot_Deprecated = 6,
  SpiritShardType__Enum_Pierce = 7,
  SpiritShardType__Enum_SpiritMagnet = 8,
  SpiritShardType__Enum_Splinter = 9,
  SpiritShardType__Enum_Blaze_Deprecated = 10,
  SpiritShardType__Enum_Frost_Deprecated = 11,
  SpiritShardType__Enum_LifeLeech_Deprecated = 12,
  SpiritShardType__Enum_Reckless = 13,
  SpiritShardType__Enum_Frenzy = 14,
  SpiritShardType__Enum_Explosive_Deprecated = 15,
  SpiritShardType__Enum_Ricochet = 16,
  SpiritShardType__Enum_Climb_Deprecated = 17,
  SpiritShardType__Enum_Barrier = 18,
  SpiritShardType__Enum_SpiritLightLuck = 19,
  SpiritShardType__Enum_Compass_Deprecated = 20,
  SpiritShardType__Enum_Waterbreathing_Deprecated = 21,
  SpiritShardType__Enum_Vitality = 22,
  SpiritShardType__Enum_VitalityLuck = 23,
  SpiritShardType__Enum_SpiritWellShield_Deprecated = 24,
  SpiritShardType__Enum_EnergyLuck = 25,
  SpiritShardType__Enum_Energy = 26,
  SpiritShardType__Enum_BloodPact = 27,
  SpiritShardType__Enum_LastResort = 28,
  SpiritShardType__Enum_HarvestOfLight_Deprecated = 29,
  SpiritShardType__Enum_Sense = 30,
  SpiritShardType__Enum_UnderwaterEfficiency_Deprecated = 31,
  SpiritShardType__Enum_UltraBash = 32,
  SpiritShardType__Enum_UltraLeash = 33,
  SpiritShardType__Enum_Recycler = 34,
  SpiritShardType__Enum_Counterstrike = 35,
  SpiritShardType__Enum_HollowEnergy = 36,
  SpiritShardType__Enum_Supressor = 37,
  SpiritShardType__Enum_Aggressor = 38,
  SpiritShardType__Enum_Glue = 39,
  SpiritShardType__Enum_CombatLuck = 40,
  SpiritShardType__Enum_SpiritPower = 41,
  SpiritShardType__Enum_Overcharge_Deprecated = 42,
  SpiritShardType__Enum_Untouchable = 43,
  SpiritShardType__Enum_MirrorStrike = 44,
  SpiritShardType__Enum_Stinger = 45,
  SpiritShardType__Enum_Fracture = 46,
  SpiritShardType__Enum_ChainLightning = 47,
};
struct SpiritShardType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiritShardType__Enum value;
};
struct __declspec(align(8)) SceneMetaData_InitialShard__Fields {
  enum SpiritShardType__Enum Type;
  int32_t Level;
  bool EquipOnStart;
};
struct SceneMetaData_InitialShard {
  struct SceneMetaData_InitialShard__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_InitialShard__Fields fields;
};
struct SceneMetaData_InitialShard__Array {
  struct SceneMetaData_InitialShard__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData_InitialShard * vector[32];
};
enum Quest_QuestType__Enum : int32_t {
  Quest_QuestType__Enum_Main = 0,
  Quest_QuestType__Enum_Side = 1,
  Quest_QuestType__Enum_Rumor = 2,
};
struct Quest_QuestType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Quest_QuestType__Enum value;
};
struct Quest__Fields {
  struct GuidOwner__Fields _;
  struct MessageProvider * NameMessageProvider;
  struct MessageProvider * ShortDescriptionMessageProvider;
  struct MessageProvider * DescriptionMessageProvider;
  struct MessageProvider * RewardMessageProvider;
  enum Quest_QuestType__Enum Type;
  bool SilentUpdate;
  bool HideObjectiveMarker;
  struct Vector2 Position;
  struct Texture2D * Icon;
  struct Quest * ChainQuest;
  struct QuestReward * OnWelcomeReward;
  struct QuestReward * OnCompleteReward;
  struct QuestReward * NonInteractionReward;
  int32_t StateOffset;
  bool SaveOnUpdate;
  bool _ShownOnMapByTimeline_k__BackingField;
  struct IGenericUberState * m_resolvedUberState;
  struct MoonReference_1_IGenericUberState_ * m_uberState;
};
struct Quest {
  struct Quest__Class *klass;
  struct MonitorData *monitor;
  struct Quest__Fields fields;
};
struct Quest__Array {
  struct Quest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Quest * vector[32];
};
struct QuestReward__Fields {
  struct ScriptableObject__Fields _;
  int32_t Keystone;
  int32_t SpiritLight;
  int32_t Ore;
  struct Transform * RewardPrefab;
  struct MessageProvider * CustomText;
};
struct QuestReward {
  struct QuestReward__Class *klass;
  struct MonitorData *monitor;
  struct QuestReward__Fields fields;
};
enum AbilityType__Enum : uint8_t {
  AbilityType__Enum_None = 255,
  AbilityType__Enum_Bash = 0,
  AbilityType__Enum_ChargeFlame = 2,
  AbilityType__Enum_WallJump = 3,
  AbilityType__Enum_Stomp = 4,
  AbilityType__Enum_DoubleJump = 5,
  AbilityType__Enum_ChargeJump = 8,
  AbilityType__Enum_Magnet = 10,
  AbilityType__Enum_UltraMagnet = 11,
  AbilityType__Enum_Climb = 12,
  AbilityType__Enum_Glide = 14,
  AbilityType__Enum_SpiritFlame = 15,
  AbilityType__Enum_RapidFlame = 17,
  AbilityType__Enum_SplitFlameUpgrade = 18,
  AbilityType__Enum_SoulEfficiency = 22,
  AbilityType__Enum_WaterBreath = 23,
  AbilityType__Enum_ChargeFlameBlast = 27,
  AbilityType__Enum_ChargeFlameBurn = 28,
  AbilityType__Enum_DoubleJumpUpgrade = 29,
  AbilityType__Enum_BashBuff = 30,
  AbilityType__Enum_UltraDefense = 31,
  AbilityType__Enum_HealthEfficiency = 32,
  AbilityType__Enum_Sense = 33,
  AbilityType__Enum_UltraStomp = 34,
  AbilityType__Enum_SparkFlame = 36,
  AbilityType__Enum_QuickFlame = 37,
  AbilityType__Enum_MapMarkers = 38,
  AbilityType__Enum_EnergyEfficiency = 39,
  AbilityType__Enum_HealthMarkers = 40,
  AbilityType__Enum_EnergyMarkers = 41,
  AbilityType__Enum_AbilityMarkers = 42,
  AbilityType__Enum_Rekindle = 43,
  AbilityType__Enum_Regroup = 44,
  AbilityType__Enum_ChargeFlameEfficiency = 45,
  AbilityType__Enum_UltraSoulFlame = 46,
  AbilityType__Enum_SoulFlameEfficiency = 47,
  AbilityType__Enum_CinderFlame = 48,
  AbilityType__Enum_UltraSplitFlame = 49,
  AbilityType__Enum_Dash = 50,
  AbilityType__Enum_Grenade = 51,
  AbilityType__Enum_GrenadeUpgrade = 52,
  AbilityType__Enum_ChargeDash = 53,
  AbilityType__Enum_AirDash = 54,
  AbilityType__Enum_GrenadeEfficiency = 55,
  AbilityType__Enum_Bounce = 56,
  AbilityType__Enum_SpiritLeash = 57,
  AbilityType__Enum_SpiritSlash = 58,
  AbilityType__Enum_HeavySpiritSlash = 59,
  AbilityType__Enum_FireburstSpell = 60,
  AbilityType__Enum_FirewhirlSpell = 61,
  AbilityType__Enum_GlowSpell = 62,
  AbilityType__Enum_LockOnSpell = 63,
  AbilityType__Enum_TimeWarpSpell = 64,
  AbilityType__Enum_ShieldSpell = 65,
  AbilityType__Enum_EnergyWallSpell = 66,
  AbilityType__Enum_InvisibilitySpell = 67,
  AbilityType__Enum_TrapSpell = 68,
  AbilityType__Enum_WarpSpell = 69,
  AbilityType__Enum_LightSpell = 70,
  AbilityType__Enum_MindControlSpell = 71,
  AbilityType__Enum_MirageSpell = 72,
  AbilityType__Enum_StickyMineSpell = 73,
  AbilityType__Enum_SpiritSpearSpell = 74,
  AbilityType__Enum_LightSpearSpell = 75,
  AbilityType__Enum_LifeAbsorbSpell = 76,
  AbilityType__Enum_MeditateSpell = 77,
  AbilityType__Enum_ChargeShotSpell = 78,
  AbilityType__Enum_SpiritShardsSpell = 79,
  AbilityType__Enum_SpiritSentrySpell = 80,
  AbilityType__Enum_PowerslideSpell = 81,
  AbilityType__Enum_CounterstrikeSpell = 82,
  AbilityType__Enum_EarthShatterSpell = 83,
  AbilityType__Enum_JumpShotSpell = 84,
  AbilityType__Enum_RoundupLeashSpell = 85,
  AbilityType__Enum_BurrowSpell = 86,
  AbilityType__Enum_PowerOfFriendshipSpell = 87,
  AbilityType__Enum_LightningSpell = 88,
  AbilityType__Enum_SpiritFlareSpell = 89,
  AbilityType__Enum_EntanglingRootsSpell = 90,
  AbilityType__Enum_MarkOfTheWildsSpell = 91,
  AbilityType__Enum_HomingMissileSpell = 92,
  AbilityType__Enum_SpiritCrescentSpell = 93,
  AbilityType__Enum_MineSpell = 94,
  AbilityType__Enum_Pinned = 95,
  AbilityType__Enum_Leached = 96,
  AbilityType__Enum_Bow = 97,
  AbilityType__Enum_Hammer = 98,
  AbilityType__Enum_Torch = 99,
  AbilityType__Enum_Sword = 100,
  AbilityType__Enum_Digging = 101,
  AbilityType__Enum_DashNew = 102,
  AbilityType__Enum_Launch = 103,
  AbilityType__Enum_WaterDash = 104,
  AbilityType__Enum_TeleportSpell = 105,
  AbilityType__Enum_ChakramSpell = 106,
  AbilityType__Enum_Drill = 107,
  AbilityType__Enum_GoldenSein = 108,
  AbilityType__Enum_BowCharge = 109,
  AbilityType__Enum_Swordstaff = 110,
  AbilityType__Enum_Chainsword = 111,
  AbilityType__Enum_SpiritMagnet = 112,
  AbilityType__Enum_SwordCharge = 113,
  AbilityType__Enum_HammerCharge = 114,
  AbilityType__Enum_Blaze = 115,
  AbilityType__Enum_TurretSpell = 116,
  AbilityType__Enum_Regenerate = 117,
  AbilityType__Enum_FeatherFlap = 118,
  AbilityType__Enum_WeaponCharge = 119,
  AbilityType__Enum_DamageUpgradeA = 120,
  AbilityType__Enum_DamageUpgradeB = 121,
};
struct AbilityType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AbilityType__Enum value;
};
struct __declspec(align(8)) SceneMetaData_SeinInitialValuesBlindForest__Fields {
  int32_t Level;
  int32_t Hearts;
  int32_t Energy;
  struct SceneMetaData_SeinAbilities * Abilities;
  struct SceneMetaData_SeinWorldState * World;
  enum AbilityType__Enum DefaultXButtonBinding;
  enum AbilityType__Enum DefaultYButtonBinding;
  enum AbilityType__Enum DefaultBButtonBinding;
};
struct SceneMetaData_SeinInitialValuesBlindForest {
  struct SceneMetaData_SeinInitialValuesBlindForest__Class *klass;
  struct MonitorData *monitor;
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
  struct MonitorData *monitor;
  struct SceneMetaData_SeinAbilities__Fields fields;
};
struct __declspec(align(8)) SceneMetaData_SeinWorldState__Fields {
  bool WaterCleansed;
  bool WindReleased;
};
struct SceneMetaData_SeinWorldState {
  struct SceneMetaData_SeinWorldState__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_SeinWorldState__Fields fields;
};
struct __declspec(align(8)) List_1_SceneMetaData_SceneSavePedestal___Fields {
  struct SceneMetaData_SceneSavePedestal__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SceneMetaData_SceneSavePedestal_ {
  struct List_1_SceneMetaData_SceneSavePedestal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SceneMetaData_SceneSavePedestal___Fields fields;
};
struct __declspec(align(8)) SceneMetaData_SceneSavePedestal__Fields {
  struct String * Identifier;
  struct Vector3 SceneLocalPosition;
  struct SavePedestalUberState * SerializedState;
};
struct SceneMetaData_SceneSavePedestal {
  struct SceneMetaData_SceneSavePedestal__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_SceneSavePedestal__Fields fields;
};
struct SceneMetaData_SceneSavePedestal__Array {
  struct SceneMetaData_SceneSavePedestal__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData_SceneSavePedestal * vector[32];
};
struct SavePedestalUberState__Fields {
  struct ObjectUberState__Fields _;
  struct SavePedestalUberState_PedestalState * DefaultState;
  struct UberStateGroup * Group;
  struct UberID * m_cachedGroupID;
  bool m_isGroupIDCached;
  struct SavePedestalUberState_PedestalState * EditorOnlyDebugState;
};
struct SavePedestalUberState {
  struct SavePedestalUberState__Class *klass;
  struct MonitorData *monitor;
  struct SavePedestalUberState__Fields fields;
};
struct __declspec(align(8)) SavePedestalUberState_PedestalState__Fields {
  bool HasGameBeenSaved;
  bool IsTeleporterActive;
};
struct SavePedestalUberState_PedestalState {
  struct SavePedestalUberState_PedestalState__Class *klass;
  struct MonitorData *monitor;
  struct SavePedestalUberState_PedestalState__Fields fields;
};
struct IEnumerator_1_SceneMetaData_SceneSavePedestal_ {
  struct IEnumerator_1_SceneMetaData_SceneSavePedestal___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SceneMetaData___Fields {
  struct SceneMetaData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SceneMetaData_ {
  struct List_1_SceneMetaData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SceneMetaData___Fields fields;
};
struct SceneMetaData__Array {
  struct SceneMetaData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData * vector[32];
};
struct IEnumerator_1_SceneMetaData_ {
  struct IEnumerator_1_SceneMetaData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Fields {
  struct SceneMetaData_ReverseSceneLoadingZoneInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo_ {
  struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Fields fields;
};
struct __declspec(align(8)) SceneMetaData_ReverseSceneLoadingZoneInfo__Fields {
  struct Rect Rectangle;
  struct SceneMetaData * SceneToLoad;
};
struct SceneMetaData_ReverseSceneLoadingZoneInfo {
  struct SceneMetaData_ReverseSceneLoadingZoneInfo__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_ReverseSceneLoadingZoneInfo__Fields fields;
};
struct SceneMetaData_ReverseSceneLoadingZoneInfo__Array {
  struct SceneMetaData_ReverseSceneLoadingZoneInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData_ReverseSceneLoadingZoneInfo * vector[32];
};
struct IEnumerator_1_SceneMetaData_ReverseSceneLoadingZoneInfo_ {
  struct IEnumerator_1_SceneMetaData_ReverseSceneLoadingZoneInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SceneMetaData_WorldMapIcon___Fields {
  struct SceneMetaData_WorldMapIcon__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SceneMetaData_WorldMapIcon_ {
  struct List_1_SceneMetaData_WorldMapIcon___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SceneMetaData_WorldMapIcon___Fields fields;
};
enum WorldMapIconType__Enum : int32_t {
  WorldMapIconType__Enum_Keystone = 0,
  WorldMapIconType__Enum_Mapstone = 1,
  WorldMapIconType__Enum_BreakableWall = 2,
  WorldMapIconType__Enum_BreakableWallBroken = 3,
  WorldMapIconType__Enum_StompableFloor = 4,
  WorldMapIconType__Enum_StompableFloorBroken = 5,
  WorldMapIconType__Enum_EnergyGateTwo = 6,
  WorldMapIconType__Enum_EnergyGateOpen = 7,
  WorldMapIconType__Enum_KeystoneDoorFour = 8,
  WorldMapIconType__Enum_KeystoneDoorOpen = 9,
  WorldMapIconType__Enum_AbilityPedestal = 10,
  WorldMapIconType__Enum_HealthUpgrade = 11,
  WorldMapIconType__Enum_EnergyUpgrade = 12,
  WorldMapIconType__Enum_SavePedestal = 13,
  WorldMapIconType__Enum_AbilityPoint = 14,
  WorldMapIconType__Enum_KeystoneDoorTwo = 15,
  WorldMapIconType__Enum_Invisible = 16,
  WorldMapIconType__Enum_Experience = 17,
  WorldMapIconType__Enum_MapstonePickup = 18,
  WorldMapIconType__Enum_EnergyGateTwelve = 19,
  WorldMapIconType__Enum_EnergyGateTen = 20,
  WorldMapIconType__Enum_EnergyGateEight = 21,
  WorldMapIconType__Enum_EnergyGateSix = 22,
  WorldMapIconType__Enum_EnergyGateFour = 23,
  WorldMapIconType__Enum_SpiritShard = 24,
  WorldMapIconType__Enum_NPC = 25,
  WorldMapIconType__Enum_QuestItem = 26,
  WorldMapIconType__Enum_ShardSlotUpgrade = 27,
  WorldMapIconType__Enum_Teleporter = 28,
  WorldMapIconType__Enum_Ore = 29,
  WorldMapIconType__Enum_HealthFragment = 33,
  WorldMapIconType__Enum_EnergyFragment = 34,
  WorldMapIconType__Enum_Seed = 35,
  WorldMapIconType__Enum_QuestStart = 30,
  WorldMapIconType__Enum_QuestEnd = 31,
  WorldMapIconType__Enum_RaceStart = 32,
  WorldMapIconType__Enum_RaceEnd = 36,
  WorldMapIconType__Enum_Eyestone = 37,
  WorldMapIconType__Enum_WatermillDoor = 40,
  WorldMapIconType__Enum_TempleDoor = 41,
  WorldMapIconType__Enum_SmallDoor = 42,
  WorldMapIconType__Enum_Shrine = 43,
  WorldMapIconType__Enum_Loremaster = 50,
  WorldMapIconType__Enum_Weaponmaster = 51,
  WorldMapIconType__Enum_Gardener = 52,
  WorldMapIconType__Enum_Mapmaker = 53,
  WorldMapIconType__Enum_Shardtrader = 54,
  WorldMapIconType__Enum_Wanderer = 55,
  WorldMapIconType__Enum_Treekeeper = 56,
  WorldMapIconType__Enum_Builder = 57,
  WorldMapIconType__Enum_Kwolok = 58,
  WorldMapIconType__Enum_Statistician = 59,
  WorldMapIconType__Enum_CreepHeart = 60,
  WorldMapIconType__Enum_Miner = 61,
  WorldMapIconType__Enum_Spiderling = 62,
  WorldMapIconType__Enum_Moki = 63,
  WorldMapIconType__Enum_MokiBrave = 64,
  WorldMapIconType__Enum_MokiAdventurer = 65,
  WorldMapIconType__Enum_MokiArtist = 66,
  WorldMapIconType__Enum_MokiDarkness = 67,
  WorldMapIconType__Enum_MokiFashionable = 68,
  WorldMapIconType__Enum_MokiFisherman = 69,
  WorldMapIconType__Enum_MokiFrozen = 70,
  WorldMapIconType__Enum_MokiKwolokAmulet = 71,
  WorldMapIconType__Enum_MokiSpyglass = 72,
  WorldMapIconType__Enum_Ku = 73,
  WorldMapIconType__Enum_IceFisher = 74,
  WorldMapIconType__Enum_Siira = 75,
};
struct WorldMapIconType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WorldMapIconType__Enum value;
};
struct __declspec(align(8)) SceneMetaData_WorldMapIcon__Fields {
  struct MoonGuid * Guid;
  enum WorldMapIconType__Enum Icon;
  struct Vector2 Position;
  bool IsSecret;
  struct SerializedBooleanUberState * State;
  struct ConditionUberState * Condition;
  struct SerializedIntUberState * SpecialState;
};
struct SceneMetaData_WorldMapIcon {
  struct SceneMetaData_WorldMapIcon__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_WorldMapIcon__Fields fields;
};
struct SceneMetaData_WorldMapIcon__Array {
  struct SceneMetaData_WorldMapIcon__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData_WorldMapIcon * vector[32];
};
struct IEnumerator_1_SceneMetaData_WorldMapIcon_ {
  struct IEnumerator_1_SceneMetaData_WorldMapIcon___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SceneMetaData_RaceInfo___Fields {
  struct SceneMetaData_RaceInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SceneMetaData_RaceInfo_ {
  struct List_1_SceneMetaData_RaceInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SceneMetaData_RaceInfo___Fields fields;
};
struct __declspec(align(8)) SceneMetaData_RaceInfo__Fields {
  struct Vector2 Position;
  struct SerializedIntUberState * State;
};
struct SceneMetaData_RaceInfo {
  struct SceneMetaData_RaceInfo__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_RaceInfo__Fields fields;
};
struct SceneMetaData_RaceInfo__Array {
  struct SceneMetaData_RaceInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData_RaceInfo * vector[32];
};
struct IEnumerator_1_SceneMetaData_RaceInfo_ {
  struct IEnumerator_1_SceneMetaData_RaceInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SceneMetaData_PlayerAbilityInfo___Fields {
  struct SceneMetaData_PlayerAbilityInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SceneMetaData_PlayerAbilityInfo_ {
  struct List_1_SceneMetaData_PlayerAbilityInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SceneMetaData_PlayerAbilityInfo___Fields fields;
};
struct __declspec(align(8)) SceneMetaData_PlayerAbilityInfo__Fields {
  struct Vector2 Position;
  struct PlayerUberStateDescriptor * Descriptor;
  enum AbilityType__Enum Ability;
};
struct SceneMetaData_PlayerAbilityInfo {
  struct SceneMetaData_PlayerAbilityInfo__Class *klass;
  struct MonitorData *monitor;
  struct SceneMetaData_PlayerAbilityInfo__Fields fields;
};
struct SceneMetaData_PlayerAbilityInfo__Array {
  struct SceneMetaData_PlayerAbilityInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SceneMetaData_PlayerAbilityInfo * vector[32];
};
struct PlayerUberStateDescriptor__Fields {
  struct ObjectUberState__Fields _;
  struct PlayerUberState * EditorValue;
  struct PlayerUberState * m_state;
  struct GameWorld * GameWorld;
  struct UberStateGroup * Group;
  struct UberID * m_cachedGroupID;
  bool m_isGroupIDCached;
  int32_t m_cachedValueStoreID;
  bool m_isActive;
  struct Rect m_scrollViewRect;
  struct Rect m_previousRect;
  struct Rect m_lastRect;
  struct NavigableOnGUI * m_navigatableGui;
  struct Vector2 m_scroll;
  bool inputDetected;
};
struct PlayerUberStateDescriptor {
  struct PlayerUberStateDescriptor__Class *klass;
  struct MonitorData *monitor;
  struct PlayerUberStateDescriptor__Fields fields;
};
struct __declspec(align(8)) PlayerUberState__Fields {
  struct PlayerUberStateAbilities * Abilities;
  struct PlayerUberStateInventory * Inventory;
  struct PlayerUberStateShards * Shards;
  struct PlayerUberStateStats * Stats;
  struct PlayerUberStateHoldables * Holdables;
  struct PlayerUberStateAreaMapInformation * AreaMapInfo;
  struct PlayerUberStatePinInformation * PinInfo;
  struct PlayerUberStateGeneral * General;
};
struct PlayerUberState {
  struct PlayerUberState__Class *klass;
  struct MonitorData *monitor;
  struct PlayerUberState__Fields fields;
};
struct __declspec(align(8)) PlayerUberStateAbilities__Fields {
  struct Dictionary_2_AbilityType_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ * m_abilities;
  struct List_1_Moon_uberSerializationWisp_PlayerUberStateAbilities_Ability_ * m_abilitiesList;
  struct Action * m_setDirtyCallback;
  bool m_abilitiesFoldout;
};
struct PlayerUberStateAbilities {
  struct PlayerUberStateAbilities__Class *klass;
  struct MonitorData *monitor;
  struct PlayerUberStateAbilities__Fields fields;
};
struct Action_2_AbilityType_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};}