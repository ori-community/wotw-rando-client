namespace app {
struct IEnumerator_1_KeyValuePair_2_System_Type_fsm_TransitionManager_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_fsm_TransitionManager_ {
  struct IEnumerable_1_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_fsm_IState_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_Dictionary_2_System_Int32_System_Action_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_Dictionary_2_System_Int32_System_Action_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ {
  struct Dictionary_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action_ {
  int32_t hashCode;
  int32_t next;
  struct IState_2 * key;
  struct Dictionary_2_System_Int32_System_Action_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action___Array {
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_Dictionary_2_System_Int32_System_Action_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_Dictionary_2_System_Int32_System_Action___Fields {
  struct Dictionary_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_Dictionary_2_System_Int32_System_Action_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_Dictionary_2_System_Int32_System_Action___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_Dictionary_2_System_Int32_System_Action___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_Dictionary_2_System_Int32_System_Action___Fields {
  struct Dictionary_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_Dictionary_2_System_Int32_System_Action_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_Dictionary_2_System_Int32_System_Action___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_Dictionary_2_System_Int32_System_Action___Fields fields;
};
struct KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ {
  struct IState_2 * key;
  struct Dictionary_2_System_Int32_System_Action_ * value;
};
struct KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Boxed {
  struct KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ fields;
};
struct KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Array {
  struct KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ {
  struct IEnumerator_1_KeyValuePair_2_fsm_IState_Dictionary_2_System_Int32_System_Action___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SeinStomp_States__Fields {
  struct IState_2 * Inactive;
  struct IState_2 * StompDown;
  struct IState_2 * StompIdle;
  struct IState_2 * StompFinished;
};
struct SeinStomp_States {
  struct SeinStomp_States__Class *klass;
  struct MonitorData *monitor;
  struct SeinStomp_States__Fields fields;
};
struct DamageOwner__Fields {
  struct MonoBehaviour__Fields _;
  struct Entity * m_Entity;
};
struct DamageOwner {
  struct DamageOwner__Class *klass;
  struct MonitorData *monitor;
  struct DamageOwner__Fields fields;
};
enum DamageType__Enum : int32_t {
  DamageType__Enum_Water = 0,
  DamageType__Enum_Lava = 1,
  DamageType__Enum_Ice = 2,
  DamageType__Enum_Spikes = 3,
  DamageType__Enum_Laser = 4,
  DamageType__Enum_Projectile = 5,
  DamageType__Enum_Acid = 6,
  DamageType__Enum_SlugSpike = 7,
  DamageType__Enum_Explosion = 8,
  DamageType__Enum_Heat = 9,
  DamageType__Enum_Bat = 10,
  DamageType__Enum_Enemy = 11,
  DamageType__Enum_Crush = 12,
  DamageType__Enum_SpiritFlame = 13,
  DamageType__Enum_Bash = 14,
  DamageType__Enum_Grenade = 15,
  DamageType__Enum_GoldenSein = 16,
  DamageType__Enum_Stomp = 17,
  DamageType__Enum_StompBlast = 18,
  DamageType__Enum_Chakram = 19,
  DamageType__Enum_NightBerryDied = 20,
  DamageType__Enum_HitSurface = 21,
  DamageType__Enum_SpiritFlameSplatter = 22,
  DamageType__Enum_LevelUp = 23,
  DamageType__Enum_Drowning = 24,
  DamageType__Enum_ChargeFlame = 25,
  DamageType__Enum_SpiritSlash = 26,
  DamageType__Enum_HeavySpiritSlash = 27,
  DamageType__Enum_HomingMissile = 28,
  DamageType__Enum_JumpShot = 29,
  DamageType__Enum_LightSpear = 30,
  DamageType__Enum_Fireburst = 31,
  DamageType__Enum_Firewhirl = 32,
  DamageType__Enum_LifeAbsorb = 33,
  DamageType__Enum_Powerslide = 34,
  DamageType__Enum_SpiritSpear = 35,
  DamageType__Enum_SpiritCresent = 36,
  DamageType__Enum_SpiritShard = 37,
  DamageType__Enum_LockOn = 38,
  DamageType__Enum_SpiritSentry = 39,
  DamageType__Enum_Mine = 40,
  DamageType__Enum_StickyMine = 41,
  DamageType__Enum_ChargeShot = 42,
  DamageType__Enum_Bow = 43,
  DamageType__Enum_Hammer = 44,
  DamageType__Enum_TorchStick = 45,
  DamageType__Enum_IgnitedTorchStickRed = 46,
  DamageType__Enum_Sword = 47,
  DamageType__Enum_Wind = 48,
  DamageType__Enum_IgnitedTorchStickBlue = 49,
  DamageType__Enum_Obstacle = 50,
  DamageType__Enum_Draining = 51,
  DamageType__Enum_Glow = 52,
  DamageType__Enum_SpiritLeash = 53,
  DamageType__Enum_ChargeJump = 54,
  DamageType__Enum_Tar = 55,
  DamageType__Enum_BashThrough = 56,
  DamageType__Enum_Blaze = 57,
  DamageType__Enum_Melee = 100,
  DamageType__Enum_DiggingDash = 101,
  DamageType__Enum_SwimmingDash = 102,
  DamageType__Enum_DebugDamage = 400,
  DamageType__Enum_InstantKill = 401,
  DamageType__Enum_DeadlyDarkness = 402,
  DamageType__Enum_Interaction = 403,
};
struct DamageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DamageType__Enum value;
};
enum DamageLayerMask__Enum : int32_t {
  DamageLayerMask__Enum_Everything = 7,
  DamageLayerMask__Enum_Player = 1,
  DamageLayerMask__Enum_Enemy = 2,
  DamageLayerMask__Enum_Environment = 4,
  DamageLayerMask__Enum_EnemyAndEnvironment = 6,
  DamageLayerMask__Enum_PlayerAndEnvironment = 5,
  DamageLayerMask__Enum_PlayerAndEnemy = 3,
  DamageLayerMask__Enum_None = 0,
};
struct DamageLayerMask__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DamageLayerMask__Enum value;
};
enum Damage_DamageEffectPositionMode__Enum : int32_t {
  Damage_DamageEffectPositionMode__Enum_ReceiverPosition = 0,
  Damage_DamageEffectPositionMode__Enum_ReceiverClosestPointFromSender = 1,
};
struct Damage_DamageEffectPositionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Damage_DamageEffectPositionMode__Enum value;
};
struct __declspec(align(8)) Damage__Fields {
  struct HashSet_1_SpiritShardType_ * AffectingShards;
  bool _Charged_k__BackingField;
  float m_amount;
  float m_amountBonus;
  struct Vector2 m_force;
  struct Vector2 m_originalForceDirection;
  struct Vector3 m_position;
  enum DamageType__Enum m_damageType;
  enum DamageWeight__Enum m_damageWeight;
  float m_speedTransfer;
  enum AbilityType__Enum m_abilityType;
  struct GameObject * m_sender;
  float m_disableFallingDuration;
  float m_stunDuration;
  bool m_ignored;
  bool m_bypassPlayerInvincibility;
  enum SpiritShardType__Enum m_spiritShardType;
  int32_t ID;
  float TickRate;
  int32_t NumberOfTicks;
  enum DamageLayerMask__Enum DamageLayerMask;
  struct DamageOwner * DamageOwner;
  struct Action_1_DamageResult_ * DamageTicked;
  struct Func_2_DamageResult_EffectSpawn_ * DamageEffectProviderMethod;
  enum Damage_DamageEffectPositionMode__Enum DamageEffectPosition;
  struct AnimationCurve * KickbackCurve;
  bool StraightDownwardAttack;
};
struct Damage {
  struct Damage__Class *klass;
  struct MonitorData *monitor;
  struct Damage__Fields fields;
};
struct __declspec(align(8)) HashSet_1_SpiritShardType___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_SpiritShardType___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_SpiritShardType_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_SpiritShardType_ {
  struct HashSet_1_SpiritShardType___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_SpiritShardType___Fields fields;
};
struct HashSet_1_T_Slot_SpiritShardType_ {
  int32_t hashCode;
  int32_t next;
  enum SpiritShardType__Enum value;
};
struct HashSet_1_T_Slot_SpiritShardType___Boxed {
  struct HashSet_1_T_Slot_SpiritShardType___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_SpiritShardType_ fields;
};
struct HashSet_1_T_Slot_SpiritShardType___Array {
  struct HashSet_1_T_Slot_SpiritShardType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_SpiritShardType_ vector[32];
};
struct Action_1_DamageResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_DamageResult_ {
  struct Action_1_DamageResult___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_DamageResult___Fields fields;
};
enum DamageResultType__Enum : int32_t {
  DamageResultType__Enum_Received = 0,
  DamageResultType__Enum_Ignored = 1,
  DamageResultType__Enum_Blocked = 2,
};
struct DamageResultType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DamageResultType__Enum value;
};
struct DamageResult {
  struct Damage * Damage;
  float AmountReceived;
  int32_t TickNumber;
  enum DamageResultType__Enum ResultType;
  struct IDamageReciever * DamageReceiver;
  enum DamageRecieverType__Enum DamageRecieverType;
};
struct DamageResult__Boxed {
  struct DamageResult__Class *klass;
  struct MonitorData *monitor;
  struct DamageResult fields;
};
struct IDamageReciever {
  struct IDamageReciever__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_DamageResult_EffectSpawn___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_DamageResult_EffectSpawn_ {
  struct Func_2_DamageResult_EffectSpawn___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_DamageResult_EffectSpawn___Fields fields;
};
enum EffectTransformType__Enum : int32_t {
  EffectTransformType__Enum_None = 0,
  EffectTransformType__Enum_RandomRotation = 1,
  EffectTransformType__Enum_RotateToDirection = 2,
  EffectTransformType__Enum_Velocity = 3,
  EffectTransformType__Enum_RotateToOppositeDirection = 4,
};
struct EffectTransformType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EffectTransformType__Enum value;
};
struct EffectSpawn {
  struct GameObject * Effect;
  struct GameObject * SecondaryEffect;
  enum EffectTransformType__Enum TransformType;
  enum EffectTransformType__Enum SecondaryTransformType;
  float OffsetToCenter;
  bool AlignEffect;
  bool SecondaryOptional;
};
struct EffectSpawn__Boxed {
  struct EffectSpawn__Class *klass;
  struct MonitorData *monitor;
  struct EffectSpawn fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinGlide___Fields {
  bool HasState;
  struct SeinGlide * State;
};
struct CharacterStateWrapper_1_SeinGlide_ {
  struct CharacterStateWrapper_1_SeinGlide___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinGlide___Fields fields;
};
enum SeinGlide_State__Enum : int32_t {
  SeinGlide_State__Enum_Idle = 0,
  SeinGlide_State__Enum_Glide = 1,
};
struct SeinGlide_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinGlide_State__Enum value;
};
struct SeinGlide__Fields {
  struct CharacterState__Fields _;
  struct AnimationCurve * LeafSize;
  struct AnimationCurve * DistanceToKnockback;
  struct GameObject * LeafRig;
  float RunningTime;
  float MinHeightToGlide;
  float GlideSpeed;
  float GravityMultiplier;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * MoveSpeed;
  struct MoonAnimation * LeafGlide;
  struct MoonAnimation * LeafGlideDeploy;
  struct MoonAnimation * LeafGlideTurn;
  float RootMotionMultiplier;
  bool NeedsRightTriggerReleased;
  bool m_pressedMoveHorizontally;
  bool m_wasMovingHorizontally;
  bool m_leafFinishedAppearing;
  bool m_interruptingTurnAnim;
  float m_lockGlidingRemainingTime;
  enum SeinGlide_State__Enum m_currentState;
  bool GlideInterruptsDoubleJump;
  struct CharacterTimelineTurning * m_currentTurning;
  bool _WantsToFaceLeft_k__BackingField;
};
struct SeinGlide {
  struct SeinGlide__Class *klass;
  struct MonitorData *monitor;
  struct SeinGlide__Fields fields;
};
struct __declspec(align(8)) HorizontalPlatformMovementSettings_SpeedMultiplierSet__Fields {
  float AccelerationMultiplier;
  float DeceelerationMultiplier;
  float MaxSpeedMultiplier;
};
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet {
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet__Class *klass;
  struct MonitorData *monitor;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinFeatherFlap___Fields {
  bool HasState;
  struct SeinFeatherFlap * State;
};
struct CharacterStateWrapper_1_SeinFeatherFlap_ {
  struct CharacterStateWrapper_1_SeinFeatherFlap___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinFeatherFlap___Fields fields;
};
enum SeinFeatherFlap_State__Enum : int32_t {
  SeinFeatherFlap_State__Enum_Idle = 0,
  SeinFeatherFlap_State__Enum_Attack = 1,
};
struct SeinFeatherFlap_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinFeatherFlap_State__Enum value;
};
struct SeinFeatherFlap__Fields {
  struct CharacterState__Fields _;
  float LeafAttackCooldown;
  struct AnimationCurve * LeafSize;
  struct AnimationCurve * AttackMovementSlowdown;
  struct AnimationCurve * DistanceToKnockback;
  struct GameObject * LeafRig;
  float GroundRootMotionMul;
  float AirRootMotionMul;
  float AirGravityMulUp;
  float AirGravityMulUpGlide;
  float AirGravityMulDown;
  float AirMaxSpeedMul;
  float AirAccelerationMul;
  float AirDecellerationMul;
  float LeafAttackToFallInitialSpeed;
  struct DelayedAction * KnockbackDelay;
  struct DelayedAction * WindFXDelay;
  struct GameObject * WindFX;
  float m_attackTime;
  bool m_lockedFaceLeft;
  enum SeinFeatherFlap_State__Enum m_currentState;
  bool m_fromGlideUp;
};
struct SeinFeatherFlap {
  struct SeinFeatherFlap__Class *klass;
  struct MonitorData *monitor;
  struct SeinFeatherFlap__Fields fields;
};
struct __declspec(align(8)) DelayedAction__Fields {
  int32_t FrameDelay;
  float m_remainingDelay;
  bool m_isCounting;
  struct DelayedAction_Action * m_actionToPerform;
  struct Func_1_Boolean_ * m_condition;
  struct Component_1 * m_owner;
};
struct DelayedAction {
  struct DelayedAction__Class *klass;
  struct MonitorData *monitor;
  struct DelayedAction__Fields fields;
};
struct DelayedAction_Action__Fields {
  struct MulticastDelegate__Fields _;
};
struct DelayedAction_Action {
  struct DelayedAction_Action__Class *klass;
  struct MonitorData *monitor;
  struct DelayedAction_Action__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinGrabBlock___Fields {
  bool HasState;
  struct SeinGrabBlock * State;
};
struct CharacterStateWrapper_1_SeinGrabBlock_ {
  struct CharacterStateWrapper_1_SeinGrabBlock___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinGrabBlock___Fields fields;
};
enum SeinGrabBlock_State__Enum : int32_t {
  SeinGrabBlock_State__Enum_Push = 0,
  SeinGrabBlock_State__Enum_PushFail = 1,
  SeinGrabBlock_State__Enum_Pull = 2,
  SeinGrabBlock_State__Enum_PullFail = 3,
  SeinGrabBlock_State__Enum_Idle = 4,
};
struct SeinGrabBlock_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinGrabBlock_State__Enum value;
};
struct SeinGrabBlock__Fields {
  struct CharacterState__Fields _;
  bool _InRange_k__BackingField;
  bool _IsGrabbing_k__BackingField;
  enum SeinGrabBlock_State__Enum CurrentState;
  struct MoonAnimation * CantPull;
  struct MoonAnimation * CantPush;
  struct MoonAnimation * Idle;
  struct MoonAnimation * Pull;
  struct MoonAnimation * Push;
  struct FloatAnimationParameter * SlopeIdle;
  struct FloatAnimationParameter * SlopeMoving;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * PullMultiplier;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * PushMultipler;
  struct SurfaceToSoundProviderMap * PullBlockSound;
  struct SurfaceToSoundProviderMap * PushBlockSound;
  struct SoundProvider * GrabBlockSound;
  struct SoundProvider * ReleaseBlockSound;
  float FootstepsSoundsPerSecond;
  float m_currentTime;
  float m_distanceToBlock;
  struct SoundPlayer * m_lastPullSoundPlayer;
  struct SoundPlayer * m_lastPushSoundPlayer;
  float m_nextPullTime;
  float m_nextPushTime;
  struct IPushable * m_pushable;
  enum SeinGrabBlock_State__Enum NewState;
  struct Vector3 m_lastFramePushablePosition;
  struct PlayerGrabPushPullHintSystem * Hints;
  bool m_spriteMirrorLock;
  float PullRayDistance;
};
struct SeinGrabBlock {
  struct SeinGrabBlock__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabBlock__Fields fields;
};
struct SurfaceToSoundProviderMap__Fields {
  struct MonoBehaviour__Fields _;
  struct Event_1 * Event;
  struct Trigger * Trigger;
};
struct SurfaceToSoundProviderMap {
  struct SurfaceToSoundProviderMap__Class *klass;
  struct MonitorData *monitor;
  struct SurfaceToSoundProviderMap__Fields fields;
};
struct IPushable {
  struct IPushable__Class *klass;
  struct MonitorData *monitor;
};
struct PlayerGrabPushPullHintSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinCharacter * Sein;
  struct MessageProvider * PressToGrabMessage;
  struct MessageProvider * PressToPushOrPullMessage;
  struct MessageProvider * PressToGrabOrBashMessage;
  struct MessageProvider * FreeHandsToPushPullMessage;
  float m_timeOfLastPressToGrabMessage;
  float m_timeOfLastPressToPushOrPullMessage;
  struct MessageBox * m_pressToGrab;
  struct MessageBox * m_pressToPushOrPull;
};
struct PlayerGrabPushPullHintSystem {
  struct PlayerGrabPushPullHintSystem__Class *klass;
  struct MonitorData *monitor;
  struct PlayerGrabPushPullHintSystem__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinCrouch___Fields {
  bool HasState;
  struct SeinCrouch * State;
};
struct CharacterStateWrapper_1_SeinCrouch_ {
  struct CharacterStateWrapper_1_SeinCrouch___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinCrouch___Fields fields;
};
struct SeinCrouch__Fields {
  struct CharacterState__Fields _;
  struct MoonAnimation * Idle;
  struct MoonAnimation * CrouchFlip;
  int32_t m_lastFacingDirection;
  bool m_isCrouching;
};
struct SeinCrouch {
  struct SeinCrouch__Class *klass;
  struct MonitorData *monitor;
  struct SeinCrouch__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinGrabWall___Fields {
  bool HasState;
  struct SeinGrabWall * State;
};
struct CharacterStateWrapper_1_SeinGrabWall_ {
  struct CharacterStateWrapper_1_SeinGrabWall___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinGrabWall___Fields fields;
};
struct SeinGrabWall__Fields {
  struct CharacterState__Fields _;
  float WallClimbUpStepsPerSecond;
  float WallClimbDownStepsPerSecond;
  struct SurfaceToSoundProviderMap * WallGrabEnterSound;
  struct SurfaceToSoundProviderMap * WallGrabExitSound;
  struct SurfaceToSoundProviderMap * WallGrabStepUpSound;
  struct SurfaceToSoundProviderMap * WallGrabStepDownSound;
  float m_minimumSoundDelay;
  float m_lastWallGrabEnterSoundTime;
  float m_lastWallGrabExitSoundTime;
  float m_lastWallGrabStepDownSoundTime;
  bool LockVerticalMovement;
  float ClimbSpeedUp;
  float ClimbSpeedDown;
  float Acceleration;
  bool KeepMovingEdgeClimb;
  bool KeepMovingWallClimb;
  bool KeepMovingAboveTest;
  float KeepMovingAboveRayOut;
  float KeepMovingAboveDistMin;
  float KeepMovingAboveDistMax;
  float KeepMovingAboveDistPow;
  float SlowEdgeJumpDuration;
  float SlowEdgeJumpMaxSpeed;
  float SlowEdgeJumpAcceleration;
  float SlowEdgeJumpDecceleration;
  float SlowEdgeJumpGravityStrength;
  float m_currentTime;
  bool m_isGrabbing;
  float m_nextWallClimbUpTime;
  bool m_requiresRelease;
  struct ActiveAnimationHandle m_curAnim;
  bool m_slowEdgeJumpStarted;
  float m_slowEdgeJumpUntilTime;
  struct WwiseEventSystem_SoundHandle m_climbDownSoundHandle;
  bool m_movingOverTerrain;
};
struct SeinGrabWall {
  struct SeinGrabWall__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabWall__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinWallSlide___Fields {
  bool HasState;
  struct SeinWallSlide * State;
};
struct CharacterStateWrapper_1_SeinWallSlide_ {
  struct CharacterStateWrapper_1_SeinWallSlide___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinWallSlide___Fields fields;
};
enum SeinWallSlide_State__Enum : int32_t {
  SeinWallSlide_State__Enum_Normal = 0,
  SeinWallSlide_State__Enum_SlidingLeft = 1,
  SeinWallSlide_State__Enum_SlidingRight = 2,
};
struct SeinWallSlide_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinWallSlide_State__Enum value;
};
struct SeinWallSlide__Fields {
  struct CharacterState__Fields _;
  enum SeinWallSlide_State__Enum CurrentState;
  float GravityMultiplier;
  float InputLockDuration;
  float MaxFallSpeed;
  struct MaterialBasedSeinEffectsMap * SeinEffects;
  float WallSlideUpAnimationMinimiumSpeed;
  float m_inputLockTimeRemaining;
  struct SoundPlayer * m_wallSlideUpSound;
  struct WwiseEventSystem_SoundHandle m_wallSlideUpSoundhandle;
  float m_lastWallSlideDownSoundTime;
  float m_minimumSoundDelay;
  struct WwiseEventSystem_SoundHandle m_wallSlideDownHandle;
  struct ActiveAnimationHandle m_lastAnim;
};
struct SeinWallSlide {
  struct SeinWallSlide__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallSlide__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinGrabRope___Fields {
  bool HasState;
  struct SeinGrabRope * State;
};
struct CharacterStateWrapper_1_SeinGrabRope_ {
  struct CharacterStateWrapper_1_SeinGrabRope___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinGrabRope___Fields fields;
};
enum SeinGrabRope_State__Enum : int32_t {
  SeinGrabRope_State__Enum_Normal = 0,
  SeinGrabRope_State__Enum_Vertical = 1,
  SeinGrabRope_State__Enum_Horizontal = 2,
  SeinGrabRope_State__Enum_Swing = 3,
  SeinGrabRope_State__Enum_DashToVertical = 4,
  SeinGrabRope_State__Enum_SwitchingSideVertical = 5,
  SeinGrabRope_State__Enum_JumpingUpPole = 6,
  SeinGrabRope_State__Enum_Wheel = 7,
};
struct SeinGrabRope_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinGrabRope_State__Enum value;
};
struct SeinGrabRope__Fields {
  struct CharacterState__Fields _;
  struct Transform * PlayerCenter;
  float MinActivationTimeAfterJump;
  float JumpImpulse;
  float AttachImpulse;
  float AttachMaxSnapSpeed;
  float ClimbForce;
  float ClimbForceFrequency;
  bool AllowDashOff;
  bool FaceJumpDirectionBack;
  float MinRopeAngleWithHorizontalForDash;
  struct AnimationCurve * ForceAddedToRopeVsOriSpeed;
  struct FloatAnimationParameter * HorizontalClimbSlopeParameter;
  struct SoundSource * SwingLoopSound;
  struct Event_1 * SwingLoopSoundWwise;
  struct RTPC * SwingLoopSoundRtpc;
  struct Event_1 * SlideDownLoopSound;
  struct Event_1 * ClimbUpLoopSound;
  struct Event_1 * SwingExitSound;
  struct Event_1 * DashToPoleSound;
  struct Event_1 * JumpOnPoleVerticalSound;
  struct Event_1 * JumpOffPoleVerticalSound;
  struct Event_1 * JumpOnPoleHorizontalSound;
  struct Event_1 * JumpOffPoleHorizontalSound;
  struct Event_1 * JumpOnPoleHandStandSound;
  struct Event_1 * JumpOffPoleHandStandSound;
  struct Event_1 * VerticalPoleJumpUpSound;
  struct Event_1 * EnterPoleDangleSound;
  struct SeinGrabRope_VerticalVFXPlayer * VerticalVFX;
  struct SeinGrabRope_HorizontalVFXPlayer * HorizontalVFX;
  struct SeinGrabRope_SwingVFXPlayer * SwingVFX;
  struct MaterialBasedResourceMap * EffectsMap;
  float DelayPostGrabBeforeJumpAllowed;
  float DurationAfterDropToCheckOverlap;
  float DelayAfterGrabBeforeDropAllowed;
  float DropPressComboMaxDelay;
  float SwingPosOffset;
  struct AnimationCurve * SwingUpAnimationSpeedCurve;
  struct AnimationCurve * SlowDownDurationCurve;
  float SwingSlowDownRate;
  float SwingSlowDownMinSpeed;
  float SwingSlowDownNormalizedExitTime;
  float MinEdgeDistanceToAllowSwing;
  float SwingJumpDuration;
  float SwingJumpVelocityMultiplier;
  struct AnimationCurve * SwingJumpVelocityCurve;
  struct AnimationCurve * SwingSpeedVsSpinDuration;
  struct AnimationCurve * SwingSoundPitchVsSpeedCurve;
  float NormalizedTransitionToSwingJumpTime;
  float NormalizedSwingJumpAnimStartTime;
  float AutoReleaseDistance;
  float ClimbSpeedUp;
  float ClimbSpeedDown;
  float ClimbSpeedHorizontal;
  float Acceleration;
  float InputDelayAfterJumpUpPole;
  float HandStandOffset;
  float JumpToHandStandMaxActivationOffset;
  float HandStandSpeedUp;
  float HandStandSpeedDown;
  float HandStandJumpHeight;
  float HandStandJumpHorizontalSpeed;
  float ClimbToHandstandSwitchSidesLock;
  float DangleOffset;
  float DangleSpeedUp;
  float DangleSpeedDown;
  float ClimbToDangleSwitchSidesLock;
  struct AnimationCurve * SlipperySpeedCurve;
  float SlipperyStickDuration;
  float m_slippingDuration;
  enum SeinGrabRope_State__Enum m_currentState;
  enum SeinGrabRope_State__Enum m_previousState;
  float m_currentStateTime;
  float m_positionOnRope;
  struct IGrabbableRope * m_rope;
  float m_lastDownPressTime;
  bool m_wantsToStopSwinging;
  int32_t m_wantsToStopSwingingLastCycle;
  struct ActiveAnimationHandle m_swingLoopAnimationState;
  struct ActiveAnimationHandle m_swingUpAnimationState;
  bool m_wantsToPerformSwingJump;
  float m_swingLoopEndTime;
  float m_swingJumpStartTime;
  float m_numSwingCycles;
  float m_swingLoopSpeed;
  float m_timeUntilJumpFinished;
  float m_swingJumpSpeed;
  bool _m_isFlipped_k__BackingField;
  bool m_queuedFaceLeft;
  bool m_applyQueuedFaceLeft;
  float m_side;
  bool m_movingToDangle;
  bool m_movingToHandstand;
  bool m_forceHandStand;
  bool m_isInHandStand;
  float m_lastJumpToHandstandTime;
  bool m_switchingSidesFaceLeft;
  float m_horizontalSpeed;
  float m_verticalSpeed;
  struct ActiveAnimationHandle m_jumpUpPoleAnimation;
  bool m_shouldPlayDangleSound;
  bool m_enterHandStandSoundPlayed;
  bool m_climbUpSoundIsPlaying;
  bool m_slideDownSoundIsPlaying;
  bool m_swingSoundIsPlaying;
  bool m_hasClearedRopeAfterDrop;
  float m_lastJumpTime;
  float m_lastDropTime;
  bool m_enteredStateByDashing;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
};
struct SeinGrabRope {
  struct SeinGrabRope__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabRope__Fields fields;
};
struct __declspec(align(8)) SurfaceMaterialTimelinePlayer__Fields {
  struct Transform * VFXHolder;
  struct MaterialBasedResourceMap * EffectsMap;
  struct MoonTimeline * m_currentVFX;
  enum SurfaceMaterialType__Enum m_currentSurfaceMaterial;
  struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ * m_vfx;
};
struct SurfaceMaterialTimelinePlayer {
  struct SurfaceMaterialTimelinePlayer__Class *klass;
  struct MonitorData *monitor;
  struct SurfaceMaterialTimelinePlayer__Fields fields;
};
struct SeinGrabRope_VerticalVFXPlayer__Fields {
  struct SurfaceMaterialTimelinePlayer__Fields _;
};
struct SeinGrabRope_VerticalVFXPlayer {
  struct SeinGrabRope_VerticalVFXPlayer__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabRope_VerticalVFXPlayer__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_SurfaceMaterialType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
  struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
  int32_t hashCode;
  int32_t next;
  enum SurfaceMaterialType__Enum key;
  struct MoonTimeline * value;
};
struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array {
  struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields {
  struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields {
  struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Fields fields;
};
struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
  enum SurfaceMaterialType__Enum key;
  struct MoonTimeline * value;
};
struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Boxed {
  struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ fields;
};
struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array {
  struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
  struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline___Class *klass;
  struct MonitorData *monitor;
};
struct SeinGrabRope_HorizontalVFXPlayer__Fields {
  struct SurfaceMaterialTimelinePlayer__Fields _;
};
struct SeinGrabRope_HorizontalVFXPlayer {
  struct SeinGrabRope_HorizontalVFXPlayer__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabRope_HorizontalVFXPlayer__Fields fields;
};
struct SeinGrabRope_SwingVFXPlayer__Fields {
  struct SurfaceMaterialTimelinePlayer__Fields _;
};
struct SeinGrabRope_SwingVFXPlayer {
  struct SeinGrabRope_SwingVFXPlayer__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabRope_SwingVFXPlayer__Fields fields;
};
struct IGrabbableRope {
  struct IGrabbableRope__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinEdgeClamber___Fields {
  bool HasState;
  struct SeinEdgeClamber * State;
};
struct CharacterStateWrapper_1_SeinEdgeClamber_ {
  struct CharacterStateWrapper_1_SeinEdgeClamber___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinEdgeClamber___Fields fields;
};
struct SeinEdgeClamber__Fields {
  struct CharacterState__Fields _;
  struct SoundProvider * EdgeClamberSound;
  struct MaterialBasedSeinEffectsMap * EffectsMap;
  float HorizontalSpeedFraction;
  float VerticalSpeed;
  bool m_isEdgeClambering;
  float JumpSustainSpeedToLose;
  float LandOnTrigger_Duration;
  float LandOnTrigger_MaxSpeed;
  float LandOnTrigger_Acceleration;
  float LandOnTrigger_Decceleration;
  float LandOnTrigger_GravityStrength;
  bool m_landOnTriggerStarted;
  float m_landOnTriggerUntilTime;
  float m_landOnTriggerDir;
};
struct SeinEdgeClamber {
  struct SeinEdgeClamber__Class *klass;
  struct MonitorData *monitor;
  struct SeinEdgeClamber__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinSwimming___Fields {
  bool HasState;
  struct SeinSwimming * State;
};
struct CharacterStateWrapper_1_SeinSwimming_ {
  struct CharacterStateWrapper_1_SeinSwimming___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinSwimming___Fields fields;
};
enum SeinSwimming_State__Enum : int32_t {
  SeinSwimming_State__Enum_Invalid = -1,
  SeinSwimming_State__Enum_OutOfWater = 0,
  SeinSwimming_State__Enum_SwimmingOnSurface = 1,
  SeinSwimming_State__Enum_SwimMovingUnderwater = 2,
  SeinSwimming_State__Enum_SwimIdleUnderwater = 3,
  SeinSwimming_State__Enum_Dashing = 4,
  SeinSwimming_State__Enum_DashingOutOfWater = 5,
  SeinSwimming_State__Enum_WallImpact = 6,
  SeinSwimming_State__Enum_SurfaceDash = 7,
  SeinSwimming_State__Enum_DashIntoWater = 8,
  SeinSwimming_State__Enum_SurfaceWallImpact = 9,
  SeinSwimming_State__Enum_Digging = 10,
  SeinSwimming_State__Enum_Drowning = 11,
  SeinSwimming_State__Enum_Bashing = 12,
};
struct SeinSwimming_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinSwimming_State__Enum value;
};
struct SeinSwimming__Fields {
  struct CharacterState__Fields _;
  enum SeinSwimming_State__Enum PreviousState;
  enum SeinSwimming_State__Enum CurrentState;
  struct GameObject * BreathingUI;
  struct State * OriUnderWaterWwiseState;
  struct State * OriOutOfWaterWwiseState;
  struct Event_1 * UnderwaterAmbienceEvent;
  struct RTPC * UnderwaterSwimmingSpeedRtpc;
  struct Switch_1 * RegularWaterSwitch;
  struct Switch_1 * DamagingWaterSwitch;
  struct Event_1 * SharpTurnEvent;
  struct WwiseEventSystem_SoundHandle m_underwaterAmbienceSoundHandle;
  bool m_oriUnderWaterWwiseStateValue;
  float Breath;
  bool InstaKillWhenOutOfBreath;
  float DrownDamage;
  float DrownDamageTickRate;
  float DrownYSpeed;
  float DrownRotationSpeed;
  float ImpureWaterDamage;
  float ImpureWaterDamageTickRate;
  float DiveUnderwaterSpeed;
  struct SoundProvider * InWaterSoundProvider;
  struct SoundProvider * BashIntoWaterSoundProvider;
  struct SoundProvider * StompIntoWaterSoundProvider;
  float JumpOutOfWaterSpeed;
  struct SoundProvider * OutOfWaterSoundProvider;
  float SkipSurfaceSpeedIn;
  float SkipSurfaceSpeedOut;
  struct SoundSource * SurfaceSwimmingSoundProvider;
  struct SoundSource * UnderwaterSwimmingSoundProvider;
  struct Event_1 * EmergeHighBreathSound;
  struct Event_1 * EmergeMedBreathSound;
  struct Event_1 * EmergeLowBreathSound;
  struct Event_1 * BoostSoundEvent;
  float SwimGravity;
  float SwimSpeed;
  struct AnimationCurve * SwimSpeedBoostCurve;
  float BoostPeakTime;
  float HorizontalEnterSpeedDamp;
  float m_boostTime;
  float BoostDuration;
  bool m_isBoosting;
  float m_swimAngle;
  float SwimAngleDeltaLimit;
  float m_swimMovingTime;
  float m_swimIdleTime;
  float m_swimAccelerationTime;
  float m_nextPaddleSoundTime;
  float SwimUpwardsGravity;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * SwimmingOnSurfaceHorizontalSpeed;
  struct AnimationCurve * WaterCurrentForceMultiplierForAngle;
  float MinShakeStrength;
  float MaxShakeStrength;
  float ExitDashRootScale;
  float ExitDashDuration;
  struct Event_1 * DashWwiseEvent;
  struct Event_1 * DashIntoWaterWwiseEvent;
  struct AnimationCurve * DashSpeedCurve;
  float DashMaxSpeed;
  float DashTime;
  float DashCooldown;
  float DashAngleDeltaLimit;
  float DashDamage;
  enum DamageWeight__Enum DamageWeight;
  float DashDamageRadius;
  float DashDamageForce;
  struct LayerMask DashDamageLayerMask;
  float DashExitMinPrerequisiteSpeed;
  struct AnimationCurve * DashExitSpeedMultiplierBasedOnDashProgress;
  struct AnimationCurve * DashExitSpeedCurveNormalized;
  float DashExitCurveMaxSpeed;
  float DashExitSpeedCurveDuration;
  float DashExitMaxCameraShakeStrength;
  float DashExitMaxControllerShakeStrength;
  float LimitSpeedToStickToSurfaceInsteadOfJump;
  float DashExitWhileSwimmingOnSurfaceThreshold;
  float DashEnterWhileSwimmingOnSurfaceThreshold;
  struct Event_1 * SurfacePaddleSoundEvent;
  struct AnimationCurve * PaddleSoundsPerSecondOverSpeed;
  struct AnimationCurve * SurfaceDashSpeedCurveNormalized;
  float SurfaceDashCurveMaxSpeed;
  float SurfaceDashCurveDuration;
  float DashIntoWaterMaxDistance;
  struct AnimationCurve * DashIntoWaterMaxDistanceMultiplierGraph;
  struct AnimationCurve * DashIntoWaterAccelerationSpeedCurveNormalized;
  float DashIntoWaterCurveMaxSpeed;
  float DashIntoWaterAccelerationDuration;
  struct AnimationCurve * DashIntoWaterDecelerationSpeedCurveNormalized;
  float DashIntoWaterDecelerationDuration;
  struct AnimationCurve * DashIntoWaterAngleDeltaCurveNormalized;
  float DashIntoWaterAngleDeltaLimit;
  float DelayBeforeDashIntoWaterCanDashAgain;
  float DashExitEnableTurnThreshold;
  float m_exitingWaterDuration;
  struct CharacterPlatformMovement_ScheduledSpeedCurve * m_dashExitCurve;
  float DashDecelSmoothDamp;
  float DashDecelMaxSpeed;
  float DashCooldownOnExit;
  float DashCooldownOnEnter;
  float DashTurnSmoothTime;
  float OutOfDashSpeed;
  float OutOfDashDuration;
  struct AnimationCurve * OutOfDashSpeedCurve;
  bool ApplyDashExitCurve;
  struct AnimationCurve * DashExitCurve;
  float DashExitDigSpeed;
  float AutoDashMaxDistance;
  struct LayerMask WallImpactCheckMask;
  float MaxAcceptedAngleForWallImpact;
  float MinSpeedForWallImpact;
  bool m_canCancelWallImpact;
  float MaxAcceptedAngleForSurfaceWallImpact;
  float MinSpeedForSurfaceWallImpact;
  bool m_canCancelSurfaceWallImpact;
  float KickbackForceMagnitudeSurface;
  float KickbackForceMagnitudeUnderWater;
  bool m_shouldStartDashing;
  bool m_isDashing;
  float m_dashTimer;
  float m_dashCooldown;
  struct GameObject * m_swimDashEffect;
  struct List_1_UnityEngine_GameObject_ * m_swimDashStartEffects;
  struct GameObject * m_surfaceDashEffect;
  int32_t m_currentDamageID;
  float m_timeInsideWater;
  float m_distanceSwam;
  struct Vector3 m_previousSwamPosition;
  struct AnimationCurve * DeadZoneRemappingCurve;
  bool m_lastFacingLeft;
  struct WaterZone * m_previousWater;
  struct WaterZone * m_currentWater;
  float m_timeSinceLastDrownDamageTick;
  float m_timeSinceLastImpureWaterDamageTick;
  float m_timeSinceLastDamagingWaterDamageTick;
  float m_reEnterWaterCooldown;
  float m_reEnterWaterCooldownRemaining;
  float m_currentStateTime;
  float m_rotationFrom;
  float _RemainingBreath_k__BackingField;
  bool m_spriteMirrorLock;
  struct LegacyAnimator__Array * m_breathingUIAnimators;
  float SurfaceDecelSpeed;
  bool CanHorizontalSwimJump;
  float Deceleration;
  float MaxFallSpeed;
  float MaxFloatSpeed;
  float DistanceToSurfaceToFloat;
  struct Collider__Array * m_damageHitColliders;
  struct Collider__Array * m_previousDamageHitColliders;
  struct HashSet_1_Moon_DamageOwner_ * m_dashDamagedEntities;
  float BashTime;
  float SmoothAngleDelta;
  struct AnimationCurve * AccelerationOverTime;
  float m_boostAnimationRemainingTime;
  bool CanJumpUnderwater;
  bool HoldAToSwimLoop;
  float SwimJumpSpeedDelta;
};}