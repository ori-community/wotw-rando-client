namespace app {
struct SeinGrabRopePuppet__StaticFields {
};

struct SeinGrabRopePuppet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinGrabRopePuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinGrabRopePuppet__VTable vtable;
};

struct SeinGrabSurfacePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonAnimation *ClimbIdle;
    struct MoonAnimation *Climb;
    struct MoonAnimation *SlideDown;
    struct MoonAnimation *GroundIdle;
    struct MoonAnimation *GroundMove;
    struct MoonAnimation *WheelIdle;
    struct MoonAnimation *WheelJump;
    struct MoonAnimation *CeilingJump;
    struct FloatAnimationParameter *SlopeParameter;
};

struct SeinGrabSurfacePuppet {
    struct SeinGrabSurfacePuppet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinGrabSurfacePuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinGrabSurfacePuppet__VTable vtable;
};

struct SeinGrabWallPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct FloatAnimationParameter *SlopeParameter;
    struct MoonAnimation *Idle;
    struct MoonAnimation *ClimbUp;
    struct MoonAnimation *ClimbDown;
    struct MoonAnimation *GrabAway;
    struct RTPC *SlideSpeedRTPC;
};

struct SeinGrabWallPuppet {
    struct SeinGrabWallPuppet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinGrabWallPuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinGrabWallPuppet__VTable vtable;
};

struct OriJumpPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct GameObject *JumpParticleEffect;
    struct SurfaceToSoundProviderMap *JumpSoundProvider;
    struct SurfaceToSoundProviderMap *FlipJumpSoundProvider;
    struct SurfaceToSoundProviderMap *SpinJumpSoundProvider;
    struct MoonAnimation *Backflip;
    struct MoonAnimation *CrouchJump;
    struct MoonAnimation__Array *Jump;
    struct MoonAnimation__Array *JumpIdle;
    struct MoonAnimation *WallSlideJump;
    struct MoonAnimation *ActiveSpringJump;
    struct MoonAnimation *PassiveSpringJump;
    struct MoonAnimation__Array *JumpFlipTransitions;
    struct MoonAnimation *CrouchJumpFlipTransition;
    struct MoonAnimation *WallJumpFlipTransition;
    struct MoonAnimation *BackflipJumpFlipTransition;
    struct MoonAnimation *CrouchJumpDown;
    struct MoonAnimation *GenericJumpFlip;
    struct MoonTimeline *GenericJumpFlipTimeline;
    struct CharacterTimelineTurning *GenericJumpFlipTimelineSetup;
    float BackFlipGenericTime;
    float FirstRunJumpGenericTime;
    float SecondRunJumpGenericTime;
    float ThirdRunJumpGenericTime;
    float CrouchJumpGenericTime;
};

struct OriJumpPuppet {
    struct OriJumpPuppet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OriJumpPuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OriJumpPuppet__VTable vtable;
};

struct SeinJump_c {
    struct SeinJump_c__Class *klass;
    MonitorData *monitor;
};

struct SeinJump_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinJump_c__StaticFields {
    struct SeinJump_c *__9;
    struct Action_1_Single_ *__9__133_0;
};

struct SeinJump_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinJump_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinJump_c__VTable vtable;
};

struct SeinLeverPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonAnimation *LeverLeft;
    struct MoonAnimation *LeverMiddle;
    struct MoonAnimation *LeverRight;
    float LeverSlideTime;
};

struct SeinLeverPuppet {
    struct SeinLeverPuppet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinLeverPuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinLeverPuppet__VTable vtable;
};

struct SeinRefillOnEvent__Fields {
    struct MonoBehaviour__Fields _;
    bool RefillHealth;
    bool RefillEnergy;
    struct EventTriggerAnimator *Event;
};

struct SeinRefillOnEvent {
    struct SeinRefillOnEvent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinRefillOnEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinRefillOnEvent__VTable vtable;
};

struct __declspec(align(8)) SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct SeinSpiritSentrySpell *__4__this;
    float _count_5__2;
    int32_t _i_5__3;
};

struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16 {
    struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinSpiritSentrySpell_HandleSpawningSentries_d_16__VTable vtable;
};

struct SeinSpiritSpearSpellPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct GameObject *JumpEffectPrefab;
    struct GameObject *ChargeEffectPrefab;
    struct GameObject *AttackEffectPrefab;
    struct GameObject *ExplosionImpactEffectPrefab;
    struct GameObject *SimpleImpactEffectPrefab;
    struct MoonAnimation *CharacterJump;
    struct MoonAnimation *CharacterCharge;
    struct MoonAnimation *CharacterEnd;
    struct SoundProvider *JumpSound;
    struct SoundProvider *ChargeSound;
    struct SoundProvider *AttackSound;
    struct SoundProvider *ImpactSound;
};

struct SeinSpiritSpearSpellPuppet {
    struct SeinSpiritSpearSpellPuppet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinSpiritSpearSpellPuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinSpiritSpearSpellPuppet__VTable vtable;
};

struct SeinStomp_c {
    struct SeinStomp_c__Class *klass;
    MonitorData *monitor;
};

struct SeinStomp_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinStomp_c__StaticFields {
    struct SeinStomp_c *__9;
};

struct SeinStomp_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinStomp_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinStomp_c__VTable vtable;
};

struct __declspec(align(8)) SeinTurretSpell_HandleSpawningSentries_d_40__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct SeinTurretSpell *__4__this;
    float _count_5__2;
    int32_t _i_5__3;
};

struct SeinTurretSpell_HandleSpawningSentries_d_40 {
    struct SeinTurretSpell_HandleSpawningSentries_d_40__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinTurretSpell_HandleSpawningSentries_d_40__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinTurretSpell_HandleSpawningSentries_d_40__VTable vtable;
};

struct SeinWallDangle__Fields {
    struct CharacterState__Fields _;
};

struct SeinWallDangle {
    struct SeinWallDangle__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinWallDangle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinWallDangle__VTable vtable;
};

struct SeinWallJumpPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct TextureAnimationWithTransitions__Array *TowardsAnimation;
    struct SurfaceToSoundProviderMap *WallJumpSound;
    struct MoonAnimation__Array *EdgeJump;
    struct MoonAnimation__Array *Regular;
    struct MoonAnimation__Array *Towards;
    struct MoonAnimation__Array *AwayAnimations;
    struct Event_1__Array *AwaySFX;
    struct MoonAnimation__Array *AwayFlipTurnAnimations;
    struct MoonAnimation *GenericJumpFlip;
    struct Single__Array *JumpAwayGenericTimes;
};

struct SeinWallJumpPuppet {
    struct SeinWallJumpPuppet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinWallJumpPuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinWallJumpPuppet__VTable vtable;
};

struct __declspec(align(8)) SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct SeinWallJump *__4__this;
    float _i_5__2;
    bool _left_5__3;
    float _t_5__4;
};

struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50 {
    struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__VTable vtable;
};

struct __declspec(align(8)) SeinWallJump_RoutineToReenableAirDeceleration_d_52__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    float delay;
    struct SeinWallJump *__4__this;
};

struct SeinWallJump_RoutineToReenableAirDeceleration_d_52 {
    struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinWallJump_RoutineToReenableAirDeceleration_d_52__VTable vtable;
};

struct SeinWallJump_c {
    struct SeinWallJump_c__Class *klass;
    MonitorData *monitor;
};

struct SeinWallJump_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinWallJump_c__StaticFields {
    struct SeinWallJump_c *__9;
    struct Action_1_UnityEngine_Vector2_ *__9__80_0;
};

struct SeinWallJump_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinWallJump_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinWallJump_c__VTable vtable;
};

struct SeinWallSlidePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct SurfaceToSoundProviderMap *WallEnterSounds;
    struct SurfaceToSoundProviderMap *WallExitSounds;
    struct SurfaceToSoundProviderMap *WallSlideDownSound;
    struct SurfaceToSoundProviderMap *WallSlideUpSound;
    struct RTPC *SlideSpeedRTPC;
    struct SoundPlayer *m_wallSlideDownSound;
    struct SoundPlayer *m_wallSlideUpSound;
    struct MoonAnimation *SlideDown;
    struct MoonAnimation *SlideUp;
};

struct SeinWallSlidePuppet {
    struct SeinWallSlidePuppet__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinWallSlidePuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinWallSlidePuppet__VTable vtable;
};

struct SpiritGrenadeCrushDetector__Fields {
    struct MonoBehaviour__Fields _;
    struct SpiritGrenade *SpiritGrenade;
};

struct SpiritGrenadeCrushDetector {
    struct SpiritGrenadeCrushDetector__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritGrenadeCrushDetector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritGrenadeCrushDetector__VTable vtable;
};

struct SpiritGrenadeDamageDealer__Fields {
    struct DamageDealer__Fields _;
};

struct SpiritGrenadeDamageDealer {
    struct SpiritGrenadeDamageDealer__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpiritGrenadeDamageDealer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpiritGrenadeDamageDealer__VTable vtable;
};

struct TextureAnimationGUIText__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimatorWithTransitions *TextureAnimator;
};

struct TextureAnimationGUIText {
    struct TextureAnimationGUIText__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextureAnimationGUIText__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct ParticleSystem *m_particleSystem;
    bool m_killed;
    float m_countDown;
};

struct DetachOnKill {
    struct DetachOnKill__Class *klass;
    MonitorData *monitor;
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
    struct GameObject *s_detachOnKillObjectsParent;
};

struct DetachOnKill__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DetachOnKill__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DetachOnKill__VTable vtable;
};

struct DisableEmitterOnKill__Fields {
    struct MonoBehaviour__Fields _;
    struct ParticleSystem *m_particleSystem;
    bool m_doEmit;
};

struct DisableEmitterOnKill {
    struct DisableEmitterOnKill__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DisableEmitterOnKill__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DisableEmitterOnKill__VTable vtable;
};

struct DisableOnKill__Fields {
    struct MonoBehaviour__Fields _;
};

struct DisableOnKill {
    struct DisableOnKill__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DisableOnKill__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DisableOnKill__VTable vtable;
};

struct SpawnOnKill__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *ObjectToSpawn;
    struct Vector3 PositionOffset;
    float Scale;
    bool TransferRotation;
    int32_t PrewarmAmount;
};

struct SpawnOnKill {
    struct SpawnOnKill__Class *klass;
    MonitorData *monitor;
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
    struct GameObject *m_spawnOnKillObjectsParent;
};

struct SpawnOnKill__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpawnOnKill__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpawnOnKill__VTable vtable;
};

struct MoonControllerColliderHit___VTable {
};

struct MoonControllerColliderHit___StaticFields {
};

struct MoonControllerColliderHit___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonControllerColliderHit___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonControllerColliderHit___VTable vtable;
};

struct CharacterFactory__Fields {
    struct GuidOwner__Fields _;
    CharacterFactory_Characters__Enum Current;
    
    struct GameObject *OriPrefab;
    struct GameObject *KuPrefab;
};

struct CharacterFactory {
    struct CharacterFactory__Class *klass;
    MonitorData *monitor;
    struct CharacterFactory__Fields fields;
};

struct CharacterFactory__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CharacterFactory__StaticFields {
    struct CharacterFactory *Instance;
};

struct CharacterFactory__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterFactory__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterFactory__VTable vtable;
};

struct CharactersDynamicProvider__Fields {
    struct ScriptableObject__Fields _;
    struct DynamicDataResolver *m_dataResolver;
};

}
