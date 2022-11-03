namespace app {
    struct BombableSolidWallEntity__StaticFields {
    };

    struct BombableSolidWallEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BombableSolidWallEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BombableSolidWallEntity__VTable vtable;
    };

    struct StompableFloor__Fields {
        struct MonoBehaviour__Fields _;
        int32_t _HammerPriority_k__BackingField;
        bool _HammerEnableAutoTarget_k__BackingField;
        struct MoonTimeline* HighlightTimeline;
        struct MoonTimeline* HighlightedLoopTimeline;
        struct MoonTimeline* UnhighlightTimeline;
        struct MoonTimeline* DestructionTimeline;
        struct VisibleOnWorldMap* VisibleOnWorldMapComponent;
        struct Transform* HighlightTriggerTransform;
        struct SerializedBooleanUberState* State;
        struct Rect GasBallAttractionZone;
        struct Vector3 m_position;
        bool m_isHighlighted;
        struct Rect m_bounds;
        struct Rect m_runTimeGasBallAtractionZone;
        bool AlwaysIgnoreEnemies;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct StompableFloor {
        struct StompableFloor__Class* klass;
        MonitorData* monitor;
        struct StompableFloor__Fields fields;
    };

    struct StompableFloor__VTable {
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
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData get_HammerPriority;
        VirtualInvokeData get_HammerEnableAutoTarget;
        VirtualInvokeData OnRange;
        VirtualInvokeData GasBallBaitCenter;
        VirtualInvokeData get_GasBallAttractionTime;
    };

    struct StompableFloor__StaticFields {
    };

    struct StompableFloor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StompableFloor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StompableFloor__VTable vtable;
    };

    struct CarryableRigidBody_c {
        struct CarryableRigidBody_c__Class* klass;
        MonitorData* monitor;
    };

    struct CarryableRigidBody_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CarryableRigidBody_c__StaticFields {
        struct CarryableRigidBody_c* __9;
        struct Action* __9__53_0;
    };

    struct CarryableRigidBody_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CarryableRigidBody_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CarryableRigidBody_c__VTable vtable;
    };

    struct Checkpoint__Fields {
        struct MonoBehaviour__Fields _;
        struct Condition_1* Condition;
        struct Vector2 RespawnPosition;
        bool m_shouldAcceptRecievers;
    };

    struct Checkpoint {
        struct Checkpoint__Class* klass;
        MonitorData* monitor;
        struct Checkpoint__Fields fields;
    };

    struct Checkpoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
        VirtualInvokeData CanCreateCheckpoint;
    };

    struct Checkpoint__StaticFields {
    };

    struct Checkpoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Checkpoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Checkpoint__VTable vtable;
    };

    struct InvisibleCheckpoint__Fields {
        struct MonoBehaviour__Fields _;
        struct Condition_1* Condition;
        struct Vector2 RespawnPosition;
        bool m_shouldAcceptRecievers;
        struct Rect m_bounds;
        struct List_1_WaterZone_* m_tempWaterZoneList;
    };

    struct InvisibleCheckpoint {
        struct InvisibleCheckpoint__Class* klass;
        MonitorData* monitor;
        struct InvisibleCheckpoint__Fields fields;
    };

    struct InvisibleCheckpoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
        VirtualInvokeData CanCreateCheckpoint;
    };

    struct InvisibleCheckpoint__StaticFields {
        bool ENABLE_INVISIBLE_CHECKPOINTS;
    };

    struct InvisibleCheckpoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InvisibleCheckpoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InvisibleCheckpoint__VTable vtable;
    };

    struct NoSoulFlameZone__Fields {
        struct MonoBehaviour__Fields _;
        struct Rect _BoundingRect_k__BackingField;
    };

    struct NoSoulFlameZone {
        struct NoSoulFlameZone__Class* klass;
        MonitorData* monitor;
        struct NoSoulFlameZone__Fields fields;
    };

    struct __declspec(align(8)) List_1_NoSoulFlameZone___Fields {
        struct NoSoulFlameZone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_NoSoulFlameZone_ {
        struct List_1_NoSoulFlameZone___Class* klass;
        MonitorData* monitor;
        struct List_1_NoSoulFlameZone___Fields fields;
    };

    struct NoSoulFlameZone__Array {
        struct NoSoulFlameZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct NoSoulFlameZone* vector[32];
    };

    struct IEnumerator_1_NoSoulFlameZone_ {
        struct IEnumerator_1_NoSoulFlameZone___Class* klass;
        MonitorData* monitor;
    };

    struct NoSoulFlameZone__Array__VTable {
    };

    struct NoSoulFlameZone__Array__StaticFields {
    };

    struct NoSoulFlameZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NoSoulFlameZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NoSoulFlameZone__Array__VTable vtable;
    };

    struct IEnumerator_1_NoSoulFlameZone___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_NoSoulFlameZone___StaticFields {
    };

    struct IEnumerator_1_NoSoulFlameZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_NoSoulFlameZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_NoSoulFlameZone___VTable vtable;
    };

    struct List_1_NoSoulFlameZone___VTable {
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

    struct List_1_NoSoulFlameZone___StaticFields {
        struct NoSoulFlameZone__Array* _emptyArray;
    };

    struct List_1_NoSoulFlameZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_NoSoulFlameZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_NoSoulFlameZone___VTable vtable;
    };

    struct NoSoulFlameZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct NoSoulFlameZone__StaticFields {
        struct List_1_NoSoulFlameZone_* All;
    };

    struct NoSoulFlameZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NoSoulFlameZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NoSoulFlameZone__VTable vtable;
    };

    struct ContactSwitch__Fields {
        struct PlayerCollisionTrigger__Fields _;
        struct SerializedBooleanUberState* State;
        struct MoonTimeline* OnDeactivate;
        float ActiveDuration;
        bool Toggle;
        float ToggleDelay;
        struct Color InteractionColor;
        struct Color ActivatedColor;
        struct Color DeactivatedColor;
        bool m_isTouched;
        float m_currentTime;
        bool m_activated;
        struct PerformingAction* m_onActivatePerformingAction;
        bool m_wasPerforming;
        struct Renderer* m_renderer;
    };

    struct ContactSwitch {
        struct ContactSwitch__Class* klass;
        MonitorData* monitor;
        struct ContactSwitch__Fields fields;
    };

    struct ContactSwitch__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData get_IsOn;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
    };

    struct ContactSwitch__StaticFields {
    };

    struct ContactSwitch__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactSwitch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactSwitch__VTable vtable;
    };

    struct ContactSwitchSequencer__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_ContactSwitch_* Switches;
        int32_t m_activeSwitchIndex;
    };

    struct ContactSwitchSequencer {
        struct ContactSwitchSequencer__Class* klass;
        MonitorData* monitor;
        struct ContactSwitchSequencer__Fields fields;
    };

    struct __declspec(align(8)) List_1_ContactSwitch___Fields {
        struct ContactSwitch__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ContactSwitch_ {
        struct List_1_ContactSwitch___Class* klass;
        MonitorData* monitor;
        struct List_1_ContactSwitch___Fields fields;
    };

    struct ContactSwitch__Array {
        struct ContactSwitch__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ContactSwitch* vector[32];
    };

    struct IEnumerator_1_ContactSwitch_ {
        struct IEnumerator_1_ContactSwitch___Class* klass;
        MonitorData* monitor;
    };

    struct ContactSwitch__Array__VTable {
    };

    struct ContactSwitch__Array__StaticFields {
    };

    struct ContactSwitch__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactSwitch__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactSwitch__Array__VTable vtable;
    };

    struct IEnumerator_1_ContactSwitch___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ContactSwitch___StaticFields {
    };

    struct IEnumerator_1_ContactSwitch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ContactSwitch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ContactSwitch___VTable vtable;
    };

    struct List_1_ContactSwitch___VTable {
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

    struct List_1_ContactSwitch___StaticFields {
        struct ContactSwitch__Array* _emptyArray;
    };

    struct List_1_ContactSwitch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ContactSwitch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ContactSwitch___VTable vtable;
    };

    struct ContactSwitchSequencer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ContactSwitchSequencer__StaticFields {
    };

    struct ContactSwitchSequencer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactSwitchSequencer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactSwitchSequencer__VTable vtable;
    };

    struct LagoonContactSwitch__Fields {
        struct PlayerCollisionTrigger__Fields _;
        struct LagoonContactSwitchDoors* ConnectedDoors;
        struct MoonTimeline* Activate;
        struct MoonTimeline* ActivatedLoop;
        struct MoonTimeline* Deactivate;
        struct MoonTimeline* DeactivatedLoop;
        struct MoonTimeline* Touch;
        struct EventTriggerAnimator* OpenDoors;
        struct EventTriggerAnimator* CloseDoors;
        struct MoonTimeline* m_currentTimeline;
        struct SerializedBooleanUberState* State;
        struct DesiredUberStateBool* PuzzleSolvedState;
        bool CloseDoorWhenPuzzleSolved;
        struct Condition_1* PuzzleSolvedCondition;
        float ActiveDuration;
        bool Toggle;
        float ToggleDelay;
        bool m_isTouched;
        float m_currentTime;
        bool m_activated;
    };

    struct LagoonContactSwitch {
        struct LagoonContactSwitch__Class* klass;
        MonitorData* monitor;
        struct LagoonContactSwitch__Fields fields;
    };

    struct LagoonContactSwitchDoors__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* Open;
        struct MoonTimeline* OpenedLoop;
        struct MoonTimeline* Close;
        struct MoonTimeline* ClosedLoop;
        struct LagoonContactSwitch__Array* AffectingSwitches;
        bool m_isOpened;
        bool m_isFrustumDisabled;
        bool m_appliedOpen;
        struct VerletStructure__Array* m_verletStructures;
        float m_delayBeforeDisableVerletStructuresTimer;
        bool m_insideFrustum;
        struct Bounds m_bounds;
    };

    struct LagoonContactSwitchDoors {
        struct LagoonContactSwitchDoors__Class* klass;
        MonitorData* monitor;
        struct LagoonContactSwitchDoors__Fields fields;
    };

    struct LagoonContactSwitch__Array {
        struct LagoonContactSwitch__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LagoonContactSwitch* vector[32];
    };

    struct VerletStructure__Array {
        struct VerletStructure__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct VerletStructure* vector[32];
    };

    struct LagoonContactSwitch__Array__VTable {
    };

    struct LagoonContactSwitch__Array__StaticFields {
    };

    struct LagoonContactSwitch__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LagoonContactSwitch__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LagoonContactSwitch__Array__VTable vtable;
    };

    struct VerletStructure__Array__VTable {
    };

    struct VerletStructure__Array__StaticFields {
    };

    struct VerletStructure__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletStructure__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletStructure__Array__VTable vtable;
    };

    struct LagoonContactSwitchDoors__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
    };

    struct LagoonContactSwitchDoors__StaticFields {
    };

    struct LagoonContactSwitchDoors__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LagoonContactSwitchDoors__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LagoonContactSwitchDoors__VTable vtable;
    };

    struct LagoonContactSwitch__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData get_IsOn;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
    };

    struct LagoonContactSwitch__StaticFields {
    };

    struct LagoonContactSwitch__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LagoonContactSwitch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LagoonContactSwitch__VTable vtable;
    };

    struct LagoonContactSwitchGroupAction__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_LagoonContactSwitch_* ContactSwitches;
        struct MoonTimeline* TimelineToPlay;
        int32_t m_activeSwitches;
    };

    struct LagoonContactSwitchGroupAction {
        struct LagoonContactSwitchGroupAction__Class* klass;
        MonitorData* monitor;
        struct LagoonContactSwitchGroupAction__Fields fields;
    };

    struct __declspec(align(8)) List_1_LagoonContactSwitch___Fields {
        struct LagoonContactSwitch__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LagoonContactSwitch_ {
        struct List_1_LagoonContactSwitch___Class* klass;
        MonitorData* monitor;
        struct List_1_LagoonContactSwitch___Fields fields;
    };

    struct IEnumerator_1_LagoonContactSwitch_ {
        struct IEnumerator_1_LagoonContactSwitch___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_LagoonContactSwitch___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LagoonContactSwitch___StaticFields {
    };

    struct IEnumerator_1_LagoonContactSwitch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LagoonContactSwitch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LagoonContactSwitch___VTable vtable;
    };

    struct List_1_LagoonContactSwitch___VTable {
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

    struct List_1_LagoonContactSwitch___StaticFields {
        struct LagoonContactSwitch__Array* _emptyArray;
    };

    struct List_1_LagoonContactSwitch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LagoonContactSwitch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LagoonContactSwitch___VTable vtable;
    };

    struct LagoonContactSwitchGroupAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LagoonContactSwitchGroupAction__StaticFields {
    };

    struct LagoonContactSwitchGroupAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LagoonContactSwitchGroupAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LagoonContactSwitchGroupAction__VTable vtable;
    };

    struct LegacyContactSwitch__Fields {
        struct LegacyPlayerCollisionTrigger__Fields _;
        struct ActionMethod* OnDeactivate;
        float ActiveTimer;
        bool Toggle;
        float ToggleDelay;
        struct Color InteractionColor;
        struct Color ActivatedColor;
        struct Color DeactivatedColor;
        bool m_isTouched;
        float m_currentTime;
        bool m_isActivated;
        struct PerformingAction* m_onActivatePerformingAction;
        bool m_wasPerforming;
        struct Renderer* m_renderer;
    };

    struct LegacyContactSwitch {
        struct LegacyContactSwitch__Class* klass;
        MonitorData* monitor;
        struct LegacyContactSwitch__Fields fields;
    };

    struct LegacyContactSwitch__VTable {
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
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnTriggerEnable;
        VirtualInvokeData OnTriggerDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnTriggerActivated;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData get_IsOn;
    };

    struct LegacyContactSwitch__StaticFields {
    };

    struct LegacyContactSwitch__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyContactSwitch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyContactSwitch__VTable vtable;
    };

    struct DeadlyDarknessRectangleZone__Fields {
        struct RectangleGameplayZone__Fields _;
    };

    struct DeadlyDarknessRectangleZone {
        struct DeadlyDarknessRectangleZone__Class* klass;
        MonitorData* monitor;
        struct DeadlyDarknessRectangleZone__Fields fields;
    };

    struct DeadlyDarknessRectangleZone__VTable {
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

    struct DeadlyDarknessRectangleZone__StaticFields {
    };

    struct DeadlyDarknessRectangleZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeadlyDarknessRectangleZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeadlyDarknessRectangleZone__VTable vtable;
    };

    struct ProtectiveLightCone__Fields {
        struct SpiritLightCapsuleVisualAffector__Fields _;
        struct Vector2 Test;
    };

    struct ProtectiveLightCone {
        struct ProtectiveLightCone__Class* klass;
        MonitorData* monitor;
        struct ProtectiveLightCone__Fields fields;
    };

    struct __declspec(align(8)) List_1_ProtectiveLightCone___Fields {
        struct ProtectiveLightCone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ProtectiveLightCone_ {
        struct List_1_ProtectiveLightCone___Class* klass;
        MonitorData* monitor;
        struct List_1_ProtectiveLightCone___Fields fields;
    };

    struct ProtectiveLightCone__Array {
        struct ProtectiveLightCone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ProtectiveLightCone* vector[32];
    };

    struct IEnumerator_1_ProtectiveLightCone_ {
        struct IEnumerator_1_ProtectiveLightCone___Class* klass;
        MonitorData* monitor;
    };

    struct ProtectiveLightCone__Array__VTable {
    };

    struct ProtectiveLightCone__Array__StaticFields {
    };

    struct ProtectiveLightCone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProtectiveLightCone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProtectiveLightCone__Array__VTable vtable;
    };

    struct IEnumerator_1_ProtectiveLightCone___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ProtectiveLightCone___StaticFields {
    };

} // namespace app
