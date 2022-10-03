namespace app {
    struct SimpleNPCEntity {
        struct SimpleNPCEntity__Class* klass;
        MonitorData* monitor;
        struct SimpleNPCEntity__Fields fields;
    };

    struct SimpleNPCEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_InteractableType;
        VirtualInvokeData CanInteractWithCharacter;
        VirtualInvokeData OnInteractionStart;
        VirtualInvokeData InteractionUpdate;
        VirtualInvokeData OnInteractionEnd;
        VirtualInvokeData ShouldFinishInteraction;
        VirtualInvokeData get_ActivationMode;
        VirtualInvokeData get_ActivationButton;
        VirtualInvokeData get_InteractionMessageHint;
        VirtualInvokeData get_DialogActorName;
        VirtualInvokeData get_DialogActorAnimator;
        VirtualInvokeData get_DialogActorPosition;
        VirtualInvokeData get_InteractionActorName;
        VirtualInvokeData get_InteractionActorAnimator;
        VirtualInvokeData get_InteractionActorPosition;
        VirtualInvokeData InteractionUpdate_1;
        VirtualInvokeData OnInteractionEnd_1;
        VirtualInvokeData get_ActivationButton_1;
    };

    struct SimpleNPCEntity__StaticFields {
    };

    struct SimpleNPCEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleNPCEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleNPCEntity__VTable vtable;
    };

    struct Input_1 {
        struct Input_1__Class* klass;
        MonitorData* monitor;
    };

    struct Input_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Input_1__StaticFields {
        float Horizontal;
        float Vertical;
        float HorizontalMenu;
        float VerticalMenu;
        int32_t HorizontalDigiPad;
        int32_t VerticalDigiPad;
        int32_t HorizontalKey;
        int32_t VerticalKey;
        float HorizontalAnalogLeft;
        float VerticalAnalogLeft;
        float HorizontalAnalogRight;
        float VerticalAnalogRight;
        float LeftTriggerAxis;
        float RightTriggerAxis;
        struct Vector2 CursorPosition;
        bool CursorMoved;
        struct Input_InputButtonProcessor__Array* m_AllInputProcessors;
    };

    struct Input_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Input_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Input_1__VTable vtable;
    };

    struct AmbienceZone___VTable {
    };

    struct AmbienceZone___StaticFields {
    };

    struct AmbienceZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AmbienceZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AmbienceZone___VTable vtable;
    };

    struct XboxControllerManager__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 m_currentVibrationMagnitude;
        struct Vector2 m_setVibration;
        float m_remainingVibrationDuration;
    };

    struct XboxControllerManager {
        struct XboxControllerManager__Class* klass;
        MonitorData* monitor;
        struct XboxControllerManager__Fields fields;
    };

    struct XboxControllerManager_SetVibrationDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct XboxControllerManager_SetVibrationDelegate {
        struct XboxControllerManager_SetVibrationDelegate__Class* klass;
        MonitorData* monitor;
        struct XboxControllerManager_SetVibrationDelegate__Fields fields;
    };

    struct XboxControllerManager_SetVibrationDelegate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct XboxControllerManager_SetVibrationDelegate__StaticFields {
    };

    struct XboxControllerManager_SetVibrationDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XboxControllerManager_SetVibrationDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XboxControllerManager_SetVibrationDelegate__VTable vtable;
    };

    struct XboxControllerManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XboxControllerManager__StaticFields {
        struct XboxControllerManager* s_currentControllerManager;
        struct JobHandle m_vibrationJobHandle;
        struct XboxControllerManager_SetVibrationDelegate* SetVibrationCallback;
    };

    struct XboxControllerManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XboxControllerManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XboxControllerManager__VTable vtable;
    };

    struct XboxControllerManager_VibrationJob {
        struct Vector2 VibrationValues;
    };

    struct XboxControllerManager_VibrationJob__Boxed {
        struct XboxControllerManager_VibrationJob__Class* klass;
        MonitorData* monitor;
        struct XboxControllerManager_VibrationJob fields;
    };

    struct XboxControllerManager_VibrationJob__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Execute;
    };

    struct XboxControllerManager_VibrationJob__StaticFields {
    };

    struct XboxControllerManager_VibrationJob__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XboxControllerManager_VibrationJob__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XboxControllerManager_VibrationJob__VTable vtable;
    };

    struct __declspec(align(8)) StateConfigurator_1__Fields {
        struct StateMachine_2* m_stateMachine;
        struct IState_2* m_state;
    };

    struct StateConfigurator_1 {
        struct StateConfigurator_1__Class* klass;
        MonitorData* monitor;
        struct StateConfigurator_1__Fields fields;
    };

    struct StateConfigurator_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StateConfigurator_1__StaticFields {
    };

    struct StateConfigurator_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StateConfigurator_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StateConfigurator_1__VTable vtable;
    };

    struct StateMachine_c_1 {
        struct StateMachine_c_1__Class* klass;
        MonitorData* monitor;
    };

    struct StateMachine_c_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StateMachine_c_1__StaticFields {
        struct StateMachine_c_1* __9;
        struct Action_1_fsm_StateMachine_* __9__0_0;
        struct Action_2_fsm_StateMachine_Int32_* __9__0_1;
        struct Action_1_fsm_StateMachine_* __9__1_0;
        struct Action_2_fsm_StateMachine_Int32_* __9__1_1;
    };

    struct StateMachine_c_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StateMachine_c_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StateMachine_c_1__VTable vtable;
    };

    struct __declspec(align(8)) StateMachine_c_DisplayClass35_0__Fields {
        struct IState_2* state;
    };

    struct StateMachine_c_DisplayClass35_0 {
        struct StateMachine_c_DisplayClass35_0__Class* klass;
        MonitorData* monitor;
        struct StateMachine_c_DisplayClass35_0__Fields fields;
    };

    struct StateMachine_c_DisplayClass35_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StateMachine_c_DisplayClass35_0__StaticFields {
    };

    struct StateMachine_c_DisplayClass35_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StateMachine_c_DisplayClass35_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StateMachine_c_DisplayClass35_0__VTable vtable;
    };

    struct State_c_1 {
        struct State_c_1__Class* klass;
        MonitorData* monitor;
    };

    struct State_c_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct State_c_1__StaticFields {
        struct State_c_1* __9;
        struct Action* __9__4_0;
        struct Action* __9__4_1;
        struct Action* __9__4_2;
        struct Action* __9__5_0;
        struct Action* __9__5_1;
        struct Action* __9__5_2;
    };

    struct State_c_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct State_c_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct State_c_1__VTable vtable;
    };

    struct __declspec(align(8)) CallbackState_1__Fields {
        struct IState_2* m_state;
        struct Action* UpdateStateEvent;
        struct Action* OnEnterEvent;
        struct Action* OnExitEvent;
    };

    struct CallbackState_1 {
        struct CallbackState_1__Class* klass;
        MonitorData* monitor;
        struct CallbackState_1__Fields fields;
    };

    struct CallbackState_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
    };

    struct CallbackState_1__StaticFields {
    };

    struct CallbackState_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CallbackState_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CallbackState_1__VTable vtable;
    };

    struct CallbackState_c_1 {
        struct CallbackState_c_1__Class* klass;
        MonitorData* monitor;
    };

    struct CallbackState_c_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CallbackState_c_1__StaticFields {
        struct CallbackState_c_1* __9;
        struct Action* __9__2_0;
        struct Action* __9__2_1;
        struct Action* __9__2_2;
    };

    struct CallbackState_c_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CallbackState_c_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CallbackState_c_1__VTable vtable;
    };

    struct __declspec(align(8)) CompoundState_1__Fields {
        struct IState_2__Array* m_states;
        struct Action* OnUpdateEvent;
        struct Action* OnEnterEvent;
        struct Action* OnExitEvent;
    };

    struct CompoundState_1 {
        struct CompoundState_1__Class* klass;
        MonitorData* monitor;
        struct CompoundState_1__Fields fields;
    };

    struct CompoundState_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
    };

    struct CompoundState_1__StaticFields {
    };

    struct CompoundState_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CompoundState_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CompoundState_1__VTable vtable;
    };

    struct CompoundState_c_1 {
        struct CompoundState_c_1__Class* klass;
        MonitorData* monitor;
    };

    struct CompoundState_c_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CompoundState_c_1__StaticFields {
        struct CompoundState_c_1* __9;
        struct Action* __9__4_0;
        struct Action* __9__4_1;
        struct Action* __9__4_2;
    };

    struct CompoundState_c_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CompoundState_c_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CompoundState_c_1__VTable vtable;
    };

    struct AlwaysCondition {
        struct AlwaysCondition__Class* klass;
        MonitorData* monitor;
    };

    struct AlwaysCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct AlwaysCondition__StaticFields {
    };

    struct AlwaysCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AlwaysCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AlwaysCondition__VTable vtable;
    };

    struct __declspec(align(8)) AllConditions_1__Fields {
        struct IEnumerable_1_ICondition_* m_conditions;
    };

    struct AllConditions_1 {
        struct AllConditions_1__Class* klass;
        MonitorData* monitor;
        struct AllConditions_1__Fields fields;
    };

    struct AllConditions_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct AllConditions_1__StaticFields {
    };

    struct AllConditions_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AllConditions_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AllConditions_1__VTable vtable;
    };

    struct __declspec(align(8)) AnyConditions_1__Fields {
        struct IEnumerable_1_ICondition_* m_conditions;
    };

    struct AnyConditions_1 {
        struct AnyConditions_1__Class* klass;
        MonitorData* monitor;
        struct AnyConditions_1__Fields fields;
    };

    struct AnyConditions_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct AnyConditions_1__StaticFields {
    };

    struct AnyConditions_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnyConditions_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnyConditions_1__VTable vtable;
    };

    struct __declspec(align(8)) FuncCondition_1__Fields {
        struct Func_1_Boolean_* m_function;
    };

    struct FuncCondition_1 {
        struct FuncCondition_1__Class* klass;
        MonitorData* monitor;
        struct FuncCondition_1__Fields fields;
    };

    struct FuncCondition_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct FuncCondition_1__StaticFields {
    };

    struct FuncCondition_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FuncCondition_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FuncCondition_1__VTable vtable;
    };

    struct __declspec(align(8)) AnimationEndedCondition__Fields {
        struct SpriteAnimatorWithTransitions* m_spriteAnimator;
    };

    struct AnimationEndedCondition {
        struct AnimationEndedCondition__Class* klass;
        MonitorData* monitor;
        struct AnimationEndedCondition__Fields fields;
    };

    struct AnimationEndedCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct AnimationEndedCondition__StaticFields {
    };

    struct AnimationEndedCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimationEndedCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimationEndedCondition__VTable vtable;
    };

    struct PlayerInRangeCondition {
        struct PlayerInRangeCondition__Class* klass;
        MonitorData* monitor;
    };

    struct PlayerInRangeCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
    };

    struct PlayerInRangeCondition__StaticFields {
    };

    struct PlayerInRangeCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerInRangeCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerInRangeCondition__VTable vtable;
    };

    struct __declspec(align(8)) OnReceiveDamage__Fields {
        struct Damage* Damage;
    };

    struct OnReceiveDamage {
        struct OnReceiveDamage__Class* klass;
        MonitorData* monitor;
        struct OnReceiveDamage__Fields fields;
    };

    struct OnReceiveDamage__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnReceiveDamage__StaticFields {
    };

    struct OnReceiveDamage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnReceiveDamage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnReceiveDamage__VTable vtable;
    };

    struct __declspec(align(8)) OnCollisionEnter__Fields {
        struct Collision* Collision;
    };

    struct OnCollisionEnter {
        struct OnCollisionEnter__Class* klass;
        MonitorData* monitor;
        struct OnCollisionEnter__Fields fields;
    };

    struct OnCollisionEnter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnCollisionEnter__StaticFields {
    };

    struct OnCollisionEnter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnCollisionEnter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnCollisionEnter__VTable vtable;
    };

    struct __declspec(align(8)) OnCollisionStay__Fields {
        struct Collision* Collision;
    };

    struct OnCollisionStay {
        struct OnCollisionStay__Class* klass;
        MonitorData* monitor;
        struct OnCollisionStay__Fields fields;
    };

    struct OnCollisionStay__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnCollisionStay__StaticFields {
    };

    struct OnCollisionStay__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnCollisionStay__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnCollisionStay__VTable vtable;
    };

    struct __declspec(align(8)) OnCollisionExit__Fields {
        struct Collision* Collision;
    };

    struct OnCollisionExit {
        struct OnCollisionExit__Class* klass;
        MonitorData* monitor;
        struct OnCollisionExit__Fields fields;
    };

    struct OnCollisionExit__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnCollisionExit__StaticFields {
    };

    struct OnCollisionExit__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnCollisionExit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnCollisionExit__VTable vtable;
    };

    struct OnFixedUpdate_1 {
        struct OnFixedUpdate_1__Class* klass;
        MonitorData* monitor;
    };

    struct OnFixedUpdate_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnFixedUpdate_1__StaticFields {
    };

    struct OnFixedUpdate_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnFixedUpdate_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnFixedUpdate_1__VTable vtable;
    };

    struct OnAnimationEnded {
        struct OnAnimationEnded__Class* klass;
        MonitorData* monitor;
    };

    struct OnAnimationEnded__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnAnimationEnded__StaticFields {
    };

    struct OnAnimationEnded__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnAnimationEnded__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnAnimationEnded__VTable vtable;
    };

    struct OnAnimationOrTransitionEnded {
        struct OnAnimationOrTransitionEnded__Class* klass;
        MonitorData* monitor;
    };

    struct OnAnimationOrTransitionEnded__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnAnimationOrTransitionEnded__StaticFields {
    };

    struct OnAnimationOrTransitionEnded__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnAnimationOrTransitionEnded__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnAnimationOrTransitionEnded__VTable vtable;
    };

    struct OnSeinNearEnter {
        struct OnSeinNearEnter__Class* klass;
        MonitorData* monitor;
    };

    struct OnSeinNearEnter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnSeinNearEnter__StaticFields {
    };

    struct OnSeinNearEnter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnSeinNearEnter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnSeinNearEnter__VTable vtable;
    };

    struct OnSeinNearExit {
        struct OnSeinNearExit__Class* klass;
        MonitorData* monitor;
    };

    struct OnSeinNearExit__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnSeinNearExit__StaticFields {
    };

    struct OnSeinNearExit__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnSeinNearExit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnSeinNearExit__VTable vtable;
    };

    struct __declspec(align(8)) OnSpiritLeashed__Fields {
        struct Vector3 Position;
    };

    struct OnSpiritLeashed {
        struct OnSpiritLeashed__Class* klass;
        MonitorData* monitor;
        struct OnSpiritLeashed__Fields fields;
    };

    struct OnSpiritLeashed__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnSpiritLeashed__StaticFields {
    };

    struct OnSpiritLeashed__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnSpiritLeashed__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnSpiritLeashed__VTable vtable;
    };

    struct __declspec(align(8)) OnTrapped__Fields {
        float _Amount_k__BackingField;
        DamageType__Enum _DamageType_k__BackingField;
    };

    struct OnTrapped {
        struct OnTrapped__Class* klass;
        MonitorData* monitor;
        struct OnTrapped__Fields fields;
    };

    struct OnTrapped__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnTrapped__StaticFields {
    };

    struct OnTrapped__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnTrapped__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnTrapped__VTable vtable;
    };

    struct OnUntrapped {
        struct OnUntrapped__Class* klass;
        MonitorData* monitor;
    };

    struct OnUntrapped__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnUntrapped__StaticFields {
    };

    struct OnUntrapped__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnUntrapped__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnUntrapped__VTable vtable;
    };

    struct OnEnterBash {
        struct OnEnterBash__Class* klass;
        MonitorData* monitor;
    };

    struct OnEnterBash__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnEnterBash__StaticFields {
    };

    struct OnEnterBash__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnEnterBash__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnEnterBash__VTable vtable;
    };

    struct BehaviourEventIdGenerator {
        struct BehaviourEventIdGenerator__Class* klass;
        MonitorData* monitor;
    };

    struct BehaviourEventIdGenerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BehaviourEventIdGenerator__StaticFields {
        int32_t s_Id;
    };

    struct BehaviourEventIdGenerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BehaviourEventIdGenerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BehaviourEventIdGenerator__VTable vtable;
    };

    struct __declspec(align(8)) BehaviourState__Fields {
        struct Action* m_onBegin;
        struct Action* m_onInterrupt;
        struct Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* m_onUpdate;
        struct String* _Name_k__BackingField;
    };

    struct BehaviourState {
        struct BehaviourState__Class* klass;
        MonitorData* monitor;
        struct BehaviourState__Fields fields;
    };

} // namespace app
