namespace app {
    struct BombableWallLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
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
        VirtualInvokeData get_BabyWormAutoTargetPosition;
        VirtualInvokeData get_BabyWormAutoTargetPriority;
        VirtualInvokeData get_TargetActive;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData get_MoonSetupAnimator;
        VirtualInvokeData OnRange;
        VirtualInvokeData GasBallBaitCenter;
        VirtualInvokeData get_GasBallAttractionTime;
    };

    struct BombableWallLogic__StaticFields {
    };

    struct BombableWallLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BombableWallLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BombableWallLogic__VTable vtable;
    };

    struct BreakableWallAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct BreakableWallVisuals* Visuals;
        struct MoonTimeline* OnHitTimeline;
        struct MoonTimeline* BreakStage1Timeline;
        struct MoonTimeline* BreakStage2Timeline;
        struct MoonTimeline* OnDestroyTimeline;
        struct MoonTimeline* OnDestroyByFireTimeline;
        struct MoonTimeline* BreakStageA;
        struct MoonTimeline* BreakStageB;
        struct MoonTimeline* FadeoutTimeline;
        bool _InvalidateParentTimelineCache_k__BackingField;
        bool m_isSecret;
    };

    struct BreakableWallAnimator {
        struct BreakableWallAnimator__Class* klass;
        MonitorData* monitor;
        struct BreakableWallAnimator__Fields fields;
    };

    struct BreakableWallVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* WallRoot;
        struct GameObject* WallPartA;
        struct GameObject* WallPartB;
        struct GameObject* WallPartC;
        struct MoonTimeline* ToStageBTimeline;
        struct MoonTimeline* ToStageCTimeline;
        struct MoonTimeline* ToDestroyedTimeline;
        struct MoonTimeline* HitTimeline;
        struct GameObject* HighlightTarget;
        struct GameObject* FadeoutTarget;
    };

    struct BreakableWallVisuals {
        struct BreakableWallVisuals__Class* klass;
        MonitorData* monitor;
        struct BreakableWallVisuals__Fields fields;
    };

    struct BreakableWallVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BreakableWallVisuals__StaticFields {
    };

    struct BreakableWallVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BreakableWallVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BreakableWallVisuals__VTable vtable;
    };

    struct BreakableWallAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoonSetupVisuals;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
    };

    struct BreakableWallAnimator__StaticFields {
    };

    struct BreakableWallAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BreakableWallAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BreakableWallAnimator__VTable vtable;
    };

    struct BreakableWallLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct BreakableWallAnimator* Animator;
        struct MoonReference_1_IGenericUberState_* State;
        struct Vitals* Vitals;
        struct GameObject* DisableOnDestroy;
        bool IsSecret;
        float HealthA;
        float HealthB;
        float HealthC;
        int32_t m_state;
        struct Collider* m_collider;
        struct IUberState__Array* m_affectingUberStates;
    };

    struct BreakableWallLogic {
        struct BreakableWallLogic__Class* klass;
        MonitorData* monitor;
        struct BreakableWallLogic__Fields fields;
    };

    struct BreakableWallLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_MoonSetupAnimator;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
    };

    struct BreakableWallLogic__StaticFields {
    };

    struct BreakableWallLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BreakableWallLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BreakableWallLogic__VTable vtable;
    };

    struct Bubble__Fields {
        struct MonoBehaviour__Fields _;
        SuspendableMask__Enum m_suspensionMask;

        struct LayerMask DestroyMask;
        float MaxLifeTime;
        float InstantVelocityFromOriTouch;
        float MinAngleForAboveAction;
        struct MoonTimeline* OnOriLandAboveTimeline;
        struct MoonTimeline* BumpTimeline;
        struct MoonTimeline* UnderWaterPopTimeline;
        struct MoonTimeline* AboveWaterPopTimeline;
        bool TarBubble;
        struct String__Array* IgnoreBubblePhysicsLayers;
        float AccelerationY;
        float TurbulencePeriod;
        float TurbulenceAcceleration;
        float FeatherPushForceMultiplier;
        float OriInteractionCooldown;
        struct Vector3 BaseLocalScale;
        float BaseAccelerationY;
        float m_lastOriEnterTime;
        struct Rigidbody* m_rigidbody;
        struct Collider* m_collider;
        struct Collider__Array* m_colliders;
        float m_timeUntilDeath;
        float m_timeUntilDirectionFlip;
        int32_t m_direction;
        struct EntityTargetting* m_entityTargeting;
        struct DamageReceiver* m_damageReceiver;
        struct Vector2 m_externalForce;
        struct Vector2 m_velocityLastFrame;
        bool m_isSuspended;
        bool m_isExploded;
        float Height;
        float StopDecelerationMultiplier;
        struct Transform* m_transform;
    };

    struct Bubble {
        struct Bubble__Class* klass;
        MonitorData* monitor;
        struct Bubble__Fields fields;
    };

    struct Bubble__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnReceiveWindFromPipe;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData ShouldKillBubble;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData OnDestroy;
    };

    struct Bubble__StaticFields {
    };

    struct Bubble__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Bubble__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Bubble__VTable vtable;
    };

    struct Bubblemaker__Fields {
        struct MonoBehaviour__Fields _;
        SuspendableMask__Enum m_suspensionMask;

        float SpawnTime;
        float SpawnOffsetTime;
        struct MoonTimeline* LaunchTimeline;
        struct EventTriggerAnimator* SpawnBubbleTrigger;
        struct ProjectileSpawner* ProjectileSpawner;
        bool RandomizeScale;
        float MinScaleMultiplier;
        float MaxScaleMultiplier;
        bool RandomizeSpeed;
        float MinSpeedMultiplier;
        float MaxSpeedMultiplier;
        struct GameObject* ProxyBubble;
        bool RaceOverride;
        struct MoonTimeline* m_timelineToPlay;
        float m_spawnTimer;
        float m_spawnOffsetTimer;
        float m_raceTimeLastUpdate;
        struct Collider__Array* m_colliders;
        bool m_isSuspended;
    };

    struct Bubblemaker {
        struct Bubblemaker__Class* klass;
        MonitorData* monitor;
        struct Bubblemaker__Fields fields;
    };

    struct Bubblemaker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnRaceStart;
        VirtualInvokeData OnSyncRaceTimer;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnRestoreCheckpoint;
    };

    struct Bubblemaker__StaticFields {
    };

    struct Bubblemaker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Bubblemaker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Bubblemaker__VTable vtable;
    };

    struct BubblemakerBlocked__Fields {
        struct Bubblemaker__Fields _;
        struct SerializedBooleanUberState* BubbleMakerUnblockedState;
        struct Vitals* BlockerVitals;
        struct MoonTimeline* BlockedTimeline;
        struct MoonTimeline* StarDestroyedTimeline;
        struct IUberState__Array* _AffectingUberStates_k__BackingField;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    };

    struct BubblemakerBlocked {
        struct BubblemakerBlocked__Class* klass;
        MonitorData* monitor;
        struct BubblemakerBlocked__Fields fields;
    };

    struct BubblemakerBlocked__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnRaceStart;
        VirtualInvokeData OnSyncRaceTimer;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
    };

    struct BubblemakerBlocked__StaticFields {
    };

    struct BubblemakerBlocked__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BubblemakerBlocked__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BubblemakerBlocked__VTable vtable;
    };

    struct DashableSwitchAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct DashableSwitchVisuals* Visuals;
        struct MoonTimeline* OpenTimeline;
        struct MoonTimeline* CloseTimeline;
        struct MoonTimeline* RecedeTimeline;
    };

    struct DashableSwitchAnimator {
        struct DashableSwitchAnimator__Class* klass;
        MonitorData* monitor;
        struct DashableSwitchAnimator__Fields fields;
    };

    struct DashableSwitchVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* OpenTimeline;
        struct MoonTimeline* CloseTimeline;
        struct MoonTimeline* RecedeTimeline;
    };

    struct DashableSwitchVisuals {
        struct DashableSwitchVisuals__Class* klass;
        MonitorData* monitor;
        struct DashableSwitchVisuals__Fields fields;
    };

    struct DashableSwitchVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DashableSwitchVisuals__StaticFields {
    };

    struct DashableSwitchVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DashableSwitchVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DashableSwitchVisuals__VTable vtable;
    };

    struct DashableSwitchAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupVisuals;
    };

    struct DashableSwitchAnimator__StaticFields {
    };

    struct DashableSwitchAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DashableSwitchAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DashableSwitchAnimator__VTable vtable;
    };

    struct DashableSwitchLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
        bool CreateCheckpoint;
        struct CheckpointFunctionality Checkpoint;
        struct DashableSwitchAnimator* Animator;
        struct MoonReference_1_IGenericUberState_* State;
        bool AllowTriggeringMultipleTimes;
        float CooldownTime;
        float m_timeLastTriggered;
    };

    struct DashableSwitchLogic {
        struct DashableSwitchLogic__Class* klass;
        MonitorData* monitor;
        struct DashableSwitchLogic__Fields fields;
    };

    struct DashableSwitchLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData PerformStateTransition;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData StopTransitions;
        VirtualInvokeData get_MoonSetupAnimator;
        VirtualInvokeData GetResolverForType;
    };

    struct DashableSwitchLogic__StaticFields {
    };

    struct DashableSwitchLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DashableSwitchLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DashableSwitchLogic__VTable vtable;
    };

    struct DashableSwitchPhysics__Fields {
        struct MonoBehaviour__Fields _;
        struct DashableSwitchLogic* Logic;
    };

    struct DashableSwitchPhysics {
        struct DashableSwitchPhysics__Class* klass;
        MonitorData* monitor;
        struct DashableSwitchPhysics__Fields fields;
    };

    struct IMoonSetupLogic {
        struct IMoonSetupLogic__Class* klass;
        MonitorData* monitor;
    };

    struct IMoonSetupLogic__VTable {
        VirtualInvokeData get_MoonSetupAnimator;
    };

    struct IMoonSetupLogic__StaticFields {
    };

    struct IMoonSetupLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonSetupLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonSetupLogic__VTable vtable;
    };

    struct DashableSwitchPhysics__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsOn;
        VirtualInvokeData OnDashHit;
        VirtualInvokeData OnDashHit_1;
        VirtualInvokeData get_MoonSetupLogic;
    };

    struct DashableSwitchPhysics__StaticFields {
    };

    struct DashableSwitchPhysics__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DashableSwitchPhysics__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DashableSwitchPhysics__VTable vtable;
    };

    struct Elevator__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* ElevatorSuport;
        struct SerializedByteUberState* UberState;
        float Speed;
        struct MoonTimeline* StartGoingUpTimeline;
        struct MoonTimeline* StartGoingDownTimeline;
        struct MoonTimeline* StopMovingTimeline;
        struct MoonReference_1_ILever_* Lever;
        struct List_1_Elevator_ElevatorStop_* Stops;
        float m_timer;
        float m_duration;
        struct Vector3 m_fromPosition;
        struct Vector3 m_toPosition;
        bool m_isMoving;
        struct IUberState__Array* m_affectingUberStates;
        struct List_1_UnityEngine_GameObject_* m_targets;
        SuspendableMask__Enum _Mask_k__BackingField;

        bool _IsSuspended_k__BackingField;
    };

    struct Elevator {
        struct Elevator__Class* klass;
        MonitorData* monitor;
        struct Elevator__Fields fields;
    };

    struct __declspec(align(8)) List_1_Elevator_ElevatorStop___Fields {
        struct Elevator_ElevatorStop__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Elevator_ElevatorStop_ {
        struct List_1_Elevator_ElevatorStop___Class* klass;
        MonitorData* monitor;
        struct List_1_Elevator_ElevatorStop___Fields fields;
    };

    struct __declspec(align(8)) Elevator_ElevatorStop__Fields {
        float Height;
        struct Condition_1* ValidCondition;
    };

    struct Elevator_ElevatorStop {
        struct Elevator_ElevatorStop__Class* klass;
        MonitorData* monitor;
        struct Elevator_ElevatorStop__Fields fields;
    };

    struct Elevator_ElevatorStop__Array {
        struct Elevator_ElevatorStop__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Elevator_ElevatorStop* vector[32];
    };

    struct IEnumerator_1_Elevator_ElevatorStop_ {
        struct IEnumerator_1_Elevator_ElevatorStop___Class* klass;
        MonitorData* monitor;
    };

    struct Elevator_ElevatorStop__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Elevator_ElevatorStop__StaticFields {
    };

    struct Elevator_ElevatorStop__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Elevator_ElevatorStop__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Elevator_ElevatorStop__VTable vtable;
    };

    struct Elevator_ElevatorStop__Array__VTable {
    };

    struct Elevator_ElevatorStop__Array__StaticFields {
    };

    struct Elevator_ElevatorStop__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Elevator_ElevatorStop__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Elevator_ElevatorStop__Array__VTable vtable;
    };

    struct IEnumerator_1_Elevator_ElevatorStop___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Elevator_ElevatorStop___StaticFields {
    };

    struct IEnumerator_1_Elevator_ElevatorStop___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Elevator_ElevatorStop___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Elevator_ElevatorStop___VTable vtable;
    };

    struct List_1_Elevator_ElevatorStop___VTable {
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

    struct List_1_Elevator_ElevatorStop___StaticFields {
        struct Elevator_ElevatorStop__Array* _emptyArray;
    };

    struct List_1_Elevator_ElevatorStop___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Elevator_ElevatorStop___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Elevator_ElevatorStop___VTable vtable;
    };

    struct Elevator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData GetTweenNormalizedValue;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct Elevator__StaticFields {
    };

    struct Elevator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Elevator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Elevator__VTable vtable;
    };

    struct EnemyDoorAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct MoonTimeline* OpenDoorTimeline;
        struct MoonTimeline* CloseDoorTimeline;
        struct EnemyDoorVisuals* Visuals;
    };

    struct EnemyDoorAnimator {
        struct EnemyDoorAnimator__Class* klass;
        MonitorData* monitor;
        struct EnemyDoorAnimator__Fields fields;
    };

    struct EnemyDoorVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* OpenDoorTimeline;
        struct MoonTimeline* CloseDoorTimeline;
    };

    struct EnemyDoorVisuals {
        struct EnemyDoorVisuals__Class* klass;
        MonitorData* monitor;
        struct EnemyDoorVisuals__Fields fields;
    };

    struct EnemyDoorVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnemyDoorVisuals__StaticFields {
    };

    struct EnemyDoorVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyDoorVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyDoorVisuals__VTable vtable;
    };

    struct EnemyDoorAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupVisuals;
    };

    struct EnemyDoorAnimator__StaticFields {
    };

    struct EnemyDoorAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyDoorAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyDoorAnimator__VTable vtable;
    };

    struct EnemyDoorLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct EnemyDoorAnimator* Animator;
    };

    struct EnemyDoorLogic {
        struct EnemyDoorLogic__Class* klass;
        MonitorData* monitor;
        struct EnemyDoorLogic__Fields fields;
    };

    struct EnemyDoorLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupAnimator;
    };

    struct EnemyDoorLogic__StaticFields {
    };

    struct EnemyDoorLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyDoorLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyDoorLogic__VTable vtable;
    };

    struct EnergyPlantAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        struct EnergyPlantVisuals* Visuals;
        struct MoonTimeline* DeathSequence;
        struct MoonTimeline* HitSequence;
        struct MoonTimeline* RespawnSequence;
    };

    struct EnergyPlantAnimator {
        struct EnergyPlantAnimator__Class* klass;
        MonitorData* monitor;
        struct EnergyPlantAnimator__Fields fields;
    };

    struct EnergyPlantVisuals__Fields {
        struct MonoBehaviour__Fields _;
        struct BoxCollider* HitCollider;
        struct MoonTimeline* DeathTimeline;
        struct MoonTimeline* HitTimeline;
        struct MoonTimeline* RespawnTimeline;
        struct List_1_UnityEngine_GameObject_* DisableOnDestroyed;
    };

    struct EnergyPlantVisuals {
        struct EnergyPlantVisuals__Class* klass;
        MonitorData* monitor;
        struct EnergyPlantVisuals__Fields fields;
    };

    struct EnergyPlantVisuals__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetManagedEarlyZDynamicGraphicTargets;
    };

    struct EnergyPlantVisuals__StaticFields {
    };

    struct EnergyPlantVisuals__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyPlantVisuals__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyPlantVisuals__VTable vtable;
    };

    struct EnergyPlantAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupVisuals;
    };

    struct EnergyPlantAnimator__StaticFields {
    };

    struct EnergyPlantAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyPlantAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyPlantAnimator__VTable vtable;
    };

    struct EnergyPlantLogic__Fields {
        struct MonoBehaviour__Fields _;
        float RespawnTime;
        float m_timer;
        bool RespawnOnScreen;
        struct DynamicDataResolver* m_dataResolver;
        struct EnergyPlantAnimator* Animator;
        struct Vitals* m_vitals;
        struct Bounds m_bounds;
        bool m_insideFrustum;
        bool m_hasFrustumDisablingParent;
        struct OrbSpawner__Array* m_orbSpawners;
    };

    struct EnergyPlantLogic {
        struct EnergyPlantLogic__Class* klass;
        MonitorData* monitor;
        struct EnergyPlantLogic__Fields fields;
    };

    struct OrbSpawner__Array {
        struct OrbSpawner__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct OrbSpawner* vector[32];
    };

    struct OrbSpawner__Array__VTable {
    };

    struct OrbSpawner__Array__StaticFields {
    };

    struct OrbSpawner__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OrbSpawner__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OrbSpawner__Array__VTable vtable;
    };

    struct EnergyPlantLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_MoonSetupAnimator;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnPostTimeSlicedEnable;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
    };

    struct EnergyPlantLogic__StaticFields {
    };

    struct EnergyPlantLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyPlantLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyPlantLogic__VTable vtable;
    };

    struct Firefly__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* Sprite;
        struct AnimationCurve* SlowDownOverLastDistance;
        struct MoonTimeline* SpawnTimeline;
        struct MoonTimeline* FlickerTimeline;
        struct MoonTimeline* DieTimeline;
        struct MoonTimeline* DieOffscreenTimeline;
        struct EventTriggerAnimator* SpawnOrbsEventTrigger;
        float IdleAmplitudeX;
        float IdleAmplitudeY;
        float IdleFrequencyX;
        float IdleFrequencyY;
        float DestroyDistance;
        struct Bounds m_bounds;
        struct Vector3 m_initScale;
        struct Vector3 m_target;
        struct Vector3 m_desiredPosition;
        struct Vector3 m_destinationPoint;
        struct Vector3 m_lastPosition;
        bool m_spawnOrbs;
        bool m_isAlive;
        struct Action_1_Boolean_* m_onDeathHiveAction;
        struct OrbSpawner* m_orbSpawner;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct Firefly {
        struct Firefly__Class* klass;
        MonitorData* monitor;
        struct Firefly__Fields fields;
    };

} // namespace app
