namespace app {
    struct SlugFastBehaviour__StaticFields {
    };

    struct SlugFastBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SlugFastBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SlugFastBehaviour__VTable vtable;
    };

    struct SneezeSlugTurningBehaviour__Fields {
        struct TurningBehaviour__Fields _;
        struct LegacyTimelineSequence* turningSequence;
        float animationSpeed;
        struct SneezeSlugEntity* m_Entity;
        float m_lookDirection;
        bool m_waitEndFrame;
    };

    struct SneezeSlugTurningBehaviour {
        struct SneezeSlugTurningBehaviour__Class* klass;
        MonitorData* monitor;
        struct SneezeSlugTurningBehaviour__Fields fields;
    };

    struct SneezeSlugTurningBehaviour__VTable {
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
        VirtualInvokeData get_TargetLookDirectionX;
        VirtualInvokeData set_TargetLookDirectionX;
        VirtualInvokeData PlayAnimation;
        VirtualInvokeData ShouldEndBehaviour;
        VirtualInvokeData get_IsPlaying;
        VirtualInvokeData CanCancel;
    };

    struct SneezeSlugTurningBehaviour__StaticFields {
    };

    struct SneezeSlugTurningBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeSlugTurningBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeSlugTurningBehaviour__VTable vtable;
    };

    enum class SpiderlingMoveFastBehaviour_FastState__Enum : int32_t {
        Dashing = 0x00000000,
    };

    struct SpiderlingMoveFastBehaviour_FastState__Enum__Boxed {
        struct SpiderlingMoveFastBehaviour_FastState__Enum__Class* klass;
        MonitorData* monitor;
        SpiderlingMoveFastBehaviour_FastState__Enum value;
    };

    struct SpiderlingMoveFastBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonVector3* m_targetPosition;
        struct MoonVector3* m_patrolOrigin;
        float MaxPatrolRadius;
        float IdleTime;
        float LookDirectionUpdateDelay;
        float DashTime;
        struct GroundEntityLocomotion* m_locomotion;
        struct ILocomotionTurningHandler* m_turningHandler;
        float m_timer;
        bool m_isMoving;
        struct Vector2 m_effectivePatrolOrigin;
        float MoveSide;
        SpiderlingMoveFastBehaviour_FastState__Enum m_FastState;
    };

    struct SpiderlingMoveFastBehaviour {
        struct SpiderlingMoveFastBehaviour__Class* klass;
        MonitorData* monitor;
        struct SpiderlingMoveFastBehaviour__Fields fields;
    };

    struct SpiderlingMoveFastBehaviour_FastState__Enum__VTable {
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

    struct SpiderlingMoveFastBehaviour_FastState__Enum__StaticFields {
    };

    struct SpiderlingMoveFastBehaviour_FastState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderlingMoveFastBehaviour_FastState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderlingMoveFastBehaviour_FastState__Enum__VTable vtable;
    };

    struct SpiderlingMoveFastBehaviour__VTable {
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

    struct SpiderlingMoveFastBehaviour__StaticFields {
    };

    struct SpiderlingMoveFastBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderlingMoveFastBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderlingMoveFastBehaviour__VTable vtable;
    };

    struct EntityBehaviourNode_1_TentacleEntity___Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct EntityBehaviourNode_1_TentacleEntity_ {
        struct EntityBehaviourNode_1_TentacleEntity___Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode_1_TentacleEntity___Fields fields;
    };

    struct TentacleAggroBehaviour__Fields {
        struct EntityBehaviourNode_1_TentacleEntity___Fields _;
        struct MoonTimeline* aggroTimeline;
        float headRotationAlignmentToTarget;
        float headAlignmentMinDistance;
        float targetLerp;
        float maxSpeed;
        float time;
        float m_time;
    };

    struct TentacleAggroBehaviour {
        struct TentacleAggroBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleAggroBehaviour__Fields fields;
    };

    struct EntityBehaviourNode_1_TentacleEntity___VTable {
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

    struct EntityBehaviourNode_1_TentacleEntity___StaticFields {
    };

    struct EntityBehaviourNode_1_TentacleEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityBehaviourNode_1_TentacleEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityBehaviourNode_1_TentacleEntity___VTable vtable;
    };

    struct TentacleAggroBehaviour__VTable {
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

    struct TentacleAggroBehaviour__StaticFields {
    };

    struct TentacleAggroBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleAggroBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleAggroBehaviour__VTable vtable;
    };

    struct TentacleStabBehaviour_TentacleAttack {
        struct String* name;
        bool stickIntoWall;
        struct MoonTimeline* timeline;
    };

    struct TentacleStabBehaviour_TentacleAttack__Boxed {
        struct TentacleStabBehaviour_TentacleAttack__Class* klass;
        MonitorData* monitor;
        struct TentacleStabBehaviour_TentacleAttack fields;
    };

    struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_System_Int32_* IDs;
        struct List_1_Moon_TentacleStabBehaviour_TentacleAttack_* Data;
        struct TentacleStabBehaviour_TentacleAttack DefaultValue;
        struct CageStructureTool* CageStructureTool;
        bool ShouldSerialize;
    };

    struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_ {
        struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Class* klass;
        MonitorData* monitor;
        struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields fields;
    };

    struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields {
        struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields _;
    };

    struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_ {
        struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Class* klass;
        MonitorData* monitor;
        struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields fields;
    };

    struct TentacleAttackMetadata__Fields {
        struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields _;
    };

    struct TentacleAttackMetadata {
        struct TentacleAttackMetadata__Class* klass;
        MonitorData* monitor;
        struct TentacleAttackMetadata__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields {
        struct TentacleStabBehaviour_TentacleAttack__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_TentacleStabBehaviour_TentacleAttack_ {
        struct List_1_Moon_TentacleStabBehaviour_TentacleAttack___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_TentacleStabBehaviour_TentacleAttack___Fields fields;
    };

    struct TentacleStabBehaviour_TentacleAttack__Array {
        struct TentacleStabBehaviour_TentacleAttack__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TentacleStabBehaviour_TentacleAttack vector[32];
    };

    struct IEnumerator_1_Moon_TentacleStabBehaviour_TentacleAttack_ {
        struct IEnumerator_1_Moon_TentacleStabBehaviour_TentacleAttack___Class* klass;
        MonitorData* monitor;
    };

    struct TentacleStabBehaviour_TentacleAttack__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TentacleStabBehaviour_TentacleAttack__StaticFields {
    };

    struct TentacleStabBehaviour_TentacleAttack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleStabBehaviour_TentacleAttack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleStabBehaviour_TentacleAttack__VTable vtable;
    };

    struct TentacleStabBehaviour_TentacleAttack__Array__VTable {
    };

    struct TentacleStabBehaviour_TentacleAttack__Array__StaticFields {
    };

    struct TentacleStabBehaviour_TentacleAttack__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleStabBehaviour_TentacleAttack__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleStabBehaviour_TentacleAttack__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields {
    };

    struct IEnumerator_1_Moon_TentacleStabBehaviour_TentacleAttack___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable vtable;
    };

    struct List_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable {
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

    struct List_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields {
        struct TentacleStabBehaviour_TentacleAttack__Array* _emptyArray;
    };

    struct List_1_Moon_TentacleStabBehaviour_TentacleAttack___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable vtable;
    };

    struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields {
    };

    struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CageMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable vtable;
    };

    struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields {
    };

    struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack___VTable vtable;
    };

    struct TentacleAttackMetadata__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TentacleAttackMetadata__StaticFields {
    };

    struct TentacleAttackMetadata__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleAttackMetadata__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleAttackMetadata__VTable vtable;
    };

    struct EntityLocomotionTask_1_TentacleEntity___Fields {
        struct EntityLocomotionTask__Fields _;
    };

    struct EntityLocomotionTask_1_TentacleEntity_ {
        struct EntityLocomotionTask_1_TentacleEntity___Class* klass;
        MonitorData* monitor;
        struct EntityLocomotionTask_1_TentacleEntity___Fields fields;
    };

    struct TentacleIdleBehaviour__Fields {
        struct EntityLocomotionTask_1_TentacleEntity___Fields _;
        struct MoonTimeline* IdleTimeline;
        struct Vector2 RandomTargetCenter;
        float RandomTargetRadius;
        float ChangeTargetTime;
        float headRotationAlignmentToTarget;
        float headAlignmentMinDistance;
        float targetLerp;
        float maxSpeed;
        struct Vector3 m_targetPosition;
        float m_time;
    };

    struct TentacleIdleBehaviour {
        struct TentacleIdleBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleIdleBehaviour__Fields fields;
    };

    struct EntityLocomotionTask_1_TentacleEntity___VTable {
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
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
    };

    struct EntityLocomotionTask_1_TentacleEntity___StaticFields {
    };

    struct EntityLocomotionTask_1_TentacleEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityLocomotionTask_1_TentacleEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityLocomotionTask_1_TentacleEntity___VTable vtable;
    };

    struct TentacleIdleBehaviour__VTable {
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

    struct TentacleIdleBehaviour__StaticFields {
    };

    struct TentacleIdleBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleIdleBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleIdleBehaviour__VTable vtable;
    };

    struct TentaclePhysicsPostprocess__Fields {
        struct AnimationPostprocess__Fields _;
        int32_t OrderNumber;
        struct TentacleAnimationPostprocess* Old;
        bool m_applyTargetIK;
        bool m_pullTowardsAnim;
        bool m_useParticleForces;
        bool m_applyEnvCollision;
        bool m_applyWaterResistance;
        bool m_applyBoneLen;
        bool m_applyStraightening;
        bool m_applyVeloSmoothing;
        bool m_applyKickback;
        bool m_enableAdaptiveColliders;
        bool m_validatePositions;
        bool m_applyHeadCorrection;
        bool m_applyPostPos;
        bool m_applyPostRot;
        bool m_applyPostScale;
        float AnimForce;
        float CollisionForce;
        float EnvFriction;
        float GravityForce;
        float BoneLenForce;
        float StraighteningForce;
        float VeloDamping;
        float VeloDampingWater;
        float VeloSmoothing;
        float CollisionDistNormalOut;
        float CollisionDistNormalIn;
        float CollisionDistTangent;
        float BoneLenMin;
        float BoneLenMax;
        float MaxDistFromCenter;
        float DeathAnimInfluenceDuration;
        float DeathGravityInfluenceDuration;
        float LerpPosToAnim;
        float LerpVeloToZero;
        bool DebugRenderFollowAnim;
        bool DebugRenderVelo;
        bool DebugRenderCollisions;
        bool DebugRenderAnimChain;
        bool DebugRenderIKChain;
        bool DebugRenderPostChain;
        bool DebugRefreshEnv;
        struct Vector3__Array* m_jointAnimPos;
        struct Quaternion__Array* m_jointAnimRot;
        struct Vector3__Array* m_jointPostPos;
        struct Quaternion__Array* m_jointPostRot;
        struct Vector3__Array* m_jointPostScale;
        struct Vector3__Array* m_jointParticlePos;
        struct Vector3__Array* m_jointParticleVelo;
        struct Vector3__Array* m_temp;
        float m_chainLenInv;
        struct EnvTopology* m_env;
        int32_t m_capacity;
        float m_aliveTime;
        struct Vector3 m_headStickPosition;
        float m_headTargetAngle;
        struct Vector3 m_refTarget;
        struct Vector3 m_refTargetOld;
        struct CapsuleCollider__Array* m_adaptiveCapsules;
        struct Vector3__Array* m_adaptiveCapsulesFromPos;
        struct Vector3__Array* m_adaptiveCapsulesToPos;
        int32_t m_adaptiveCapsuleCount;
        int32_t AdaptiveCapsuleRecursionDepth;
        float AdaptiveCapsuleMaxErrorDist;
        float AdaptiveCapsuleRadius;
        bool DebugAdaptiveCapsules;
    };

    struct TentaclePhysicsPostprocess {
        struct TentaclePhysicsPostprocess__Class* klass;
        MonitorData* monitor;
        struct TentaclePhysicsPostprocess__Fields fields;
    };

    struct TentaclePhysicsPostprocess__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_RequiresOnUpdate;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData get_TotalWeight;
        VirtualInvokeData get_HasFinished;
        VirtualInvokeData get_Order;
        VirtualInvokeData OnPostEnable;
        VirtualInvokeData OnPostDisable;
        VirtualInvokeData OnAddedToAnimator;
        VirtualInvokeData OnRemovedFromAnimator;
        VirtualInvokeData OnActivated;
        VirtualInvokeData OnDeactivated;
        VirtualInvokeData Process;
        VirtualInvokeData OnSceneGui;
    };

    struct TentaclePhysicsPostprocess__StaticFields {
        struct Quaternion RotZ90;
    };

    struct TentaclePhysicsPostprocess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentaclePhysicsPostprocess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentaclePhysicsPostprocess__VTable vtable;
    };

    struct EntityTask_1_TentacleEntity___Fields {
        struct EntityTask__Fields _;
    };

    struct EntityTask_1_TentacleEntity_ {
        struct EntityTask_1_TentacleEntity___Class* klass;
        MonitorData* monitor;
        struct EntityTask_1_TentacleEntity___Fields fields;
    };

    enum class TentacleSpawnBehaviour_ExecutionState__Enum : int32_t {
        Hidden = 0x00000000,
        Spawning_WaitForAnimPose = 0x00000001,
        Spawning = 0x00000002,
    };

    struct TentacleSpawnBehaviour_ExecutionState__Enum__Boxed {
        struct TentacleSpawnBehaviour_ExecutionState__Enum__Class* klass;
        MonitorData* monitor;
        TentacleSpawnBehaviour_ExecutionState__Enum value;
    };

    struct TentacleSpawnBehaviour__Fields {
        struct EntityTask_1_TentacleEntity___Fields _;
        struct MoonTimeline* SpawnTimeline;
        struct MoonTimeline* SpawnUnderWaterTimeline;
        struct MoonTimeline* HiddenTimeline;
        float HeadAlignmentMinDistance;
        float targetLerp;
        float headRotationAlignmentToTarget;
        float headAlignmentMinDistance;
        float maxSpeed;
        float SpawnDelay;
        float m_time;
        float m_oldHeadAlignment;
        TentacleSpawnBehaviour_ExecutionState__Enum m_state;
    };

    struct TentacleSpawnBehaviour {
        struct TentacleSpawnBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleSpawnBehaviour__Fields fields;
    };

    struct EntityTask_1_TentacleEntity___VTable {
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
    };

    struct EntityTask_1_TentacleEntity___StaticFields {
    };

    struct EntityTask_1_TentacleEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityTask_1_TentacleEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityTask_1_TentacleEntity___VTable vtable;
    };

    struct TentacleSpawnBehaviour_ExecutionState__Enum__VTable {
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

    struct TentacleSpawnBehaviour_ExecutionState__Enum__StaticFields {
    };

    struct TentacleSpawnBehaviour_ExecutionState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleSpawnBehaviour_ExecutionState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleSpawnBehaviour_ExecutionState__Enum__VTable vtable;
    };

    struct TentacleSpawnBehaviour__VTable {
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

    struct TentacleSpawnBehaviour__StaticFields {
    };

    struct TentacleSpawnBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleSpawnBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleSpawnBehaviour__VTable vtable;
    };

    struct TentacleSpitBehaviour__Fields {
        struct EntityBehaviourNode_1_TentacleEntity___Fields _;
        struct ProjectileSpawner* ProjectileSpawner;
        struct GameObject* NormalProjectilePrefab;
        struct GameObject* UnderwaterProjectilePrefab;
        struct MoonTimeline* SpitTimeline;
        struct EventTriggerAnimator* SpitTrigger;
        struct FloatAnimator* PositionAlignmentCurve;
        struct FloatAnimator* HeadRotationAlignmentCurve;
        float targetLerp;
        float headRotationAlignmentToTarget;
        float maxSpeed;
        struct GameObject* NormalCreepPrefab;
        struct GameObject* UnderwaterCreepPrefab;
        int32_t ProjectileCount;
        int32_t CreepPrewarmCount;
        float ProjectileSpawnInterval;
        float ShotSpreadAngle;
        int32_t NumberOfProjectilesPerShot;
        float ProjectileDamage;
        float ProjectileSpeed;
        float ProjectileSpeedUnderWater;
        DamageWeight__Enum ProjectileDamageWeight;

        struct TentacleAnimatedSettings m_originalSettings;
        int32_t m_projectileSpawnedCounter;
        float m_timeToNextProjectileSpawn;
        bool m_shooting;
    };

    struct TentacleSpitBehaviour {
        struct TentacleSpitBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleSpitBehaviour__Fields fields;
    };

    struct TentacleSpitBehaviour__VTable {
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

} // namespace app
