namespace app {
struct GameSystemsEnabler__StaticFields {
  struct GameSystemsEnabler * Instance;
};
struct GameSystemsEnabler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameSystemsEnabler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameSystemsEnabler__VTable vtable;
};

struct InGameUIEnabler__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject__Array * UIElementsToInstantiate;
};
struct InGameUIEnabler {
  struct InGameUIEnabler__Class *klass;
  struct MonitorData *monitor;
  struct InGameUIEnabler__Fields fields;
};
struct InGameUIEnabler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InGameUIEnabler__StaticFields {
  struct InGameUIEnabler * Instance;
};
struct InGameUIEnabler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InGameUIEnabler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InGameUIEnabler__VTable vtable;
};

struct OriAnimationParametersHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinCharacter * Ori;
  struct MoonAnimator * Animator;
  struct CharacterSpriteMirror * SpriteMirror;
  struct Transform * RigTransform;
  struct FloatAnimationParameter * GroundSlopeParameter;
  struct FloatAnimationParameter * MovementSpeedParameter;
  struct FloatAnimationParameter * AimAngle;
  struct FloatAnimationParameter * GroundSlopeUpParameter;
  struct FloatAnimationParameter * GroundSlopeDownParameter;
  struct FloatAnimationParameter * WallSlopeParameter;
  struct FloatAnimationParameter * WallSlopeDownParameter;
  struct FloatAnimationParameter * WallSlopeUpParameter;
};
struct OriAnimationParametersHandler {
  struct OriAnimationParametersHandler__Class *klass;
  struct MonitorData *monitor;
  struct OriAnimationParametersHandler__Fields fields;
};
struct OriAnimationParametersHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OriAnimationParametersHandler__StaticFields {
};
struct OriAnimationParametersHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriAnimationParametersHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriAnimationParametersHandler__VTable vtable;
};

struct SeinDefaultAbilitiesAssignment__Fields {
  struct MonoBehaviour__Fields _;
  enum AbilityType__Enum AbilityX;
  enum AbilityType__Enum AbilityY;
  enum AbilityType__Enum AbilityB;
};
struct SeinDefaultAbilitiesAssignment {
  struct SeinDefaultAbilitiesAssignment__Class *klass;
  struct MonitorData *monitor;
  struct SeinDefaultAbilitiesAssignment__Fields fields;
};
struct SeinDefaultAbilitiesAssignment__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinDefaultAbilitiesAssignment__StaticFields {
};
struct SeinDefaultAbilitiesAssignment__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinDefaultAbilitiesAssignment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinDefaultAbilitiesAssignment__VTable vtable;
};

enum CharacterFactory_Characters__Enum : int32_t {
  CharacterFactory_Characters__Enum_Sein = 0,
  CharacterFactory_Characters__Enum_SpiritTreeCutsceneSein = 1,
  CharacterFactory_Characters__Enum_BabySein = 2,
  CharacterFactory_Characters__Enum_BabySeinWithBerries = 3,
  CharacterFactory_Characters__Enum_Naru = 4,
  CharacterFactory_Characters__Enum_NaruWithSein = 5,
  CharacterFactory_Characters__Enum_NaruSadWalk = 6,
  CharacterFactory_Characters__Enum_Ku = 8,
  CharacterFactory_Characters__Enum_None = 7,
  CharacterFactory_Characters__Enum_KuAndOri = 9,
};
struct CharacterFactory_Characters__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CharacterFactory_Characters__Enum value;
};
struct SeinPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  enum CharacterFactory_Characters__Enum Character;
  struct GameObject * GameplaySystems;
  struct SceneRoot * SceneRoot;
  struct GameObject * CharacterPrefab;
  struct ConditionUberState * KuIsDeadUberState;
  struct GameObject * m_auxiliaryCharacterPrefab;
  bool m_spawnPerformed;
};
struct SeinPlaceholder {
  struct SeinPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SeinPlaceholder__Fields fields;
};
struct SeinPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnSceneRootPostEnable;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
};
struct SeinPlaceholder__StaticFields {
  bool CharacterPositionSet;
};
struct SeinPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinPlaceholder__VTable vtable;
};

struct SeinSwimmingPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonAnimation * SwimSurfaceIdle;
  struct MoonAnimation * SwimSurfaceMove;
  struct MoonAnimation * SwimSurfaceTurn;
  struct FloatAnimationParameter * SwimCurvature;
  struct FloatAnimationParameter * SwimAngleAnimationParameter;
  struct MoonAnimation * SwimHorizontalNew;
  struct MoonAnimation * SwimJumpLeftNew;
  struct MoonAnimation * SwimIdleNew;
  struct MoonAnimation * SwimMiddleToIdleClockwiseNew;
  struct MoonAnimation * SwimMiddleToIdleAntiClockwiseNew;
  struct MoonAnimation * SwimFlipHorizontal;
  struct MoonAnimation * SwimFlipVertical;
  struct MoonAnimation * SwimFlipHorizontalVertical;
  struct MoonAnimation * DamageFront;
  struct MoonAnimation * DamageBack;
  struct MoonAnimation * JumpOutOfWaterUp;
  struct MoonAnimation * JumpOutOfWaterLateral;
  struct MoonTimeline * InsideWaterCurrentLoopTimeline;
  struct MoonTimeline * DashExitTimeline;
  struct CameraShakeAnimator * DashExitCameraShakeAnimator;
  struct ControllerShakeAnimatorEntity * DashExitControllerShakeAnimator;
  struct MoonTimeline * SurfaceDashTimeline;
  struct MoonTimeline * DashIntoWaterOnHitWaterTimeline;
  struct MoonTimeline * WallImpactTimeline;
  struct EventTriggerAnimator * CancellationWindowEvent;
  struct GameObject * WallImpactEffect;
  struct MoonTimeline * SurfaceWallImpactTimeline;
  struct EventTriggerAnimator * SurfaceWallImpactCancellationWindowEvent;
  struct GameObject * SurfaceWallImpactEffect;
  struct GameObject * SwimDashEffect;
  struct GameObject * DashHitEffect;
  struct GameObject * DashExitEffect;
  struct GameObject * SurfaceDashEffect;
  struct GameObject * DashEnterEffect;
  struct GameObject * WaterSplashEffet;
  struct MoonAnimation * DashIntoWaterAnimation;
  struct MoonAnimation * DashAnimationLoop;
  struct MoonAnimation * DashExitAnimation;
  struct MoonAnimation * SurfaceDashAnimationStart;
  struct MoonAnimation * SurfaceDashAnimationLoop;
  struct GameObject * SwimDashStartEffect;
};
struct SeinSwimmingPuppet {
  struct SeinSwimmingPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinSwimmingPuppet__Fields fields;
};
struct CameraShakeAnimator__Fields {
  struct TimelineEntity__Fields _;
  float m_externalStrenghtMultiplier;
  float m_externalSpeedMultiplier;
  bool _ProcessShakeInEditor_k__BackingField;
  struct MoonReference_1_UnityEngine_Transform_ * ShakeLocation;
  bool ShakeOnlyIfVisibleToCamera;
  bool AffectedByDistance;
  float ShakeObjectSize;
  float ImpactRadius;
  float Strength;
  float Speed;
  float PositionalStrength;
  float RotationalStrength;
  struct CameraShakeAsset * Shake;
  float m_time;
};
struct CameraShakeAnimator {
  struct CameraShakeAnimator__Class *klass;
  struct MonitorData *monitor;
  struct CameraShakeAnimator__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_Moon_Timeline_CameraShakeAnimator___Fields {
  struct List_1_Moon_Timeline_CameraShakeAnimator_ * m_objects;
};
struct AllContainer_1_Moon_Timeline_CameraShakeAnimator_ {
  struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Timeline_CameraShakeAnimator___Fields {
  struct CameraShakeAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_CameraShakeAnimator_ {
  struct List_1_Moon_Timeline_CameraShakeAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_CameraShakeAnimator___Fields fields;
};
struct CameraShakeAnimator__Array {
  struct CameraShakeAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CameraShakeAnimator * vector[32];
};
struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator_ {
  struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct ControllerShakeAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
  bool ShakeOnlyIfVisibleToCamera;
  bool AffectedByDistance;
  float ShakeObjectSize;
  float ImpactRadius;
  float Strength;
  struct ControllerShakeAsset * Shake;
  float m_time;
};
struct ControllerShakeAnimatorEntity {
  struct ControllerShakeAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct ControllerShakeAnimatorEntity__Fields fields;
};
struct ControllerShakeAsset__Fields {
  struct ScriptableObject__Fields _;
  struct AnimationCurve * ShakeCurve;
  float m_duration;
};
struct ControllerShakeAsset {
  struct ControllerShakeAsset__Class *klass;
  struct MonitorData *monitor;
  struct ControllerShakeAsset__Fields fields;
};
struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_CameraShakeAnimator___VTable vtable;
};
struct List_1_Moon_Timeline_CameraShakeAnimator___VTable {
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
struct List_1_Moon_Timeline_CameraShakeAnimator___StaticFields {
  struct CameraShakeAnimator__Array * _emptyArray;
};
struct List_1_Moon_Timeline_CameraShakeAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_CameraShakeAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_CameraShakeAnimator___VTable vtable;
};
struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___StaticFields {
};
struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_Moon_Timeline_CameraShakeAnimator___VTable vtable;
};
struct CameraShakeAnimator__VTable {
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
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData ApproximateEvent;
};
struct CameraShakeAnimator__StaticFields {
  struct AllContainer_1_Moon_Timeline_CameraShakeAnimator_ * All;
};
struct CameraShakeAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraShakeAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraShakeAnimator__VTable vtable;
};
struct ControllerShakeAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ControllerShakeAsset__StaticFields {
};
struct ControllerShakeAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerShakeAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerShakeAsset__VTable vtable;
};
struct ControllerShakeAnimatorEntity__VTable {
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
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_ControllerShakeActive;
  VirtualInvokeData get_ModifiedStrength;
  VirtualInvokeData get_CurrentShake;
  VirtualInvokeData ApproximateEvent;
};
struct ControllerShakeAnimatorEntity__StaticFields {
};
struct ControllerShakeAnimatorEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ControllerShakeAnimatorEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ControllerShakeAnimatorEntity__VTable vtable;
};
struct SeinSwimmingPuppet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_UniqueRecordingId;
  VirtualInvokeData get_IsRecording;
  VirtualInvokeData OnInitializeGhostRecorder;
  VirtualInvokeData OnFinishedRecording;
  VirtualInvokeData OnFinishedPlayback;
  VirtualInvokeData OnPerform;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnInitializeLivePuppetMaster;
  VirtualInvokeData OnInitializeGhostPuppetMaster;
};
struct SeinSwimmingPuppet__StaticFields {
};
struct SeinSwimmingPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinSwimmingPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinSwimmingPuppet__VTable vtable;
};

struct SeinDamageReceiverPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct DamageBasedSoundProvider * SeinDeathSound;
  struct DamageBasedSoundProvider * SeinHurtSound;
  struct DamageBasedSoundProvider * SeinBadlyHurtSound;
  struct MoonAnimation * Hurt;
  struct MoonAnimation * HurtLightGround;
  struct MoonAnimation * HurtMidGround;
  struct MoonAnimation * HurtHeavyGround;
  struct MoonAnimation * HurtLightAir;
  struct MoonAnimation * HurtMidAir;
  struct MoonAnimation * HurtHeavyAir;
  struct MoonAnimation * Drown;
  struct Event_1 * DrownInTarSoundEvent;
  struct Event_1 * DrownInTarTandemSoundEvent;
  struct MoonAnimation * DrownInTar;
  struct MoonAnimation * DrownInTarTandem;
  struct MoonAnimation * DrownInTarKuTandem;
  struct MoonAnimation * HurtLightGroundBack;
  struct MoonAnimation * HurtMidGroundBack;
  struct MoonAnimation * HurtHeavyGroundBack;
  struct MoonAnimation * HurtLightAirBack;
  struct MoonAnimation * HurtMidAirBack;
  struct MoonAnimation * HurtHeavyAirBack;
};
struct SeinDamageReceiverPuppet {
  struct SeinDamageReceiverPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinDamageReceiverPuppet__Fields fields;
};
struct DamageBasedSoundProvider__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_DamageTypeSoundPair_ * SoundPairs;
  struct SoundProvider * DefaultSoundProvider;
  struct Switch_1 * FallBackSwitch;
  struct SoundProvider * WWiseSoundProvider;
};
struct DamageBasedSoundProvider {
  struct DamageBasedSoundProvider__Class *klass;
  struct MonitorData *monitor;
  struct DamageBasedSoundProvider__Fields fields;
};
struct __declspec(align(8)) List_1_DamageTypeSoundPair___Fields {
  struct DamageTypeSoundPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DamageTypeSoundPair_ {
  struct List_1_DamageTypeSoundPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DamageTypeSoundPair___Fields fields;
};
enum SoundDamageType__Enum : int32_t {
  SoundDamageType__Enum_Water = 0,
  SoundDamageType__Enum_Lava = 1,
  SoundDamageType__Enum_Ice = 2,
  SoundDamageType__Enum_Spikes = 3,
  SoundDamageType__Enum_Laser = 4,
  SoundDamageType__Enum_Projectile = 5,
  SoundDamageType__Enum_Acid = 6,
  SoundDamageType__Enum_SlugSpike = 7,
  SoundDamageType__Enum_RegularSpiritFlame = 8,
  SoundDamageType__Enum_RegularSpiritFlameThirdShot = 9,
  SoundDamageType__Enum_IceSpiritFlame = 10,
  SoundDamageType__Enum_ChargeFlame = 11,
  SoundDamageType__Enum_Bash = 12,
  SoundDamageType__Enum_Grenade = 13,
  SoundDamageType__Enum_GrenadeSplatter = 14,
  SoundDamageType__Enum_UndergroundSpiritFlame = 15,
  SoundDamageType__Enum_Dash = 16,
  SoundDamageType__Enum_Stomp = 17,
  SoundDamageType__Enum_StompBlast = 18,
  SoundDamageType__Enum_NightBerryDied = 19,
  SoundDamageType__Enum_Drowning = 20,
  SoundDamageType__Enum_Tar = 21,
  SoundDamageType__Enum_DeadlyDarkness = 22,
};
struct SoundDamageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SoundDamageType__Enum value;
};
struct __declspec(align(8)) DamageTypeSoundPair__Fields {
  struct Switch_1 * Switch;
  enum SoundDamageType__Enum DamageType;
  struct SoundProvider * IndependantSoundProvider;
};
struct DamageTypeSoundPair {
  struct DamageTypeSoundPair__Class *klass;
  struct MonitorData *monitor;
  struct DamageTypeSoundPair__Fields fields;
};
struct DamageTypeSoundPair__Array {
  struct DamageTypeSoundPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DamageTypeSoundPair * vector[32];
};
struct IEnumerator_1_DamageTypeSoundPair_ {
  struct IEnumerator_1_DamageTypeSoundPair___Class *klass;
  struct MonitorData *monitor;
};
struct DamageBasedSoundProvider_CallbackFunction__Fields {
  struct MulticastDelegate__Fields _;
};
struct DamageBasedSoundProvider_CallbackFunction {
  struct DamageBasedSoundProvider_CallbackFunction__Class *klass;
  struct MonitorData *monitor;
  struct DamageBasedSoundProvider_CallbackFunction__Fields fields;
};
struct DamageTypeSoundPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DamageTypeSoundPair__StaticFields {
};
struct DamageTypeSoundPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageTypeSoundPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageTypeSoundPair__VTable vtable;
};
struct IEnumerator_1_DamageTypeSoundPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DamageTypeSoundPair___StaticFields {
};
struct IEnumerator_1_DamageTypeSoundPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DamageTypeSoundPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DamageTypeSoundPair___VTable vtable;
};
struct List_1_DamageTypeSoundPair___VTable {
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
struct List_1_DamageTypeSoundPair___StaticFields {
  struct DamageTypeSoundPair__Array * _emptyArray;
};
struct List_1_DamageTypeSoundPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DamageTypeSoundPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DamageTypeSoundPair___VTable vtable;
};
struct DamageBasedSoundProvider_CallbackFunction__VTable {
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
struct DamageBasedSoundProvider_CallbackFunction__StaticFields {
};
struct DamageBasedSoundProvider_CallbackFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageBasedSoundProvider_CallbackFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageBasedSoundProvider_CallbackFunction__VTable vtable;
};
struct DamageBasedSoundProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetGenericResource;
  VirtualInvokeData GetGenericResourceId;
};
struct DamageBasedSoundProvider__StaticFields {
  struct DamageBasedSoundProvider_CallbackFunction * OnGetSoundForDamage;
};
struct DamageBasedSoundProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageBasedSoundProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageBasedSoundProvider__VTable vtable;
};
struct SeinDamageReceiverPuppet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_UniqueRecordingId;
  VirtualInvokeData get_IsRecording;
  VirtualInvokeData OnInitializeGhostRecorder;
  VirtualInvokeData OnFinishedRecording;
  VirtualInvokeData OnFinishedPlayback;
  VirtualInvokeData OnPerform;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnInitializeLivePuppetMaster;
  VirtualInvokeData OnInitializeGhostPuppetMaster;
};
struct SeinDamageReceiverPuppet__StaticFields {
};
struct SeinDamageReceiverPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinDamageReceiverPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinDamageReceiverPuppet__VTable vtable;
};

struct SpellSwitcher__Fields {
  struct MonoBehaviour__Fields _;
  struct AbilityType__Enum__Array * Spells;
  struct SoundProvider * ChangeSound;
  int32_t m_currentSpellIndex;
  float m_spellDisplayTimeLeft;
  bool m_checkpointRestored;
  bool m_restoreState;
  int32_t m_prevHorizontalDigipad;
};
struct SpellSwitcher {
  struct SpellSwitcher__Class *klass;
  struct MonitorData *monitor;
  struct SpellSwitcher__Fields fields;
};
struct SpellSwitcher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellSwitcher__StaticFields {
};
struct SpellSwitcher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellSwitcher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellSwitcher__VTable vtable;
};

struct ChargeShotCollider__Fields {
  struct MonoBehaviour__Fields _;
  struct Action_1_UnityEngine_Collider_ * OnTriggerEnterEvent;
  struct Action_1_UnityEngine_Collider_ * OnTriggerStayEvent;
};
struct ChargeShotCollider {
  struct ChargeShotCollider__Class *klass;
  struct MonitorData *monitor;
  struct ChargeShotCollider__Fields fields;
};
struct Action_1_UnityEngine_Collider___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Collider_ {
  struct Action_1_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Collider___Fields fields;
};
struct Action_1_UnityEngine_Collider___VTable {
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
struct Action_1_UnityEngine_Collider___StaticFields {
};
struct Action_1_UnityEngine_Collider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Collider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Collider___VTable vtable;
};
struct ChargeShotCollider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Reflectable;
};
struct ChargeShotCollider__StaticFields {
};
struct ChargeShotCollider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChargeShotCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChargeShotCollider__VTable vtable;
};

struct ChargeShotCollider_c {
  struct ChargeShotCollider_c__Class *klass;
  struct MonitorData *monitor;
};
struct ChargeShotCollider_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChargeShotCollider_c__StaticFields {
  struct ChargeShotCollider_c * __9;
  struct Action_1_UnityEngine_Collider_ * __9__10_0;
  struct Action_1_UnityEngine_Collider_ * __9__10_1;
};
struct ChargeShotCollider_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChargeShotCollider_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChargeShotCollider_c__VTable vtable;
};

struct ChargeShotProjectile__Fields {
  struct MonoBehaviour__Fields _;
  float Speed;
  float MaxLifetime;
  struct GameObject * Explosion;
  struct GameObject * ExplosionFire;
  struct GameObject * ExplosionFrost;
  float m_timeAlive;
  float m_damage;
  float m_explosionScale;
  float m_explosionCameraShakeStrength;
  struct Rigidbody * m_rigidbody;
  bool m_released;
  bool m_suspended;
  struct ChargeShotCollider * m_wallCollider;
  struct ChargeShotCollider * m_enemyCollider;
  bool m_reflected;
  enum SuspendableMask__Enum m_suspensionMask;
  struct GameObject * _IReflectable_LastReflector_k__BackingField;
  int32_t m_piercingCount;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct ChargeShotProjectile {
  struct ChargeShotProjectile__Class *klass;
  struct MonitorData *monitor;
  struct ChargeShotProjectile__Fields fields;
};
struct ChargeShotProjectile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_Direction;
  VirtualInvokeData set_Direction;
  VirtualInvokeData IReflectable_get_Speed;
  VirtualInvokeData IReflectable_set_Speed;
  VirtualInvokeData IReflectable_get_LastReflector;
  VirtualInvokeData IReflectable_set_LastReflector;
  VirtualInvokeData IReflectable_CanBeReflected;
  VirtualInvokeData IReflectable_OnGrabbed;
  VirtualInvokeData IReflectable_OnReleased;
  VirtualInvokeData IReflectable_OnReflected;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
  VirtualInvokeData IBashAttackable_get_BashPriority;
  VirtualInvokeData IBashAttackable_OnEnterBash;
  VirtualInvokeData IBashAttackable_OnBashHighlight;
  VirtualInvokeData IBashAttackable_OnBashDehighlight;
  VirtualInvokeData get_Position_1;
  VirtualInvokeData set_Position;
  VirtualInvokeData IPortalVisitor_get_Speed;
  VirtualInvokeData IPortalVisitor_set_Speed;
  VirtualInvokeData IPortalVisitor_OnGoThroughPortal;
  VirtualInvokeData IPortalVisitor_OnPortalOverlapEnter;
  VirtualInvokeData IPortalVisitor_OnPortalOverlapExit;
};
struct ChargeShotProjectile__StaticFields {
};
struct ChargeShotProjectile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChargeShotProjectile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChargeShotProjectile__VTable vtable;
};}