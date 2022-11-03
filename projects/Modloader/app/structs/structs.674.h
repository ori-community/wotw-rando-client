namespace app {
    struct NickDeathReaction__Fields {
        struct EntityReactionBehaviour_1_NickGrayboxEntity___Fields _;
        struct MoonTimeline* HitTimeline;
        struct MoonTimeline* SpinTimeline;
        struct MoonTimeline* FallTimeline;
        struct MoonTimeline* BounceTimeline;
        struct MoonTimeline* DeathEndTimeline;
        struct MoonTimeline* Death;
        struct MoonTimeline* m_currentTimeline;
        struct NickHitReactionBehaviour* m_hitReactionBehaviour;
        struct CharacterPlatformMovement* m_platformMovement;
        struct Locomotion* m_locomotion;
        bool m_waitingForDeath;
        NickDeathReaction_DeathState__Enum m_currentState;

        int32_t m_executedDeathBounces;
        int32_t MaxDeathBounces;
        float BounceSpeedY;
        float DeathKickbackMinMagnitude;
        float DeathKickbackMinBoost;
        float DeathKickbackMinUpDirection;
        struct RootMotionProcessorData* RootMotion;
    };

    struct NickDeathReaction {
        struct NickDeathReaction__Class* klass;
        MonitorData* monitor;
        struct NickDeathReaction__Fields fields;
    };

    struct EntityHitReactionBehaviour_1_NickGrayboxEntity___Fields {
        struct EntityReactionBehaviour_1_NickGrayboxEntity___Fields _;
        struct List_1_DamageType_* DamageTypePreventingInterruption;
        struct List_1_DamageWeight_* DamageWeightPreventingInterruption;
        struct HashSet_1_DamageType_* m_damageTypePreventingInterruption;
        struct HashSet_1_DamageWeight_* m_damageWeightPreventingInterruption;
        bool _HasLocomotion_k__BackingField;
        struct CharacterPlatformMovement* m_platformMovement;
        EntityWeightData_EntityWeight__Enum m_weight;

        struct HitReactionSettings* m_kickbackSettings;
    };

    struct EntityHitReactionBehaviour_1_NickGrayboxEntity_ {
        struct EntityHitReactionBehaviour_1_NickGrayboxEntity___Class* klass;
        MonitorData* monitor;
        struct EntityHitReactionBehaviour_1_NickGrayboxEntity___Fields fields;
    };

    struct NickHitReactionBehaviour__Fields {
        struct EntityHitReactionBehaviour_1_NickGrayboxEntity___Fields _;
        struct MoonTimeline* HitFront;
        struct MoonTimeline* HitBack;
        struct MoonTimeline* HitAir;
        struct MoonTimeline* HitAdditive;
        struct MoonTimeline* Knockup;
        struct MoonTimeline* Knockback;
        struct MoonTimeline* Knockforward;
        struct MoonTimeline* HitAirAdditive;
        struct List_1_Moon_Timeline_EventTriggerAnimator_* FlipEvents;
        struct MoonTimeline* m_currentTimeline;
        struct ReactionFallingBehaviour* m_fallBehaviour;
        struct GroundEntityLocomotion* m_locomotion;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        float AirComboPullInDistanceY;
        float AirComboPullInValue;
        float AirComboPullInDistanceX;
        float AirHorizontalKnockbackMultiplier;
        float GroundHorizontalKnockbackMultiplier;
        float AirHorziontalKnockbackMultiplier;
        float MinForceWhenJuggling;
        float KickbackMultiplier;
        float KnockupMultiplier;
        float KnockupMax;
        float KickbackMax;
        struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition_* DamageConditionsPreventingInterruption;
    };

    struct NickHitReactionBehaviour {
        struct NickHitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct NickHitReactionBehaviour__Fields fields;
    };

    struct __declspec(align(8)) List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___Fields {
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition_ {
        struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___Class* klass;
        MonitorData* monitor;
        struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___Fields fields;
    };

    struct __declspec(align(8)) NickHitReactionBehaviour_NonInterruptibleTaskCondition__Fields {
        struct MoonReference_1_Moon_BehaviourSystem_ITask_* Task;
        struct List_1_DamageType_* DamageTypes;
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition {
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class* klass;
        MonitorData* monitor;
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Fields fields;
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition* vector[32];
    };

    struct IEnumerator_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition_ {
        struct IEnumerator_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___Class* klass;
        MonitorData* monitor;
    };

    struct EntityReactionBehaviour_1_NickGrayboxEntity___VTable {
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

    struct EntityReactionBehaviour_1_NickGrayboxEntity___StaticFields {
    };

    struct EntityReactionBehaviour_1_NickGrayboxEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityReactionBehaviour_1_NickGrayboxEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityReactionBehaviour_1_NickGrayboxEntity___VTable vtable;
    };

    struct EntityHitReactionBehaviour_1_NickGrayboxEntity___VTable {
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

    struct EntityHitReactionBehaviour_1_NickGrayboxEntity___StaticFields {
    };

    struct EntityHitReactionBehaviour_1_NickGrayboxEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityHitReactionBehaviour_1_NickGrayboxEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityHitReactionBehaviour_1_NickGrayboxEntity___VTable vtable;
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields {
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__VTable vtable;
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__VTable {
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__StaticFields {
    };

    struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array__VTable vtable;
    };

    struct IEnumerator_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields {
    };

    struct IEnumerator_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___VTable vtable;
    };

    struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___VTable {
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

    struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields {
        struct NickHitReactionBehaviour_NonInterruptibleTaskCondition__Array* _emptyArray;
    };

    struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_NickHitReactionBehaviour_NonInterruptibleTaskCondition___VTable vtable;
    };

    struct NickHitReactionBehaviour__VTable {
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

    struct NickHitReactionBehaviour__StaticFields {
    };

    struct NickHitReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NickHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NickHitReactionBehaviour__VTable vtable;
    };

    struct NickDeathReaction_DeathState__Enum__VTable {
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

    struct NickDeathReaction_DeathState__Enum__StaticFields {
    };

    struct NickDeathReaction_DeathState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NickDeathReaction_DeathState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NickDeathReaction_DeathState__Enum__VTable vtable;
    };

    struct NickDeathReaction__VTable {
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

    struct NickDeathReaction__StaticFields {
    };

    struct NickDeathReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NickDeathReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NickDeathReaction__VTable vtable;
    };

    struct NickDeathReaction_c {
        struct NickDeathReaction_c__Class* klass;
        MonitorData* monitor;
    };

    struct NickDeathReaction_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NickDeathReaction_c__StaticFields {
        struct NickDeathReaction_c* __9;
        struct Action* __9__22_0;
    };

    struct NickDeathReaction_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NickDeathReaction_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NickDeathReaction_c__VTable vtable;
    };

    struct NickHitReactionBehaviour_c {
        struct NickHitReactionBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct NickHitReactionBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct NickHitReactionBehaviour_c__StaticFields {
        struct NickHitReactionBehaviour_c* __9;
        struct Action* __9__35_0;
    };

    struct NickHitReactionBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NickHitReactionBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NickHitReactionBehaviour_c__VTable vtable;
    };

    struct BabyCrabEntity__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_* UpdateBlockingBehaviours;
        struct CrabPlaceholderGroup* _Group_k__BackingField;
        struct Sensor* m_sensor;
        float MinDistanceToOtherCrabs;
        float MinRunDistance;
        float DistanceToMumma;
        float DistanceToTargetToStartRunning;
        struct CrabEntity* _Entity_k__BackingField;
        bool _IsRunningAway_k__BackingField;
        struct Vector3 _RunPosition_k__BackingField;
    };

    struct BabyCrabEntity {
        struct BabyCrabEntity__Class* klass;
        MonitorData* monitor;
        struct BabyCrabEntity__Fields fields;
    };

    struct PlaceholderGroup__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_EntityPlaceholder_* PlaceholdersInGroup;
    };

    struct PlaceholderGroup {
        struct PlaceholderGroup__Class* klass;
        MonitorData* monitor;
        struct PlaceholderGroup__Fields fields;
    };

    struct CrabPlaceholderGroup__Fields {
        struct PlaceholderGroup__Fields _;
        struct List_1_BabyCrabEntity_* Babies;
        struct List_1_CrabEntity_* Mothers;
    };

    struct CrabPlaceholderGroup {
        struct CrabPlaceholderGroup__Class* klass;
        MonitorData* monitor;
        struct CrabPlaceholderGroup__Fields fields;
    };

    struct __declspec(align(8)) List_1_BabyCrabEntity___Fields {
        struct BabyCrabEntity__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_BabyCrabEntity_ {
        struct List_1_BabyCrabEntity___Class* klass;
        MonitorData* monitor;
        struct List_1_BabyCrabEntity___Fields fields;
    };

    struct BabyCrabEntity__Array {
        struct BabyCrabEntity__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BabyCrabEntity* vector[32];
    };

    struct IEnumerator_1_BabyCrabEntity_ {
        struct IEnumerator_1_BabyCrabEntity___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_CrabEntity___Fields {
        struct CrabEntity__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CrabEntity_ {
        struct List_1_CrabEntity___Class* klass;
        MonitorData* monitor;
        struct List_1_CrabEntity___Fields fields;
    };

    struct CrabEntity__Array {
        struct CrabEntity__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CrabEntity* vector[32];
    };

    struct IEnumerator_1_CrabEntity_ {
        struct IEnumerator_1_CrabEntity___Class* klass;
        MonitorData* monitor;
    };

    struct PlaceholderGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlaceholderGroup__StaticFields {
    };

    struct PlaceholderGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlaceholderGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlaceholderGroup__VTable vtable;
    };

    struct BabyCrabEntity__Array__VTable {
    };

    struct BabyCrabEntity__Array__StaticFields {
    };

    struct BabyCrabEntity__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BabyCrabEntity__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BabyCrabEntity__Array__VTable vtable;
    };

    struct IEnumerator_1_BabyCrabEntity___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_BabyCrabEntity___StaticFields {
    };

    struct IEnumerator_1_BabyCrabEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_BabyCrabEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_BabyCrabEntity___VTable vtable;
    };

    struct List_1_BabyCrabEntity___VTable {
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

    struct List_1_BabyCrabEntity___StaticFields {
        struct BabyCrabEntity__Array* _emptyArray;
    };

    struct List_1_BabyCrabEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_BabyCrabEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_BabyCrabEntity___VTable vtable;
    };

    struct CrabEntity__Array__VTable {
    };

    struct CrabEntity__Array__StaticFields {
    };

    struct CrabEntity__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabEntity__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabEntity__Array__VTable vtable;
    };

    struct IEnumerator_1_CrabEntity___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CrabEntity___StaticFields {
    };

    struct IEnumerator_1_CrabEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CrabEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CrabEntity___VTable vtable;
    };

    struct List_1_CrabEntity___VTable {
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

    struct List_1_CrabEntity___StaticFields {
        struct CrabEntity__Array* _emptyArray;
    };

    struct List_1_CrabEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CrabEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CrabEntity___VTable vtable;
    };

    struct CrabPlaceholderGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CrabPlaceholderGroup__StaticFields {
    };

    struct CrabPlaceholderGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabPlaceholderGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabPlaceholderGroup__VTable vtable;
    };

    struct BabyCrabEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BabyCrabEntity__StaticFields {
    };

    struct BabyCrabEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BabyCrabEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BabyCrabEntity__VTable vtable;
    };

    struct CrabInGroupPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct CrabPlaceholderGroup* Group;
    };

    struct CrabInGroupPlaceholder {
        struct CrabInGroupPlaceholder__Class* klass;
        MonitorData* monitor;
        struct CrabInGroupPlaceholder__Fields fields;
    };

    struct CrabInGroupPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
        VirtualInvokeData OnSceneRootPreDisable;
        VirtualInvokeData get_Prefab;
        VirtualInvokeData get_RequiresGroundToSpawn;
        VirtualInvokeData get_CheckForOverlap;
        VirtualInvokeData ClearPrefabLinks;
        VirtualInvokeData get_CanSpawn;
        VirtualInvokeData InstantiateInstance;
        VirtualInvokeData PoolCurrentInstance;
        VirtualInvokeData Spawn;
        VirtualInvokeData OnStart;
        VirtualInvokeData OnPlaceholderEnable;
        VirtualInvokeData OnPlaceholderDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnHealthZero;
        VirtualInvokeData OnDeath;
        VirtualInvokeData UpdateAutoSpawnState;
        VirtualInvokeData UpdateSpawnOnEventState;
        VirtualInvokeData get_IsOnScreenPaddedExtended;
        VirtualInvokeData get_IsOnScreenPadded;
        VirtualInvokeData get_IsOnScreen;
        VirtualInvokeData InstantiateFromPooledObj;
        VirtualInvokeData IsUsingVariations;
        VirtualInvokeData CanUseAutosetupPositionInOnSand;
    };

    struct CrabInGroupPlaceholder__StaticFields {
    };

    struct CrabInGroupPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabInGroupPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabInGroupPlaceholder__VTable vtable;
    };

    struct EntityBehaviourNode_1_DropSlugVariationEntity___Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct EntityBehaviourNode_1_DropSlugVariationEntity_ {
        struct EntityBehaviourNode_1_DropSlugVariationEntity___Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode_1_DropSlugVariationEntity___Fields fields;
    };

    struct DropSlugJumpAttackBehaviour__Fields {
        struct EntityBehaviourNode_1_DropSlugVariationEntity___Fields _;
        float JumpSpeed;
        struct DropSlugLocomotion* m_locomotion;
    };

    struct DropSlugJumpAttackBehaviour {
        struct DropSlugJumpAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct DropSlugJumpAttackBehaviour__Fields fields;
    };

    struct EntityBehaviourNode_1_DropSlugVariationEntity___VTable {
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
        VirtualInvokeData __unknown;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct EntityBehaviourNode_1_DropSlugVariationEntity___StaticFields {
    };

    struct EntityBehaviourNode_1_DropSlugVariationEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityBehaviourNode_1_DropSlugVariationEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityBehaviourNode_1_DropSlugVariationEntity___VTable vtable;
    };

    struct DropSlugJumpAttackBehaviour__VTable {
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

    struct DropSlugJumpAttackBehaviour__StaticFields {
    };

    struct DropSlugJumpAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DropSlugJumpAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DropSlugJumpAttackBehaviour__VTable vtable;
    };

    struct DropSlugVariationEntity__Fields {
        struct DropSlugEntity__Fields _;
    };

    struct DropSlugVariationEntity {
        struct DropSlugVariationEntity__Class* klass;
        MonitorData* monitor;
        struct DropSlugVariationEntity__Fields fields;
    };

} // namespace app
