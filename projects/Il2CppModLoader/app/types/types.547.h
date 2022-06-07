namespace app {
struct __declspec(align(8)) CageStructureTool_Vertex__Fields {
    struct Vector3 Position;
    struct Vector3 _ScreenPosition_k__BackingField;
    struct Vector4 Metadata;
    int32_t ID;
};

struct CageStructureTool_Vertex {
    struct CageStructureTool_Vertex__Class *klass;
    MonitorData *monitor;
    struct CageStructureTool_Vertex__Fields fields;
};

struct CageStructureTool_Vertex__Array {
    struct CageStructureTool_Vertex__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CageStructureTool_Vertex *vector[32];
};

struct IEnumerator_1_CageStructureTool_Vertex_ {
    struct IEnumerator_1_CageStructureTool_Vertex___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_CageStructureTool_Edge___Fields {
    struct CageStructureTool_Edge__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CageStructureTool_Edge_ {
    struct List_1_CageStructureTool_Edge___Class *klass;
    MonitorData *monitor;
    struct List_1_CageStructureTool_Edge___Fields fields;
};

struct __declspec(align(8)) CageStructureTool_Edge__Fields {
    int32_t VertexA;
    int32_t VertexB;
    int32_t ID;
};

struct CageStructureTool_Edge {
    struct CageStructureTool_Edge__Class *klass;
    MonitorData *monitor;
    struct CageStructureTool_Edge__Fields fields;
};

struct CageStructureTool_Edge__Array {
    struct CageStructureTool_Edge__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CageStructureTool_Edge *vector[32];
};

struct IEnumerator_1_CageStructureTool_Edge_ {
    struct IEnumerator_1_CageStructureTool_Edge___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_CageStructureTool_Face___Fields {
    struct CageStructureTool_Face__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_CageStructureTool_Face_ {
    struct List_1_CageStructureTool_Face___Class *klass;
    MonitorData *monitor;
    struct List_1_CageStructureTool_Face___Fields fields;
};

struct __declspec(align(8)) CageStructureTool_Face__Fields {
    struct List_1_System_Int32_ *Triangles;
    struct List_1_System_Int32_ *Vertices;
    int32_t ID;
};

struct CageStructureTool_Face {
    struct CageStructureTool_Face__Class *klass;
    MonitorData *monitor;
    struct CageStructureTool_Face__Fields fields;
};

struct CageStructureTool_Face__Array {
    struct CageStructureTool_Face__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CageStructureTool_Face *vector[32];
};

struct IEnumerator_1_CageStructureTool_Face_ {
    struct IEnumerator_1_CageStructureTool_Face___Class *klass;
    MonitorData *monitor;
};

struct Action_1_CageStructureTool_Vertex___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_CageStructureTool_Vertex_ {
    struct Action_1_CageStructureTool_Vertex___Class *klass;
    MonitorData *monitor;
    struct Action_1_CageStructureTool_Vertex___Fields fields;
};

struct Action_1_CageStructureTool_Edge___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_CageStructureTool_Edge_ {
    struct Action_1_CageStructureTool_Edge___Class *klass;
    MonitorData *monitor;
    struct Action_1_CageStructureTool_Edge___Fields fields;
};

struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ {
    struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge___Class *klass;
    MonitorData *monitor;
    struct Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge___Fields fields;
};

struct Action_1_CageStructureTool_Face___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_CageStructureTool_Face_ {
    struct Action_1_CageStructureTool_Face___Class *klass;
    MonitorData *monitor;
    struct Action_1_CageStructureTool_Face___Fields fields;
};

struct Action_3_CageStructureTool_Face_Boolean_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_CageStructureTool_Face_Boolean_Boolean_ {
    struct Action_3_CageStructureTool_Face_Boolean_Boolean___Class *klass;
    MonitorData *monitor;
    struct Action_3_CageStructureTool_Face_Boolean_Boolean___Fields fields;
};

struct Action_3_CageStructureTool_Edge_Boolean_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_CageStructureTool_Edge_Boolean_Boolean_ {
    struct Action_3_CageStructureTool_Edge_Boolean_Boolean___Class *klass;
    MonitorData *monitor;
    struct Action_3_CageStructureTool_Edge_Boolean_Boolean___Fields fields;
};

struct Action_3_CageStructureTool_Vertex_Boolean_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_CageStructureTool_Vertex_Boolean_Boolean_ {
    struct Action_3_CageStructureTool_Vertex_Boolean_Boolean___Class *klass;
    MonitorData *monitor;
    struct Action_3_CageStructureTool_Vertex_Boolean_Boolean___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct Dictionary_2_System_Int32_System_Int32_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Dictionary_2_System_Int32_System_Int32_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields {
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields {
    struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Dictionary_2_System_Int32_System_Int32___Fields fields;
};

struct Dictionary_2_System_Int32_System_Int32___Array {
    struct Dictionary_2_System_Int32_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_System_Int32_System_Int32_ *vector[32];
};

struct IEnumerator_1_Dictionary_2_System_Int32_System_Int32_ {
    struct IEnumerator_1_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Dictionary_2_System_Int32_System_Int32_ {
    struct ICollection_1_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
    int32_t key;
    struct Dictionary_2_System_Int32_System_Int32_ *value;
};

struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Boxed {
    struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ fields;
};

struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Array {
    struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Dictionary_2_System_Int32_System_Int32_ {
    struct IEnumerable_1_Dictionary_2_System_Int32_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct DigZoneHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct Collider__Array *IgnoreColliders;
    struct HashSet_1_DigZone_ *m_ignoredZones;
    bool m_passThrough;
};

struct DigZoneHandler {
    struct DigZoneHandler__Class *klass;
    MonitorData *monitor;
    struct DigZoneHandler__Fields fields;
};

struct __declspec(align(8)) HashSet_1_DigZone___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_DigZone___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_DigZone_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_DigZone_ {
    struct HashSet_1_DigZone___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_DigZone___Fields fields;
};

struct HashSet_1_T_Slot_DigZone_ {
    int32_t hashCode;
    int32_t next;
    struct DigZone *value;
};

struct HashSet_1_T_Slot_DigZone___Boxed {
    struct HashSet_1_T_Slot_DigZone___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_DigZone_ fields;
};

struct HashSet_1_T_Slot_DigZone___Array {
    struct HashSet_1_T_Slot_DigZone___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_DigZone_ vector[32];
};

struct IEqualityComparer_1_DigZone_ {
    struct IEqualityComparer_1_DigZone___Class *klass;
    MonitorData *monitor;
};

struct DigZone__Array {
    struct DigZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DigZone *vector[32];
};

struct IEnumerator_1_DigZone_ {
    struct IEnumerator_1_DigZone___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_DigZone_ {
    struct IEnumerable_1_DigZone___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinDashNew___Fields {
    bool HasState;
    struct SeinDashNew *State;
};

struct CharacterStateWrapper_1_SeinDashNew_ {
    struct CharacterStateWrapper_1_SeinDashNew___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinDashNew___Fields fields;
};

struct Nullable_1_UnityEngine_Vector2_ {
    struct Vector2 value;
    bool has_value;
};

struct Nullable_1_UnityEngine_Vector2___Boxed {
    struct Nullable_1_UnityEngine_Vector2___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_UnityEngine_Vector2_ fields;
};

struct SeinDashNew__Fields {
    struct CharacterState__Fields _;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    struct LayerMask SandZoneHittingLayer;
    struct LayerMask WaterZoneHittingLayer;
    bool _IsEnding_k__BackingField;
    struct SeinDashNew_PreDashDelegateType *PreDashDelegate;
    bool OnlyRootMotion;
    bool AllowAirDash;
    bool BackdashEnabled;
    bool ScaleForwardMotionToEnemies;
    float ForwardMotionDistance;
    float ForwardAirMotionDistance;
    struct LayerMask EnemyLayerMask;
    struct List_1_System_String_ *RootMotionScalingIgnoreTags;
    float ForwardStickThreshold;
    struct AnimationCurve *MaxSpeedCurve;
    float AllowMeleeAttackNormalizedTime;
    float StuckOnWallDuration;
    float InvincibilityToAttacksTime;
    float PostDashSpeed;
    float DigTolerance;
    struct GameObject *DashEntryTarget;
    struct MoonTimeline *ActivateDiggingTargetSequence;
    struct MoonTimeline *DeactivateDiggingTargetSequence;
    float _CoolDown_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
    float m_timeToGetUnstuck;
    float m_currentDistanceTraveled;
    float m_predictedTravelDistance;
    float m_rootMotionScale;
    bool m_isDashing;
    bool m_isAirDashing;
    bool m_allowDash;
    bool m_attackButtonPressedDuringDash;
    bool m_forwardDash;
    int32_t m_dashDirection;
    int32_t m_facingDirection;
    struct MoonTimeline *m_currentTimeline;
    struct MoonAnimator *m_seinAnimator;
    struct Vector2 m_previousPosition;
    struct Nullable_1_UnityEngine_Vector2_ m_dashEntryPoint;
    struct Vector2 m_dashEntryPointNormal;
    struct Vector2 m_adjustedDashDirection;
    struct List_1_DigZone_ *m_digZonesWithinRadius;
    struct List_1_WaterZone_ *m_swimZonesWithinRadius;
    struct DigZone *m_targetDigZone;
    struct Rigidbody *m_targetDigZoneRigibody;
    struct WaterZone *m_targetWaterZone;
    float DigDirectionErrorAngle;
    float DistanceCostMultiplier;
    float AngleCostMultiplier;
    float InputDirectionOffsetY;
    struct List_1_DigZone_ *m_nearbyDigZones;
    int32_t m_nearbyDigZonesCachedFrame;
    struct List_1_WaterZone_ *m_nearbyWaterZones;
    int32_t m_nearbyWaterZonesCachedFrame;
    bool m_shouldDigCached;
    int32_t m_shouldDigUpdateFramID;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    struct List_1_Moon_ComboSystem_IComboMove_ *_ComboMoves_k__BackingField;
    struct Vector3 m_lastRootVelocity;
};

struct SeinDashNew {
    struct SeinDashNew__Class *klass;
    MonitorData *monitor;
    struct SeinDashNew__Fields fields;
};

struct SeinDashNew_PreDashDelegateType__Fields {
    struct MulticastDelegate__Fields _;
};

struct SeinDashNew_PreDashDelegateType {
    struct SeinDashNew_PreDashDelegateType__Class *klass;
    MonitorData *monitor;
    struct SeinDashNew_PreDashDelegateType__Fields fields;
};

struct __declspec(align(8)) List_1_DigZone___Fields {
    struct DigZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DigZone_ {
    struct List_1_DigZone___Class *klass;
    MonitorData *monitor;
    struct List_1_DigZone___Fields fields;
};

struct __declspec(align(8)) List_1_WaterZone___Fields {
    struct WaterZone__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_WaterZone_ {
    struct List_1_WaterZone___Class *klass;
    MonitorData *monitor;
    struct List_1_WaterZone___Fields fields;
};

struct WaterZone__Array {
    struct WaterZone__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct WaterZone *vector[32];
};

struct IEnumerator_1_WaterZone_ {
    struct IEnumerator_1_WaterZone___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinDrill___Fields {
    bool HasState;
    struct SeinDrill *State;
};

struct CharacterStateWrapper_1_SeinDrill_ {
    struct CharacterStateWrapper_1_SeinDrill___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinDrill___Fields fields;
};

enum class SeinDrill_DrillState__Enum : int32_t {
    StandBy = 0x00000000,
    Drill = 0x00000001,
};

struct SeinDrill_DrillState__Enum__Boxed {
    struct SeinDrill_DrillState__Enum__Class *klass;
    MonitorData *monitor;
    SeinDrill_DrillState__Enum value;
    
};

struct SeinDrill__Fields {
    struct CharacterState__Fields _;
    bool DebugEnabled;
    float DigDashDamage;
    float SwimDashDamage;
    float DashDamageRadius;
    float DashDamageForce;
    struct LayerMask DashDamageLayerMask;
    float MinSpeedToStartDrill;
    float MaxDrillSpeed;
    float DecelSmoothTime;
    float DecelMaxSpeed;
    float DrillTurnSmoothTime;
    float SwimAngleDeltaLimit;
    float DrillEnterDistance;
    float DrillEnterMaxAngle;
    struct GameObject *DrillDashEffect;
    struct MoonAnimator *m_seinAnimator;
    struct DrillZone *m_targetDrillZone;
    SeinDrill_DrillState__Enum m_drillState;
    
    float m_dashDecelSmoothVelocity;
};

struct SeinDrill {
    struct SeinDrill__Class *klass;
    MonitorData *monitor;
    struct SeinDrill__Fields fields;
};

struct DrillZone__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState *SerializedState;
    struct MoonTimeline *BreakTimeline;
    struct EventTriggerAnimator *ReleaseEvent;
    struct Collider *m_collider;
    struct List_1_UnityEngine_Collider_ *m_ignoringColliders;
};

struct DrillZone {
    struct DrillZone__Class *klass;
    MonitorData *monitor;
    struct DrillZone__Fields fields;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinGoldenSeinAbility___Fields {
    bool HasState;
    struct SeinGoldenSeinAbility *State;
};

struct CharacterStateWrapper_1_SeinGoldenSeinAbility_ {
    struct CharacterStateWrapper_1_SeinGoldenSeinAbility___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinGoldenSeinAbility___Fields fields;
};

enum class SeinGoldenSeinAbility_State__Enum : int32_t {
    None = 0x00000000,
    Resting = 0x00000001,
    Charging = 0x00000002,
    Release = 0x00000003,
};

struct SeinGoldenSeinAbility_State__Enum__Boxed {
    struct SeinGoldenSeinAbility_State__Enum__Class *klass;
    MonitorData *monitor;
    SeinGoldenSeinAbility_State__Enum value;
    
};

struct SeinGoldenSeinAbility__Fields {
    struct CharacterState__Fields _;
    struct GameObject *GoldenSeinPrefab;
    struct SoundProvider *EnableSound;
    struct GameObject *QuickGlowPrefab;
    struct GameObject *ChargeEffectPrefab;
    struct GameObject *HitImpactEffect;
    float HorizontalAirMaxSpeed;
    float HorizontalAirDeceleration;
    float WaterMaxSpeed;
    float WaterDeceleration;
    float HoldButtonDurationForCharge;
    struct MoonTimeline *ChargeReleaseTimeline;
    struct EventTriggerAnimator *ChargeReleaseTrigger;
    struct EventTriggerAnimator *ChargeReleaseUnblockTrigger;
    float ChargeDamage;
    float ChargeForce;
    DamageWeight__Enum ChargeDamageWeight;
    
    float ChargeEnergyCost;
    float ChargeRadius;
    struct MoonTimeline *ChargeStartedTimeline;
    struct MoonTimeline *ChargeInterrupptedTimeline;
    struct GameObject *InterrupptedInstantiateAnimator;
    struct ConditionUberState *DisableGoldenSeinCondition;
    bool m_playChargeInterruptEffect;
    SeinGoldenSeinAbility_State__Enum m_currentState;
    
    struct MoonTimeline *m_currentlyPlayingTimeline;
    bool m_facingLeft;
    bool m_hasPerformedGlow;
    struct GlowChargeEffect *m_currentChargeEffect;
    float m_holdButtonDuration;
    bool m_buttonReleaseRequired;
    bool m_canNotifyEnergy;
    struct GoldenSein *m_goldenSeinInstance;
};

struct SeinGoldenSeinAbility {
    struct SeinGoldenSeinAbility__Class *klass;
    MonitorData *monitor;
    struct SeinGoldenSeinAbility__Fields fields;
};

enum class GlowChargeEffect_State__Enum : int32_t {
    Invalid = 0x00000000,
    Charging = 0x00000001,
    Cancelling = 0x00000002,
};

struct GlowChargeEffect_State__Enum__Boxed {
    struct GlowChargeEffect_State__Enum__Class *klass;
    MonitorData *monitor;
    GlowChargeEffect_State__Enum value;
    
};

struct GlowChargeEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *ChargeTimeline;
    struct MoonTimeline *CancelTimeline;
    struct EventTriggerAnimator *ChargeCompletedTrigger;
    struct Action *OnChargeCompleted;
    GlowChargeEffect_State__Enum m_currentState;
    
};

struct GlowChargeEffect {
    struct GlowChargeEffect__Class *klass;
    MonitorData *monitor;
    struct GlowChargeEffect__Fields fields;
};

struct GoldenSein__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *Root;
    struct GameObject *AnimationRoot;
    struct MoonAnimator *Animator;
    struct AnimationCurve *DistanceToSpeedCurve;
    struct Vector3 TargetOffset;
    float AttackDistance;
    float ShotCooldownRate;
    float DrainedCooldownTimer;
    int32_t AttacksBeforeCooldown;
    float AttackDamage;
    float MaxDistanceBeforeWarpToTarget;
    struct AbilityType__Enum__Array *DontAttackWhenUsingAbilities;
    struct Vector3 NoTargetShotOffset;
    struct Transform__Array *GraphicTransforms;
    struct GameObject *Projectile;
    struct GameObject *DespawnEffect;
    struct AnimationCurve *UndrainedCurve;
    struct LayerMask LineOfSightLayerMask;
    struct MoonTimeline *PressButtonTimeline;
    struct ConditionUberState *DisableGoldenSeinCondition;
    struct Transform *m_transform;
    float m_shotsTillCooldown;
    struct SoundPlayer *m_twinkleSoundPlayer;
    struct SeinCharacter *m_sein;
    bool m_isDrained;
    float m_hoverTime;
    struct Nullable_1_UnityEngine_Vector3_ m_scenePosition;
    float m_animationTime;
    struct Vector3 m_animationStartPosition;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct GoldenSein {
    struct GoldenSein__Class *klass;
    MonitorData *monitor;
    struct GoldenSein__Fields fields;
};

struct __declspec(align(8)) CharacterStateWrapper_1_SeinFall___Fields {
    bool HasState;
    struct SeinFall *State;
};

struct CharacterStateWrapper_1_SeinFall_ {
    struct CharacterStateWrapper_1_SeinFall___Class *klass;
    MonitorData *monitor;
    struct CharacterStateWrapper_1_SeinFall___Fields fields;
};

struct SeinFall__Fields {
    struct CharacterState__Fields _;
    float FallingSpeedForSound;
    float GroundLandImpulsePerUnitsOfSpeed;
    float GroundLandMaxImpulse;
    float HeavyLandSpeedThreshold;
    float HeavyLandLockInputDuration;
    float LongFallLandThreashold;
    float LongFallLandLockInputDuration;
    struct MoonAnimation *LongFallLandAnimation;
    struct LandPrediction *LongFallPrediction;
    float TurnAnimUninterruptibleDuration;
    struct MoonAnimation *IdleAnimation;
    struct SurfaceToSoundProviderMap *LandingSound;
    struct SoundProvider *LongLandSound;
    struct SoundProvider *LongRollLandSound;
    struct MoonAnimation *MovingAnimation;
    struct FloatAnimationParameter *FallSpeed;
    struct CameraShake *LongFallShake;
    struct MaterialBasedSeinEffectsMap *EffectsMap;
    bool m_hasPlayedFallSound;
    bool m_hasStoppedFallSound;
    float m_ignoreLandTime;
    float m_ignoreFallTime;
    bool m_startedLongFall;
    bool m_cachedIsOnGround;
    struct RaycastHit m_predictionHit;
    struct ActiveAnimationHandle m_heavyLandActiveAnimation;
    bool m_lastFrameFaceLeft;
    bool m_playingTurnAnim;
    bool m_interruptingTurnAnim;
    float m_turnAnimNormalizedTime;
    struct Func_1_Boolean_ *s_shouldFallKeepPlaying;
    struct Func_1_Boolean_ *s_shouldFallIdleKeepPlaying;
    struct Func_1_Boolean_ *s_shouldLongFallKeepPlaying;
    struct CharacterTimelineTurning *m_currentTurning;
    bool _WantsToFaceLeft_k__BackingField;
};

struct SeinFall {
    struct SeinFall__Class *klass;
    MonitorData *monitor;
    struct SeinFall__Fields fields;
};

struct __declspec(align(8)) LandPrediction__Fields {
    float LandAntecipationTime;
    struct LayerMask CollisionMask;
    struct PlatformMovement *m_plataformMovement;
    struct Action_1_UnityEngine_RaycastHit_ *m_onGroundDetection;
    struct RaycastHit m_hit;
    bool _GroundDetected_k__BackingField;
};

struct LandPrediction {
    struct LandPrediction__Class *klass;
    MonitorData *monitor;
    struct LandPrediction__Fields fields;
};

struct PlatformMovement__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct IsOnCollisionState *Ceiling;
    struct IsOnCollisionState *Ground;
    struct IsOnCollisionState *WallLeft;
    struct IsOnCollisionState *WallRight;
    struct Vector3 CeilingNormal;
    struct Vector3 GroundNormal;
    struct Vector3 WallRightNormal;
    struct Vector3 WallLeftNormal;
    float fallTime;
    float landTime;
    float ClimbableWallAngleLimit;
    float LastTimeOnGround;
    bool m_inPrewarmed;
    bool m_areComponentsCached;
    struct Vector3 m_localSpeed;
    float m_gravityAngle;
    SurfaceMaterialType__Enum m_groundSurfaceMaterialType;
    
    struct StringBuilder *m_speedHistorySinceLastFrame;
    struct CapsuleCollider *m_capsuleCollider;
    float m_cachedCapsuleRadius;
    float m_cachedCapsuleHeight;
    struct MovingPlatformsController *m_movingPlatform;
    struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ *m_cacheObjectToGrabbableSurfaces;
    struct List_1_UnityEngine_GameObject_ *m_removeObjects;
    int32_t m_pruneRemainingFrameDelay;
    bool DebugVelocity;
    bool DebugRootMotion;
    bool m_insideUpdate;
    struct Vector3 m_prevPosition;
    struct Rigidbody *m_rigidbody;
    struct Vector3 m_savePositionOverrideValue;
    bool m_shouldOverridePositionNextSave;
    SuspendableMask__Enum m_suspensionMask;
    
    struct Vector3 _LastOnGroundPosition_k__BackingField;
    float _LastOnGroundTime_k__BackingField;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnCollisionGroundEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnCollisionCeilingEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnCollisionWallLeftEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnCollisionWallRightEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnLandOnGroundEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnLandOnWallLeftEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnLandOnWallRightEvent;
    struct Action_2_UnityEngine_Vector3_UnityEngine_Collider_ *OnLandOnCeilingEvent;
    struct Action *OnHitWater;
    bool ForceKeepInAir;
};

struct PlatformMovement {
    struct PlatformMovement__Class *klass;
    MonitorData *monitor;
    struct PlatformMovement__Fields fields;
};

struct __declspec(align(8)) IsOnCollisionState__Fields {
    bool WasOn;
    bool IsOn;
    bool FutureOn;
};

struct IsOnCollisionState {
    struct IsOnCollisionState__Class *klass;
    MonitorData *monitor;
    struct IsOnCollisionState__Fields fields;
};

struct __declspec(align(8)) MovingPlatformsController__Fields {
    bool IsOnMovingPlatform;
    bool m_wasAttached;
    struct Vector2 Velocity;
    bool m_ignoreForAFrameBecauseOfUnitysDelayedCollisionCallbacks;
    bool m_dontUpdateVelocityThisFrame;
    struct PlatformMovement *m_platformMovement;
    struct Transform *m_groundPlatform;
    struct Transform *m_oldGroundPlatform;
    struct Matrix4x4 m_groundPlatformMatrix;
    struct Transform *m_ceilingPlatform;
    struct Transform *m_oldCeilingPlatform;
    struct Matrix4x4 m_ceilingPlatformMatrix;
    struct Transform *m_wallLeftPlatform;
    struct Transform *m_oldWallLeftPlatform;
    struct Matrix4x4 m_wallLeftPlatformMatrix;
    struct Transform *m_wallRightPlatform;
    struct Transform *m_oldWallRightPlatform;
    struct Matrix4x4 m_wallRightPlatformMatrix;
};

struct MovingPlatformsController {
    struct MovingPlatformsController__Class *klass;
    MonitorData *monitor;
    struct MovingPlatformsController__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_GrabbableSurface___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_GameObject_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_GrabbableSurface_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ {
    struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface_ {
    int32_t hashCode;
    int32_t next;
    struct GameObject *key;
    struct GrabbableSurface *value;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface_ fields;
};

struct GrabbableSurface__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody *PullRigidbody;
    float PullForce;
    bool ShouldGrabOnFlatGroundAngles;
    bool PerformReleaseRaycastTest;
    bool UseStopPoints;
    struct Vector3 StopPointA;
    struct Vector3 StopPointB;
    struct Vector3 m_stopPointAWorld;
    struct Vector3 m_stopPointBWorld;
    int32_t _SpiritLeashCost_k__BackingField;
    struct Transform *_HookTargetTransform_k__BackingField;
    float _PositionOffset_k__BackingField;
    struct MeshCollider *m_meshCollider;
    struct GrabbableSurface_PositionInfo *m_positionInfo;
    struct GrabbableSurface_PositionInfo *m_positionFront;
    struct GrabbableSurface_PositionInfo *m_positionBack;
    struct List_1_UnityEngine_Vector3_ *m_vertices;
    struct List_1_UnityEngine_Vector3_ *m_normals;
    struct List_1_UnityEngine_Vector3_ *m_verticesWorld;
    struct List_1_UnityEngine_Vector3_ *m_normalsWorld;
};

struct GrabbableSurface {
    struct GrabbableSurface__Class *klass;
    MonitorData *monitor;
    struct GrabbableSurface__Fields fields;
};

enum class GrabbableSurfaceSettings_DebugDrawMode__Enum : int32_t {
    Always = 0x00000000,
    SelectedInHierarchy = 0x00000001,
};

struct GrabbableSurfaceSettings_DebugDrawMode__Enum__Boxed {
    struct GrabbableSurfaceSettings_DebugDrawMode__Enum__Class *klass;
    MonitorData *monitor;
    GrabbableSurfaceSettings_DebugDrawMode__Enum value;
    
};

struct GrabbableSurfaceSettings__Fields {
    struct ScriptableObject__Fields _;
    GrabbableSurfaceSettings_DebugDrawMode__Enum DebugDraw;
    
    float OffsetFromSurface;
    float AngleOfNormalWithDownToConsiderCeiling;
    float AngleOfNormalWithDownToConsiderGround;
    float MinAngleBetweenSegmentsToKeepAdvancing;
};

struct GrabbableSurfaceSettings {
    struct GrabbableSurfaceSettings__Class *klass;
    MonitorData *monitor;
    struct GrabbableSurfaceSettings__Fields fields;
};

struct __declspec(align(8)) GrabbableSurface_PositionInfo__Fields {
    struct Vector3 PointInSegment;
    uint32_t SegmentIndex;
    float SegmentAlpha;
    struct Vector3 SegmentDirection;
    struct Vector3 SegmentNormal;
};

struct GrabbableSurface_PositionInfo {
    struct GrabbableSurface_PositionInfo__Class *klass;
    MonitorData *monitor;
    struct GrabbableSurface_PositionInfo__Fields fields;
};

enum class SpiritLeashMode__Enum : int32_t {
    Both = 0x00000000,
    HookOnly = 0x00000001,
    PullOnly = 0x00000002,
};

struct SpiritLeashMode__Enum__Boxed {
    struct SpiritLeashMode__Enum__Class *klass;
    MonitorData *monitor;
    SpiritLeashMode__Enum value;
    
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Array {
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_GrabbableSurface_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface___Fields {
    struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_GrabbableSurface___Fields fields;
};

}
