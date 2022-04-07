namespace app {

struct SeinDoubleJumpPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct GameObject * DoubleJumpAfterShock;
  struct GameObject * TrippleJumpAfterShock;
  struct Event_1 * DoubleJumpSound;
  struct SurfaceToSoundProviderMap * JumpSoundProvider;
  struct MoonAnimation * DoubleJump;
  struct MoonAnimation * Jump;
  struct MoonAnimation * DoubleJumpWithTorch;
  float CanCancelFromTime;
};
struct SeinDoubleJumpPuppet {
  struct SeinDoubleJumpPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinDoubleJumpPuppet__Fields fields;
};
struct SeinDoubleJumpPuppet__VTable {
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
struct SeinDoubleJumpPuppet__StaticFields {
};
struct SeinDoubleJumpPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinDoubleJumpPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinDoubleJumpPuppet__VTable vtable;
};

struct SeinDoubleJump_c {
  struct SeinDoubleJump_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinDoubleJump_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinDoubleJump_c__StaticFields {
  struct SeinDoubleJump_c * __9;
};
struct SeinDoubleJump_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinDoubleJump_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinDoubleJump_c__VTable vtable;
};

struct SeinDrillPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonAnimation * DrillAnimation;
};
struct SeinDrillPuppet {
  struct SeinDrillPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinDrillPuppet__Fields fields;
};
struct SeinDrillPuppet__VTable {
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
struct SeinDrillPuppet__StaticFields {
};
struct SeinDrillPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinDrillPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinDrillPuppet__VTable vtable;
};

struct SeinFeatherFlapPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonAnimation * LeafAttack;
  struct MoonAnimation * LeafAttackAir;
  struct SoundProvider * LeafAttackSound;
  struct SoundProvider * LeafWindSound;
  struct SoundProvider * LeafKnockbackSound;
  struct MoonAnimation * LeafDeploy;
  struct MoonAnimation * LeafAttackGroundResolve;
  struct MoonAnimation * LeafLeafAttack;
  struct MoonAnimation * LeafLeafAttackAir;
  struct IGhostGenericSoundPlayer * ParachuteLoop;
};
struct SeinFeatherFlapPuppet {
  struct SeinFeatherFlapPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinFeatherFlapPuppet__Fields fields;
};
struct SeinFeatherFlapPuppet__VTable {
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
struct SeinFeatherFlapPuppet__StaticFields {
};
struct SeinFeatherFlapPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinFeatherFlapPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinFeatherFlapPuppet__VTable vtable;
};

struct SeinFirewhirlSpell_c {
  struct SeinFirewhirlSpell_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinFirewhirlSpell_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinFirewhirlSpell_c__StaticFields {
  struct SeinFirewhirlSpell_c * __9;
  struct Predicate_1_FirewhirlBeam_ * __9__31_0;
};
struct SeinFirewhirlSpell_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinFirewhirlSpell_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinFirewhirlSpell_c__VTable vtable;
};

struct SeinFootstepsPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct SurfaceToSoundProviderMap * FootstepsSounds;
  struct RTPC * FootsetpSpeedRTPC;
  struct SurfaceToSoundProviderMap * GrabbingSounds;
};
struct SeinFootstepsPuppet {
  struct SeinFootstepsPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinFootstepsPuppet__Fields fields;
};
struct SeinFootstepsPuppet__VTable {
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
struct SeinFootstepsPuppet__StaticFields {
};
struct SeinFootstepsPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinFootstepsPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinFootstepsPuppet__VTable vtable;
};

struct SeinGlidePuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct SoundProvider * OpenParachuteSound;
  struct SoundProvider * CloseParachuteSound;
  struct SoundProvider * TurnLeftRightSound;
  struct SoundProvider * ParachuteLoopSound;
  struct MoonAnimation * Glide;
  struct MoonAnimation * LeafDeploy;
  struct FloatAnimationParameter * GlideSpeed;
  struct MoonAnimation * GlideTurn;
  struct MoonTimeline * GlideTurnTimeline;
  struct CharacterTimelineTurning * GlideTurnTimelineSetup;
  struct IGhostGenericSoundPlayer * ParachuteLoop;
};
struct SeinGlidePuppet {
  struct SeinGlidePuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinGlidePuppet__Fields fields;
};
struct SeinGlidePuppet__VTable {
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
struct SeinGlidePuppet__StaticFields {
};
struct SeinGlidePuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinGlidePuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinGlidePuppet__VTable vtable;
};

struct SeinGrabRopePuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonAnimation * PoleIdle;
  struct MoonAnimation * PoleSwitchSides;
  struct MoonAnimation * PoleDashToVerticalIdle;
  struct MoonAnimation * PoleHandstandIdle;
  struct MoonAnimation * PoleHandStandSwitchSides;
  struct MoonAnimation * PoleHandStandJumpAnimation;
  struct MoonAnimation * PoleHandStandJumpUpAnimation;
  struct MoonAnimation * PoleDashToDangleIdle;
  struct MoonAnimation * PoleDangleIdle;
  struct MoonAnimation * PoleDangleSwitchSides;
  struct MoonAnimation * PoleClimb;
  struct MoonAnimation * PoleSlideDown;
  struct MoonAnimation * PoleSlideDownSlippery;
  struct MoonAnimation * PoleJumpUp;
  struct MoonAnimation * CeilingIdle;
  struct MoonAnimation * CeilingMove;
  struct MoonAnimation * SwingUp;
  struct MoonAnimation__Array * SwingLoops;
  struct MoonAnimation * SwingJumpAnimation;
  struct MoonAnimation * SwingJumpWeakAnimation;
  struct SoundProvider * SwingUpJumpSound;
};
struct SeinGrabRopePuppet {
  struct SeinGrabRopePuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabRopePuppet__Fields fields;
};
struct SeinGrabRopePuppet__VTable {
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
struct SeinGrabRopePuppet__StaticFields {
};
struct SeinGrabRopePuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinGrabRopePuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinGrabRopePuppet__VTable vtable;
};

struct SeinGrabSurfacePuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonAnimation * ClimbIdle;
  struct MoonAnimation * Climb;
  struct MoonAnimation * SlideDown;
  struct MoonAnimation * GroundIdle;
  struct MoonAnimation * GroundMove;
  struct MoonAnimation * WheelIdle;
  struct MoonAnimation * WheelJump;
  struct MoonAnimation * CeilingJump;
  struct FloatAnimationParameter * SlopeParameter;
};
struct SeinGrabSurfacePuppet {
  struct SeinGrabSurfacePuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabSurfacePuppet__Fields fields;
};
struct SeinGrabSurfacePuppet__VTable {
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
struct SeinGrabSurfacePuppet__StaticFields {
};
struct SeinGrabSurfacePuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinGrabSurfacePuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinGrabSurfacePuppet__VTable vtable;
};

struct SeinGrabWallPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct FloatAnimationParameter * SlopeParameter;
  struct MoonAnimation * Idle;
  struct MoonAnimation * ClimbUp;
  struct MoonAnimation * ClimbDown;
  struct MoonAnimation * GrabAway;
  struct RTPC * SlideSpeedRTPC;
};
struct SeinGrabWallPuppet {
  struct SeinGrabWallPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabWallPuppet__Fields fields;
};
struct SeinGrabWallPuppet__VTable {
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
struct SeinGrabWallPuppet__StaticFields {
};
struct SeinGrabWallPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinGrabWallPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinGrabWallPuppet__VTable vtable;
};

struct OriJumpPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct GameObject * JumpParticleEffect;
  struct SurfaceToSoundProviderMap * JumpSoundProvider;
  struct SurfaceToSoundProviderMap * FlipJumpSoundProvider;
  struct SurfaceToSoundProviderMap * SpinJumpSoundProvider;
  struct MoonAnimation * Backflip;
  struct MoonAnimation * CrouchJump;
  struct MoonAnimation__Array * Jump;
  struct MoonAnimation__Array * JumpIdle;
  struct MoonAnimation * WallSlideJump;
  struct MoonAnimation * ActiveSpringJump;
  struct MoonAnimation * PassiveSpringJump;
  struct MoonAnimation__Array * JumpFlipTransitions;
  struct MoonAnimation * CrouchJumpFlipTransition;
  struct MoonAnimation * WallJumpFlipTransition;
  struct MoonAnimation * BackflipJumpFlipTransition;
  struct MoonAnimation * CrouchJumpDown;
  struct MoonAnimation * GenericJumpFlip;
  struct MoonTimeline * GenericJumpFlipTimeline;
  struct CharacterTimelineTurning * GenericJumpFlipTimelineSetup;
  float BackFlipGenericTime;
  float FirstRunJumpGenericTime;
  float SecondRunJumpGenericTime;
  float ThirdRunJumpGenericTime;
  float CrouchJumpGenericTime;
};
struct OriJumpPuppet {
  struct OriJumpPuppet__Class *klass;
  struct MonitorData *monitor;
  struct OriJumpPuppet__Fields fields;
};
struct OriJumpPuppet__VTable {
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
struct OriJumpPuppet__StaticFields {
};
struct OriJumpPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriJumpPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriJumpPuppet__VTable vtable;
};

struct SeinJump_c {
  struct SeinJump_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinJump_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinJump_c__StaticFields {
  struct SeinJump_c * __9;
  struct Action_1_Single_ * __9__133_0;
};
struct SeinJump_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinJump_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinJump_c__VTable vtable;
};

struct SeinLeverPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct MoonAnimation * LeverLeft;
  struct MoonAnimation * LeverMiddle;
  struct MoonAnimation * LeverRight;
  float LeverSlideTime;
};
struct SeinLeverPuppet {
  struct SeinLeverPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinLeverPuppet__Fields fields;
};
struct SeinLeverPuppet__VTable {
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
struct SeinLeverPuppet__StaticFields {
};
struct SeinLeverPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinLeverPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinLeverPuppet__VTable vtable;
};

struct SeinRefillOnEvent__Fields {
  struct MonoBehaviour__Fields _;
  bool RefillHealth;
  bool RefillEnergy;
  struct EventTriggerAnimator * Event;
};
struct SeinRefillOnEvent {
  struct SeinRefillOnEvent__Class *klass;
  struct MonitorData *monitor;
  struct SeinRefillOnEvent__Fields fields;
};
struct SeinRefillOnEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinRefillOnEvent__StaticFields {
};
struct SeinRefillOnEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinRefillOnEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinRefillOnEvent__VTable vtable;
};

struct __declspec(align(8)) SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct SeinSpiritSentrySpell * __4__this;
  float _count_5__2;
  int32_t _i_5__3;
};
struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16 {
  struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Fields fields;
};
struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__StaticFields {
};
struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__VTable vtable;
};

struct SeinSpiritSpearSpellPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct GameObject * JumpEffectPrefab;
  struct GameObject * ChargeEffectPrefab;
  struct GameObject * AttackEffectPrefab;
  struct GameObject * ExplosionImpactEffectPrefab;
  struct GameObject * SimpleImpactEffectPrefab;
  struct MoonAnimation * CharacterJump;
  struct MoonAnimation * CharacterCharge;
  struct MoonAnimation * CharacterEnd;
  struct SoundProvider * JumpSound;
  struct SoundProvider * ChargeSound;
  struct SoundProvider * AttackSound;
  struct SoundProvider * ImpactSound;
};
struct SeinSpiritSpearSpellPuppet {
  struct SeinSpiritSpearSpellPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritSpearSpellPuppet__Fields fields;
};
struct SeinSpiritSpearSpellPuppet__VTable {
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
struct SeinSpiritSpearSpellPuppet__StaticFields {
};
struct SeinSpiritSpearSpellPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinSpiritSpearSpellPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinSpiritSpearSpellPuppet__VTable vtable;
};

struct SeinStomp_c {
  struct SeinStomp_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinStomp_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinStomp_c__StaticFields {
  struct SeinStomp_c * __9;
};
struct SeinStomp_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinStomp_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinStomp_c__VTable vtable;
};

struct __declspec(align(8)) SeinTurretSpell_HandleSpawningSentries_d_40__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct SeinTurretSpell * __4__this;
  float _count_5__2;
  int32_t _i_5__3;
};
struct SeinTurretSpell_HandleSpawningSentries_d_40 {
  struct SeinTurretSpell_HandleSpawningSentries_d_40__Class *klass;
  struct MonitorData *monitor;
  struct SeinTurretSpell_HandleSpawningSentries_d_40__Fields fields;
};
struct SeinTurretSpell_HandleSpawningSentries_d_40__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct SeinTurretSpell_HandleSpawningSentries_d_40__StaticFields {
};
struct SeinTurretSpell_HandleSpawningSentries_d_40__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinTurretSpell_HandleSpawningSentries_d_40__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinTurretSpell_HandleSpawningSentries_d_40__VTable vtable;
};

struct SeinWallDangle__Fields {
  struct CharacterState__Fields _;
};
struct SeinWallDangle {
  struct SeinWallDangle__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallDangle__Fields fields;
};
struct SeinWallDangle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData SetReferenceToSein;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData get_IsBlindForest;
  VirtualInvokeData get_IsStatePerforming;
  VirtualInvokeData OnSetReferenceToSein;
  VirtualInvokeData get_IsAllowedNonZeroZPosition;
  VirtualInvokeData OnAwake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnExit;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnEnable;
  VirtualInvokeData UpdateCharacterState;
  VirtualInvokeData OnMoveWindowOpen;
  VirtualInvokeData OnMoveWindowClosed;
  VirtualInvokeData CanBeInterruptedBy;
  VirtualInvokeData CanInputBeQueued;
};
struct SeinWallDangle__StaticFields {
};
struct SeinWallDangle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWallDangle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWallDangle__VTable vtable;
};

struct SeinWallJumpPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct TextureAnimationWithTransitions__Array * TowardsAnimation;
  struct SurfaceToSoundProviderMap * WallJumpSound;
  struct MoonAnimation__Array * EdgeJump;
  struct MoonAnimation__Array * Regular;
  struct MoonAnimation__Array * Towards;
  struct MoonAnimation__Array * AwayAnimations;
  struct Event_1__Array * AwaySFX;
  struct MoonAnimation__Array * AwayFlipTurnAnimations;
  struct MoonAnimation * GenericJumpFlip;
  struct Single__Array * JumpAwayGenericTimes;
};
struct SeinWallJumpPuppet {
  struct SeinWallJumpPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallJumpPuppet__Fields fields;
};
struct SeinWallJumpPuppet__VTable {
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
struct SeinWallJumpPuppet__StaticFields {
};
struct SeinWallJumpPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWallJumpPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWallJumpPuppet__VTable vtable;
};

struct __declspec(align(8)) SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct SeinWallJump * __4__this;
  float _i_5__2;
  bool _left_5__3;
  float _t_5__4;
};
struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50 {
  struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Fields fields;
};
struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__StaticFields {
};
struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__VTable vtable;
};

struct __declspec(align(8)) SeinWallJump_RoutineToReenableAirDeceleration_d_52__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  float delay;
  struct SeinWallJump * __4__this;
};
struct SeinWallJump_RoutineToReenableAirDeceleration_d_52 {
  struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__Fields fields;
};
struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__StaticFields {
};
struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__VTable vtable;
};

struct SeinWallJump_c {
  struct SeinWallJump_c__Class *klass;
  struct MonitorData *monitor;
};
struct SeinWallJump_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinWallJump_c__StaticFields {
  struct SeinWallJump_c * __9;
  struct Action_1_UnityEngine_Vector2_ * __9__80_0;
};
struct SeinWallJump_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWallJump_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWallJump_c__VTable vtable;
};

struct SeinWallSlidePuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct SurfaceToSoundProviderMap * WallEnterSounds;
  struct SurfaceToSoundProviderMap * WallExitSounds;
  struct SurfaceToSoundProviderMap * WallSlideDownSound;
  struct SurfaceToSoundProviderMap * WallSlideUpSound;
  struct RTPC * SlideSpeedRTPC;
  struct SoundPlayer * m_wallSlideDownSound;
  struct SoundPlayer * m_wallSlideUpSound;
  struct MoonAnimation * SlideDown;
  struct MoonAnimation * SlideUp;
};
struct SeinWallSlidePuppet {
  struct SeinWallSlidePuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallSlidePuppet__Fields fields;
};
struct SeinWallSlidePuppet__VTable {
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
struct SeinWallSlidePuppet__StaticFields {
};
struct SeinWallSlidePuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWallSlidePuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWallSlidePuppet__VTable vtable;
};

struct SpiritGrenadeCrushDetector__Fields {
  struct MonoBehaviour__Fields _;
  struct SpiritGrenade * SpiritGrenade;
};
struct SpiritGrenadeCrushDetector {
  struct SpiritGrenadeCrushDetector__Class *klass;
  struct MonitorData *monitor;
  struct SpiritGrenadeCrushDetector__Fields fields;
};
struct SpiritGrenadeCrushDetector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritGrenadeCrushDetector__StaticFields {
};
struct SpiritGrenadeCrushDetector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritGrenadeCrushDetector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritGrenadeCrushDetector__VTable vtable;
};

struct SpiritGrenadeDamageDealer__Fields {
  struct DamageDealer__Fields _;
};}