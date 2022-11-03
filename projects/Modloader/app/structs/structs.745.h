namespace app {
    struct NightCrawlerRetaliationController__Fields {
        struct Condition_1__Fields _;
        float Timeout;
        struct DamageReceiver* DamageReceiver;
        struct PlayerInsideZoneChecker* PlayerKillZone;
        float m_timer;
        bool m_damageTaken;
        bool m_resetDamageTakenFlag;
        struct Enum__Array* m_entries;
    };

    struct NightCrawlerRetaliationController {
        struct NightCrawlerRetaliationController__Class* klass;
        MonitorData* monitor;
        struct NightCrawlerRetaliationController__Fields fields;
    };

    struct NightCrawlerRetaliationController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData GetEntries;
        VirtualInvokeData Evaluate;
        VirtualInvokeData get_ShouldSkip;
    };

    struct NightCrawlerRetaliationController__StaticFields {
    };

    struct NightCrawlerRetaliationController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NightCrawlerRetaliationController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NightCrawlerRetaliationController__VTable vtable;
    };

    struct PlayerDisabler__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct PlayerDisabler {
        struct PlayerDisabler__Class* klass;
        MonitorData* monitor;
        struct PlayerDisabler__Fields fields;
    };

    struct PlayerDisabler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerDisabler__StaticFields {
    };

    struct PlayerDisabler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerDisabler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerDisabler__VTable vtable;
    };

    struct TimelineBranchingControllerTest__Fields {
        struct MonoBehaviour__Fields _;
        bool Skip;
        struct Enum__Array* Entries;
    };

    struct TimelineBranchingControllerTest {
        struct TimelineBranchingControllerTest__Class* klass;
        MonitorData* monitor;
        struct TimelineBranchingControllerTest__Fields fields;
    };

    struct TimelineBranchingControllerTest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEntries;
        VirtualInvokeData Evaluate;
        VirtualInvokeData get_ShouldSkip;
    };

    struct TimelineBranchingControllerTest__StaticFields {
    };

    struct TimelineBranchingControllerTest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimelineBranchingControllerTest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimelineBranchingControllerTest__VTable vtable;
    };

    enum class BaurEntity_State__Enum : int32_t {
        BlockingGate = 0x00000000,
        UnblockedGate = 0x00000001,
        Awakened = 0x00000002,
        Introduced = 0x00000003,
    };

    struct BaurEntity_State__Enum__Boxed {
        struct BaurEntity_State__Enum__Class* klass;
        MonitorData* monitor;
        BaurEntity_State__Enum value;
    };

    struct BaurEntity_State__Enum__VTable {
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

    struct BaurEntity_State__Enum__StaticFields {
    };

    struct BaurEntity_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaurEntity_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaurEntity_State__Enum__VTable vtable;
    };

    struct BaurEntity_c {
        struct BaurEntity_c__Class* klass;
        MonitorData* monitor;
    };

    struct BaurEntity_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BaurEntity_c__StaticFields {
        struct BaurEntity_c* __9;
        struct Func_1_Boolean_* __9__36_0;
        struct Action* __9__41_0;
        struct Action* __9__45_0;
        struct Action* __9__46_0;
    };

    struct BaurEntity_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaurEntity_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaurEntity_c__VTable vtable;
    };

    struct EntityReactionBehaviour_1_BaurEntity___Fields {
        struct EntityReactionBehaviour__Fields _;
    };

    struct EntityReactionBehaviour_1_BaurEntity_ {
        struct EntityReactionBehaviour_1_BaurEntity___Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour_1_BaurEntity___Fields fields;
    };

    struct EntityHitReactionBehaviour_1_BaurEntity___Fields {
        struct EntityReactionBehaviour_1_BaurEntity___Fields _;
        struct List_1_DamageType_* DamageTypePreventingInterruption;
        struct List_1_DamageWeight_* DamageWeightPreventingInterruption;
        struct HashSet_1_DamageType_* m_damageTypePreventingInterruption;
        struct HashSet_1_DamageWeight_* m_damageWeightPreventingInterruption;
        bool _HasLocomotion_k__BackingField;
        struct CharacterPlatformMovement* m_platformMovement;
        EntityWeightData_EntityWeight__Enum m_weight;

        struct HitReactionSettings* m_kickbackSettings;
    };

    struct EntityHitReactionBehaviour_1_BaurEntity_ {
        struct EntityHitReactionBehaviour_1_BaurEntity___Class* klass;
        MonitorData* monitor;
        struct EntityHitReactionBehaviour_1_BaurEntity___Fields fields;
    };

    struct BaurHitReactionBehaviour__Fields {
        struct EntityHitReactionBehaviour_1_BaurEntity___Fields _;
    };

    struct BaurHitReactionBehaviour {
        struct BaurHitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct BaurHitReactionBehaviour__Fields fields;
    };

    struct EntityReactionBehaviour_1_BaurEntity___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData __unknown;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData get_RunInParallel;
        VirtualInvokeData get_CanInterruptSelf;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData CanInterrupt;
        VirtualInvokeData HandleReasonToNotInterrupt;
    };

    struct EntityReactionBehaviour_1_BaurEntity___StaticFields {
    };

    struct EntityReactionBehaviour_1_BaurEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityReactionBehaviour_1_BaurEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityReactionBehaviour_1_BaurEntity___VTable vtable;
    };

    struct EntityHitReactionBehaviour_1_BaurEntity___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData get_RunInParallel;
        VirtualInvokeData get_CanInterruptSelf;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData CanInterrupt;
        VirtualInvokeData HandleReasonToNotInterrupt;
        VirtualInvokeData IsDamageTypePreventingInterruption;
        VirtualInvokeData IsInterruptingDamageWeight;
    };

    struct EntityHitReactionBehaviour_1_BaurEntity___StaticFields {
    };

    struct EntityHitReactionBehaviour_1_BaurEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityHitReactionBehaviour_1_BaurEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityHitReactionBehaviour_1_BaurEntity___VTable vtable;
    };

    struct BaurHitReactionBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData get_RunInParallel;
        VirtualInvokeData get_CanInterruptSelf;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData CanInterrupt;
        VirtualInvokeData HandleReasonToNotInterrupt;
        VirtualInvokeData IsDamageTypePreventingInterruption;
        VirtualInvokeData IsInterruptingDamageWeight;
    };

    struct BaurHitReactionBehaviour__StaticFields {
    };

    struct BaurHitReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaurHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaurHitReactionBehaviour__VTable vtable;
    };

    struct BaurIdle__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* IdleTimeline;
        struct MoonTimeline* m_currentTimeline;
    };

    struct BaurIdle {
        struct BaurIdle__Class* klass;
        MonitorData* monitor;
        struct BaurIdle__Fields fields;
    };

    struct BaurIdle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
    };

    struct BaurIdle__StaticFields {
    };

    struct BaurIdle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaurIdle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaurIdle__VTable vtable;
    };

    enum class BaurInteractionBehaviour_InteractionStates__Enum : int32_t {
        None = 0x00000000,
        Intro = 0x00000001,
        AfterIntroRepeat = 0x00000002,
    };

    struct BaurInteractionBehaviour_InteractionStates__Enum__Boxed {
        struct BaurInteractionBehaviour_InteractionStates__Enum__Class* klass;
        MonitorData* monitor;
        BaurInteractionBehaviour_InteractionStates__Enum value;
    };

    struct BaurInteractionBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        BaurInteractionBehaviour_InteractionStates__Enum m_currentState;

        struct MoonTimeline* m_currentTimeline;
        struct MoonReference_1_IDialogCallbackNotifier_* IntroductionDialogNode;
        struct MoonReference_1_IDialogCallbackNotifier_* AfterIntroRepeatDialogNode;
        struct IDialogCallbackNotifier* m_resolvedIntroductionNode;
        struct IDialogCallbackNotifier* m_resolvedAfterIntroRepeatNode;
        struct BaurEntity* m_npcEntity;
        struct MoonTimeline* TalkA;
        struct MoonTimeline* IdleA;
    };

    struct BaurInteractionBehaviour {
        struct BaurInteractionBehaviour__Class* klass;
        MonitorData* monitor;
        struct BaurInteractionBehaviour__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_IDialogCallbackNotifier___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_IDialogCallbackNotifier_* m_cachedProxyType;
        struct IDialogCallbackNotifier* m_volatileValue;
    };

    struct MoonReference_1_IDialogCallbackNotifier_ {
        struct MoonReference_1_IDialogCallbackNotifier___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_IDialogCallbackNotifier___Fields fields;
    };

    struct IMoonType_1_IDialogCallbackNotifier_ {
        struct IMoonType_1_IDialogCallbackNotifier___Class* klass;
        MonitorData* monitor;
    };

    struct IDialogCallbackNotifier {
        struct IDialogCallbackNotifier__Class* klass;
        MonitorData* monitor;
    };

    struct BaurInteractionBehaviour_InteractionStates__Enum__VTable {
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

    struct BaurInteractionBehaviour_InteractionStates__Enum__StaticFields {
    };

    struct BaurInteractionBehaviour_InteractionStates__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaurInteractionBehaviour_InteractionStates__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaurInteractionBehaviour_InteractionStates__Enum__VTable vtable;
    };

    struct IMoonType_1_IDialogCallbackNotifier___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_IDialogCallbackNotifier___StaticFields {
    };

    struct IMoonType_1_IDialogCallbackNotifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_IDialogCallbackNotifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_IDialogCallbackNotifier___VTable vtable;
    };

    struct IDialogCallbackNotifier__VTable {
        VirtualInvokeData get_OnActivated;
        VirtualInvokeData set_OnActivated;
        VirtualInvokeData get_OnFinished;
        VirtualInvokeData set_OnFinished;
    };

    struct IDialogCallbackNotifier__StaticFields {
    };

    struct IDialogCallbackNotifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDialogCallbackNotifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDialogCallbackNotifier__VTable vtable;
    };

    struct IDialogCallbackNotifier___VTable {
    };

    struct IDialogCallbackNotifier___StaticFields {
    };

    struct IDialogCallbackNotifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDialogCallbackNotifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDialogCallbackNotifier___VTable vtable;
    };

    struct MoonReference_1_IDialogCallbackNotifier___VTable {
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

    struct MoonReference_1_IDialogCallbackNotifier___StaticFields {
    };

    struct MoonReference_1_IDialogCallbackNotifier___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_IDialogCallbackNotifier___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_IDialogCallbackNotifier___VTable vtable;
    };

    struct BaurInteractionBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData get_Status;
        VirtualInvokeData Execute;
        VirtualInvokeData Reset;
        VirtualInvokeData InitializeBehaviourNode;
        VirtualInvokeData CompareTo;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData Execute_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData OnReset;
        VirtualInvokeData OnBehaviourTreeInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct BaurInteractionBehaviour__StaticFields {
    };

    struct BaurInteractionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaurInteractionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaurInteractionBehaviour__VTable vtable;
    };

    struct BaurSelectedMemoryToReplayCondition__Fields {
        struct Condition_1__Fields _;
        bool Inverse;
    };

    struct BaurSelectedMemoryToReplayCondition {
        struct BaurSelectedMemoryToReplayCondition__Class* klass;
        MonitorData* monitor;
        struct BaurSelectedMemoryToReplayCondition__Fields fields;
    };

    struct BaurSelectedMemoryToReplayCondition__VTable {
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

    struct BaurSelectedMemoryToReplayCondition__StaticFields {
    };

    struct BaurSelectedMemoryToReplayCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BaurSelectedMemoryToReplayCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BaurSelectedMemoryToReplayCondition__VTable vtable;
    };

    struct BuilderEntity__Fields {
        struct NPCEntity__Fields _;
        struct MoonAnimation* IdleAnimationLoop;
        struct SerializedBooleanUberState* Introduced;
        struct CheckpointFunctionality ProjectPurchasedCheckpoint;
        struct MoonTimeline* DefaultCurrentProjectTimeline;
        struct MessageProvider* DefaultFinishedProjectMessage;
        bool PurchasedProject;
    };

    struct BuilderEntity {
        struct BuilderEntity__Class* klass;
        MonitorData* monitor;
        struct BuilderEntity__Fields fields;
    };

    struct BuilderEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_BehaviourTree;
        VirtualInvokeData ResolveDamage;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData ShouldKillBubble;
        VirtualInvokeData CreateTimelineParentEntity;
        VirtualInvokeData get_AddChildren;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
        VirtualInvokeData get_ExternalID;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_CameraTargetActive;
        VirtualInvokeData get_CameraTargetPosition;
        VirtualInvokeData get_CameraTargetPadding;
        VirtualInvokeData get_CameraInfluencePosition;
        VirtualInvokeData AdjustCameraTargetWeight;
        VirtualInvokeData get_CameraInfluenceMinDist;
        VirtualInvokeData get_CameraInfluenceMaxDist;
        VirtualInvokeData get_CameraZoomFactor;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData GetTargetData;
        VirtualInvokeData IPortalVisitor_get_Position;
        VirtualInvokeData IPortalVisitor_set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
        VirtualInvokeData get_IsFacingTarget;
        VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
        VirtualInvokeData get_ScreenPadding;
        VirtualInvokeData IsBehaviourTreePaused;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnAwake;
        VirtualInvokeData GetBehaviourTree;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData UnserializedInitialization;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
        VirtualInvokeData OnSuspendedStay;
        VirtualInvokeData OnUpdate_2;
        VirtualInvokeData EnterSpawningState;
        VirtualInvokeData UpdateSpawningState;
        VirtualInvokeData ExitSpawningState;
        VirtualInvokeData EnterDecisionMakingState;
        VirtualInvokeData UpdateDecisionMakingState;
        VirtualInvokeData ExitDecisionMakingState;
        VirtualInvokeData EnterReactionState;
        VirtualInvokeData UpdateReactionState;
        VirtualInvokeData ExitReactionState;
        VirtualInvokeData EnterCinematicState;
        VirtualInvokeData UpdateCinematicState;
        VirtualInvokeData ExitCinematicState;
        VirtualInvokeData GetActiveLocomotion;
        VirtualInvokeData OnContactDamageDealt;
        VirtualInvokeData OnHandleFireDamage;
        VirtualInvokeData OnHandleIceDamage;
        VirtualInvokeData OnDamageReceived;
        VirtualInvokeData OnDamageBlocked;
        VirtualInvokeData DeactivateDamageReceivers;
        VirtualInvokeData InstantKill;
        VirtualInvokeData OnDied;
        VirtualInvokeData SpawnOrbs;
        VirtualInvokeData OnDiedOutOfBounds;
        VirtualInvokeData OnEndDeathBehaviour;
        VirtualInvokeData OnPostRestoreCheckpoint;
        VirtualInvokeData ResetEntity;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData IsFacingPoint;
        VirtualInvokeData ResolveDamage_1;
        VirtualInvokeData get_CameraTargetActive_1;
        VirtualInvokeData get_CameraTargetPosition_1;
        VirtualInvokeData get_CameraTargetPadding_1;
        VirtualInvokeData get_CameraInfluenceMinDist_1;
        VirtualInvokeData get_CameraInfluenceMaxDist_1;
        VirtualInvokeData get_CameraZoomFactor_1;
        VirtualInvokeData get_TargetType_1;
        VirtualInvokeData AdjustCameraTargetWeight_1;
        VirtualInvokeData get_IsAggroed;
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
        VirtualInvokeData get_CanEffectivelyStartInteraction;
        VirtualInvokeData get_ActivationButton_1;
        VirtualInvokeData get_DialogActorName_1;
        VirtualInvokeData get_InteractionActorName_1;
        VirtualInvokeData UpdateAnimParameter;
        VirtualInvokeData CanInteractWithCharacter_1;
        VirtualInvokeData OnInteractionStart_1;
        VirtualInvokeData InteractionUpdate_1;
        VirtualInvokeData OnInteractionEnd_1;
        VirtualInvokeData get_ActivationMode_1;
        VirtualInvokeData SetInteractionCameraOffsetZone;
    };

    struct BuilderEntity__StaticFields {
        struct BuilderEntity* _Instance_k__BackingField;
    };

    struct BuilderEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuilderEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuilderEntity__VTable vtable;
    };

    struct BuilderEntity_c {
        struct BuilderEntity_c__Class* klass;
        MonitorData* monitor;
    };

    struct BuilderEntity_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BuilderEntity_c__StaticFields {
        struct BuilderEntity_c* __9;
        struct Func_1_Boolean_* __9__20_0;
    };

    struct BuilderEntity_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuilderEntity_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuilderEntity_c__VTable vtable;
    };

    struct BuilderIntroNode__Fields {
        struct TimelineNode__Fields _;
        struct BuilderIdle* BuilderIdle;
        struct BuilderEntity* BuilderEntity;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* StandingIntro;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* SittingIntro;
    };

    struct BuilderIntroNode {
        struct BuilderIntroNode__Class* klass;
        MonitorData* monitor;
        struct BuilderIntroNode__Fields fields;
    };

    struct BuilderIdle__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* IdleOnGroundTimeline;
        struct MoonTimeline* IdleInTreeTimeline;
        struct EventTriggerAnimator* NoLongerInTreeTriggerEvent;
        bool m_onGround;
        struct MoonTimeline* m_currentTimeline;
    };

    struct BuilderIdle {
        struct BuilderIdle__Class* klass;
        MonitorData* monitor;
        struct BuilderIdle__Fields fields;
    };

    struct BuilderIdle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
    };

    struct BuilderIdle__StaticFields {
    };

    struct BuilderIdle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuilderIdle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuilderIdle__VTable vtable;
    };

    struct BuilderIntroNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Initialize;
        VirtualInvokeData get_Actor;
        VirtualInvokeData get_Transitions;
        VirtualInvokeData get_Decorators;
        VirtualInvokeData get_InteractionNodeStatus;
        VirtualInvokeData get_InteractionSettings;
        VirtualInvokeData get_HasInputTransitions;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData get_OnActivated;
        VirtualInvokeData set_OnActivated;
        VirtualInvokeData get_OnFinished;
        VirtualInvokeData set_OnFinished;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct BuilderIntroNode__StaticFields {
    };

    struct BuilderIntroNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BuilderIntroNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BuilderIntroNode__VTable vtable;
    };

    struct NPCEntityPlaceholder_NPCInteractionSettings {
        bool OverrideAnchorSetup;
        NPCAnchorConfiguration__Enum AnchorSetup;

        bool OverridePlayerAnchors;
        struct Vector2 PlayerAnchorLeft;
        struct Vector2 PlayerAnchorRight;
        bool OverrideInteractionSetup;
        float InteractionRadius;
        struct Vector2 InteractionOffset;
        bool OverrideInteractionCameraSettings;
        struct Vector3 NpcCameraTargetLeft;
        struct Vector3 NpcCameraTargetRight;
        bool OverrideInteractionCameraShopSettings;
        struct Vector3 ShopNpcCameraTargetLeft;
        struct Vector3 ShopNpcCameraTargetRight;
    };

    struct NPCEntityPlaceholder_NPCInteractionSettings__Boxed {
        struct NPCEntityPlaceholder_NPCInteractionSettings__Class* klass;
        MonitorData* monitor;
        struct NPCEntityPlaceholder_NPCInteractionSettings fields;
    };

} // namespace app
