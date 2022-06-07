namespace app {
struct ShowFixedTimeTextEntity {
    struct ShowFixedTimeTextEntity__Class *klass;
    MonitorData *monitor;
    struct ShowFixedTimeTextEntity__Fields fields;
};

struct ShowTextEntity__Fields {
    struct ShowFixedTimeTextEntity__Fields _;
    bool AllowSkippingLines;
};

struct ShowTextEntity {
    struct ShowTextEntity__Class *klass;
    MonitorData *monitor;
    struct ShowTextEntity__Fields fields;
};

struct ShowInteractiveTextEntity__Fields {
    struct ShowTextEntity__Fields _;
};

struct ShowInteractiveTextEntity {
    struct ShowInteractiveTextEntity__Class *klass;
    MonitorData *monitor;
    struct ShowInteractiveTextEntity__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_MessageProvider___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_MessageProvider_ *m_cachedProxyType;
    struct MessageProvider *m_volatileValue;
};

struct MoonReference_1_MessageProvider_ {
    struct MoonReference_1_MessageProvider___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_MessageProvider___Fields fields;
};

struct IMoonType_1_MessageProvider_ {
    struct IMoonType_1_MessageProvider___Class *klass;
    MonitorData *monitor;
};

enum class MessageControllerB_NpcMessageStyle__Enum : int32_t {
    Default = 0x00000000,
    Cinematic = 0x00000001,
    Side1 = 0x00000002,
    Side2 = 0x00000003,
    Count = 0x00000004,
};

struct MessageControllerB_NpcMessageStyle__Enum__Boxed {
    struct MessageControllerB_NpcMessageStyle__Enum__Class *klass;
    MonitorData *monitor;
    MessageControllerB_NpcMessageStyle__Enum value;
    
};

struct __declspec(align(8)) ShowFixedTimeTextEntity_TextVisuals__Fields {
    struct ShowFixedTimeTextEntity_TextVisuals *InitVisuals;
    struct MessageBoxLanguageStyles *OverrideStyle;
    struct Vector3 Offset;
    float Scale;
    float FontSize;
    float LineWidth;
    float LineSpacing;
    float FadeInTime;
    float FadeOutTime;
    float BackgroundFadeOffset;
    float LettersPerSecond;
    bool ShouldAppearLetterByLetter;
    struct Vector2 MessageBoxVelocity;
    struct Transform *TextBackground;
    MessageControllerB_NpcMessageStyle__Enum Style;
    
    struct Transform *TextBackgroundInstance;
};

struct ShowFixedTimeTextEntity_TextVisuals {
    struct ShowFixedTimeTextEntity_TextVisuals__Class *klass;
    MonitorData *monitor;
    struct ShowFixedTimeTextEntity_TextVisuals__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_Moon_Wwise_SoundHost___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_Moon_Wwise_SoundHost_ *m_cachedProxyType;
    struct SoundHost *m_volatileValue;
};

struct MoonReference_1_Moon_Wwise_SoundHost_ {
    struct MoonReference_1_Moon_Wwise_SoundHost___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_Moon_Wwise_SoundHost___Fields fields;
};

struct IMoonType_1_Moon_Wwise_SoundHost_ {
    struct IMoonType_1_Moon_Wwise_SoundHost___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MoonReference_1_NPCEntity___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_NPCEntity_ *m_cachedProxyType;
    struct NPCEntity *m_volatileValue;
};

struct MoonReference_1_NPCEntity_ {
    struct MoonReference_1_NPCEntity___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_NPCEntity___Fields fields;
};

struct IMoonType_1_NPCEntity_ {
    struct IMoonType_1_NPCEntity___Class *klass;
    MonitorData *monitor;
};

enum class NPCAnchorConfiguration__Enum : int32_t {
    Both = 0x00000000,
    LeftOnly = 0x00000001,
    RightOnly = 0x00000002,
};

struct NPCAnchorConfiguration__Enum__Boxed {
    struct NPCAnchorConfiguration__Enum__Class *klass;
    MonitorData *monitor;
    NPCAnchorConfiguration__Enum value;
    
};

enum class NPCCameraSetupConfiguration__Enum : int32_t {
    None = -1,
    Legacy = 0x00000000,
    Dynamic = 0x00000001,
};

struct NPCCameraSetupConfiguration__Enum__Boxed {
    struct NPCCameraSetupConfiguration__Enum__Class *klass;
    MonitorData *monitor;
    NPCCameraSetupConfiguration__Enum value;
    
};

enum class NPCEntity_RewardState__Enum : int32_t {
    None = 0x00000000,
    Shown = 0x00000001,
    Thrown = 0x00000002,
    Collected = 0x00000003,
};

struct NPCEntity_RewardState__Enum__Boxed {
    struct NPCEntity_RewardState__Enum__Class *klass;
    MonitorData *monitor;
    NPCEntity_RewardState__Enum value;
    
};

struct NPCEntity__Fields {
    struct Entity__Fields _;
    float InteractionRadius;
    struct Vector2 InteractionOffset;
    bool RequireLineOfSight;
    struct MessageProvider *InteractionHintMessage;
    NPCAnchorConfiguration__Enum AnchorSetup;
    
    struct Vector2 PlayerAnchorLeft;
    struct Vector2 PlayerAnchorRight;
    float AnchorSafeZone;
    bool CanInteract;
    struct List_1_Moon_InteractionGraph_InteractionGraph_ *InteractionGraphs;
    struct InteractionGraph *_CurrentInteractionGraph_k__BackingField;
    NPCCameraSetupConfiguration__Enum CameraConfiguration;
    
    struct CameraOffsetZone *InteractionCameraOffsetZone;
    struct NPCCameraTransition *CameraTransition;
    bool PlayTalkAnimationOnEachNpcMessage;
    struct MoonTimeline *AutoTalkTimeline;
    bool m_canResetTalk;
    struct EventTriggerAnimator *CanResetTalk;
    bool _IsInteracting_k__BackingField;
    struct MessageBox *m_interactionHintMessageBox;
    bool m_shouldFinishInteraction;
    int32_t m_finishInteractionTime;
    bool m_waitForInteractionToEffectivelyStart;
    struct Vector2 NPCZoomRangeModification;
    bool AttachToTransform;
    struct Transform *AttachTransform;
    struct Vector3 AttachAnchor;
    bool PauseIdleOnInteraction;
    struct MoonAnimation *OriListenAnimationOverride;
    struct MoonTimeline *IntroTimeline;
    struct MoonTimeline *TalkTimeline;
    struct MoonTimeline *RewardTimeline;
    struct Transform *ItemBoneRight;
    struct Transform *ItemBoneLeft;
    struct TalkVariant *IdleVariantA;
    struct TalkVariant *IdleVariantB;
    struct TalkVariant *TalkVariantA;
    struct TalkVariant *TalkVariantB;
    struct TalkVariant *Throw;
    float ThrowItemGravity;
    float ThrowItemArc;
    struct TalkVariant *m_lastTalkVariant;
    struct TalkVariant *m_lastIdleVariant;
    struct Projectile *m_rewardInstance;
    NPCEntity_RewardState__Enum m_rewardState;
    
    bool m_isBypassingCamera;
    struct StaticEntityLocomotion *m_staticLocomotion;
};

struct NPCEntity {
    struct NPCEntity__Class *klass;
    MonitorData *monitor;
    struct NPCEntity__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_InteractionGraph_InteractionGraph___Fields {
    struct InteractionGraph__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_InteractionGraph_InteractionGraph_ {
    struct List_1_Moon_InteractionGraph_InteractionGraph___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_InteractionGraph_InteractionGraph___Fields fields;
};

struct InteractionGraph__Array {
    struct InteractionGraph__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct InteractionGraph *vector[32];
};

struct IEnumerator_1_Moon_InteractionGraph_InteractionGraph_ {
    struct IEnumerator_1_Moon_InteractionGraph_InteractionGraph___Class *klass;
    MonitorData *monitor;
};

struct CameraOffsetZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 Offset;
    int32_t priority;
    struct AnimationCurve *ZoomCurve;
    bool UseOnEnableDamping;
    struct AnimationCurve *ZoomOnEnableRateCurve;
    float LeftMargin;
    float RightMargin;
    float TopMargin;
    float BottomMargin;
    float m_dampingTimer;
    bool m_autoZoomOutAndDisable;
};

struct CameraOffsetZone {
    struct CameraOffsetZone__Class *klass;
    MonitorData *monitor;
    struct CameraOffsetZone__Fields fields;
};

enum class NPCCameraBlendState__Enum : int32_t {
    None = 0x00000000,
    BlendIn = 0x00000001,
    BlendOut = 0x00000002,
    Stay = 0x00000003,
};

struct NPCCameraBlendState__Enum__Boxed {
    struct NPCCameraBlendState__Enum__Class *klass;
    MonitorData *monitor;
    NPCCameraBlendState__Enum value;
    
};

enum class NPCCameraPositionBlendState__Enum : int32_t {
    OnTarget = 0x00000000,
    Blending = 0x00000001,
};

struct NPCCameraPositionBlendState__Enum__Boxed {
    struct NPCCameraPositionBlendState__Enum__Class *klass;
    MonitorData *monitor;
    NPCCameraPositionBlendState__Enum value;
    
};

enum class NPCCameraTargetPositionType__Enum : int32_t {
    Npc = 0x00000000,
    Shop = 0x00000001,
};

struct NPCCameraTargetPositionType__Enum__Boxed {
    struct NPCCameraTargetPositionType__Enum__Class *klass;
    MonitorData *monitor;
    NPCCameraTargetPositionType__Enum value;
    
};

struct __declspec(align(8)) NPCCameraTransition__Fields {
    struct Transform *NpcTargetRight;
    struct Transform *OpenStoreTargetRight;
    struct Transform *NpcTargetLeft;
    struct Transform *OpenStoreTargetLeft;
    struct Transform *CameraTarget;
    struct Transform *m_cachedNpcTarget;
    struct Transform *m_cachedOpenStoreTarget;
    struct Vector3 m_npcTransformPosition;
    NPCCameraBlendState__Enum m_cameraState;
    
    NPCCameraPositionBlendState__Enum m_positionBlendState;
    
    struct Vector3 m_start;
    NPCCameraTargetPositionType__Enum m_target;
    
    float m_curveTime;
    float m_positionBlendTimer;
    float m_positionBlendTime;
    struct AnimationCurve *BlendCurve;
    struct AnimationCurve *PositionCurveNormalized;
    bool m_isRegistered;
};

struct NPCCameraTransition {
    struct NPCCameraTransition__Class *klass;
    MonitorData *monitor;
    struct NPCCameraTransition__Fields fields;
};

struct __declspec(align(8)) TalkVariant__Fields {
    struct MoonAnimation *Left;
    struct MoonAnimation *Right;
};

struct TalkVariant {
    struct TalkVariant__Class *klass;
    MonitorData *monitor;
    struct TalkVariant__Fields fields;
};

struct StaticEntityLocomotion__Fields {
    struct Locomotion__Fields _;
    struct Transform *Feet;
    struct BaseLocomotionTurningBehaviour *TurningBehaviour;
    struct EntityLocomotionTask *IdleBehaviour;
    bool m_snapToTheGround;
    bool SnapToTheGroundOnlyOnce;
    bool ConsiderRotationForLookDirection;
    bool CanTurn;
    struct Nullable_1_Single_ m_registeredLookDirection;
    bool m_lookDirectionLocked;
    bool m_snappedToGround;
    struct MortarEntity *m_mortarEntity;
    float _Gravity_k__BackingField;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
    
};

struct StaticEntityLocomotion {
    struct StaticEntityLocomotion__Class *klass;
    MonitorData *monitor;
    struct StaticEntityLocomotion__Fields fields;
};

struct MortarEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Transform *SpitUpProjectilePosition;
    struct Transform *SpitForwardProjectilePosition;
    struct MortarSpitAttackSettings *SpitAttackSettings;
    bool m_detectedGroundSurface;
    struct Vector3 SpitAttackLaunchVelocity;
    bool CanTurn;
    bool m_spitVelocityUpdateWouldHitTarget;
    bool m_shouldCharge;
    bool m_shouldHide;
    struct ILocomotionTurningHandler *m_turningHandler;
    bool MortarHidden;
    struct LocomotionIdleBehaviour *LocomotionIdleBehaviour;
    struct MoonTimeline *IdleTimeline;
    struct MoonTimeline *HiddenTimeline;
    bool _SpawnCreep_k__BackingField;
    bool DebugCacheGrid;
    struct MortarEntity_AimVeloCache *m_aimVeloCache;
};

struct MortarEntity {
    struct MortarEntity__Class *klass;
    MonitorData *monitor;
    struct MortarEntity__Fields fields;
};

struct MortarSpitAttackSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct Sensor *EntitySensor;
    struct List_1_DamageType_ *m_damageToIgnore;
    float m_hideDistance;
    float m_minHideTime;
    float m_preWindupWaitTime;
    float Gravity;
    float Damage;
    DamageWeight__Enum DamageWeight;
    
    DamageLayerMask__Enum DamageLayerMask;
    
    float MinSpitRange;
    float MaxSpitRange;
    float FlightTimeForMinRange;
    float FlightTimeIncreasePerUnitDistance;
    float FlightTimeHandicap;
    struct LayerMask HitTestLayerMask;
    float MinAirTime;
    struct DynamicDataResolver *m_dataResolver;
};

struct MortarSpitAttackSettings {
    struct MortarSpitAttackSettings__Class *klass;
    MonitorData *monitor;
    struct MortarSpitAttackSettings__Fields fields;
};

enum class PhysicsUtils_Mask__Enum : int32_t {
    NonDamagingColliders = 0x00000000,
    KillCharacter = 0x00000001,
    AllObstacles = 0x00000002,
};

struct PhysicsUtils_Mask__Enum__Boxed {
    struct PhysicsUtils_Mask__Enum__Class *klass;
    MonitorData *monitor;
    PhysicsUtils_Mask__Enum value;
    
};

enum class Sensor_CanSeeCharacterHelper_State__Enum : int32_t {
    Idle = 0x00000000,
    Refresh = 0x00000001,
    DoubleLOS = 0x00000002,
    SingleLOS = 0x00000003,
    LastSeenPos = 0x00000004,
};

struct Sensor_CanSeeCharacterHelper_State__Enum__Boxed {
    struct Sensor_CanSeeCharacterHelper_State__Enum__Class *klass;
    MonitorData *monitor;
    Sensor_CanSeeCharacterHelper_State__Enum value;
    
};

enum class Sensor_SensorLineOfSightRequest_State__Enum : int32_t {
    NewIteration = 0x00000000,
    PendingCast1 = 0x00000001,
    PendingCast2 = 0x00000002,
    After1 = 0x00000003,
    PendingCast3 = 0x00000004,
    Finished = 0x00000005,
};

struct Sensor_SensorLineOfSightRequest_State__Enum__Boxed {
    struct Sensor_SensorLineOfSightRequest_State__Enum__Class *klass;
    MonitorData *monitor;
    Sensor_SensorLineOfSightRequest_State__Enum value;
    
};

struct Sensor_SensorLineOfSightRequest {
    Sensor_SensorLineOfSightRequest_State__Enum state;
    
    struct Vector3 origin;
    struct Vector3 target;
    int32_t iteration;
    bool final_result;
    struct AsyncRaycast *arc;
    struct Sensor *sensor;
};

struct Sensor_SensorLineOfSightRequest__Boxed {
    struct Sensor_SensorLineOfSightRequest__Class *klass;
    MonitorData *monitor;
    struct Sensor_SensorLineOfSightRequest fields;
};

struct Sensor_CanSeeCharacterHelper {
    Sensor_CanSeeCharacterHelper_State__Enum state;
    
    bool prevSeeCharacter;
    struct Vector3 start;
    struct Vector2 target;
    bool targetInRange;
    struct Sensor_SensorLineOfSightRequest los1;
    struct Sensor_SensorLineOfSightRequest los2;
};

struct Sensor_CanSeeCharacterHelper__Boxed {
    struct Sensor_CanSeeCharacterHelper__Class *klass;
    MonitorData *monitor;
    struct Sensor_CanSeeCharacterHelper fields;
};

struct UpdateSyncGuard {
    int32_t m_fixedUpdateCount;
};

struct UpdateSyncGuard__Boxed {
    struct UpdateSyncGuard__Class *klass;
    MonitorData *monitor;
    struct UpdateSyncGuard fields;
};

struct Sensor__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    PhysicsUtils_Mask__Enum OcclusionMask;
    
    float MaxSensorRadius;
    float LoseSightRadius;
    float ForceSenseRadius;
    float LoseSightDelay;
    float EnterSightDelay;
    bool UseTwoWayLineOfSightCheck;
    float ForceSenseDelay;
    float RayOriginYOffsetWhenOccludedBySlope;
    bool HasVerticalLimit;
    float VerticalSensorLimit;
    struct Transform *RayOrigin;
    struct LayerMask LayerMask;
    float UpdateInterval;
    float OriPredictionTime;
    float ConeOfVisionRadius;
    float ConeOfVisionAngle;
    bool ShowGizmos;
    bool ShowCoveOfVisionGizmo;
    bool m_canSeeCharacter;
    bool m_prevCanSeeCharacter;
    float m_timeUntilNextUpdate;
    struct Nullable_1_UnityEngine_Vector3_ m_lastSeenPosition;
    struct Nullable_1_UnityEngine_Vector3_ m_lostSightLocation;
    struct OriPositionPrediction *m_oriPredictor;
    struct Vector3 m_predictedOriPosition;
    float m_timeSinceTargetAcquired;
    float m_timeSinceTargetLost;
    float m_timeSinceForceSenseStarted;
    struct Transform *m_transform;
    struct PlatformMovement *m_platformMovement;
    bool m_componentsCached;
    struct Sensor_CanSeeCharacterHelper m_csc;
    struct LayerMask LayerMaskWithPlayer;
    struct UpdateSyncGuard sync;
};

struct Sensor {
    struct Sensor__Class *klass;
    MonitorData *monitor;
    struct Sensor__Fields fields;
};

struct __declspec(align(8)) OriPositionPrediction__Fields {
    struct LayerMask m_groundLayer;
    struct Transform *m_ownerTransform;
    float PredictionTime;
};

struct OriPositionPrediction {
    struct OriPositionPrediction__Class *klass;
    MonitorData *monitor;
    struct OriPositionPrediction__Fields fields;
};

enum class AsyncRaycast_State__Enum : int32_t {
    Undefined = 0x00000000,
    Ready = 0x00000001,
    Requested = 0x00000002,
    Scheduled = 0x00000003,
};

struct AsyncRaycast_State__Enum__Boxed {
    struct AsyncRaycast_State__Enum__Class *klass;
    MonitorData *monitor;
    AsyncRaycast_State__Enum value;
    
};

enum class AsyncRaycast_Result__Enum : int32_t {
    Undefined = 0x00000000,
    Miss = 0x00000001,
    Hit = 0x00000002,
};

struct AsyncRaycast_Result__Enum__Boxed {
    struct AsyncRaycast_Result__Enum__Class *klass;
    MonitorData *monitor;
    AsyncRaycast_Result__Enum value;
    
};

struct __declspec(align(8)) AsyncRaycast__Fields {
    struct RaycastCommand cmd;
    struct RaycastHit hit;
    AsyncRaycast_State__Enum state;
    
    AsyncRaycast_Result__Enum result;
    
};

struct AsyncRaycast {
    struct AsyncRaycast__Class *klass;
    MonitorData *monitor;
    struct AsyncRaycast__Fields fields;
};

struct LocomotionIdleBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline *idleMoonTimeline;
};

struct LocomotionIdleBehaviour {
    struct LocomotionIdleBehaviour__Class *klass;
    MonitorData *monitor;
    struct LocomotionIdleBehaviour__Fields fields;
};

struct __declspec(align(8)) MortarEntity_AimVeloCache__Fields {
    struct Vector3 m_entityPos;
    struct MortarEntity_AimVeloCache_Grid *m_grid;
    struct MortarEntity_AimVeloCache_Packer *m_packer;
    struct MortarEntity_AimVeloCache_EntityParams *m_entity;
};

struct MortarEntity_AimVeloCache {
    struct MortarEntity_AimVeloCache__Class *klass;
    MonitorData *monitor;
    struct MortarEntity_AimVeloCache__Fields fields;
};

struct __declspec(align(8)) MortarEntity_AimVeloCache_Grid__Fields {
    int32_t GridXSteps;
    int32_t GridYSteps;
    float GridXMin;
    float GridXMax;
    float GridYMin;
    float GridYMax;
    struct UInt16__Array *m_packed;
    struct Vector2__Array *m_velo;
};

struct MortarEntity_AimVeloCache_Grid {
    struct MortarEntity_AimVeloCache_Grid__Class *klass;
    MonitorData *monitor;
    struct MortarEntity_AimVeloCache_Grid__Fields fields;
};

struct __declspec(align(8)) MortarEntity_AimVeloCache_Packer__Fields {
    float VeloXMin;
    float VeloXMax;
    float VeloYMin;
    float VeloYMax;
    int32_t VeloXBitMask;
    int32_t VeloYBitMask;
    int32_t VeloXBitShift;
    int32_t VeloYBitShift;
};

struct MortarEntity_AimVeloCache_Packer {
    struct MortarEntity_AimVeloCache_Packer__Class *klass;
    MonitorData *monitor;
    struct MortarEntity_AimVeloCache_Packer__Fields fields;
};

struct __declspec(align(8)) MortarEntity_AimVeloCache_EntityParams__Fields {
    struct MortarEntity *m_entity;
    struct Vector3 m_entityPosFromGeneration;
    struct Vector3 m_entityUpFromGeneration;
};

struct MortarEntity_AimVeloCache_EntityParams {
    struct MortarEntity_AimVeloCache_EntityParams__Class *klass;
    MonitorData *monitor;
    struct MortarEntity_AimVeloCache_EntityParams__Fields fields;
};

enum class CharacterInteractableType__Enum : int32_t {
    PickupHoldable = 0x00000000,
    NPCInteraction = 0x00000001,
};

struct CharacterInteractableType__Enum__Boxed {
    struct CharacterInteractableType__Enum__Class *klass;
    MonitorData *monitor;
    CharacterInteractableType__Enum value;
    
};

struct ICharacter {
    struct ICharacter__Class *klass;
    MonitorData *monitor;
};

enum class CharacterInteractableActivationMode__Enum : int32_t {
    WaitForInput = 0x00000000,
    Proximity = 0x00000001,
};

struct CharacterInteractableActivationMode__Enum__Boxed {
    struct CharacterInteractableActivationMode__Enum__Class *klass;
    MonitorData *monitor;
    CharacterInteractableActivationMode__Enum value;
    
};

struct BaurEntity__Fields {
    struct NPCEntity__Fields _;
    struct BlendAnimation *LookAnimationLoop;
    struct FloatAnimationParameter *LookAngleParameter;
    struct MoonTimeline *SleepIdleTimeline;
    struct MoonTimeline *UnblockedSleepIdleTimeline;
    struct MoonTimeline *SitIdleTimeline;
    struct MoonTimeline *UnblockGateTimeline;
    struct MoonTimeline *WakeUpTimeline;
    struct MoonTimeline *SleepTalkTimeline;
    struct MoonTimeline *WiggleTimeline;
    struct MoonTimeline *HitTimeline;
    struct SerializedIntUberState *BaurState;
    float LookOffsetX;
    struct SerializedBooleanUberState *IsWinterForestThawed;
    struct MoonTimeline *m_currentIdleTimeline;
    struct ActiveAnimationHandle m_lookAnim;
    struct String *m_interactionActorName;
    struct Transform *InteractionAnchorLeft;
    struct Transform *InteractionOffsetTransform;
    struct CameraOffsetZone *SleepingCameraOffset;
    struct CameraOffsetZone *AwakeCameraOffset;
    struct Event_1 *SnoreLoopSoundEvent;
    struct SoundHost *HeadSoundHost;
    struct EventTriggerAnimator *SnoreSoundEventTrigger;
    struct WwiseEventSystem_SoundHandle m_snoringSoundHandler;
    struct IUberState__Array *m_affectingUberStates;
};

struct BaurEntity {
    struct BaurEntity__Class *klass;
    MonitorData *monitor;
    struct BaurEntity__Fields fields;
};

enum class InteractiveMessageBox_State__Enum : int32_t {
    Writing = 0x00000000,
    Completed = 0x00000001,
    Inactive = 0x00000002,
};

struct InteractiveMessageBox_State__Enum__Boxed {
    struct InteractiveMessageBox_State__Enum__Class *klass;
    MonitorData *monitor;
    InteractiveMessageBox_State__Enum value;
    
};

enum class InteractiveMessageBox_ProgressInput__Enum : int32_t {
    Any = 0x00000000,
    DialogueAdvance = 0x00000001,
};

struct InteractiveMessageBox_ProgressInput__Enum__Boxed {
    struct InteractiveMessageBox_ProgressInput__Enum__Class *klass;
    MonitorData *monitor;
    InteractiveMessageBox_ProgressInput__Enum value;
    
};

struct InteractiveMessageBox__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox *MessageBox;
    InteractiveMessageBox_State__Enum m_state;
    
    struct GameObject *Button;
    struct BaseAnimator *ButtonAnimator;
    float WaitTimeFirstMessage;
    float m_remainingWaitTime;
    bool m_prevLockState;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct SoundHost *SoundHost;
    struct SoundSource *MessageProviderSoundSource;
    struct SoundSource *MessageFinishedSound;
    struct SoundSource *NextMessageSound;
    struct SoundSource *CloseMessageBoxSound;
    bool CanCancel;
    bool CanOpenInventory;
    bool CanPlayInteractionSounds;
    float m_messageTime;
    InteractiveMessageBox_ProgressInput__Enum ProgressOnInput;
    
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct InteractiveMessageBox {
    struct InteractiveMessageBox__Class *klass;
    MonitorData *monitor;
    struct InteractiveMessageBox__Fields fields;
};

struct WWiseSoundAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Event_1 *Event;
    struct Switch_1 *Switch;
    struct State *State;
    struct Trigger *Trigger;
    struct SoundHost *SoundHost;
    struct MoonReference_1_Moon_Wwise_SoundHost_ *MoonSoundHost;
    bool FireAndForget;
    int32_t MillisecondsStopFadeDuration;
    AkCurveInterpolation__Enum FadeCurve;
    
    bool LoopWithParent;
    float m_time;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    bool m_waapiObjectRegistered;
    uint32_t m_idToStopWithOuterScope;
    bool _LoopContext_k__BackingField;
};

struct WWiseSoundAnimatorEntity {
    struct WWiseSoundAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct WWiseSoundAnimatorEntity__Fields fields;
};

enum class SeinOnGroundCondition_Characters__Enum : int32_t {
    Ori = 0x00000000,
    Current = 0x00000001,
};

struct SeinOnGroundCondition_Characters__Enum__Boxed {
    struct SeinOnGroundCondition_Characters__Enum__Class *klass;
    MonitorData *monitor;
    SeinOnGroundCondition_Characters__Enum value;
    
};

struct SeinOnGroundCondition__Fields {
    struct Condition_1__Fields _;
    SeinOnGroundCondition_Characters__Enum CharacterToCheck;
    
    bool RequireGrounded;
    bool RequireSafe;
};

struct SeinOnGroundCondition {
    struct SeinOnGroundCondition__Class *klass;
    MonitorData *monitor;
    struct SeinOnGroundCondition__Fields fields;
};

enum class PickupMessageIcon_PickupType__Enum : int32_t {
    Health = 0x00000000,
    Energy = 0x00000001,
    Shard = 0x00000002,
    SlotUpgrade = 0x00000003,
    Other = 0x00000004,
    QuestItem = 0x00000005,
};

struct PickupMessageIcon_PickupType__Enum__Boxed {
    struct PickupMessageIcon_PickupType__Enum__Class *klass;
    MonitorData *monitor;
    PickupMessageIcon_PickupType__Enum value;
    
};

struct __declspec(align(8)) SeinPickupProcessor_CollectableInfo__Fields {
    bool ShowOnlyFirstTime;
    ShowFixedTimeTextEntity_MessageType__Enum MessageType;
    
    struct MessageProvider *Message;
    struct MessageProvider *Name;
    PickupMessageIcon_PickupType__Enum PickupType;
    
    struct GameObject *Icon;
    struct Texture2D *IconTexture;
    struct GameObject *InHandsPrefab;
    float WaitTime;
    struct Event_1 *SoundEvent;
    struct Event_1 *CollectedAfterFirstTimeSoundEvent;
};

struct SeinPickupProcessor_CollectableInfo {
    struct SeinPickupProcessor_CollectableInfo__Class *klass;
    MonitorData *monitor;
    struct SeinPickupProcessor_CollectableInfo__Fields fields;
};

struct ExpText__Fields {
    struct Suspendable__Fields _;
    struct LegacyScaleAnimator *ScaleShake;
    struct LegacyTransparencyAnimator *TransparencyAnimator;
    bool _IsSuspended_k__BackingField;
    float m_time;
    int32_t m_amount;
};

struct ExpText {
    struct ExpText__Class *klass;
    MonitorData *monitor;
    struct ExpText__Fields fields;
};

struct LegacyScaleAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct GameObject *Target;
    struct Vector3 ScaleAxisFilter;
    struct Transform *m_transform;
    struct Vector3 m_originalScale;
    struct Renderer *m_renderer;
};

struct LegacyScaleAnimator {
    struct LegacyScaleAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyScaleAnimator__Fields fields;
};

struct __declspec(align(8)) SpiritShardPickupContext__Fields {
    SpiritShardType__Enum SpiritShardType;
    
};

struct SpiritShardPickupContext {
    struct SpiritShardPickupContext__Class *klass;
    MonitorData *monitor;
    struct SpiritShardPickupContext__Fields fields;
};

struct PickupBase__Fields {
    struct SaveSerialize__Fields _;
    struct SerializedBooleanUberState *CollectedUberState;
    bool m_hasSerializedUberState;
    bool m_cachedSerializedState;
    bool m_collected;
    struct SoundProvider *CollectedSoundProvider;
    struct Action *OnCollectedEvent;
    struct ActionMethod *OnCollectedAction;
    bool PerformPickupSequence;
    float DelayBeforeCollectable;
    bool DestroyOnCollect;
    struct GameObject *DestroyTarget;
    struct GameObject *CollectedEffect;
    struct CollectablePlaceholder *_Placeholder_k__BackingField;
    float Radius;
    bool FrustrumOptimized;
    struct Component_1__Array *m_onKillRecievers;
    struct Transform *m_transform;
    float m_currentTime;
    struct Bounds m_bounds;
    bool m_insideFrustum;
};

struct PickupBase {
    struct PickupBase__Class *klass;
    MonitorData *monitor;
    struct PickupBase__Fields fields;
};

struct CollectablePlaceholder__Fields {
    struct SaveSerialize__Fields _;
    struct SerializedBooleanUberState *CollectedUberState;
    float RespawnTime;
    struct GameObject *Prefab;
    bool IsStatic;
    bool UseDebug;
    struct GameObject *DisableGO;
    struct Action *OnCollectedEvent;
    struct CollectableCheckpointSettings *CollectableCheckpoint;
    float m_remainingRespawnTime;
    struct GameObject *m_instance;
    bool m_collected;
    bool m_listeningToLandEvent;
    bool m_hasVisibleOnWorldMap;
    struct VisibleOnWorldMap *m_visibleOnWorldMap;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct IUberState__Array *m_affectingUberStates;
};

}
