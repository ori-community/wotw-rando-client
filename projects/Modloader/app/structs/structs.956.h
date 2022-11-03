namespace app {
    struct EnergyDoorSlot__StaticFields {
    };

    struct EnergyDoorSlot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyDoorSlot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyDoorSlot__VTable vtable;
    };

    struct EnergyDoorSlot__Array__VTable {
    };

    struct EnergyDoorSlot__Array__StaticFields {
    };

    struct EnergyDoorSlot__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyDoorSlot__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyDoorSlot__Array__VTable vtable;
    };

    struct IEnumerator_1_EnergyDoorSlot___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_EnergyDoorSlot___StaticFields {
    };

    struct IEnumerator_1_EnergyDoorSlot___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_EnergyDoorSlot___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_EnergyDoorSlot___VTable vtable;
    };

    struct List_1_EnergyDoorSlot___VTable {
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

    struct List_1_EnergyDoorSlot___StaticFields {
        struct EnergyDoorSlot__Array* _emptyArray;
    };

    struct List_1_EnergyDoorSlot___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_EnergyDoorSlot___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_EnergyDoorSlot___VTable vtable;
    };

    struct EnergyDoor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct EnergyDoor__StaticFields {
    };

    struct EnergyDoor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyDoor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyDoor__VTable vtable;
    };

    struct FishingMiniGameController__Fields {
        struct MonoBehaviour__Fields _;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        float InteractionRadius;
        struct MoonSwarm* Swarm;
        struct UberSwarmPOI* POI;
        struct AnimationCurve* AttractForceMultiplierNormalized;
        float CatchTime;
        float BaitMoveSpeed;
        struct VerletStructure* RodVerletStructure;
        int32_t VerletJointIndex;
        struct MoonTimeline* EnterTimeline;
        struct MoonTimeline* LoopTimeline;
        struct MoonTimeline* ExitTimeline;
        float m_attractForce;
        struct StateMachine_2* m_stateMachine;
        struct FishingMiniGameController_States* m_states;
    };

    struct FishingMiniGameController {
        struct FishingMiniGameController__Class* klass;
        MonitorData* monitor;
        struct FishingMiniGameController__Fields fields;
    };

    struct __declspec(align(8)) FishingMiniGameController_States__Fields {
        struct FishingMiniGameController_FishingState* Idle;
        struct FishingMiniGameController_FishingState* Entering;
        struct FishingMiniGameController_FishingState* Fishing;
        struct FishingMiniGameController_FishingState* Exiting;
    };

    struct FishingMiniGameController_States {
        struct FishingMiniGameController_States__Class* klass;
        MonitorData* monitor;
        struct FishingMiniGameController_States__Fields fields;
    };

    struct __declspec(align(8)) FishingMiniGameController_FishingState__Fields {
        struct FishingMiniGameController* m_fishingGame;
        struct StateMachine_2* m_stateMachine;
        struct FishingMiniGameController_States* m_states;
        float m_stateTime;
    };

    struct FishingMiniGameController_FishingState {
        struct FishingMiniGameController_FishingState__Class* klass;
        MonitorData* monitor;
        struct FishingMiniGameController_FishingState__Fields fields;
    };

    struct FishingMiniGameController_FishingState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
        VirtualInvokeData OnSuspended;
        VirtualInvokeData OnUnsuspended;
    };

    struct FishingMiniGameController_FishingState__StaticFields {
    };

    struct FishingMiniGameController_FishingState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishingMiniGameController_FishingState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishingMiniGameController_FishingState__VTable vtable;
    };

    struct FishingMiniGameController_States__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FishingMiniGameController_States__StaticFields {
    };

    struct FishingMiniGameController_States__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishingMiniGameController_States__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishingMiniGameController_States__VTable vtable;
    };

    struct FishingMiniGameController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct FishingMiniGameController__StaticFields {
    };

    struct FishingMiniGameController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishingMiniGameController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishingMiniGameController__VTable vtable;
    };

    struct FishingMiniGameController_IdleState__Fields {
        struct FishingMiniGameController_FishingState__Fields _;
    };

    struct FishingMiniGameController_IdleState {
        struct FishingMiniGameController_IdleState__Class* klass;
        MonitorData* monitor;
        struct FishingMiniGameController_IdleState__Fields fields;
    };

    struct FishingMiniGameController_IdleState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
        VirtualInvokeData OnSuspended;
        VirtualInvokeData OnUnsuspended;
    };

    struct FishingMiniGameController_IdleState__StaticFields {
    };

    struct FishingMiniGameController_IdleState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishingMiniGameController_IdleState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishingMiniGameController_IdleState__VTable vtable;
    };

    struct FishingMiniGameController_EnteringState__Fields {
        struct FishingMiniGameController_FishingState__Fields _;
    };

    struct FishingMiniGameController_EnteringState {
        struct FishingMiniGameController_EnteringState__Class* klass;
        MonitorData* monitor;
        struct FishingMiniGameController_EnteringState__Fields fields;
    };

    struct FishingMiniGameController_EnteringState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
        VirtualInvokeData OnSuspended;
        VirtualInvokeData OnUnsuspended;
    };

    struct FishingMiniGameController_EnteringState__StaticFields {
    };

    struct FishingMiniGameController_EnteringState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishingMiniGameController_EnteringState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishingMiniGameController_EnteringState__VTable vtable;
    };

    struct FishingMiniGameController_FishingLoopState__Fields {
        struct FishingMiniGameController_FishingState__Fields _;
    };

    struct FishingMiniGameController_FishingLoopState {
        struct FishingMiniGameController_FishingLoopState__Class* klass;
        MonitorData* monitor;
        struct FishingMiniGameController_FishingLoopState__Fields fields;
    };

    struct FishingMiniGameController_FishingLoopState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
        VirtualInvokeData OnSuspended;
        VirtualInvokeData OnUnsuspended;
    };

    struct FishingMiniGameController_FishingLoopState__StaticFields {
    };

    struct FishingMiniGameController_FishingLoopState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishingMiniGameController_FishingLoopState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishingMiniGameController_FishingLoopState__VTable vtable;
    };

    struct FishingMiniGameController_ExitingState__Fields {
        struct FishingMiniGameController_FishingState__Fields _;
    };

    struct FishingMiniGameController_ExitingState {
        struct FishingMiniGameController_ExitingState__Class* klass;
        MonitorData* monitor;
        struct FishingMiniGameController_ExitingState__Fields fields;
    };

    struct FishingMiniGameController_ExitingState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnExit_1;
        VirtualInvokeData OnSuspended;
        VirtualInvokeData OnUnsuspended;
    };

    struct FishingMiniGameController_ExitingState__StaticFields {
    };

    struct FishingMiniGameController_ExitingState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishingMiniGameController_ExitingState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishingMiniGameController_ExitingState__VTable vtable;
    };

    struct FlipPlantLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct TextureAnimation* PlantUp;
        struct TextureAnimation* PlantDown;
        struct SpriteAnimator* m_spriteAnimator;
    };

    struct FlipPlantLogic {
        struct FlipPlantLogic__Class* klass;
        MonitorData* monitor;
        struct FlipPlantLogic__Fields fields;
    };

    struct FlipPlantLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FlipPlantLogic__StaticFields {
    };

    struct FlipPlantLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FlipPlantLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FlipPlantLogic__VTable vtable;
    };

    struct FlyToUserInterfaceSpot__Fields {
        struct Suspendable__Fields _;
        struct Vector2 ScreenPosition;
        float Duration;
        struct AnimationCurve* TimeCurve;
        struct Vector3 m_startPosition;
        struct Transform* m_transform;
        float m_time;
        struct Vector2 BiezerIn;
        struct Vector2 BiezerOut;
        bool _IsSuspended_k__BackingField;
    };

    struct FlyToUserInterfaceSpot {
        struct FlyToUserInterfaceSpot__Class* klass;
        MonitorData* monitor;
        struct FlyToUserInterfaceSpot__Fields fields;
    };

    struct FlyToUserInterfaceSpot__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
    };

    struct FlyToUserInterfaceSpot__StaticFields {
    };

    struct FlyToUserInterfaceSpot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FlyToUserInterfaceSpot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FlyToUserInterfaceSpot__VTable vtable;
    };

    struct BrightnessZoneModifier__Fields {
        struct MonoBehaviour__Fields _;
        float BrightnessMultiplier;
        bool m_visible;
        float _BrightnessInfluceWeight_k__BackingField;
    };

    struct BrightnessZoneModifier {
        struct BrightnessZoneModifier__Class* klass;
        MonitorData* monitor;
        struct BrightnessZoneModifier__Fields fields;
    };

    struct BrightnessZoneModifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_VisibleOnInspector;
        VirtualInvokeData set_VisibleOnInspector;
        VirtualInvokeData UpdateModifier;
        VirtualInvokeData InitializeModifier;
        VirtualInvokeData CleanUpModifier;
        VirtualInvokeData get_BrightnessInfluceOrder;
        VirtualInvokeData get_BrightnessInfluceAdditive;
        VirtualInvokeData get_BrightnessInfluceMultiplicative;
        VirtualInvokeData get_ContributeToAdditive;
        VirtualInvokeData get_ContributeToMultiplicative;
        VirtualInvokeData get_BrightnessInfluceWeight;
    };

    struct BrightnessZoneModifier__StaticFields {
    };

    struct BrightnessZoneModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BrightnessZoneModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BrightnessZoneModifier__VTable vtable;
    };

    struct CircleGameplayZone__Fields {
        struct BaseZone__Fields _;
        float OuterRadius;
        float InnerRadius;
    };

    struct CircleGameplayZone {
        struct CircleGameplayZone__Class* klass;
        MonitorData* monitor;
        struct CircleGameplayZone__Fields fields;
    };

    struct CircleGameplayZone__VTable {
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
        VirtualInvokeData get_Category;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_ShouldUpdateWhileDisabled;
        VirtualInvokeData ContainsPoint;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData get_Category_1;
        VirtualInvokeData get_ShouldSerialize;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
        VirtualInvokeData AwakeInternal;
        VirtualInvokeData DestroyInternal;
        VirtualInvokeData OnEnableEditor;
        VirtualInvokeData OnDisableEditor;
        VirtualInvokeData EditorUpdate;
        VirtualInvokeData ShouldTriggerZoneChange;
        VirtualInvokeData OnZoneChange;
    };

    struct CircleGameplayZone__StaticFields {
    };

    struct CircleGameplayZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CircleGameplayZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CircleGameplayZone__VTable vtable;
    };

    struct ColliderMask__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_UnityEngine_Collider_* Colliders;
        struct LayerMask LayerToIgnore;
        struct List_1_UnityEngine_Collider_* m_intersectingColliders;
    };

    struct ColliderMask {
        struct ColliderMask__Class* klass;
        MonitorData* monitor;
        struct ColliderMask__Fields fields;
    };

    struct ColliderMask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ColliderMask__StaticFields {
    };

    struct ColliderMask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColliderMask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColliderMask__VTable vtable;
    };

    struct ColorVariationZoneModifier__Fields {
        struct MonoBehaviour__Fields _;
        struct ColorVariationSettings* Settings;
        bool m_visible;
        float _ColorVariationWeight_k__BackingField;
    };

    struct ColorVariationZoneModifier {
        struct ColorVariationZoneModifier__Class* klass;
        MonitorData* monitor;
        struct ColorVariationZoneModifier__Fields fields;
    };

    enum class ColorVariationManager_ColorVariationInfluencerOrder__Enum : int32_t {
        ModularZone = 0x00000000,
        Override = 0x00002710,
    };

    struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__Boxed {
        struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class* klass;
        MonitorData* monitor;
        ColorVariationManager_ColorVariationInfluencerOrder__Enum value;
    };

    struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__VTable {
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

    struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__StaticFields {
    };

    struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorVariationManager_ColorVariationInfluencerOrder__Enum__VTable vtable;
    };

    struct ColorVariationZoneModifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_VisibleOnInspector;
        VirtualInvokeData set_VisibleOnInspector;
        VirtualInvokeData UpdateModifier;
        VirtualInvokeData InitializeModifier;
        VirtualInvokeData CleanUpModifier;
        VirtualInvokeData get_ColorVariationWeight;
        VirtualInvokeData get_ColorVariationInfluencerOrder;
        VirtualInvokeData get_ColorVariationSettings;
    };

    struct ColorVariationZoneModifier__StaticFields {
    };

    struct ColorVariationZoneModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColorVariationZoneModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColorVariationZoneModifier__VTable vtable;
    };

    struct DofZoneModifier__Fields {
        struct MonoBehaviour__Fields _;
        bool m_visible;
        float BackgroundBlurOffset;
        float CenterBlurOffset;
        float ForegroundBlurOffset;
        float FarBackgroundDownsamplingOffset;
        float BackgroundDownsamplingOffset;
        float CenterDownsamplingOffset;
        float ForegroundDownsamplingOffset;
        float CloseForegroundDownsamplingOffset;
        bool OverrideEverything;
        float _SliceRenderSettingsWeight_k__BackingField;
    };

    struct DofZoneModifier {
        struct DofZoneModifier__Class* klass;
        MonitorData* monitor;
        struct DofZoneModifier__Fields fields;
    };

    enum class SliceRenderSettingsInfluencerOrder__Enum : int32_t {
        DofZone = 0x00000000,
        DofAnimator = 0x0000000a,
        Override = 0x00002710,
    };

    struct SliceRenderSettingsInfluencerOrder__Enum__Boxed {
        struct SliceRenderSettingsInfluencerOrder__Enum__Class* klass;
        MonitorData* monitor;
        SliceRenderSettingsInfluencerOrder__Enum value;
    };

    struct SliceRenderSettingsInfluencerOrder__Enum__VTable {
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

    struct SliceRenderSettingsInfluencerOrder__Enum__StaticFields {
    };

    struct SliceRenderSettingsInfluencerOrder__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SliceRenderSettingsInfluencerOrder__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SliceRenderSettingsInfluencerOrder__Enum__VTable vtable;
    };

    struct DofZoneModifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_VisibleOnInspector;
        VirtualInvokeData set_VisibleOnInspector;
        VirtualInvokeData UpdateModifier;
        VirtualInvokeData InitializeModifier;
        VirtualInvokeData CleanUpModifier;
        VirtualInvokeData GetBlurOffsetForLayer;
        VirtualInvokeData GetDownsamplingOffsetForLayer;
        VirtualInvokeData get_SliceRenderSettingsWeight;
        VirtualInvokeData get_SliceRenderInfluenceOrder;
        VirtualInvokeData get_SliceRenderInfluenceOrderOffset;
    };

    struct DofZoneModifier__StaticFields {
    };

    struct DofZoneModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DofZoneModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DofZoneModifier__VTable vtable;
    };

    struct FovZoneModifier__Fields {
        struct MonoBehaviour__Fields _;
        bool m_visible;
        float FieldOfViewOffset;
        struct Transform* FocalCenter;
        float _FOVInfluencerWeight_k__BackingField;
    };

    struct FovZoneModifier {
        struct FovZoneModifier__Class* klass;
        MonitorData* monitor;
        struct FovZoneModifier__Fields fields;
    };

    struct FovZoneModifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_VisibleOnInspector;
        VirtualInvokeData set_VisibleOnInspector;
        VirtualInvokeData UpdateModifier;
        VirtualInvokeData InitializeModifier;
        VirtualInvokeData CleanUpModifier;
        VirtualInvokeData get_FOVInfluencerIsValid;
        VirtualInvokeData get_FOVInfluencerWeight;
        VirtualInvokeData get_FOVInfluencerOffset;
        VirtualInvokeData get_FOVInfluencerTargetZ;
    };

    struct FovZoneModifier__StaticFields {
    };

    struct FovZoneModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FovZoneModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FovZoneModifier__VTable vtable;
    };

    enum class ModularZone_Target__Enum : int32_t {
        Camera = 0x00000000,
        Player = 0x00000001,
    };

    struct ModularZone_Target__Enum__Boxed {
        struct ModularZone_Target__Enum__Class* klass;
        MonitorData* monitor;
        ModularZone_Target__Enum value;
    };

    struct ModularZone__Fields {
        struct RectangleGameplayZone__Fields _;
        ModularZone_Target__Enum TargetMode;

        struct WeightController* FadeController;
        struct List_1_Moon_MoonReference_1__11* Conditions;
        bool ConditionsPassedEditor;
        struct IModularZoneModifier__Array* m_modifiers;
        float _TimeSinceLastActive_k__BackingField;
        int32_t m_lateEditorRefreshFrame;
        struct List_1_ICondition_* m_resolvedConditions;
    };

    struct ModularZone {
        struct ModularZone__Class* klass;
        MonitorData* monitor;
        struct ModularZone__Fields fields;
    };

    struct IModularZoneModifier {
        struct IModularZoneModifier__Class* klass;
        MonitorData* monitor;
    };

    struct IModularZoneModifier__Array {
        struct IModularZoneModifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IModularZoneModifier* vector[32];
    };

    struct ModularZone_Target__Enum__VTable {
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

    struct ModularZone_Target__Enum__StaticFields {
    };

    struct ModularZone_Target__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ModularZone_Target__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ModularZone_Target__Enum__VTable vtable;
    };

    struct IModularZoneModifier__VTable {
        VirtualInvokeData get_VisibleOnInspector;
        VirtualInvokeData set_VisibleOnInspector;
        VirtualInvokeData UpdateModifier;
        VirtualInvokeData InitializeModifier;
        VirtualInvokeData CleanUpModifier;
    };

    struct IModularZoneModifier__StaticFields {
    };

    struct IModularZoneModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IModularZoneModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IModularZoneModifier__VTable vtable;
    };

    struct IModularZoneModifier__Array__VTable {
    };

    struct IModularZoneModifier__Array__StaticFields {
    };

    struct IModularZoneModifier__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IModularZoneModifier__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IModularZoneModifier__Array__VTable vtable;
    };

    struct ModularZone__VTable {
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
        VirtualInvokeData get_Category;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_ShouldUpdateWhileDisabled;
        VirtualInvokeData ContainsPoint;
        VirtualInvokeData OnEnableRuntime;
        VirtualInvokeData OnDisableRuntime;
        VirtualInvokeData OnZoneUpdate;
        VirtualInvokeData get_Category_1;
        VirtualInvokeData get_ShouldSerialize;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
        VirtualInvokeData AwakeInternal;
        VirtualInvokeData DestroyInternal;
        VirtualInvokeData OnEnableEditor;
        VirtualInvokeData OnDisableEditor;
        VirtualInvokeData EditorUpdate;
        VirtualInvokeData ShouldTriggerZoneChange;
        VirtualInvokeData OnZoneChange;
        VirtualInvokeData get_EditorBounds;
        VirtualInvokeData set_EditorBounds;
        VirtualInvokeData RefreshBounds;
    };

    struct ModularZone__StaticFields {
    };

    struct ModularZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ModularZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ModularZone__VTable vtable;
    };

    struct ModularZoneActiveCondition__Fields {
        struct Condition_1__Fields _;
        float SecondsSinceLastActive;
        struct ModularZone* Zone;
    };

} // namespace app
