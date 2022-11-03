namespace app {
    struct MapStoneActivatedCondition__StaticFields {
    };

    struct MapStoneActivatedCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MapStoneActivatedCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MapStoneActivatedCondition__VTable vtable;
    };

    struct PlayerHasMapStoneFragmentCondition__Fields {
        struct Condition_1__Fields _;
        bool HasFragment;
    };

    struct PlayerHasMapStoneFragmentCondition {
        struct PlayerHasMapStoneFragmentCondition__Class* klass;
        MonitorData* monitor;
        struct PlayerHasMapStoneFragmentCondition__Fields fields;
    };

    struct PlayerHasMapStoneFragmentCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
    };

    struct PlayerHasMapStoneFragmentCondition__StaticFields {
    };

    struct PlayerHasMapStoneFragmentCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerHasMapStoneFragmentCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerHasMapStoneFragmentCondition__VTable vtable;
    };

    struct CarryableDamageReciever__Fields {
        struct MonoBehaviour__Fields _;
        struct CarryableRigidBody* m_carryable;
        struct HashSet_1_DamageType_* m_damageTypes;
    };

    struct CarryableDamageReciever {
        struct CarryableDamageReciever__Class* klass;
        MonitorData* monitor;
        struct CarryableDamageReciever__Fields fields;
    };

    struct CarryableDamageReciever__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
    };

    struct CarryableDamageReciever__StaticFields {
    };

    struct CarryableDamageReciever__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CarryableDamageReciever__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CarryableDamageReciever__VTable vtable;
    };

    struct MistTorch__Fields {
        struct MonoBehaviour__Fields _;
        struct IPressurePlate* m_pressurePlate;
    };

    struct MistTorch {
        struct MistTorch__Class* klass;
        MonitorData* monitor;
        struct MistTorch__Fields fields;
    };

    struct MistTorch__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnPressed;
        VirtualInvokeData OnReleased;
    };

    struct MistTorch__StaticFields {
    };

    struct MistTorch__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MistTorch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MistTorch__VTable vtable;
    };

    struct MistTorchPlaceholder__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* MistTorchPrefab;
        float m_remainingTime;
    };

    struct MistTorchPlaceholder {
        struct MistTorchPlaceholder__Class* klass;
        MonitorData* monitor;
        struct MistTorchPlaceholder__Fields fields;
    };

    struct MistTorchPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MistTorchPlaceholder__StaticFields {
    };

    struct MistTorchPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MistTorchPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MistTorchPlaceholder__VTable vtable;
    };

    struct JumpFlipPlatform__Fields {
        struct SaveSerialize__Fields _;
        bool ShowAtStart;
        bool ToggleOnJump;
        bool ToggleOnDoubleJump;
        bool ToggleOnWallJump;
        bool ToggleOnChargeJump;
        bool m_active;
        struct LegacyTransparancyAnimator* m_transparancyAnimator;
        struct List_1_LegacyAnimator_* Animators;
        struct List_1_BaseAnimator_* BaseAnimators;
        struct Collider* m_collider;
        struct ActionMethod* OnActivateAction;
        struct ActionMethod* OnDeactivateAction;
        struct SoundProvider* OnActivateSoundProvider;
        struct SoundProvider* OnDeactivateSoundProvider;
        struct FlipPlantLogic__Array* m_flipPlants;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct JumpFlipPlatform {
        struct JumpFlipPlatform__Class* klass;
        MonitorData* monitor;
        struct JumpFlipPlatform__Fields fields;
    };

    struct FlipPlantLogic__Array {
        struct FlipPlantLogic__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FlipPlantLogic* vector[32];
    };

    struct FlipPlantLogic__Array__VTable {
    };

    struct FlipPlantLogic__Array__StaticFields {
    };

    struct FlipPlantLogic__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FlipPlantLogic__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FlipPlantLogic__Array__VTable vtable;
    };

    struct JumpFlipPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct JumpFlipPlatform__StaticFields {
        struct Action* OnSeinJumpEvent;
        struct Action* OnSeinDoubleJumpEvent;
        struct Action* OnSeinWallJumpEvent;
        struct Action* OnSeinChargeJumpEvent;
        float TimeOfLastAudio;
    };

    struct JumpFlipPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpFlipPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpFlipPlatform__VTable vtable;
    };

    struct JumpFlipPlatform_c {
        struct JumpFlipPlatform_c__Class* klass;
        MonitorData* monitor;
    };

    struct JumpFlipPlatform_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JumpFlipPlatform_c__StaticFields {
        struct JumpFlipPlatform_c* __9;
    };

    struct JumpFlipPlatform_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpFlipPlatform_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpFlipPlatform_c__VTable vtable;
    };

    enum class RiseSinkPlatform_State__Enum : int32_t {
        Rise = 0x00000000,
        Sink = 0x00000001,
        Rest = 0x00000002,
    };

    struct RiseSinkPlatform_State__Enum__Boxed {
        struct RiseSinkPlatform_State__Enum__Class* klass;
        MonitorData* monitor;
        RiseSinkPlatform_State__Enum value;
    };

    struct RiseSinkPlatform__Fields {
        struct SaveSerialize__Fields _;
        float SinkSpeed;
        float RiseSpeed;
        struct Vector3 m_startPosition;
        struct Transform* TransformToAffect;
        RiseSinkPlatform_State__Enum m_state;

        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct RiseSinkPlatform {
        struct RiseSinkPlatform__Class* klass;
        MonitorData* monitor;
        struct RiseSinkPlatform__Fields fields;
    };

    struct RiseSinkPlatform_State__Enum__VTable {
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

    struct RiseSinkPlatform_State__Enum__StaticFields {
    };

    struct RiseSinkPlatform_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RiseSinkPlatform_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RiseSinkPlatform_State__Enum__VTable vtable;
    };

    struct RiseSinkPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct RiseSinkPlatform__StaticFields {
    };

    struct RiseSinkPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RiseSinkPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RiseSinkPlatform__VTable vtable;
    };

    enum class Utility_MoveDirection__Enum : int32_t {
        Left = 0x00000000,
        Right = 0x00000001,
        Up = 0x00000002,
        Down = 0x00000003,
    };

    struct Utility_MoveDirection__Enum__Boxed {
        struct Utility_MoveDirection__Enum__Class* klass;
        MonitorData* monitor;
        Utility_MoveDirection__Enum value;
    };

    struct SinMovingPlatform__Fields {
        struct SaveSerialize__Fields _;
        Utility_MoveDirection__Enum Direction;

        bool DontMoveWhenDeactivatedInitially;
        float Offset;
        float Period;
        float Range;
        struct SoundSource* UpSound;
        struct SoundSource* DownSound;
        int32_t m_previousSign;
        struct Vector3 m_positionCenter;
        float m_time;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct SinMovingPlatform {
        struct SinMovingPlatform__Class* klass;
        MonitorData* monitor;
        struct SinMovingPlatform__Fields fields;
    };

    struct Utility_MoveDirection__Enum__VTable {
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

    struct Utility_MoveDirection__Enum__StaticFields {
    };

    struct Utility_MoveDirection__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Utility_MoveDirection__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Utility_MoveDirection__Enum__VTable vtable;
    };

    struct SinMovingPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct SinMovingPlatform__StaticFields {
    };

    struct SinMovingPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SinMovingPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SinMovingPlatform__VTable vtable;
    };

    enum class HeatUpPlatform_State__Enum : int32_t {
        Cold = 0x00000000,
        Heating = 0x00000001,
        Hot = 0x00000002,
        Cooling = 0x00000003,
    };

    struct HeatUpPlatform_State__Enum__Boxed {
        struct HeatUpPlatform_State__Enum__Class* klass;
        MonitorData* monitor;
        HeatUpPlatform_State__Enum value;
    };

    struct HeatUpPlatform__Fields {
        struct SaveSerialize__Fields _;
        struct Transform* m_transform;
        struct SoundSource* ActivateSoundSource;
        struct SoundSource* DeacivateSoundSource;
        bool Activated;
        bool m_beingTriggered;
        HeatUpPlatform_State__Enum CurrentState;

        float m_stateCurrentTime;
        float m_heat;
        struct Renderer* Target;
        struct Color ColdColor;
        struct Color HotColor;
        struct AnimationCurve* HeatCurve;
        float Damage;
        float HeatingDuration;
        float CoolingDuration;
    };

    struct HeatUpPlatform {
        struct HeatUpPlatform__Class* klass;
        MonitorData* monitor;
        struct HeatUpPlatform__Fields fields;
    };

    struct HeatUpPlatform_State__Enum__VTable {
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

    struct HeatUpPlatform_State__Enum__StaticFields {
    };

    struct HeatUpPlatform_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HeatUpPlatform_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HeatUpPlatform_State__Enum__VTable vtable;
    };

    struct HeatUpPlatform__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct HeatUpPlatform__StaticFields {
    };

    struct HeatUpPlatform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HeatUpPlatform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HeatUpPlatform__VTable vtable;
    };

    struct DamageDealerUnlessCarryingNightberry__Fields {
        struct DamageDealer__Fields _;
        int32_t m_frame;
    };

    struct DamageDealerUnlessCarryingNightberry {
        struct DamageDealerUnlessCarryingNightberry__Class* klass;
        MonitorData* monitor;
        struct DamageDealerUnlessCarryingNightberry__Fields fields;
    };

    struct DamageDealerUnlessCarryingNightberry__VTable {
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
    };

    struct DamageDealerUnlessCarryingNightberry__StaticFields {
    };

    struct DamageDealerUnlessCarryingNightberry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageDealerUnlessCarryingNightberry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageDealerUnlessCarryingNightberry__VTable vtable;
    };

    struct NightBerry__Fields {
        struct SaveSerialize__Fields _;
        float OuterRadius;
        float InnerRadius;
        struct SoundSource* ShrinkSound;
        struct SoundSource* GrowSound;
        struct AnimationCurve* ForceOverDistance;
        struct AnimationCurve* DragOverDistance;
        float ActivateChaseRange;
        float StopChaseRange;
        float StartChaseRange;
        float StopChaseVelocity;
        struct Varying2DSoundProvider* OnChaseSound;
        struct Transform* Ring;
        bool m_isChasing;
        bool m_canChase;
        struct Transform* m_transform;
        struct Rigidbody* m_rigidbody;
        struct Collider* m_collider;
        struct CarryableRigidBody* m_carryable;
        float m_spiritRingSpeed;
        float SpiritRingRadius;
        float m_spiritRingRadiusMultiplier;
        struct ParticleSystem__Array* Particles;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct NightBerry {
        struct NightBerry__Class* klass;
        MonitorData* monitor;
        struct NightBerry__Fields fields;
    };

    struct NightBerry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct NightBerry__StaticFields {
    };

    struct NightBerry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NightBerry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NightBerry__VTable vtable;
    };

    struct NightberryPlaceholder__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* NightberryPrefab;
    };

    struct NightberryPlaceholder {
        struct NightberryPlaceholder__Class* klass;
        MonitorData* monitor;
        struct NightberryPlaceholder__Fields fields;
    };

    struct NightberryPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NightberryPlaceholder__StaticFields {
    };

    struct NightberryPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NightberryPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NightberryPlaceholder__VTable vtable;
    };

    struct __declspec(align(8)) NightberryPlaceholder_HackForFixingNightberry_d_2__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct NightberryPlaceholder* __4__this;
    };

    struct NightberryPlaceholder_HackForFixingNightberry_d_2 {
        struct NightberryPlaceholder_HackForFixingNightberry_d_2__Class* klass;
        MonitorData* monitor;
        struct NightberryPlaceholder_HackForFixingNightberry_d_2__Fields fields;
    };

    struct NightberryPlaceholder_HackForFixingNightberry_d_2__VTable {
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

    struct NightberryPlaceholder_HackForFixingNightberry_d_2__StaticFields {
    };

    struct NightberryPlaceholder_HackForFixingNightberry_d_2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NightberryPlaceholder_HackForFixingNightberry_d_2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NightberryPlaceholder_HackForFixingNightberry_d_2__VTable vtable;
    };

    struct NightBerryResponder__Fields {
        struct MonoBehaviour__Fields _;
        struct ActionMethod* OnEnterNightBerryAura;
        struct ActionMethod* OnExitNightBerryAura;
        bool m_isInRadius;
        int32_t m_frame;
    };

    struct NightBerryResponder {
        struct NightBerryResponder__Class* klass;
        MonitorData* monitor;
        struct NightBerryResponder__Fields fields;
    };

    struct NightBerryResponder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NightBerryResponder__StaticFields {
    };

    struct NightBerryResponder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NightBerryResponder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NightBerryResponder__VTable vtable;
    };

    struct NightBerrySpiritRing__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct NightBerrySpiritRing {
        struct NightBerrySpiritRing__Class* klass;
        MonitorData* monitor;
        struct NightBerrySpiritRing__Fields fields;
    };

    struct NightBerrySpiritRing__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NightBerrySpiritRing__StaticFields {
    };

    struct NightBerrySpiritRing__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NightBerrySpiritRing__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NightBerrySpiritRing__VTable vtable;
    };

    struct PlayAnimatorBasedOnNightberry__Fields {
        struct MonoBehaviour__Fields _;
        bool m_wasActivated;
        struct LegacyAnimator__Array* m_animators;
    };

    struct PlayAnimatorBasedOnNightberry {
        struct PlayAnimatorBasedOnNightberry__Class* klass;
        MonitorData* monitor;
        struct PlayAnimatorBasedOnNightberry__Fields fields;
    };

    struct PlayAnimatorBasedOnNightberry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayAnimatorBasedOnNightberry__StaticFields {
    };

    struct PlayAnimatorBasedOnNightberry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayAnimatorBasedOnNightberry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayAnimatorBasedOnNightberry__VTable vtable;
    };

    struct SetNightBerryRespawnPosition__Fields {
        struct ActionMethod__Fields _;
        struct Transform* Target;
    };

    struct SetNightBerryRespawnPosition {
        struct SetNightBerryRespawnPosition__Class* klass;
        MonitorData* monitor;
        struct SetNightBerryRespawnPosition__Fields fields;
    };

    struct SetNightBerryRespawnPosition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

    struct SetNightBerryRespawnPosition__StaticFields {
    };

    struct SetNightBerryRespawnPosition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetNightBerryRespawnPosition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetNightBerryRespawnPosition__VTable vtable;
    };

    struct HighlightNearSein__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_LegacyAnimator_* Animators;
    };

    struct HighlightNearSein {
        struct HighlightNearSein__Class* klass;
        MonitorData* monitor;
        struct HighlightNearSein__Fields fields;
    };

    struct HighlightNearSein__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnNearSeinEnter;
        VirtualInvokeData OnNearSeinExit;
        VirtualInvokeData OnSeinNearStay;
    };

    struct HighlightNearSein__StaticFields {
    };

    struct HighlightNearSein__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HighlightNearSein__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HighlightNearSein__VTable vtable;
    };

    struct GenericCastManagerCompleteJobs__Fields {
        struct MonoBehaviour__Fields _;
        struct IGenericCastManager* Manager;
        struct UpdateSyncGuard sync;
    };

    struct GenericCastManagerCompleteJobs {
        struct GenericCastManagerCompleteJobs__Class* klass;
        MonitorData* monitor;
        struct GenericCastManagerCompleteJobs__Fields fields;
    };

    struct IGenericCastManager {
        struct IGenericCastManager__Class* klass;
        MonitorData* monitor;
    };

    struct IGenericCastManager__VTable {
        VirtualInvokeData CompleteJobs;
        VirtualInvokeData ScheduleNewJobs;
    };

    struct IGenericCastManager__StaticFields {
    };

    struct IGenericCastManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IGenericCastManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IGenericCastManager__VTable vtable;
    };

    struct GenericCastManagerCompleteJobs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GenericCastManagerCompleteJobs__StaticFields {
    };

    struct GenericCastManagerCompleteJobs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericCastManagerCompleteJobs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericCastManagerCompleteJobs__VTable vtable;
    };

    struct GenericCastManagerScheduleJobs__Fields {
        struct MonoBehaviour__Fields _;
        struct IGenericCastManager* Manager;
        struct UpdateSyncGuard sync;
        bool InvokePiggybackHooks;
    };

    struct GenericCastManagerScheduleJobs {
        struct GenericCastManagerScheduleJobs__Class* klass;
        MonitorData* monitor;
        struct GenericCastManagerScheduleJobs__Fields fields;
    };

    struct GenericCastManagerScheduleJobs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GenericCastManagerScheduleJobs__StaticFields {
    };

    struct GenericCastManagerScheduleJobs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericCastManagerScheduleJobs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericCastManagerScheduleJobs__VTable vtable;
    };

    struct LaserSocket__Fields {
        struct MonoBehaviour__Fields _;
        struct BlockableLaser* BlockableLaser;
    };

    struct LaserSocket {
        struct LaserSocket__Class* klass;
        MonitorData* monitor;
        struct LaserSocket__Fields fields;
    };

    struct LaserSocket__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LaserSocket__StaticFields {
    };

    struct LaserSocket__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserSocket__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserSocket__VTable vtable;
    };

    struct GenericCastManager_1_UnityEngine_SpherecastCommand___Fields {
        struct MonoBehaviour__Fields _;
        bool DebugLogs;
        struct GenericCastManager_1_Command_Mode_UnityEngine_SpherecastCommand_* m_mode;
        struct Dictionary_2_System_Int32_System_Int32_* m_cmdRequests;
        struct Dictionary_2_System_Int32_System_Int32_* m_hitRequests;
        struct SpherecastCommand__Array* m_cmds;
        struct RaycastHit__Array* m_hits;
        int32_t m_cmdCount;
        int32_t m_nativeIndex;
        struct List_1_GenericCastManager_1_NativeArrays_* m_native;
        struct JobHandle m_job;
        bool m_executing;
        bool m_isRaycastManager;
        int32_t m_fixedUpdatesThisFrame;
    };

} // namespace app
