namespace app {
    struct RotatingObstacleImpactEffect {
        struct RotatingObstacleImpactEffect__Class* klass;
        MonitorData* monitor;
        struct RotatingObstacleImpactEffect__Fields fields;
    };

    struct RotatingObstacleImpactEffect__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RotatingObstacleImpactEffect__StaticFields {
    };

    struct RotatingObstacleImpactEffect__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotatingObstacleImpactEffect__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotatingObstacleImpactEffect__VTable vtable;
    };

    struct RotatingObstacleLogic__Fields {
        struct MonoBehaviour__Fields _;
        float Speed;
        float m_rotation;
        bool m_isSuspended;
        SuspendableMask__Enum m_suspensionMask;

        struct RotatingObstacleAnimator* Animator;
    };

    struct RotatingObstacleLogic {
        struct RotatingObstacleLogic__Class* klass;
        MonitorData* monitor;
        struct RotatingObstacleLogic__Fields fields;
    };

    struct RotatingObstacleLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_MoonSetupAnimator;
    };

    struct RotatingObstacleLogic__StaticFields {
    };

    struct RotatingObstacleLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotatingObstacleLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotatingObstacleLogic__VTable vtable;
    };

    struct SetRotationFromDamage__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_IDamageNotifier_* DamageNotifier;
        struct Transform* Target;
    };

    struct SetRotationFromDamage {
        struct SetRotationFromDamage__Class* klass;
        MonitorData* monitor;
        struct SetRotationFromDamage__Fields fields;
    };

    struct SetRotationFromDamage__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SetRotationFromDamage__StaticFields {
    };

    struct SetRotationFromDamage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetRotationFromDamage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetRotationFromDamage__VTable vtable;
    };

    struct ShootableCreepAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct ShootableCreepVisuals* Visuals;
        struct MoonTimeline* DeathSequence;
        struct MoonTimeline* HitSequence;
        bool _InvalidateParentTimelineCache_k__BackingField;
    };

    struct ShootableCreepAnimator {
        struct ShootableCreepAnimator__Class* klass;
        MonitorData* monitor;
        struct ShootableCreepAnimator__Fields fields;
    };

    struct ShootableCreepVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* DeathTimeline;
        struct MoonTimeline* HitTimeline;
        struct BoxCollider* Hitbox;
        struct List_1_UnityEngine_GameObject_* DisableOnCreepDestroyed;
        bool _InvalidateParentTimelineCache_k__BackingField;
    };

    struct ShootableCreepVisuals {
        struct ShootableCreepVisuals__Class* klass;
        MonitorData* monitor;
        struct ShootableCreepVisuals__Fields fields;
    };

    struct ShootableCreepVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
    };

    struct ShootableCreepVisuals__StaticFields {
    };

    struct ShootableCreepVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShootableCreepVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShootableCreepVisuals__VTable vtable;
    };

    struct ShootableCreepAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupVisuals;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
    };

    struct ShootableCreepAnimator__StaticFields {
    };

    struct ShootableCreepAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShootableCreepAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShootableCreepAnimator__VTable vtable;
    };

    struct ShootableCreepLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct ShootableCreepAnimator* Animator;
        struct MoonReference_1_IGenericUberState_* State;
        struct Vitals* Vitals;
        struct OrbSpawner* OrbSpawner;
        struct GameObject* DisableOnCreepDestroyed;
        struct BoxCollider* Hitbox;
        bool m_state;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct ShootableCreepLogic {
        struct ShootableCreepLogic__Class* klass;
        MonitorData* monitor;
        struct ShootableCreepLogic__Fields fields;
    };

    struct ShootableCreepLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupAnimator;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData get_SharedState;
        VirtualInvokeData set_SharedState;
        VirtualInvokeData get_ObjectReference;
    };

    struct ShootableCreepLogic__StaticFields {
    };

    struct ShootableCreepLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShootableCreepLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShootableCreepLogic__VTable vtable;
    };

    enum class SmallInteractivesPlaceholder_SpawnMode__Enum : int32_t {
        AutoSpawn = 0x00000000,
        SpawnOnEvent = 0x00000001,
    };

    struct SmallInteractivesPlaceholder_SpawnMode__Enum__Boxed {
        struct SmallInteractivesPlaceholder_SpawnMode__Enum__Class* klass;
        MonitorData* monitor;
        SmallInteractivesPlaceholder_SpawnMode__Enum value;
    };

    struct SmallInteractivesPlaceholder__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Prefab;
        int32_t Amount;
        float Radius;
        struct FloatRange_1 SizeVariation;
        float ForceAtSpawn;
        struct Condition_1* Condition;
        SmallInteractivesPlaceholder_SpawnMode__Enum Mode;

        struct MoonReference_1_ISwitch_* SpawnEvent;
        bool m_spawnedInstance;
        struct List_1_UnityEngine_GameObject_* m_currentInstances;
        struct ISwitch* m_spawnEvent;
        struct List_1_UnityEngine_Vector3_* m_previewData;
    };

    struct SmallInteractivesPlaceholder {
        struct SmallInteractivesPlaceholder__Class* klass;
        MonitorData* monitor;
        struct SmallInteractivesPlaceholder__Fields fields;
    };

    struct SmallInteractivesPlaceholder_SpawnMode__Enum__VTable {
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

    struct SmallInteractivesPlaceholder_SpawnMode__Enum__StaticFields {
    };

    struct SmallInteractivesPlaceholder_SpawnMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SmallInteractivesPlaceholder_SpawnMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SmallInteractivesPlaceholder_SpawnMode__Enum__VTable vtable;
    };

    struct SmallInteractivesPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
        VirtualInvokeData SpawnPrefab;
    };

    struct SmallInteractivesPlaceholder__StaticFields {
    };

    struct SmallInteractivesPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SmallInteractivesPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SmallInteractivesPlaceholder__VTable vtable;
    };

    struct TimeOutBreakable__Fields {
        struct GuidOwner__Fields _;
        float Timeout;
    };

    struct TimeOutBreakable {
        struct TimeOutBreakable__Class* klass;
        MonitorData* monitor;
        struct TimeOutBreakable__Fields fields;
    };

    struct TimeOutBreakable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnVitalsDeath;
    };

    struct TimeOutBreakable__StaticFields {
    };

    struct TimeOutBreakable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeOutBreakable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeOutBreakable__VTable vtable;
    };

    struct TimeTrackerForMoonGuid__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_TimeTrackerForMoonGuid_TrackerEntry_* m_entries;
        int32_t m_index;
    };

    struct TimeTrackerForMoonGuid {
        struct TimeTrackerForMoonGuid__Class* klass;
        MonitorData* monitor;
        struct TimeTrackerForMoonGuid__Fields fields;
    };

    struct __declspec(align(8)) List_1_TimeTrackerForMoonGuid_TrackerEntry___Fields {
        struct TimeTrackerForMoonGuid_TrackerEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TimeTrackerForMoonGuid_TrackerEntry_ {
        struct List_1_TimeTrackerForMoonGuid_TrackerEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_TimeTrackerForMoonGuid_TrackerEntry___Fields fields;
    };

    struct __declspec(align(8)) TimeTrackerForMoonGuid_TrackerEntry__Fields {
        struct MoonGuid* Guid;
        float _TimeRegistered_k__BackingField;
        float _TimeToUnregister_k__BackingField;
    };

    struct TimeTrackerForMoonGuid_TrackerEntry {
        struct TimeTrackerForMoonGuid_TrackerEntry__Class* klass;
        MonitorData* monitor;
        struct TimeTrackerForMoonGuid_TrackerEntry__Fields fields;
    };

    struct TimeTrackerForMoonGuid_TrackerEntry__Array {
        struct TimeTrackerForMoonGuid_TrackerEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TimeTrackerForMoonGuid_TrackerEntry* vector[32];
    };

    struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry_ {
        struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___Class* klass;
        MonitorData* monitor;
    };

    struct TimeTrackerForMoonGuid_TrackerEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimeTrackerForMoonGuid_TrackerEntry__StaticFields {
    };

    struct TimeTrackerForMoonGuid_TrackerEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeTrackerForMoonGuid_TrackerEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeTrackerForMoonGuid_TrackerEntry__VTable vtable;
    };

    struct TimeTrackerForMoonGuid_TrackerEntry__Array__VTable {
    };

    struct TimeTrackerForMoonGuid_TrackerEntry__Array__StaticFields {
    };

    struct TimeTrackerForMoonGuid_TrackerEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeTrackerForMoonGuid_TrackerEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeTrackerForMoonGuid_TrackerEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields {
    };

    struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_TimeTrackerForMoonGuid_TrackerEntry___VTable vtable;
    };

    struct List_1_TimeTrackerForMoonGuid_TrackerEntry___VTable {
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

    struct List_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields {
        struct TimeTrackerForMoonGuid_TrackerEntry__Array* _emptyArray;
    };

    struct List_1_TimeTrackerForMoonGuid_TrackerEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_TimeTrackerForMoonGuid_TrackerEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_TimeTrackerForMoonGuid_TrackerEntry___VTable vtable;
    };

    struct TimeTrackerForMoonGuid__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimeTrackerForMoonGuid__StaticFields {
        struct TimeTrackerForMoonGuid* Instance;
    };

    struct TimeTrackerForMoonGuid__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeTrackerForMoonGuid__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeTrackerForMoonGuid__VTable vtable;
    };

    struct SnapTrapHookPlaceholder__Fields {
        struct PrefabPlaceholder__Fields _;
        struct SnapTrapEntity_SnapTrapParameters SnapTrapEntityParameters;
    };

    struct SnapTrapHookPlaceholder {
        struct SnapTrapHookPlaceholder__Class* klass;
        MonitorData* monitor;
        struct SnapTrapHookPlaceholder__Fields fields;
    };

    struct SnapTrapHookPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Initialize;
        VirtualInvokeData Prewarm;
        VirtualInvokeData PoolCurrentInstance;
    };

    struct SnapTrapHookPlaceholder__StaticFields {
    };

    struct SnapTrapHookPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnapTrapHookPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnapTrapHookPlaceholder__VTable vtable;
    };

    struct SnapTrapHookAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct SnapTrapHookVisuals* Visuals;
        struct MoonTimeline* IdleAnimatorTimeline;
        struct MoonTimeline* WarnAnimatorTimeline;
        struct MoonTimeline* ClosingAnimatorTimeline;
        struct MoonTimeline* ClosedLoopAnimatorTimeline;
        struct MoonTimeline* ChewingAnimatorTimeline;
        struct MoonTimeline* OpeningAfterMissedAnimatorTimeline;
        struct MoonTimeline* OpeningAfterCaughtAnimatorTimeline;
    };

    struct SnapTrapHookAnimator {
        struct SnapTrapHookAnimator__Class* klass;
        MonitorData* monitor;
        struct SnapTrapHookAnimator__Fields fields;
    };

    struct SnapTrapHookVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* IdleTimeline;
        struct MoonTimeline* WarnTimeline;
        struct MoonTimeline* ClosingTimeline;
        struct MoonTimeline* ClosedLoopTimeline;
        struct MoonTimeline* ChewingTimeline;
        struct MoonTimeline* OpeningAfterMissedTimeline;
        struct MoonTimeline* OpeningAfterCaughtTimeline;
        struct EventTriggerAnimator* CheckTrapTrigger;
        struct EventTriggerAnimator* ChewingDoDamageEvent;
        struct EventTriggerAnimator* ActivateOriAfterCaughtEvent;
        struct BoxCollider* CatchBoundsCollider;
        struct BoxCollider* ActivationTrigger;
        struct EventTriggerAnimator* ReleaseLeashTrigger;
        struct EventTriggerAnimator* DisableLeashTrigger;
        struct EventTriggerAnimator* EnableLeashTrigger;
        struct Transform* AfterCatchSeinPosition;
    };

    struct SnapTrapHookVisuals {
        struct SnapTrapHookVisuals__Class* klass;
        MonitorData* monitor;
        struct SnapTrapHookVisuals__Fields fields;
    };

    struct SnapTrapHookVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SnapTrapHookVisuals__StaticFields {
    };

    struct SnapTrapHookVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnapTrapHookVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnapTrapHookVisuals__VTable vtable;
    };

    struct SnapTrapHookAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupVisuals;
    };

    struct SnapTrapHookAnimator__StaticFields {
    };

    struct SnapTrapHookAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnapTrapHookAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnapTrapHookAnimator__VTable vtable;
    };

    struct SnapTrapHookLogic__Fields {
        struct SnapTrapEntity__Fields _;
        struct SnapTrapHookAnimator* Animator;
        struct LeashHookLogic* LeashHookLogic;
        struct EventTriggerAnimator* ReleaseLeashTrigger;
        struct EventTriggerAnimator* DisableLeashTrigger;
        struct EventTriggerAnimator* EnableLeashTrigger;
    };

    struct SnapTrapHookLogic {
        struct SnapTrapHookLogic__Class* klass;
        MonitorData* monitor;
        struct SnapTrapHookLogic__Fields fields;
    };

    struct SnapTrapHookLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnEnable;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData Suspend;
        VirtualInvokeData Resume;
        VirtualInvokeData Freeze;
        VirtualInvokeData Closed;
        VirtualInvokeData ReactivateOri;
        VirtualInvokeData DoneChewing;
        VirtualInvokeData OpenedAfterCatch;
        VirtualInvokeData OpenedAfterMiss;
        VirtualInvokeData get_MoonSetupAnimator;
    };

    struct SnapTrapHookLogic__StaticFields {
    };

    struct SnapTrapHookLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SnapTrapHookLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SnapTrapHookLogic__VTable vtable;
    };

    struct SpringAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct SpringVisuals* Visuals;
    };

    struct SpringAnimator {
        struct SpringAnimator__Class* klass;
        MonitorData* monitor;
        struct SpringAnimator__Fields fields;
    };

    struct SpringVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_* JumpedOn;
        struct MoonTimeline* OnLandCharacter;
        struct MoonTimeline* OnLandGrenade;
        struct MoonTimeline* OnLandCommon;
        struct MoonTimeline* OnLaunchCharacter;
    };

    struct SpringVisuals {
        struct SpringVisuals__Class* klass;
        MonitorData* monitor;
        struct SpringVisuals__Fields fields;
    };

    struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_ {
        struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Class* klass;
        MonitorData* monitor;
        struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Fields fields;
    };

    struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___VTable {
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

    struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___StaticFields {
    };

    struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean___VTable vtable;
    };

    struct SpringVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpringVisuals__StaticFields {
    };

    struct SpringVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpringVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpringVisuals__VTable vtable;
    };

    struct SpringAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoonSetupVisuals;
    };

    struct SpringAnimator__StaticFields {
    };

    struct SpringAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpringAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpringAnimator__VTable vtable;
    };

    struct SpringLogic__Fields {
        struct MonoBehaviour__Fields _;
        float Height;
        float StopDecelerationMultiplier;
        struct SpringAnimator* Animator;
    };

    struct SpringLogic {
        struct SpringLogic__Class* klass;
        MonitorData* monitor;
        struct SpringLogic__Fields fields;
    };

    struct SpringLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoonSetupAnimator;
    };

    struct SpringLogic__StaticFields {
    };

    struct SpringLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpringLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpringLogic__VTable vtable;
    };

    enum class StomperVisuals_SoundEvent__Enum : int32_t {
        Stomp = 0x00000000,
        StompStart = 0x00000001,
        StompReset = 0x00000002,
        StompReelIn = 0x00000003,
    };

    struct StomperVisuals_SoundEvent__Enum__Boxed {
        struct StomperVisuals_SoundEvent__Enum__Class* klass;
        MonitorData* monitor;
        StomperVisuals_SoundEvent__Enum value;
    };

    struct StomperVisuals_SoundEvent__Enum__VTable {
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

    struct StomperVisuals_SoundEvent__Enum__StaticFields {
    };

    struct StomperVisuals_SoundEvent__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StomperVisuals_SoundEvent__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StomperVisuals_SoundEvent__Enum__VTable vtable;
    };

    struct StateHolder_1_AttackableSwitchSetupData___Fields {
        struct StateHolder__Fields _;
        struct List_1_AttackableSwitchSetupData_* StateData;
        struct List_1_IIndexedItem_* m_cachedStates;
    };

    struct StateHolder_1_AttackableSwitchSetupData_ {
        struct StateHolder_1_AttackableSwitchSetupData___Class* klass;
        MonitorData* monitor;
        struct StateHolder_1_AttackableSwitchSetupData___Fields fields;
    };

    struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Fields {
        struct StateHolder_1_AttackableSwitchSetupData___Fields _;
    };

    struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData_ {
        struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Class* klass;
        MonitorData* monitor;
        struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Fields fields;
    };

    struct AttackableSwitchSetupHolder__Fields {
        struct TransitionBasedSetupHolder_1_AttackableSwitchSetupData___Fields _;
    };

    struct AttackableSwitchSetupHolder {
        struct AttackableSwitchSetupHolder__Class* klass;
        MonitorData* monitor;
        struct AttackableSwitchSetupHolder__Fields fields;
    };

    struct __declspec(align(8)) List_1_AttackableSwitchSetupData___Fields {
        struct AttackableSwitchSetupData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AttackableSwitchSetupData_ {
        struct List_1_AttackableSwitchSetupData___Class* klass;
        MonitorData* monitor;
        struct List_1_AttackableSwitchSetupData___Fields fields;
    };

    struct __declspec(align(8)) AttackableSwitchSetupData__Fields {
        struct MoonTimeline* m_transition;
        bool m_desiredValue;
    };

    struct AttackableSwitchSetupData {
        struct AttackableSwitchSetupData__Class* klass;
        MonitorData* monitor;
        struct AttackableSwitchSetupData__Fields fields;
    };

    struct AttackableSwitchSetupData__Array {
        struct AttackableSwitchSetupData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AttackableSwitchSetupData* vector[32];
    };

    struct IEnumerator_1_AttackableSwitchSetupData_ {
        struct IEnumerator_1_AttackableSwitchSetupData___Class* klass;
        MonitorData* monitor;
    };

    struct AttackableSwitchSetupData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Transition;
        VirtualInvokeData get_DesiredValue;
    };

    struct AttackableSwitchSetupData__StaticFields {
    };

    struct AttackableSwitchSetupData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackableSwitchSetupData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackableSwitchSetupData__VTable vtable;
    };

    struct AttackableSwitchSetupData__Array__VTable {
    };

    struct AttackableSwitchSetupData__Array__StaticFields {
    };

    struct AttackableSwitchSetupData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttackableSwitchSetupData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttackableSwitchSetupData__Array__VTable vtable;
    };

    struct IEnumerator_1_AttackableSwitchSetupData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AttackableSwitchSetupData___StaticFields {
    };

    struct IEnumerator_1_AttackableSwitchSetupData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AttackableSwitchSetupData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AttackableSwitchSetupData___VTable vtable;
    };

} // namespace app
