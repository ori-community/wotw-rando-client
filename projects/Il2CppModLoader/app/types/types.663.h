namespace app {
struct StunnBehaviour__StaticFields {
};

struct StunnBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StunnBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StunnBehaviour__VTable vtable;
};

struct StaggerBehaviour__VTable {
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
};

struct StaggerBehaviour__StaticFields {
};

struct StaggerBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StaggerBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StaggerBehaviour__VTable vtable;
};

enum class StunnedBehaviour_StunnedState__Enum : int32_t {
    Stunned = 0x00000000,
    Recovering = 0x00000001,
};

struct StunnedBehaviour_StunnedState__Enum__Boxed {
    struct StunnedBehaviour_StunnedState__Enum__Class *klass;
    MonitorData *monitor;
    StunnedBehaviour_StunnedState__Enum value;
    
};

struct StunnedBehaviour__Fields {
    struct EntityTask__Fields _;
    float StunnedTime;
    struct MoonTimeline *StunnedIdleAnimatorNew;
    struct MoonTimeline *RecoveryAnimatorNew;
    struct LegacyTimelineSequence *StunnedIdleAnimator;
    struct LegacyTimelineSequence *RecoveryAnimator;
    struct Locomotion *m_locomotion;
    float m_timer;
    StunnedBehaviour_StunnedState__Enum State;
    
};

struct StunnedBehaviour {
    struct StunnedBehaviour__Class *klass;
    MonitorData *monitor;
    struct StunnedBehaviour__Fields fields;
};

struct StunnedBehaviour_StunnedState__Enum__VTable {
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

struct StunnedBehaviour_StunnedState__Enum__StaticFields {
};

struct StunnedBehaviour_StunnedState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StunnedBehaviour_StunnedState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StunnedBehaviour_StunnedState__Enum__VTable vtable;
};

struct StunnedBehaviour__VTable {
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
};

struct StunnedBehaviour__StaticFields {
};

struct StunnedBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StunnedBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StunnedBehaviour__VTable vtable;
};

struct TimelineBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct LegacyTimelineSequence *_TimelineSequence_k__BackingField;
    float _AnimationSpeed_k__BackingField;
    bool nonInterruptable;
    bool stopMovement;
    struct RootMotionProcessorData *RootMotion;
    struct Locomotion *m_groundLocomotion;
};

struct TimelineBehaviour {
    struct TimelineBehaviour__Class *klass;
    MonitorData *monitor;
    struct TimelineBehaviour__Fields fields;
};

struct TimelineBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ExecutingObject;
    VirtualInvokeData set_ExecutingObject;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_Status;
    VirtualInvokeData get_ShouldPauseTree;
    VirtualInvokeData get_ShouldPauseLocomotion;
    VirtualInvokeData get_Utility;
    VirtualInvokeData get_DebugData;
    VirtualInvokeData get_OnEndBehaviourEvent;
    VirtualInvokeData set_OnEndBehaviourEvent;
    VirtualInvokeData Execute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData UpdateBehaviour;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_Utility_1;
    VirtualInvokeData Interrupt_1;
    VirtualInvokeData GetShouldPauseTree;
    VirtualInvokeData GetShouldPauseLocomotion;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnUpdateBehaviour;
    VirtualInvokeData OnEndBehaviour;
};

struct TimelineBehaviour__StaticFields {
};

struct TimelineBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineBehaviour__VTable vtable;
};

struct TimelineDeathBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct LegacyTimelineSequence *DeathTimeline;
    struct MoonTimeline *DeathTimelineNew;
    struct RootMotionProcessorData *RootMotion;
    struct Locomotion *m_locomotion;
};

struct TimelineDeathBehaviour {
    struct TimelineDeathBehaviour__Class *klass;
    MonitorData *monitor;
    struct TimelineDeathBehaviour__Fields fields;
};

struct TimelineDeathBehaviour__VTable {
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
};

struct TimelineDeathBehaviour__StaticFields {
};

struct TimelineDeathBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineDeathBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineDeathBehaviour__VTable vtable;
};

struct UpperKickReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline *UpperKickSequenceNew;
    struct MoonTimeline *DownKickSequenceNew;
    struct MoonTimeline *EarlyCollisionGroundNew;
    struct MoonTimeline *EarlyCollisionCeillingNew;
    struct LegacyTimelineSequence *UpperKickSequence;
    struct LegacyTimelineSequence *EarlyCollisionGround;
    struct LegacyTimelineSequence *EarlyCollisionCeilling;
    struct RootMotionProcessorData *RootMotion;
    struct RootMotionProcessorData *EarlyCollisionRootMotion;
    struct Event_1 *UpperKickSoundEvent;
    struct Switch_1 *UpperKickSoundSwitch;
    struct Condition_1 *UpperKickSoundSwitchCondition;
    struct Event_1 *DownKickSoundEvent;
    struct Switch_1 *DownKickSoundSwitch;
    struct Condition_1 *DownKickSoundSwitchCondition;
    struct Locomotion *m_locomotion;
    struct LegacyTimelineSequence *m_runningSequence;
    struct MoonTimeline *m_runningSequenceNew;
};

struct UpperKickReactionBehaviour {
    struct UpperKickReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct UpperKickReactionBehaviour__Fields fields;
};

struct UpperKickReactionBehaviour__VTable {
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
    VirtualInvokeData get_ShouldSkipUpdate;
};

struct UpperKickReactionBehaviour__StaticFields {
};

struct UpperKickReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpperKickReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpperKickReactionBehaviour__VTable vtable;
};

struct UpperKickReactionBehaviour_c {
    struct UpperKickReactionBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct UpperKickReactionBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpperKickReactionBehaviour_c__StaticFields {
    struct UpperKickReactionBehaviour_c *__9;
    struct Action *__9__23_0;
    struct Action *__9__24_0;
    struct Action *__9__28_0;
    struct Action *__9__28_1;
    struct Action *__9__28_2;
    struct Action *__9__28_3;
    struct Action *__9__28_4;
    struct Action *__9__28_5;
};

struct UpperKickReactionBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpperKickReactionBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpperKickReactionBehaviour_c__VTable vtable;
};

struct WorldEventsSelector {
    struct WorldEventsSelector__Class *klass;
    MonitorData *monitor;
};

struct WorldEventsSelector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WorldEventsSelector__StaticFields {
};

struct WorldEventsSelector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsSelector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsSelector__VTable vtable;
};

struct EntitySpawnTask__Fields {
    struct EntityTask__Fields _;
    struct List_1_Moon_Timeline_EventTriggerAnimator_ *ReactivateDamageDealersTriggers;
    bool m_areDamageDealersActive;
    AnimatorCullingMode__Enum m_originalAnimatorCullingMode;
    
    struct EntitySpawnSetup *_SpawnSetup_k__BackingField;
};

struct EntitySpawnTask {
    struct EntitySpawnTask__Class *klass;
    MonitorData *monitor;
    struct EntitySpawnTask__Fields fields;
};

struct CommonSpawnTask__Fields {
    struct EntitySpawnTask__Fields _;
    struct MoonTimeline *SpawnTimeline;
    struct MoonTimeline *m_currentTimeline;
};

struct CommonSpawnTask {
    struct CommonSpawnTask__Class *klass;
    MonitorData *monitor;
    struct CommonSpawnTask__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_Timeline_EventTriggerAnimator___Fields {
    struct EventTriggerAnimator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_EventTriggerAnimator_ {
    struct List_1_Moon_Timeline_EventTriggerAnimator___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_EventTriggerAnimator___Fields fields;
};

struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator_ {
    struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___VTable vtable;
};

struct List_1_Moon_Timeline_EventTriggerAnimator___VTable {
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

struct List_1_Moon_Timeline_EventTriggerAnimator___StaticFields {
    struct EventTriggerAnimator__Array *_emptyArray;
};

struct List_1_Moon_Timeline_EventTriggerAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_EventTriggerAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Timeline_EventTriggerAnimator___VTable vtable;
};

struct EntitySpawnTask__VTable {
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
    VirtualInvokeData __unknown_1;
    VirtualInvokeData SetActivateDamageDealers;
    VirtualInvokeData SetPlatformMovementColliderEnabledState;
};

struct EntitySpawnTask__StaticFields {
};

struct EntitySpawnTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntitySpawnTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntitySpawnTask__VTable vtable;
};

struct CommonSpawnTask__VTable {
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
    VirtualInvokeData SetActivateDamageDealers;
    VirtualInvokeData SetPlatformMovementColliderEnabledState;
};

struct CommonSpawnTask__StaticFields {
};

struct CommonSpawnTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CommonSpawnTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CommonSpawnTask__VTable vtable;
};

struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Fields {
    struct ChangeStateSetupHolder__Fields _;
};

struct EntitySpawnSetup_AfterSpawnStateSetupHolder {
    struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Class *klass;
    MonitorData *monitor;
    struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Fields fields;
};

struct EntitySpawnSetup_AfterSpawnStateSetupHolder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData get_NewStateName;
};

struct EntitySpawnSetup_AfterSpawnStateSetupHolder__StaticFields {
};

struct EntitySpawnSetup_AfterSpawnStateSetupHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntitySpawnSetup_AfterSpawnStateSetupHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntitySpawnSetup_AfterSpawnStateSetupHolder__VTable vtable;
};

struct TimelineEntityTask__Fields {
    struct EntityTask__Fields _;
    struct MoonTimeline *Timeline;
    bool PauseLocomotion;
    BehaviourStatus__Enum StatusWhileRunning;
    
};

struct TimelineEntityTask {
    struct TimelineEntityTask__Class *klass;
    MonitorData *monitor;
    struct TimelineEntityTask__Fields fields;
};

struct TimelineEntityTask__VTable {
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
};

struct TimelineEntityTask__StaticFields {
};

struct TimelineEntityTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineEntityTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineEntityTask__VTable vtable;
};

struct EntityReactionBehaviour_1_BugHornEntity___Fields {
    struct EntityReactionBehaviour__Fields _;
};

struct EntityReactionBehaviour_1_BugHornEntity_ {
    struct EntityReactionBehaviour_1_BugHornEntity___Class *klass;
    MonitorData *monitor;
    struct EntityReactionBehaviour_1_BugHornEntity___Fields fields;
};

enum class HornBugDeathReaction_State__Enum : int32_t {
    Invalid = -1,
    Hit = 0x00000000,
    Fall = 0x00000001,
    DeathEnd = 0x00000002,
    Drowning = 0x00000003,
};

struct HornBugDeathReaction_State__Enum__Boxed {
    struct HornBugDeathReaction_State__Enum__Class *klass;
    MonitorData *monitor;
    HornBugDeathReaction_State__Enum value;
    
};

struct HornBugDeathReaction__Fields {
    struct EntityReactionBehaviour_1_BugHornEntity___Fields _;
    struct MoonTimeline *HitTimeline;
    struct MoonTimeline *FallTimeline;
    struct MoonTimeline *DeathEndTimeline;
    struct DeathStartEffectSpawnSetting *DeathStartEffect;
    struct MoonTimeline *m_currentTimeline;
    struct HornBugHitReactionBehaviour *m_hitReactionBehaviour;
    struct CharacterPlatformMovement *m_platformMovement;
    struct Locomotion *m_locomotion;
    bool m_waitingForDeath;
    HornBugDeathReaction_State__Enum m_state;
    
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct MoonTimeline *DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject *SplashPrefab;
    struct RootMotionProcessorData *RootMotion;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
    float m_prevYVelocity;
    bool m_isMovingVertically;
};

struct HornBugDeathReaction {
    struct HornBugDeathReaction__Class *klass;
    MonitorData *monitor;
    struct HornBugDeathReaction__Fields fields;
};

struct __declspec(align(8)) DeathStartEffectSpawnSetting__Fields {
    struct MoonReference_1_UnityEngine_GameObject_ *Prefab;
    struct MoonReference_1_UnityEngine_Transform_ *InstantiationLocation;
    struct Vector3 InstantiationOffset;
    struct MoonBool *ShouldMirror;
    struct Entity *m_entity;
};

struct DeathStartEffectSpawnSetting {
    struct DeathStartEffectSpawnSetting__Class *klass;
    MonitorData *monitor;
    struct DeathStartEffectSpawnSetting__Fields fields;
};

struct EntityHitReactionBehaviour_1_BugHornEntity___Fields {
    struct EntityReactionBehaviour_1_BugHornEntity___Fields _;
    struct List_1_DamageType_ *DamageTypePreventingInterruption;
    struct List_1_DamageWeight_ *DamageWeightPreventingInterruption;
    struct HashSet_1_DamageType_ *m_damageTypePreventingInterruption;
    struct HashSet_1_DamageWeight_ *m_damageWeightPreventingInterruption;
    bool _HasLocomotion_k__BackingField;
    struct CharacterPlatformMovement *m_platformMovement;
    EntityWeightData_EntityWeight__Enum m_weight;
    
    struct HitReactionSettings *m_kickbackSettings;
};

struct EntityHitReactionBehaviour_1_BugHornEntity_ {
    struct EntityHitReactionBehaviour_1_BugHornEntity___Class *klass;
    MonitorData *monitor;
    struct EntityHitReactionBehaviour_1_BugHornEntity___Fields fields;
};

struct HornBugHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_BugHornEntity___Fields _;
    struct MoonTimeline *HitFront;
    struct MoonTimeline *HitBack;
    struct MoonTimeline *HitAir;
    struct MoonTimeline *HitAdditive;
    struct MoonTimeline *Knockup;
    struct MoonTimeline *Knockback;
    struct MoonTimeline *Knockforward;
    struct MoonTimeline *HitAirAdditive;
    struct List_1_Moon_Timeline_EventTriggerAnimator_ *FlipEvents;
    struct MoonTimeline *HitShake;
    struct EntityDamageEvent *_DamageEvent_k__BackingField;
    float HitForceMultiplier;
    float HeavyHitForceMultiplier;
    float MinYForceForKnockup;
    float MinYForceFromHeavyAttacks;
    bool m_exitEarly;
    struct MoonTimeline *m_currentTimeline;
    struct ReactionFallingBehaviour *m_fallBehaviour;
    struct GroundEntityLocomotion *m_locomotion;
    struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition_ *DamageConditionsPreventingInterruption;
    struct Event_1 *OnAnyHitEvent;
    bool DebugPauseOnKnockup;
};

struct HornBugHitReactionBehaviour {
    struct HornBugHitReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct HornBugHitReactionBehaviour__Fields fields;
};

struct __declspec(align(8)) List_1_DamageWeight___Fields {
    struct DamageWeight__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DamageWeight_ {
    struct List_1_DamageWeight___Class *klass;
    MonitorData *monitor;
    struct List_1_DamageWeight___Fields fields;
};

struct DamageWeight__Enum__Array {
    struct DamageWeight__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    DamageWeight__Enum vector[32];
};

struct IEnumerator_1_DamageWeight_ {
    struct IEnumerator_1_DamageWeight___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) HashSet_1_DamageWeight___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_DamageWeight___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_DamageWeight_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_DamageWeight_ {
    struct HashSet_1_DamageWeight___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_DamageWeight___Fields fields;
};

struct HashSet_1_T_Slot_DamageWeight_ {
    int32_t hashCode;
    int32_t next;
    DamageWeight__Enum value;
    
};

struct HashSet_1_T_Slot_DamageWeight___Boxed {
    struct HashSet_1_T_Slot_DamageWeight___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_DamageWeight_ fields;
};

struct HashSet_1_T_Slot_DamageWeight___Array {
    struct HashSet_1_T_Slot_DamageWeight___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_DamageWeight_ vector[32];
};

struct IEqualityComparer_1_DamageWeight_ {
    struct IEqualityComparer_1_DamageWeight___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_DamageWeight_ {
    struct IEnumerable_1_DamageWeight___Class *klass;
    MonitorData *monitor;
};

struct HitReactionSettings__Fields {
    struct ScriptableObject__Fields _;
    bool IsAdditiveKickbackEnabled;
    float KickbackForceDampening;
    float KickbackBaseMultiplier;
    float KickbackVeryLightDamageMultiplier;
    float KickbackLightDamageMultiplier;
    float KickbackMediumDamageMultiplier;
    float KickbackHeavyDamageMultiplier;
    float KickbackHeavierDamageMultiplier;
    float KickbackLightEntityMultiplier;
    float KickbackMediumEntityMultiplier;
    float KickbackHeavyEntityMultiplier;
    bool IsAdditiveAnimScalingEnabled;
    struct Vector2 AdditiveAnimDamageAmountRange;
    struct Vector2 AdditiveAnimWeightRange;
};

struct HitReactionSettings {
    struct HitReactionSettings__Class *klass;
    MonitorData *monitor;
    struct HitReactionSettings__Fields fields;
};

enum class ReactionFallingBehaviour_FallState__Enum : int32_t {
    Resting = 0x00000000,
    Falling = 0x00000001,
    Landing = 0x00000002,
    HandlingCollision = 0x00000003,
};

struct ReactionFallingBehaviour_FallState__Enum__Boxed {
    struct ReactionFallingBehaviour_FallState__Enum__Class *klass;
    MonitorData *monitor;
    ReactionFallingBehaviour_FallState__Enum value;
    
};

struct ReactionFallingBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline *LandSequenceNew;
    struct MoonTimeline *ShortLandSequence;
    struct LegacyTimelineSequence *LandSequence;
    struct MoonTimeline *FallingTimeline;
    struct MoonTimeline *FallingUpToDownTimeline;
    struct MoonTimeline *FallingUpToDownFastTimeline;
    float VerticalSpeedToEnableUpToDownTransition;
    float VerticalSpeedToStartUpToDownTransition;
    struct MoonAnimation *FallingAnimation;
    bool LoopFallingAnimation;
    struct MoonTimeline *BounceTimeline;
    struct MoonTimeline *SoftBodySlamTimeline;
    struct MoonTimeline *HardBodySlamTimeline;
    struct MoonTimeline *ShakeTimeline;
    struct FloatAnimationParameter *FallSpeedParameter;
    int32_t AnimationPriority;
    struct RootMotionProcessorData *LandRootMotion;
    float CollisionHitStop;
    struct GameObject *ImpactEffect;
    float MinBounceForce;
    float MaxBounceForce;
    float WallRepelForce;
    float BounceEnergyConservation;
    bool LooseExtraEnergyWhenHitWall;
    float ExtraEnergyPercentageTooLooseWhenHitWall;
    float OutOfCameraViewDecelerationX;
    float OutOfCameraViewDecelerationY;
    struct ActiveAnimationHandle m_animation;
    struct Locomotion *m_locomotion;
    ReactionFallingBehaviour_FallState__Enum m_state;
    
    struct Vector3 m_collisionNormal;
    float m_collisionTimer;
    struct Vector2 m_bounceSpeed;
    float m_effectInstantiationTimer;
    bool m_playedShake;
    float m_bounceMultiplier;
    bool m_shouldDoUpToDownTransition;
    bool m_hasDoneUpToDownTransition;
    bool m_useShorLandAnimTrigger;
    bool m_hasHardBodySlamTimeline;
    bool m_hasSoftBodySlamTimeline;
};

struct ReactionFallingBehaviour {
    struct ReactionFallingBehaviour__Class *klass;
    MonitorData *monitor;
    struct ReactionFallingBehaviour__Fields fields;
};

struct __declspec(align(8)) List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Fields {
    struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition_ {
    struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Class *klass;
    MonitorData *monitor;
    struct List_1_HornBugHitReactionBehaviour_NonInterruptibleTaskCondition___Fields fields;
};

struct __declspec(align(8)) HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Fields {
    struct MoonReference_1_Moon_BehaviourSystem_ITask_ *Task;
    struct List_1_DamageType_ *DamageTypes;
};

struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition {
    struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Class *klass;
    MonitorData *monitor;
    struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Fields fields;
};

struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
    struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HornBugHitReactionBehaviour_NonInterruptibleTaskCondition *vector[32];
};

}
