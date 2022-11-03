namespace app {
    struct MetaBallWaterZone__StaticFields {
        struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball_* m_metaBalls;
    };

    struct MetaBallWaterZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MetaBallWaterZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MetaBallWaterZone__VTable vtable;
    };

    struct SphericalWaterZone__Fields {
        struct WaterZone__Fields _;
        float Radius;
    };

    struct SphericalWaterZone {
        struct SphericalWaterZone__Class* klass;
        MonitorData* monitor;
        struct SphericalWaterZone__Fields fields;
    };

    struct SphericalWaterZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData AreaType;
        VirtualInvokeData ContainsPoint;
        VirtualInvokeData GetVelocityAtPoint;
        VirtualInvokeData get_Category;
        VirtualInvokeData GetVelocityAtPoint_1;
        VirtualInvokeData Contains;
        VirtualInvokeData Overlaps;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData FixedUpdate;
    };

    struct SphericalWaterZone__StaticFields {
    };

    struct SphericalWaterZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SphericalWaterZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SphericalWaterZone__VTable vtable;
    };

    struct WaterPurityLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* CleanGroup;
        struct GameObject* DiseasedGroup;
    };

    struct WaterPurityLogic {
        struct WaterPurityLogic__Class* klass;
        MonitorData* monitor;
        struct WaterPurityLogic__Fields fields;
    };

    struct WaterPurityLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterPurityLogic__StaticFields {
    };

    struct WaterPurityLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterPurityLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterPurityLogic__VTable vtable;
    };

    struct WaterReflectionRenderer__Fields {
        struct MonoBehaviour__Fields _;
        struct Camera* Camera;
        struct Water* m_water;
    };

    struct WaterReflectionRenderer {
        struct WaterReflectionRenderer__Class* klass;
        MonitorData* monitor;
        struct WaterReflectionRenderer__Fields fields;
    };

    struct WaterReflectionRenderer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterReflectionRenderer__StaticFields {
    };

    struct WaterReflectionRenderer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterReflectionRenderer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterReflectionRenderer__VTable vtable;
    };

    struct WaterZone___VTable {
    };

    struct WaterZone___StaticFields {
    };

    struct WaterZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterZone___VTable vtable;
    };

    enum class WaterCurrentController_State__Enum : int32_t {
        Outside = 0x00000000,
        Inside = 0x00000001,
    };

    struct WaterCurrentController_State__Enum__Boxed {
        struct WaterCurrentController_State__Enum__Class* klass;
        MonitorData* monitor;
        WaterCurrentController_State__Enum value;
    };

    struct WaterCurrentController__Fields {
        struct MonoBehaviour__Fields _;
        WaterCurrentController_State__Enum CurrentState;

        float CurrentStateTime;
        struct AnimationCurve* Curve;
        struct AnimationCurve* FadeOutCurve;
        struct WaterCurrentZone* m_lastZone;
        float m_rampUpTime;
    };

    struct WaterCurrentController {
        struct WaterCurrentController__Class* klass;
        MonitorData* monitor;
        struct WaterCurrentController__Fields fields;
    };

    struct WaterCurrentController_State__Enum__VTable {
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

    struct WaterCurrentController_State__Enum__StaticFields {
    };

    struct WaterCurrentController_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterCurrentController_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterCurrentController_State__Enum__VTable vtable;
    };

    struct WaterCurrentController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterCurrentController__StaticFields {
        struct WaterCurrentController* m_instance;
    };

    struct WaterCurrentController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterCurrentController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterCurrentController__VTable vtable;
    };

    struct WaterThatRockFallsInto__Fields {
        struct MonoBehaviour__Fields _;
        float AngularVelocityMultiplier;
        float AngularFriction;
        float MaxAngularVelocity;
        float FloatHeight;
        float BounceDamp;
        struct Vector2 EnterWaterDamp;
        struct GameObject* SplashEffect;
        float WaterHorizontalMaxVelocity;
        float WaterHorizontalMultiplier;
        float WaterHorizontalFriction;
    };

    struct WaterThatRockFallsInto {
        struct WaterThatRockFallsInto__Class* klass;
        MonitorData* monitor;
        struct WaterThatRockFallsInto__Fields fields;
    };

    struct WaterThatRockFallsInto__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterThatRockFallsInto__StaticFields {
    };

    struct WaterThatRockFallsInto__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterThatRockFallsInto__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterThatRockFallsInto__VTable vtable;
    };

    struct WindArea__Fields {
        struct MonoBehaviour__Fields _;
        bool RequiresWindRestored;
        struct Transform* _Transform_k__BackingField;
        float Speed;
        float HorizontalAcceleration;
        float VerticalAcceleration;
        struct AnimationCurve* HorizontalAccelerationOverSpeed;
        struct AnimationCurve* VerticalAccelerationOverSpeed;
        bool CancelGravity;
        bool _IsOverlapping_k__BackingField;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct WindArea {
        struct WindArea__Class* klass;
        MonitorData* monitor;
        struct WindArea__Fields fields;
    };

    struct WindArea__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct WindArea__StaticFields {
    };

    struct WindArea__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WindArea__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WindArea__VTable vtable;
    };

    struct WindSpeedAnimator__Fields {
        struct LegacyAnimator__Fields _;
        struct WindArea* Area;
        float m_windSpeed;
    };

    struct WindSpeedAnimator {
        struct WindSpeedAnimator__Class* klass;
        MonitorData* monitor;
        struct WindSpeedAnimator__Fields fields;
    };

    struct WindSpeedAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_IsInScene;
        VirtualInvokeData set_IsInScene;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData Start;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData Restart;
        VirtualInvokeData RestartReverse;
        VirtualInvokeData AnimateIt;
        VirtualInvokeData RestoreToOriginalState;
    };

    struct WindSpeedAnimator__StaticFields {
    };

    struct WindSpeedAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WindSpeedAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WindSpeedAnimator__VTable vtable;
    };

    struct WindZoneVisualizer__Fields {
        struct MonoBehaviour__Fields _;
        struct WindArea* m_windArea;
        struct Renderer* m_windAreaRenderer;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct WindZoneVisualizer {
        struct WindZoneVisualizer__Class* klass;
        MonitorData* monitor;
        struct WindZoneVisualizer__Fields fields;
    };

    struct WindZoneVisualizer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct WindZoneVisualizer__StaticFields {
    };

    struct WindZoneVisualizer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WindZoneVisualizer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WindZoneVisualizer__VTable vtable;
    };

    struct WindupSwitch__Fields {
        struct LegacyAttackableSwitch__Fields _;
        int32_t TargetRotation;
        struct AnimationCurve* DamageToRotationCurve;
        struct AnimationCurve* RotationDistanceToSpeedCurve;
        struct AnimationCurve* WindupDistanceToSpeedCurve;
        bool AccountForHitDirection;
        bool ShouldActivateDeactivate;
        struct SoundProvider* OnHitSoundProvider;
        struct SoundProvider* OnUnwindSoundProvider;
        struct SoundProvider* OnActivateSoundProvider;
        struct WindupSwitch_DamageMultiplier__Array* AttackDamageMultipliers;
        float m_currentTargetRotation;
        float m_actualRotation;
        float m_previousRotation;
        struct List_1_BaseAnimator_* m_animators;
    };

    struct WindupSwitch {
        struct WindupSwitch__Class* klass;
        MonitorData* monitor;
        struct WindupSwitch__Fields fields;
    };

    struct __declspec(align(8)) WindupSwitch_DamageMultiplier__Fields {
        DamageType__Enum DamageType;

        float Multiplier;
    };

    struct WindupSwitch_DamageMultiplier {
        struct WindupSwitch_DamageMultiplier__Class* klass;
        MonitorData* monitor;
        struct WindupSwitch_DamageMultiplier__Fields fields;
    };

    struct WindupSwitch_DamageMultiplier__Array {
        struct WindupSwitch_DamageMultiplier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WindupSwitch_DamageMultiplier* vector[32];
    };

    struct WindupSwitch_DamageMultiplier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WindupSwitch_DamageMultiplier__StaticFields {
    };

    struct WindupSwitch_DamageMultiplier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WindupSwitch_DamageMultiplier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WindupSwitch_DamageMultiplier__VTable vtable;
    };

    struct WindupSwitch_DamageMultiplier__Array__VTable {
    };

    struct WindupSwitch_DamageMultiplier__Array__StaticFields {
    };

    struct WindupSwitch_DamageMultiplier__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WindupSwitch_DamageMultiplier__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WindupSwitch_DamageMultiplier__Array__VTable vtable;
    };

    struct WindupSwitch__VTable {
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
        VirtualInvokeData RegisterAnimator;
        VirtualInvokeData UnregisterAnimator;
        VirtualInvokeData DriverFixedUpdate;
    };

    struct WindupSwitch__StaticFields {
    };

    struct WindupSwitch__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WindupSwitch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WindupSwitch__VTable vtable;
    };

    enum class ActivateAndHold_State__Enum : int32_t {
        Resting = 0x00000000,
        Forward = 0x00000001,
        Hold = 0x00000002,
        Back = 0x00000003,
    };

    struct ActivateAndHold_State__Enum__Boxed {
        struct ActivateAndHold_State__Enum__Class* klass;
        MonitorData* monitor;
        ActivateAndHold_State__Enum value;
    };

    struct ActivateAndHold__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_ILever_* Lever;
        struct MoonTimeline* Forward;
        struct MoonTimeline* Hold;
        struct MoonTimeline* Back;
        ActivateAndHold_State__Enum m_currentState;

        struct ILever* m_resolvedLever;
    };

    struct ActivateAndHold {
        struct ActivateAndHold__Class* klass;
        MonitorData* monitor;
        struct ActivateAndHold__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_ILever___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_ILever_* m_cachedProxyType;
        struct ILever* m_volatileValue;
    };

    struct MoonReference_1_ILever_ {
        struct MoonReference_1_ILever___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_ILever___Fields fields;
    };

    struct IMoonType_1_ILever_ {
        struct IMoonType_1_ILever___Class* klass;
        MonitorData* monitor;
    };

    struct IMoonType_1_ILever___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_ILever___StaticFields {
    };

    struct IMoonType_1_ILever___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_ILever___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_ILever___VTable vtable;
    };

    struct ILever___VTable {
    };

    struct ILever___StaticFields {
    };

    struct ILever___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ILever___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ILever___VTable vtable;
    };

    struct MoonReference_1_ILever___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
        VirtualInvokeData get_IsStaticValue;
        VirtualInvokeData GetTypeData;
        VirtualInvokeData CanResolve;
        VirtualInvokeData get_IsCrossSceneReference;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct MoonReference_1_ILever___StaticFields {
    };

    struct MoonReference_1_ILever___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_ILever___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_ILever___VTable vtable;
    };

    struct ActivateAndHold_State__Enum__VTable {
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

    struct ActivateAndHold_State__Enum__StaticFields {
    };

    struct ActivateAndHold_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActivateAndHold_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ActivateAndHold_State__Enum__VTable vtable;
    };

    struct ActivateAndHold__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ActivateAndHold__StaticFields {
    };

    struct ActivateAndHold__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActivateAndHold__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ActivateAndHold__VTable vtable;
    };

    struct AnimatedCritter__Fields {
        struct MonoBehaviour__Fields _;
        float m_distance;
        struct MoonTimeline* Timeline;
        struct Transform* m_transform;
        struct Vector3 m_position;
        float m_effectiveDistance;
    };

    struct AnimatedCritter {
        struct AnimatedCritter__Class* klass;
        MonitorData* monitor;
        struct AnimatedCritter__Fields fields;
    };

    struct AnimatedCritter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AnimatedCritter__StaticFields {
    };

    struct AnimatedCritter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimatedCritter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimatedCritter__VTable vtable;
    };

    struct AnimatedCritterController__Fields {
        struct MonoBehaviour__Fields _;
        struct PlayerInsideZoneChecker* Trigger;
        struct List_1_AnimatedCritter_* Critters;
        int32_t m_critterIndex;
        bool _InvalidateParentTimelineCache_k__BackingField;
    };

    struct AnimatedCritterController {
        struct AnimatedCritterController__Class* klass;
        MonitorData* monitor;
        struct AnimatedCritterController__Fields fields;
    };

    struct __declspec(align(8)) List_1_AnimatedCritter___Fields {
        struct AnimatedCritter__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AnimatedCritter_ {
        struct List_1_AnimatedCritter___Class* klass;
        MonitorData* monitor;
        struct List_1_AnimatedCritter___Fields fields;
    };

    struct AnimatedCritter__Array {
        struct AnimatedCritter__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AnimatedCritter* vector[32];
    };

    struct IEnumerator_1_AnimatedCritter_ {
        struct IEnumerator_1_AnimatedCritter___Class* klass;
        MonitorData* monitor;
    };

    struct AnimatedCritter__Array__VTable {
    };

    struct AnimatedCritter__Array__StaticFields {
    };

    struct AnimatedCritter__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimatedCritter__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimatedCritter__Array__VTable vtable;
    };

    struct IEnumerator_1_AnimatedCritter___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AnimatedCritter___StaticFields {
    };

    struct IEnumerator_1_AnimatedCritter___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AnimatedCritter___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AnimatedCritter___VTable vtable;
    };

    struct List_1_AnimatedCritter___VTable {
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

    struct List_1_AnimatedCritter___StaticFields {
        struct AnimatedCritter__Array* _emptyArray;
    };

    struct List_1_AnimatedCritter___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AnimatedCritter___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AnimatedCritter___VTable vtable;
    };

    struct AnimatedCritterController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
    };

    struct AnimatedCritterController__StaticFields {
    };

    struct AnimatedCritterController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimatedCritterController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimatedCritterController__VTable vtable;
    };

    struct BombableWallAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct BombableWallVisuals* Visuals;
        struct MoonTimeline* DestroyTimeline;
    };

    struct BombableWallAnimator {
        struct BombableWallAnimator__Class* klass;
        MonitorData* monitor;
        struct BombableWallAnimator__Fields fields;
    };

    struct BombableWallVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* DestroyTimeline;
        struct GameObject* VisualsToDeactivate;
        struct MeshCollider* Collider;
    };

    struct BombableWallVisuals {
        struct BombableWallVisuals__Class* klass;
        MonitorData* monitor;
        struct BombableWallVisuals__Fields fields;
    };

    struct BombableWallVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BombableWallVisuals__StaticFields {
    };

    struct BombableWallVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BombableWallVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BombableWallVisuals__VTable vtable;
    };

    struct BombableWallAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupVisuals;
    };

    struct BombableWallAnimator__StaticFields {
    };

    struct BombableWallAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BombableWallAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BombableWallAnimator__VTable vtable;
    };

    struct BombableWallLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct SerializedBooleanUberState* SerializedState;
        struct BombableWallAnimator* Animator;
        struct DamageReceiver* Hitbox;
        struct GasBallAttractionRect* GasballAttractionZone;
        bool CreateCheckpointOnDestruction;
        struct CheckpointFunctionality Checkpoint;
        struct IUberState__Array* m_affectingUberStates;
        struct List_1_UnityEngine_GameObject_* m_allTargets;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct BombableWallLogic {
        struct BombableWallLogic__Class* klass;
        MonitorData* monitor;
        struct BombableWallLogic__Fields fields;
    };

    struct __declspec(align(8)) GasBallAttractionRect__Fields {
        struct Rect Zone;
        float AttractionTime;
        struct Transform* ReferenceTransfom;
        struct Rect m_runTimeZone;
        struct IGasBallBait* m_owner;
    };

    struct GasBallAttractionRect {
        struct GasBallAttractionRect__Class* klass;
        MonitorData* monitor;
        struct GasBallAttractionRect__Fields fields;
    };

    struct GasBallAttractionRect__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GasBallAttractionRect__StaticFields {
    };

    struct GasBallAttractionRect__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasBallAttractionRect__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasBallAttractionRect__VTable vtable;
    };

} // namespace app
