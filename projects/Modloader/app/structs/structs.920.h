namespace app {
    struct UberShaderPrewarmerProgress__StaticFields {
    };

    struct UberShaderPrewarmerProgress__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderPrewarmerProgress__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderPrewarmerProgress__VTable vtable;
    };

    struct UberShaderPrewarmLoad__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct UberShaderPrewarmLoad {
        struct UberShaderPrewarmLoad__Class* klass;
        MonitorData* monitor;
        struct UberShaderPrewarmLoad__Fields fields;
    };

    struct UberShaderPrewarmLoad__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderPrewarmLoad__StaticFields {
    };

    struct UberShaderPrewarmLoad__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderPrewarmLoad__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderPrewarmLoad__VTable vtable;
    };

    struct UberBuildMethod {
        struct UberBuildMethod__Class* klass;
        MonitorData* monitor;
    };

    struct UberBuildMethod__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct UberBuildMethod__StaticFields {
    };

    struct UberBuildMethod__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberBuildMethod__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberBuildMethod__VTable vtable;
    };

    struct ColorStateModifierDataWisps__Fields {
        struct SetupStateModifierData__Fields _;
    };

    struct ColorStateModifierDataWisps {
        struct ColorStateModifierDataWisps__Class* klass;
        MonitorData* monitor;
        struct ColorStateModifierDataWisps__Fields fields;
    };

    struct ColorStateModifierDataWisps__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData GetIdToTypeMap;
        VirtualInvokeData Apply;
        VirtualInvokeData OnTargetChange;
        VirtualInvokeData CaptureCurrentTargetState;
        VirtualInvokeData GetIdToTypeMap_1;
    };

    struct ColorStateModifierDataWisps__StaticFields {
    };

    struct ColorStateModifierDataWisps__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorStateModifierDataWisps__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorStateModifierDataWisps__VTable vtable;
    };

    enum class ColorAnimator_ColorType__Enum : int32_t {
        Main = 0x00000000,
        Tint = 0x00000001,
        Additive = 0x00000002,
        AdditiveDistort = 0x00000003,
        AdditiveExtra = 0x00000004,
        Multiply = 0x00000006,
        MultiplyDistort = 0x00000009,
        MultiplyExtra = 0x00000007,
        Emissivity = 0x00000010,
    };

    struct ColorAnimator_ColorType__Enum__Boxed {
        struct ColorAnimator_ColorType__Enum__Class* klass;
        MonitorData* monitor;
        ColorAnimator_ColorType__Enum value;
    };

    struct ColorAnimator_ColorType__Enum__VTable {
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

    struct ColorAnimator_ColorType__Enum__StaticFields {
    };

    struct ColorAnimator_ColorType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorAnimator_ColorType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorAnimator_ColorType__Enum__VTable vtable;
    };

    struct DamageReceiversKilledStateWriter__Fields {
        struct MonoBehaviour__Fields _;
        struct StateChangeDefinition* OnAllReceiversDestroyed;
        struct List_1_LegacyDamageReciever_* LegacyDamageReceivers;
        bool m_hasPerformed;
    };

    struct DamageReceiversKilledStateWriter {
        struct DamageReceiversKilledStateWriter__Class* klass;
        MonitorData* monitor;
        struct DamageReceiversKilledStateWriter__Fields fields;
    };

    struct __declspec(align(8)) List_1_LegacyDamageReciever___Fields {
        struct LegacyDamageReciever__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LegacyDamageReciever_ {
        struct List_1_LegacyDamageReciever___Class* klass;
        MonitorData* monitor;
        struct List_1_LegacyDamageReciever___Fields fields;
    };

    struct IEnumerator_1_LegacyDamageReciever_ {
        struct IEnumerator_1_LegacyDamageReciever___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_LegacyDamageReciever___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LegacyDamageReciever___StaticFields {
    };

    struct IEnumerator_1_LegacyDamageReciever___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LegacyDamageReciever___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LegacyDamageReciever___VTable vtable;
    };

    struct List_1_LegacyDamageReciever___VTable {
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

    struct List_1_LegacyDamageReciever___StaticFields {
        struct LegacyDamageReciever__Array* _emptyArray;
    };

    struct List_1_LegacyDamageReciever___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LegacyDamageReciever___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LegacyDamageReciever___VTable vtable;
    };

    struct DamageReceiversKilledStateWriter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetRequirementsForTimeline;
    };

    struct DamageReceiversKilledStateWriter__StaticFields {
    };

    struct DamageReceiversKilledStateWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DamageReceiversKilledStateWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DamageReceiversKilledStateWriter__VTable vtable;
    };

    struct HasAbilityUberStateCondition__Fields {
        struct UberStateCondition__Fields _;
    };

    struct HasAbilityUberStateCondition {
        struct HasAbilityUberStateCondition__Class* klass;
        MonitorData* monitor;
        struct HasAbilityUberStateCondition__Fields fields;
    };

    struct HasAbilityUberStateCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct HasAbilityUberStateCondition__StaticFields {
    };

    struct HasAbilityUberStateCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasAbilityUberStateCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasAbilityUberStateCondition__VTable vtable;
    };

    struct PlayerAbilityStateMatcher__Fields {
        struct UberStateMatcher__Fields _;
    };

    struct PlayerAbilityStateMatcher {
        struct PlayerAbilityStateMatcher__Class* klass;
        MonitorData* monitor;
        struct PlayerAbilityStateMatcher__Fields fields;
    };

    struct PlayerAbilityStateMatcher__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetIdToTypeMap;
        VirtualInvokeData Resolve;
        VirtualInvokeData GetIdToTypeMap_1;
    };

    struct PlayerAbilityStateMatcher__StaticFields {
    };

    struct PlayerAbilityStateMatcher__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAbilityStateMatcher__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAbilityStateMatcher__VTable vtable;
    };

    struct __declspec(align(8)) PlayerAbilityStatePair__Fields {
        int32_t State;
        AbilityType__Enum Ability;

        bool HasAbility;
    };

    struct PlayerAbilityStatePair {
        struct PlayerAbilityStatePair__Class* klass;
        MonitorData* monitor;
        struct PlayerAbilityStatePair__Fields fields;
    };

    struct PlayerAbilityStatePair__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerAbilityStatePair__StaticFields {
    };

    struct PlayerAbilityStatePair__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAbilityStatePair__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAbilityStatePair__VTable vtable;
    };

    struct PlayerHoldingTorchUberStateCondition__Fields {
        struct UberStateCondition__Fields _;
    };

    struct PlayerHoldingTorchUberStateCondition {
        struct PlayerHoldingTorchUberStateCondition__Class* klass;
        MonitorData* monitor;
        struct PlayerHoldingTorchUberStateCondition__Fields fields;
    };

    struct PlayerHoldingTorchUberStateCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct PlayerHoldingTorchUberStateCondition__StaticFields {
    };

    struct PlayerHoldingTorchUberStateCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerHoldingTorchUberStateCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerHoldingTorchUberStateCondition__VTable vtable;
    };

    struct SceneUberStateCondition__Fields {
        struct UberStateCondition__Fields _;
    };

    struct SceneUberStateCondition {
        struct SceneUberStateCondition__Class* klass;
        MonitorData* monitor;
        struct SceneUberStateCondition__Fields fields;
    };

    struct SceneUberStateCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct SceneUberStateCondition__StaticFields {
        struct Nullable_1_UnityEngine_Vector2_ CustomPosition;
    };

    struct SceneUberStateCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneUberStateCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneUberStateCondition__VTable vtable;
    };

    enum class SceneUberStateCondition_PositionSource__Enum : int32_t {
        None = 0x00000000,
        Player = 0x00000001,
        Custom = 0x00000002,
    };

    struct SceneUberStateCondition_PositionSource__Enum__Boxed {
        struct SceneUberStateCondition_PositionSource__Enum__Class* klass;
        MonitorData* monitor;
        SceneUberStateCondition_PositionSource__Enum value;
    };

    struct SceneUberStateCondition_PositionSource__Enum__VTable {
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

    struct SceneUberStateCondition_PositionSource__Enum__StaticFields {
    };

    struct SceneUberStateCondition_PositionSource__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneUberStateCondition_PositionSource__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneUberStateCondition_PositionSource__Enum__VTable vtable;
    };

    struct DynamicBrightnessSource__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 Size;
        float Radius;
        float FalloffSize;
        float Brigthness;
        struct WeightController* TimeFadeController;
        float m_currentInfluenceMultiplier;
        float m_currentDistanceToCamera;
        struct Bounds m_bounds;
        bool m_insideFrustum;
    };

    struct DynamicBrightnessSource {
        struct DynamicBrightnessSource__Class* klass;
        MonitorData* monitor;
        struct DynamicBrightnessSource__Fields fields;
    };

    enum class Ease_Easing__Enum : int32_t {
        Linear = 0x00000000,
        InQuad = 0x00000001,
        OutQuad = 0x00000002,
        InOutQuad = 0x00000003,
        OutInQuad = 0x00000004,
        InCubic = 0x00000005,
        OutCubic = 0x00000006,
        InOutCubic = 0x00000007,
        OutInCubic = 0x00000008,
        InQuart = 0x00000009,
        OutQuart = 0x0000000a,
        InOutQuart = 0x0000000b,
        OutInQuart = 0x0000000c,
        InQuint = 0x0000000d,
        OutQuint = 0x0000000e,
        InOutQuint = 0x0000000f,
        OutInQuint = 0x00000010,
        InSin = 0x00000011,
        OutSin = 0x00000012,
        InOutSin = 0x00000013,
        OutInSin = 0x00000014,
        InExp = 0x00000015,
        OutExp = 0x00000016,
        InOutExp = 0x00000017,
        OutInExp = 0x00000018,
        InCirc = 0x00000019,
        OutCirc = 0x0000001a,
        InOutCirc = 0x0000001b,
        OutInCirc = 0x0000001c,
        InElastic = 0x0000001d,
        OutElastic = 0x0000001e,
        InOutElastic = 0x0000001f,
        OutInElastic = 0x00000020,
        InBounce = 0x00000021,
        OutBounce = 0x00000022,
        InOutBounce = 0x00000023,
        OutInBounce = 0x00000024,
        InBack = 0x00000025,
        OutBack = 0x00000026,
        InOutBack = 0x00000027,
        OutInBack = 0x00000028,
    };

    struct Ease_Easing__Enum__Boxed {
        struct Ease_Easing__Enum__Class* klass;
        MonitorData* monitor;
        Ease_Easing__Enum value;
    };

    struct __declspec(align(8)) WeightController__Fields {
        float SpeedIn;
        float SpeedOut;
        Ease_Easing__Enum m_easingFunction;

        float m_timer;
        float m_weight;
    };

    struct WeightController {
        struct WeightController__Class* klass;
        MonitorData* monitor;
        struct WeightController__Fields fields;
    };

    struct Ease_Easing__Enum__VTable {
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

    struct Ease_Easing__Enum__StaticFields {
    };

    struct Ease_Easing__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Ease_Easing__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Ease_Easing__Enum__VTable vtable;
    };

    struct WeightController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WeightController__StaticFields {
    };

    struct WeightController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeightController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeightController__VTable vtable;
    };

    struct DynamicBrightnessSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateBrigthnessInfluence;
        VirtualInvokeData get_BrightnessInfluceOrder;
        VirtualInvokeData get_BrightnessInfluceAdditive;
        VirtualInvokeData get_BrightnessInfluceMultiplicative;
        VirtualInvokeData get_ContributeToAdditive;
        VirtualInvokeData get_ContributeToMultiplicative;
        VirtualInvokeData get_BrightnessInfluceWeight;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
    };

    struct DynamicBrightnessSource__StaticFields {
    };

    struct DynamicBrightnessSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicBrightnessSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicBrightnessSource__VTable vtable;
    };

    struct IBrigthnessContributionAgent {
        struct IBrigthnessContributionAgent__Class* klass;
        MonitorData* monitor;
    };

    struct IBrigthnessContributionAgent__VTable {
        VirtualInvokeData get_BrightnessInfluceOrder;
        VirtualInvokeData get_BrightnessInfluceAdditive;
        VirtualInvokeData get_BrightnessInfluceMultiplicative;
        VirtualInvokeData get_ContributeToAdditive;
        VirtualInvokeData get_ContributeToMultiplicative;
        VirtualInvokeData get_BrightnessInfluceWeight;
    };

    struct IBrigthnessContributionAgent__StaticFields {
    };

    struct IBrigthnessContributionAgent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IBrigthnessContributionAgent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IBrigthnessContributionAgent__VTable vtable;
    };

    struct GlobalBrightnessController {
        struct GlobalBrightnessController__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_IBrigthnessContributionAgent___Fields {
        struct IBrigthnessContributionAgent__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IBrigthnessContributionAgent_ {
        struct List_1_IBrigthnessContributionAgent___Class* klass;
        MonitorData* monitor;
        struct List_1_IBrigthnessContributionAgent___Fields fields;
    };

    struct IBrigthnessContributionAgent__Array {
        struct IBrigthnessContributionAgent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IBrigthnessContributionAgent* vector[32];
    };

    struct IEnumerator_1_IBrigthnessContributionAgent_ {
        struct IEnumerator_1_IBrigthnessContributionAgent___Class* klass;
        MonitorData* monitor;
    };

    struct IBrigthnessContributionAgent__Array__VTable {
    };

    struct IBrigthnessContributionAgent__Array__StaticFields {
    };

    struct IBrigthnessContributionAgent__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IBrigthnessContributionAgent__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IBrigthnessContributionAgent__Array__VTable vtable;
    };

    struct IEnumerator_1_IBrigthnessContributionAgent___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_IBrigthnessContributionAgent___StaticFields {
    };

    struct IEnumerator_1_IBrigthnessContributionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_IBrigthnessContributionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_IBrigthnessContributionAgent___VTable vtable;
    };

    struct List_1_IBrigthnessContributionAgent___VTable {
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

    struct List_1_IBrigthnessContributionAgent___StaticFields {
        struct IBrigthnessContributionAgent__Array* _emptyArray;
    };

    struct List_1_IBrigthnessContributionAgent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_IBrigthnessContributionAgent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_IBrigthnessContributionAgent___VTable vtable;
    };

    struct GlobalBrightnessController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GlobalBrightnessController__StaticFields {
        float LightsGlobalDarkeningMultiplier;
        float LightsGlobalDarkeningOffset;
        float _GlobalBrightness_k__BackingField;
        float _GlobalBrightnessDebugOverride_k__BackingField;
        struct SceneDefaultSettingsHelper* s_helper;
        struct List_1_IBrigthnessContributionAgent_* s_contributions;
        bool s_listeningToSceneChangedEvents;
    };

    struct GlobalBrightnessController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlobalBrightnessController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlobalBrightnessController__VTable vtable;
    };

    struct TempBrigthnessContributionAgent {
        GlobalBrightnessController_BrigthnessContributionOrder__Enum _BrightnessInfluceOrder_k__BackingField;

        float _BrightnessInfluceAdditive_k__BackingField;
        float _BrightnessInfluceMultiplicative_k__BackingField;
        bool _ContributeToAdditive_k__BackingField;
        bool _ContributeToMultiplicative_k__BackingField;
        struct WeightController* m_fadeController;
    };

    struct TempBrigthnessContributionAgent__Boxed {
        struct TempBrigthnessContributionAgent__Class* klass;
        MonitorData* monitor;
        struct TempBrigthnessContributionAgent fields;
    };

    struct TempBrigthnessContributionAgent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateBrigthnessInfluence;
        VirtualInvokeData get_BrightnessInfluceOrder;
        VirtualInvokeData get_BrightnessInfluceAdditive;
        VirtualInvokeData get_BrightnessInfluceMultiplicative;
        VirtualInvokeData get_ContributeToAdditive;
        VirtualInvokeData get_ContributeToMultiplicative;
        VirtualInvokeData get_BrightnessInfluceWeight;
    };

    struct TempBrigthnessContributionAgent__StaticFields {
    };

    struct TempBrigthnessContributionAgent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TempBrigthnessContributionAgent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TempBrigthnessContributionAgent__VTable vtable;
    };

    struct UberDofCache__Fields {
        struct ScriptableObject__Fields _;
    };

    struct UberDofCache {
        struct UberDofCache__Class* klass;
        MonitorData* monitor;
        struct UberDofCache__Fields fields;
    };

    struct UberDofCache__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberDofCache__StaticFields {
        struct UberDofCache* s_instance;
    };

    struct UberDofCache__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberDofCache__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberDofCache__VTable vtable;
    };

    struct __declspec(align(8)) UberDofCache_DOFBucket__Fields {
        struct UberDofCacheDictionary* m_textureCache;
        struct Vector2 Blur;
    };

    struct UberDofCache_DOFBucket {
        struct UberDofCache_DOFBucket__Class* klass;
        MonitorData* monitor;
        struct UberDofCache_DOFBucket__Fields fields;
    };

    struct __declspec(align(8)) UberShaderDictionary_2_System_String_System_Int32___Fields {
        struct Dictionary_2_System_String_System_Int32_* m_dictionary;
        struct List_1_System_String_* m_keys;
        struct List_1_System_Int32_* m_values;
    };

    struct UberShaderDictionary_2_System_String_System_Int32_ {
        struct UberShaderDictionary_2_System_String_System_Int32___Class* klass;
        MonitorData* monitor;
        struct UberShaderDictionary_2_System_String_System_Int32___Fields fields;
    };

    struct UberDofCacheDictionary__Fields {
        struct UberShaderDictionary_2_System_String_System_Int32___Fields _;
    };

    struct UberDofCacheDictionary {
        struct UberDofCacheDictionary__Class* klass;
        MonitorData* monitor;
        struct UberDofCacheDictionary__Fields fields;
    };

    struct UberShaderDictionary_2_System_String_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    };

    struct UberShaderDictionary_2_System_String_System_Int32___StaticFields {
    };

    struct UberShaderDictionary_2_System_String_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderDictionary_2_System_String_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderDictionary_2_System_String_System_Int32___VTable vtable;
    };

    struct UberDofCacheDictionary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    };

    struct UberDofCacheDictionary__StaticFields {
    };

    struct UberDofCacheDictionary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberDofCacheDictionary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberDofCacheDictionary__VTable vtable;
    };

    struct UberDofCache_DOFBucket__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberDofCache_DOFBucket__StaticFields {
    };

    struct UberDofCache_DOFBucket__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberDofCache_DOFBucket__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberDofCache_DOFBucket__VTable vtable;
    };

    struct CageMath__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct CageMath {
        struct CageMath__Class* klass;
        MonitorData* monitor;
        struct CageMath__Fields fields;
    };

} // namespace app
