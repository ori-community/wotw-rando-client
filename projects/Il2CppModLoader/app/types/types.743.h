namespace app {
struct NightCrawlerReveal {
    struct NightCrawlerReveal__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerReveal__Fields fields;
};

struct LegacyAttackableSwitch__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod *OnActivate;
    struct ActionMethod *OnDeactivate;
    float ActiveTimer;
    bool Toggle;
    float ToggleDelay;
    struct Color ActivatedColor;
    struct Color DeactivatedColor;
    bool ButtonMode;
    bool DestroyProjectiles;
    int32_t BowTargetPriority;
    float m_currentTime;
    bool m_isActivated;
    struct PerformingAction *m_onActivatePerformingAction;
    bool m_wasPerforming;
    struct List_1_LegacyAttackableSwitch_AttackTypes_ *Attacks;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct IDamageReciever__Array *m_damageReceivers;
};

struct LegacyAttackableSwitch {
    struct LegacyAttackableSwitch__Class *klass;
    MonitorData *monitor;
    struct LegacyAttackableSwitch__Fields fields;
};

struct __declspec(align(8)) List_1_LegacyAttackableSwitch_AttackTypes___Fields {
    struct LegacyAttackableSwitch_AttackTypes__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyAttackableSwitch_AttackTypes_ {
    struct List_1_LegacyAttackableSwitch_AttackTypes___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyAttackableSwitch_AttackTypes___Fields fields;
};

enum class LegacyAttackableSwitch_AttackTypes__Enum : int32_t {
    Bash = 0x00000000,
    SpiritSlash = 0x00000001,
    HeavySpiritSlash = 0x00000002,
    HomingMissile = 0x00000003,
    JumpShot = 0x00000004,
    LightSpear = 0x00000005,
    Fireburst = 0x00000006,
    Firewhirl = 0x00000007,
    LifeAbsorb = 0x00000008,
    Powerslide = 0x00000009,
    SpiritSpear = 0x0000000a,
    SpiritCrescent = 0x0000000b,
    SpiritShards = 0x0000000c,
    Freeze = 0x0000000d,
    LockOn = 0x0000000e,
    SpiritSentry = 0x0000000f,
    Mine = 0x00000010,
    StickyMineOrGrenade = 0x00000011,
    ChargeShot = 0x00000012,
    Bow = 0x00000013,
    Hammer = 0x00000014,
    Sword = 0x00000015,
    Wind = 0x00000016,
    TorchRed = 0x00000017,
    TorchBlue = 0x00000018,
};

struct LegacyAttackableSwitch_AttackTypes__Enum__Boxed {
    struct LegacyAttackableSwitch_AttackTypes__Enum__Class *klass;
    MonitorData *monitor;
    LegacyAttackableSwitch_AttackTypes__Enum value;
    
};

struct LegacyAttackableSwitch_AttackTypes__Enum__Array {
    struct LegacyAttackableSwitch_AttackTypes__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    LegacyAttackableSwitch_AttackTypes__Enum vector[32];
};

struct IEnumerator_1_LegacyAttackableSwitch_AttackTypes_ {
    struct IEnumerator_1_LegacyAttackableSwitch_AttackTypes___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) NightCrawlerReveal_AnimationEventAction__Fields {
    struct String *EventId;
    struct ActionMethod *Action;
};

struct NightCrawlerReveal_AnimationEventAction {
    struct NightCrawlerReveal_AnimationEventAction__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerReveal_AnimationEventAction__Fields fields;
};

struct NightCrawlerReveal_AnimationEventAction__Array {
    struct NightCrawlerReveal_AnimationEventAction__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct NightCrawlerReveal_AnimationEventAction *vector[32];
};

struct LegacyAttackableSwitch_AttackTypes__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct LegacyAttackableSwitch_AttackTypes__Enum__StaticFields {
};

struct LegacyAttackableSwitch_AttackTypes__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyAttackableSwitch_AttackTypes__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyAttackableSwitch_AttackTypes__Enum__VTable vtable;
};

struct LegacyAttackableSwitch_AttackTypes__Enum__Array__VTable {
};

struct LegacyAttackableSwitch_AttackTypes__Enum__Array__StaticFields {
};

struct LegacyAttackableSwitch_AttackTypes__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyAttackableSwitch_AttackTypes__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyAttackableSwitch_AttackTypes__Enum__Array__VTable vtable;
};

struct IEnumerator_1_LegacyAttackableSwitch_AttackTypes___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LegacyAttackableSwitch_AttackTypes___StaticFields {
};

struct IEnumerator_1_LegacyAttackableSwitch_AttackTypes___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LegacyAttackableSwitch_AttackTypes___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LegacyAttackableSwitch_AttackTypes___VTable vtable;
};

struct List_1_LegacyAttackableSwitch_AttackTypes___VTable {
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

struct List_1_LegacyAttackableSwitch_AttackTypes___StaticFields {
    struct LegacyAttackableSwitch_AttackTypes__Enum__Array *_emptyArray;
};

struct List_1_LegacyAttackableSwitch_AttackTypes___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LegacyAttackableSwitch_AttackTypes___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LegacyAttackableSwitch_AttackTypes___VTable vtable;
};

struct LegacyAttackableSwitch__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
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
    VirtualInvokeData IDamageReciever_get_gameObject;
    VirtualInvokeData IDamageReciever_get_transform;
    VirtualInvokeData OnRecieveDamage;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_SpiritSlashPriority;
    VirtualInvokeData OnSpiritSlashHighlight;
    VirtualInvokeData OnSpiritSlashDehighlight;
    VirtualInvokeData GetSpiritSlashDamageAmount;
    VirtualInvokeData get_BashPriority;
    VirtualInvokeData OnEnterBash;
    VirtualInvokeData OnBashHighlight;
    VirtualInvokeData OnBashDehighlight;
    VirtualInvokeData get_BowPriority;
    VirtualInvokeData get_BowEnableAutoTarget;
    VirtualInvokeData ShouldArrowExplode;
    VirtualInvokeData get_BowAutoTargetPosition;
    VirtualInvokeData ShouldArrowBeReflected;
    VirtualInvokeData get_HammerPriority;
    VirtualInvokeData get_HammerEnableAutoTarget;
    VirtualInvokeData CanDetonateProjectiles;
    VirtualInvokeData get_IsOn;
};

struct LegacyAttackableSwitch__StaticFields {
};

struct LegacyAttackableSwitch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyAttackableSwitch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyAttackableSwitch__VTable vtable;
};

struct NightCrawlerReveal_AnimationEventAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct NightCrawlerReveal_AnimationEventAction__StaticFields {
};

struct NightCrawlerReveal_AnimationEventAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NightCrawlerReveal_AnimationEventAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NightCrawlerReveal_AnimationEventAction__VTable vtable;
};

struct NightCrawlerReveal_AnimationEventAction__Array__VTable {
};

struct NightCrawlerReveal_AnimationEventAction__Array__StaticFields {
};

struct NightCrawlerReveal_AnimationEventAction__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NightCrawlerReveal_AnimationEventAction__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NightCrawlerReveal_AnimationEventAction__Array__VTable vtable;
};

struct NightCrawlerReveal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData OnStateMachineBehaviourEnter;
    VirtualInvokeData OnStateMachineBehaviourUpdate;
    VirtualInvokeData OnStateMachineBehaviourExit;
    VirtualInvokeData OnAnimationEvent;
    VirtualInvokeData StateMachineBehaviourProxy_IReceiver_OnAnimationEvent;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

struct NightCrawlerReveal__StaticFields {
};

struct NightCrawlerReveal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NightCrawlerReveal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NightCrawlerReveal__VTable vtable;
};

struct NightCrawlerBackAttackController__Fields {
    struct MonoBehaviour__Fields _;
    struct PlayerInsideZoneChecker *BackAttackTrigger;
    struct Enum__Array *m_entries;
};

struct NightCrawlerBackAttackController {
    struct NightCrawlerBackAttackController__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerBackAttackController__Fields fields;
};

struct NightCrawlerBackAttackController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetEntries;
    VirtualInvokeData Evaluate;
    VirtualInvokeData get_ShouldSkip;
};

struct NightCrawlerBackAttackController__StaticFields {
};

struct NightCrawlerBackAttackController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NightCrawlerBackAttackController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NightCrawlerBackAttackController__VTable vtable;
};

struct NightCrawlerChaseController__Fields {
    struct MonoBehaviour__Fields _;
    bool _InvalidateParentTimelineCache_k__BackingField;
    struct SerializedBooleanUberState *ChaseState;
    struct SerializedBooleanUberState *DefeatedState;
    struct PlayerInsideZoneChecker *StartZoneChecker;
    struct MoonAnimator *Animator;
    struct MoonAnimation *AdditiveHitReactionAnimation;
    struct MoonTimeline *Timeline;
    struct MoonTimeline *ChaseTimeline;
    struct MoonTimeline *PushOriTimeline;
    struct GameObject *ChaseCameraZones;
    struct CheckpointFunctionality StartChaseCheckpoint;
    struct BreakablePhysicalSetup *BridgeSetup;
    struct EventTriggerAnimator *GetTorchTrigger;
    struct EventTriggerAnimator__Array *KillPlayerTriggers;
    struct BossCameraSetup *BossCameraSetup;
    struct NightCrawlerFightController *FightController;
    struct ClipAnimation *m_currentAnimation;
    struct ActiveAnimationHandle m_currentActiveAnimation;
    struct DynamicDataResolver *m_dataResolver;
};

struct NightCrawlerChaseController {
    struct NightCrawlerChaseController__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerChaseController__Fields fields;
};

struct BreakablePhysicalSetup__Fields {
    struct MonoBehaviour__Fields _;
    float DELAY_BEFORE_BREAKING;
    struct BreakablePhysicalSetupHolder *Setup;
    bool PerformStateChange;
    struct GameObject__Array *BreakableJoints;
    float MinimumBreakDistance;
    struct Condition_1 *BreakCondition;
    struct PhysicalSystemManager *PhysicalSystemManager;
    struct MoonTimeline *breakTimeline;
    struct EventTriggerAnimator *BreakJointsTrigger;
    struct EventTriggerAnimator *DisableManagerTrigger;
    float RandomTorqueAll;
    float ClosestRadiusToApplyForce;
    float RandomTorqueClosestJoints;
    struct List_1_UnityEngine_Vector3_ *m_jointStartingPoints;
    float m_delayBeforeBreaking;
    struct Vector3 m_breakingPoint;
    float m_originalStateValue;
    struct IUberState__Array *m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_ *_AllTargets_k__BackingField;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct BreakablePhysicalSetup {
    struct BreakablePhysicalSetup__Class *klass;
    MonitorData *monitor;
    struct BreakablePhysicalSetup__Fields fields;
};

struct StateHolder_1_BreakablePhysicalSetupData___Fields {
    struct StateHolder__Fields _;
    struct List_1_BreakablePhysicalSetupData_ *StateData;
    struct List_1_IIndexedItem_ *m_cachedStates;
};

struct StateHolder_1_BreakablePhysicalSetupData_ {
    struct StateHolder_1_BreakablePhysicalSetupData___Class *klass;
    MonitorData *monitor;
    struct StateHolder_1_BreakablePhysicalSetupData___Fields fields;
};

struct TransitionBasedSetupHolder_1_BreakablePhysicalSetupData___Fields {
    struct StateHolder_1_BreakablePhysicalSetupData___Fields _;
};

struct TransitionBasedSetupHolder_1_BreakablePhysicalSetupData_ {
    struct TransitionBasedSetupHolder_1_BreakablePhysicalSetupData___Class *klass;
    MonitorData *monitor;
    struct TransitionBasedSetupHolder_1_BreakablePhysicalSetupData___Fields fields;
};

struct BreakablePhysicalSetupHolder__Fields {
    struct TransitionBasedSetupHolder_1_BreakablePhysicalSetupData___Fields _;
};

struct BreakablePhysicalSetupHolder {
    struct BreakablePhysicalSetupHolder__Class *klass;
    MonitorData *monitor;
    struct BreakablePhysicalSetupHolder__Fields fields;
};

struct __declspec(align(8)) List_1_BreakablePhysicalSetupData___Fields {
    struct BreakablePhysicalSetupData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_BreakablePhysicalSetupData_ {
    struct List_1_BreakablePhysicalSetupData___Class *klass;
    MonitorData *monitor;
    struct List_1_BreakablePhysicalSetupData___Fields fields;
};

struct __declspec(align(8)) BreakablePhysicalSetupData__Fields {
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *m_transition;
    float m_desiredValue;
};

struct BreakablePhysicalSetupData {
    struct BreakablePhysicalSetupData__Class *klass;
    MonitorData *monitor;
    struct BreakablePhysicalSetupData__Fields fields;
};

struct BreakablePhysicalSetupData__Array {
    struct BreakablePhysicalSetupData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BreakablePhysicalSetupData *vector[32];
};

struct IEnumerator_1_BreakablePhysicalSetupData_ {
    struct IEnumerator_1_BreakablePhysicalSetupData___Class *klass;
    MonitorData *monitor;
};

struct BossCameraSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct BossCameraTarget *Target;
    struct Transform *CameraTargetTransform;
    struct Vector2 PivotWeight;
    float PivotTargetLerpSpeed;
    struct Vector3 OriOffset;
    float OriLookaheadDuration;
    float OriLookaheadResponse;
    struct Vector2 OriFocalSize;
    struct Vector2 ProportionalOffsetMin;
    struct Vector2 ProportionalOffsetMax;
    struct CameraPivotZone *PivotZone;
    struct CameraOffsetAnimationZone *ZoomAnimationZone;
    struct Vector2 ZoomDistanceRangeX;
    struct Vector2 ZoomDistanceRangeY;
    struct Vector2 ZoomRange;
    float ZoomWeight;
    float ZoomLerpSpeed;
    float ZoomLerpSpeedDec;
    float ZoomLerpSpeedInc;
    struct Vector2 OuterRange;
    float AdjustOriPositionToGroundFactor;
    struct Transform *m_placeHolder;
    struct Vector3 m_lastCharPos;
    float m_lastTargetZoom;
    struct Vector3 m_lastTargetPos;
    struct Vector3 m_lastTargetPosBeforeOuterAdjustment;
    struct Vector3 m_originalCameraTargetTransformPosition;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
    
    bool m_wasUsingAggresiveCameraBlocking;
    float RaycastDistance;
    struct LayerMask RaycastMask;
    struct Vector3 PostRaycastOriOffset;
    struct RaycastHit__Array *m_raycastHits;
    struct Vector3 m_charMovement;
};

struct BossCameraSetup {
    struct BossCameraSetup__Class *klass;
    MonitorData *monitor;
    struct BossCameraSetup__Fields fields;
};

struct CameraPivotZone__Fields {
    struct SaveSerialize__Fields _;
    bool FollowX;
    bool FollowY;
    float Weight;
    float Duration;
    struct Transform *Target;
    struct Vector3 MaximumDistance;
    bool m_activated;
    struct CameraTarget_TargetLayer *m_targetLayer;
    struct BlendFloat *m_weight;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct CameraPivotZone {
    struct CameraPivotZone__Class *klass;
    MonitorData *monitor;
    struct CameraPivotZone__Fields fields;
};

struct __declspec(align(8)) AllContainer_1_CameraPivotZone___Fields {
    struct List_1_CameraPivotZone_ *m_objects;
};

struct AllContainer_1_CameraPivotZone_ {
    struct AllContainer_1_CameraPivotZone___Class *klass;
    MonitorData *monitor;
    struct AllContainer_1_CameraPivotZone___Fields fields;
};

struct __declspec(align(8)) List_1_CameraPivotZone___Fields {
    struct CameraPivotZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CameraPivotZone_ {
    struct List_1_CameraPivotZone___Class *klass;
    MonitorData *monitor;
    struct List_1_CameraPivotZone___Fields fields;
};

struct CameraPivotZone__Array {
    struct CameraPivotZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraPivotZone *vector[32];
};

struct IEnumerator_1_CameraPivotZone_ {
    struct IEnumerator_1_CameraPivotZone___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CameraTarget_TargetLayer__Fields {
    bool FollowTargetX;
    bool FollowTargetY;
    bool FollowTargetZ;
    struct Transform *Transform;
    float Weight;
    int32_t Priority;
};

struct CameraTarget_TargetLayer {
    struct CameraTarget_TargetLayer__Class *klass;
    MonitorData *monitor;
    struct CameraTarget_TargetLayer__Fields fields;
};

struct __declspec(align(8)) Blend_1_System_Single___Fields {
    float End;
    float Start;
    float Time;
    struct Func_2_Single_Single_ *m_ease;
    struct Func_4_Single_Single_Single_Single_ *m_lerp;
};

struct Blend_1_System_Single_ {
    struct Blend_1_System_Single___Class *klass;
    MonitorData *monitor;
    struct Blend_1_System_Single___Fields fields;
};

struct BlendFloat__Fields {
    struct Blend_1_System_Single___Fields _;
};

struct BlendFloat {
    struct BlendFloat__Class *klass;
    MonitorData *monitor;
    struct BlendFloat__Fields fields;
};

struct Func_2_Single_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_Single_Single_ {
    struct Func_2_Single_Single___Class *klass;
    MonitorData *monitor;
    struct Func_2_Single_Single___Fields fields;
};

struct Func_4_Single_Single_Single_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_4_Single_Single_Single_Single_ {
    struct Func_4_Single_Single_Single_Single___Class *klass;
    MonitorData *monitor;
    struct Func_4_Single_Single_Single_Single___Fields fields;
};

enum class CameraOffsetAnimationZone_Mode__Enum : int32_t {
    Horizontal = 0x00000000,
    Vertical = 0x00000001,
    Radial = 0x00000002,
};

struct CameraOffsetAnimationZone_Mode__Enum__Boxed {
    struct CameraOffsetAnimationZone_Mode__Enum__Class *klass;
    MonitorData *monitor;
    CameraOffsetAnimationZone_Mode__Enum value;
    
};

struct CameraOffsetAnimationZone__Fields {
    struct MonoBehaviour__Fields _;
    CameraOffsetAnimationZone_Mode__Enum mode;
    
    struct Vector3 Offset;
    bool UseOffsetX;
    bool UseOffsetY;
    bool UseOffsetZ;
    struct Vector3 Rotation;
    bool UseRotationX;
    bool UseRotationY;
    bool UseRotationZ;
    float Weight;
    float Duration;
    float Time;
    float BlendPointBlendDuration;
    struct CameraOffsetAnimationZone_OffsetBlend__Array *BlendPoints;
    float NormalizedPositionWithinBounds;
    struct Vector3 m_effectiveOffset;
    struct Vector3 m_ffectiveRotation;
    struct CameraOffsetController_OffsetLayer *m_offsetLayer;
    struct Color FillColor;
    struct Color OutlineColor;
    struct Transform *m_transform;
    bool m_isRegistered;
    bool m_dirty;
    struct Rect m_rect;
    float m_currentNormalizedPositionVelocity;
    struct CameraOffsetAnimationZone_OffsetBlend *m_tempOffsetBlend;
    bool _InsideFrustum_k__BackingField;
    struct Bounds m_bounds;
    bool _AllowCacheBounds_k__BackingField;
};

struct CameraOffsetAnimationZone {
    struct CameraOffsetAnimationZone__Class *klass;
    MonitorData *monitor;
    struct CameraOffsetAnimationZone__Fields fields;
};

struct __declspec(align(8)) AllContainer_1_CameraOffsetAnimationZone___Fields {
    struct List_1_CameraOffsetAnimationZone_ *m_objects;
};

struct AllContainer_1_CameraOffsetAnimationZone_ {
    struct AllContainer_1_CameraOffsetAnimationZone___Class *klass;
    MonitorData *monitor;
    struct AllContainer_1_CameraOffsetAnimationZone___Fields fields;
};

struct __declspec(align(8)) List_1_CameraOffsetAnimationZone___Fields {
    struct CameraOffsetAnimationZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CameraOffsetAnimationZone_ {
    struct List_1_CameraOffsetAnimationZone___Class *klass;
    MonitorData *monitor;
    struct List_1_CameraOffsetAnimationZone___Fields fields;
};

struct CameraOffsetAnimationZone__Array {
    struct CameraOffsetAnimationZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraOffsetAnimationZone *vector[32];
};

struct IEnumerator_1_CameraOffsetAnimationZone_ {
    struct IEnumerator_1_CameraOffsetAnimationZone___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CameraOffsetAnimationZone_OffsetBlend__Fields {
    struct Vector3 Offset;
    struct Vector3 Rotation;
    float Time;
};

struct CameraOffsetAnimationZone_OffsetBlend {
    struct CameraOffsetAnimationZone_OffsetBlend__Class *klass;
    MonitorData *monitor;
    struct CameraOffsetAnimationZone_OffsetBlend__Fields fields;
};

struct CameraOffsetAnimationZone_OffsetBlend__Array {
    struct CameraOffsetAnimationZone_OffsetBlend__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CameraOffsetAnimationZone_OffsetBlend *vector[32];
};

struct __declspec(align(8)) CameraOffsetController_OffsetLayer__Fields {
    struct Vector3 Offset;
    struct Vector3 Rotation;
    bool UseOffsetX;
    bool UseOffsetY;
    bool UseOffsetZ;
    bool UseRotationX;
    bool UseRotationY;
    bool UseRotationZ;
    float Duration;
    struct BlendFloat *Weight;
    int32_t Priority;
    bool Active;
    bool UseExtraZoom;
    struct Component_1 *Owner;
};

struct CameraOffsetController_OffsetLayer {
    struct CameraOffsetController_OffsetLayer__Class *klass;
    MonitorData *monitor;
    struct CameraOffsetController_OffsetLayer__Fields fields;
};

struct NightCrawlerFightController__Fields {
    struct MonoBehaviour__Fields _;
    struct Vitals *Vitals;
    struct HitFlash3DNew *HitFlash;
    struct DamageReceiver *DamageReceiver;
    struct GameObject *TorchDestroyEffect;
    struct EventTriggerAnimator *FirstHitTrigger;
    struct EventTriggerAnimator *StartFightTrigger;
    struct EventTriggerAnimator *FarAttackRightTrigger;
    struct EventTriggerAnimator *EscapeReleaseLockTrigger;
    struct SerializedBooleanUberState *DefeatedState;
    struct SerializedBooleanUberState *EscapedState;
    struct EntityPlaceholderScalingLink *ScalingLink;
    struct MoonTimeline__Array *IdleTimelines;
    struct MoonTimeline__Array *AttackCloseTimelines;
    struct MoonTimeline *AttackFarTimeline;
    struct MoonTimeline *AttackFarLoopTimeline;
    struct MoonTimeline *AttackFarRetreatTimeline;
    struct MoonTimeline *DefeatRetreatTimeline;
    struct MoonTimeline *EscapeTimeline;
    struct MoonTimeline *HitReactionTimeline;
    float MinTimeBeforeCloseAttack;
    float MaxTimeBeforeCloseAttack;
    float TimeBeforeFarAttack;
    float TimeBeforeFarAttackIfOriWasDamaged;
    int32_t AttacksToForceCloseAttack;
    int32_t AttacksToRetreat;
    struct PlayerInsideZoneChecker *AttackFarZoneChecker;
    bool _Defeated_k__BackingField;
    struct NightCrawlerFightController_States *m_states;
    struct StateMachine_2 *m_stateMachine;
    bool m_fightActive;
    bool m_escaped;
    float m_normalizedFarZoneTimer;
    int32_t m_consecutiveAttacks;
    bool m_oriDamagedDuringCloseAttack;
    bool m_shouldDefeat;
};

struct NightCrawlerFightController {
    struct NightCrawlerFightController__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerFightController__Fields fields;
};

struct HitFlash3DNew__Fields {
    struct MonoBehaviour__Fields _;
    bool PlayAutomatically;
    struct MoonTimeline *m_flashTimeline;
    bool m_cachedComponents;
};

struct HitFlash3DNew {
    struct HitFlash3DNew__Class *klass;
    MonitorData *monitor;
    struct HitFlash3DNew__Fields fields;
};

struct __declspec(align(8)) NightCrawlerFightController_States__Fields {
    struct NightCrawlerFightController_FightState *Idle;
    struct NightCrawlerFightController_FightState *AttackClose;
    struct NightCrawlerFightController_FightState *AttackFar;
    struct NightCrawlerFightController_FightState *FarHold;
    struct NightCrawlerFightController_FightState *FarRetreat;
    struct NightCrawlerFightController_FightState *DefeatRetreat;
};

struct NightCrawlerFightController_States {
    struct NightCrawlerFightController_States__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerFightController_States__Fields fields;
};

struct __declspec(align(8)) NightCrawlerFightController_FightState__Fields {
    struct NightCrawlerFightController *Controller;
};

struct NightCrawlerFightController_FightState {
    struct NightCrawlerFightController_FightState__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerFightController_FightState__Fields fields;
};

struct NightCrawlerFightController_IdleState__Fields {
    struct NightCrawlerFightController_FightState__Fields _;
    struct MoonTimeline *m_idleTimeline;
    float m_timer;
};

struct NightCrawlerFightController_IdleState {
    struct NightCrawlerFightController_IdleState__Class *klass;
    MonitorData *monitor;
    struct NightCrawlerFightController_IdleState__Fields fields;
};

struct BreakablePhysicalSetupData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Transition;
    VirtualInvokeData get_DesiredValue;
};

struct BreakablePhysicalSetupData__StaticFields {
};

struct BreakablePhysicalSetupData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BreakablePhysicalSetupData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BreakablePhysicalSetupData__VTable vtable;
};

struct BreakablePhysicalSetupData__Array__VTable {
};

struct BreakablePhysicalSetupData__Array__StaticFields {
};

struct BreakablePhysicalSetupData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BreakablePhysicalSetupData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BreakablePhysicalSetupData__Array__VTable vtable;
};

struct IEnumerator_1_BreakablePhysicalSetupData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_BreakablePhysicalSetupData___StaticFields {
};

struct IEnumerator_1_BreakablePhysicalSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_BreakablePhysicalSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_BreakablePhysicalSetupData___VTable vtable;
};

struct List_1_BreakablePhysicalSetupData___VTable {
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

}
