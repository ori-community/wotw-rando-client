namespace app {
    struct List_1_System_Tuple_2__4__StaticFields {
        struct Tuple_2_SceneManagerScene_SceneState___Array* _emptyArray;
    };

    struct List_1_System_Tuple_2__4__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Tuple_2__4__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_Tuple_2__4__VTable vtable;
    };

    struct ScenesManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
    };

    struct ScenesManager__StaticFields {
        bool UseAggressiveOriAndCameraBlocking;
        SceneLoadingQueuePriorityMode__Enum LoadingQueuePriorityMode;

        bool PruneQueueBeforeLoading;
        bool BypassScenesManager;
        bool DoExtraSceneCleanUp;
        bool UnloadUnneededScenesWhenTeleporting;
        bool UnloadUnneededScenesWhenTeleportingAsync;
        struct List_1_Moon_IRectProvider_* m_tempRectProviderList;
        struct List_1_System_Int32_* m_tempHashList;
        bool OptimizedHashPath;
        int32_t NearbyScenesHops;
    };

    struct ScenesManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager__VTable vtable;
    };

    struct InstantLoadScenesController__Fields {
        struct MonoBehaviour__Fields _;
        struct Action* m_onFinishedLoading;
        bool m_isLoading;
        float m_startInstantlyLoadingScenesTime;
        bool m_entireGameFrozen;
        struct Vector2 m_position;
        struct Action* OnScenesEnabledCallback;
        bool m_lockFinishLoading;
    };

    struct InstantLoadScenesController {
        struct InstantLoadScenesController__Class* klass;
        MonitorData* monitor;
        struct InstantLoadScenesController__Fields fields;
    };

    struct InstantLoadScenesController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InstantLoadScenesController__StaticFields {
        struct InstantLoadScenesController* Instance;
    };

    struct InstantLoadScenesController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InstantLoadScenesController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InstantLoadScenesController__VTable vtable;
    };

    struct LateStartHook__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct LateStartHook {
        struct LateStartHook__Class* klass;
        MonitorData* monitor;
        struct LateStartHook__Fields fields;
    };

    struct __declspec(align(8)) List_1_System_ValueTuple_2___Fields {
        struct ValueTuple_2_Action_UberPoolItem___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_ValueTuple_2_ {
        struct List_1_System_ValueTuple_2___Class* klass;
        MonitorData* monitor;
        struct List_1_System_ValueTuple_2___Fields fields;
    };

    struct ValueTuple_2_Action_UberPoolItem_ {
        struct Action* Item1;
        struct UberPoolItem* Item2;
    };

    struct ValueTuple_2_Action_UberPoolItem___Boxed {
        struct ValueTuple_2_Action_UberPoolItem___Class* klass;
        MonitorData* monitor;
        struct ValueTuple_2_Action_UberPoolItem_ fields;
    };

    struct ValueTuple_2_Action_UberPoolItem___Array {
        struct ValueTuple_2_Action_UberPoolItem___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ValueTuple_2_Action_UberPoolItem_ vector[32];
    };

    struct IEnumerator_1_System_ValueTuple_2__3 {
        struct IEnumerator_1_System_ValueTuple_2__3__Class* klass;
        MonitorData* monitor;
    };

    struct ValueTuple_2_Action_UberPoolItem___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
        VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
        VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
        VirtualInvokeData System_IComparable_CompareTo;
        VirtualInvokeData CompareTo;
    };

    struct ValueTuple_2_Action_UberPoolItem___StaticFields {
    };

    struct ValueTuple_2_Action_UberPoolItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ValueTuple_2_Action_UberPoolItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ValueTuple_2_Action_UberPoolItem___VTable vtable;
    };

    struct ValueTuple_2_Action_UberPoolItem___Array__VTable {
    };

    struct ValueTuple_2_Action_UberPoolItem___Array__StaticFields {
    };

    struct ValueTuple_2_Action_UberPoolItem___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ValueTuple_2_Action_UberPoolItem___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ValueTuple_2_Action_UberPoolItem___Array__VTable vtable;
    };

    struct IEnumerator_1_System_ValueTuple_2__3__VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_ValueTuple_2__3__StaticFields {
    };

    struct IEnumerator_1_System_ValueTuple_2__3__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_ValueTuple_2__3__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_ValueTuple_2__3__VTable vtable;
    };

    struct List_1_System_ValueTuple_2___VTable {
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

    struct List_1_System_ValueTuple_2___StaticFields {
        struct ValueTuple_2_Action_UberPoolItem___Array* _emptyArray;
    };

    struct List_1_System_ValueTuple_2___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_ValueTuple_2___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_ValueTuple_2___VTable vtable;
    };

    struct LateStartHook__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LateStartHook__StaticFields {
        struct List_1_System_ValueTuple_2_* Actions;
    };

    struct LateStartHook__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LateStartHook__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LateStartHook__VTable vtable;
    };

    struct __declspec(align(8)) LoadingBoostController_BoostModeSettings__Fields {
        double TimeslicedIntegrationBudget;
        float TimeslicedEnableBudget;
        int32_t AsyncUploadBudget;
        ThreadPriority__Enum_1 BackgroundLoadingThreadPriority;

        float TimesliceBudget;
        bool SwitchCPUBoost;
    };

    struct LoadingBoostController_BoostModeSettings {
        struct LoadingBoostController_BoostModeSettings__Class* klass;
        MonitorData* monitor;
        struct LoadingBoostController_BoostModeSettings__Fields fields;
    };

    struct LoadingBoostController_BoostModeSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LoadingBoostController_BoostModeSettings__StaticFields {
    };

    struct LoadingBoostController_BoostModeSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoadingBoostController_BoostModeSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoadingBoostController_BoostModeSettings__VTable vtable;
    };

    struct LoadingBoostController {
        struct LoadingBoostController__Class* klass;
        MonitorData* monitor;
    };

    struct LoadingBoostController_BoostModeSettings__Array {
        struct LoadingBoostController_BoostModeSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LoadingBoostController_BoostModeSettings* vector[32];
    };

    struct LoadingBoostController_BoostModeSettings__Array__VTable {
    };

    struct LoadingBoostController_BoostModeSettings__Array__StaticFields {
    };

    struct LoadingBoostController_BoostModeSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoadingBoostController_BoostModeSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoadingBoostController_BoostModeSettings__Array__VTable vtable;
    };

    struct LoadingBoostController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LoadingBoostController__StaticFields {
        struct LoadingBoostController_BoostModeSettings__Array* m_settings;
        LoadingBoostController_BoostModeLevel__Enum m_currentLevel;

        double m_scaleFactor;
        bool RemapDefaultToLowPriority;
    };

    struct LoadingBoostController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoadingBoostController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoadingBoostController__VTable vtable;
    };

    struct OnScreenPositionSetter__Fields {
        struct MonoBehaviour__Fields _;
        float LeftBottomOffset;
        struct Camera* m_camera;
        struct Vector3 m_screenToWorldPos;
    };

    struct OnScreenPositionSetter {
        struct OnScreenPositionSetter__Class* klass;
        MonitorData* monitor;
        struct OnScreenPositionSetter__Fields fields;
    };

    struct OnScreenPositionSetter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnScreenPositionSetter__StaticFields {
    };

    struct OnScreenPositionSetter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnScreenPositionSetter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnScreenPositionSetter__VTable vtable;
    };

    struct ScreenshotIconMarker__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct ScreenshotIconMarker {
        struct ScreenshotIconMarker__Class* klass;
        MonitorData* monitor;
        struct ScreenshotIconMarker__Fields fields;
    };

    struct PlaceholderMarker__Fields {
        struct ScreenshotIconMarker__Fields _;
    };

    struct PlaceholderMarker {
        struct PlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct PlaceholderMarker__Fields fields;
    };

    struct EnemyPlaceholderMarker__Fields {
        struct PlaceholderMarker__Fields _;
    };

    struct EnemyPlaceholderMarker {
        struct EnemyPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct EnemyPlaceholderMarker__Fields fields;
    };

    struct DropSlugPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct DropSlugPlaceholderMarker {
        struct DropSlugPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct DropSlugPlaceholderMarker__Fields fields;
    };

    struct ScreenshotIconMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScreenshotIconMarker__StaticFields {
    };

    struct ScreenshotIconMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScreenshotIconMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScreenshotIconMarker__VTable vtable;
    };

    struct PlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlaceholderMarker__StaticFields {
    };

    struct PlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlaceholderMarker__VTable vtable;
    };

    struct EnemyPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnemyPlaceholderMarker__StaticFields {
    };

    struct EnemyPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyPlaceholderMarker__VTable vtable;
    };

    struct DropSlugPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DropSlugPlaceholderMarker__StaticFields {
    };

    struct DropSlugPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DropSlugPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DropSlugPlaceholderMarker__VTable vtable;
    };

    struct GasballPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct GasballPlaceholderMarker {
        struct GasballPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct GasballPlaceholderMarker__Fields fields;
    };

    struct GasballPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GasballPlaceholderMarker__StaticFields {
    };

    struct GasballPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GasballPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GasballPlaceholderMarker__VTable vtable;
    };

    struct MinerEnemyPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct MinerEnemyPlaceholderMarker {
        struct MinerEnemyPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct MinerEnemyPlaceholderMarker__Fields fields;
    };

    struct MinerEnemyPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MinerEnemyPlaceholderMarker__StaticFields {
    };

    struct MinerEnemyPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MinerEnemyPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MinerEnemyPlaceholderMarker__VTable vtable;
    };

    struct PiranhaPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct PiranhaPlaceholderMarker {
        struct PiranhaPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct PiranhaPlaceholderMarker__Fields fields;
    };

    struct PiranhaPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PiranhaPlaceholderMarker__StaticFields {
    };

    struct PiranhaPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PiranhaPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PiranhaPlaceholderMarker__VTable vtable;
    };

    struct PoisonousWaterSerpentPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct PoisonousWaterSerpentPlaceholderMarker {
        struct PoisonousWaterSerpentPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct PoisonousWaterSerpentPlaceholderMarker__Fields fields;
    };

    struct PoisonousWaterSerpentPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PoisonousWaterSerpentPlaceholderMarker__StaticFields {
    };

    struct PoisonousWaterSerpentPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PoisonousWaterSerpentPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PoisonousWaterSerpentPlaceholderMarker__VTable vtable;
    };

    struct SandWormPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct SandWormPlaceholderMarker {
        struct SandWormPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct SandWormPlaceholderMarker__Fields fields;
    };

    struct SandWormPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SandWormPlaceholderMarker__StaticFields {
    };

    struct SandWormPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormPlaceholderMarker__VTable vtable;
    };

    struct ShellSlugPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct ShellSlugPlaceholderMarker {
        struct ShellSlugPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct ShellSlugPlaceholderMarker__Fields fields;
    };

    struct ShellSlugPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShellSlugPlaceholderMarker__StaticFields {
    };

    struct ShellSlugPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShellSlugPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShellSlugPlaceholderMarker__VTable vtable;
    };

    struct SkeetoNestPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct SkeetoNestPlaceholderMarker {
        struct SkeetoNestPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct SkeetoNestPlaceholderMarker__Fields fields;
    };

    struct SkeetoNestPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SkeetoNestPlaceholderMarker__StaticFields {
    };

    struct SkeetoNestPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoNestPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoNestPlaceholderMarker__VTable vtable;
    };

    struct SpiderlingPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct SpiderlingPlaceholderMarker {
        struct SpiderlingPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct SpiderlingPlaceholderMarker__Fields fields;
    };

    struct SpiderlingPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiderlingPlaceholderMarker__StaticFields {
    };

    struct SpiderlingPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderlingPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderlingPlaceholderMarker__VTable vtable;
    };

    struct WaterSerpentPlaceholderMarker__Fields {
        struct EnemyPlaceholderMarker__Fields _;
    };

    struct WaterSerpentPlaceholderMarker {
        struct WaterSerpentPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct WaterSerpentPlaceholderMarker__Fields fields;
    };

    struct WaterSerpentPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterSerpentPlaceholderMarker__StaticFields {
    };

    struct WaterSerpentPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterSerpentPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterSerpentPlaceholderMarker__VTable vtable;
    };

    struct EnergyOrbPlantMarker__Fields {
        struct PlaceholderMarker__Fields _;
    };

    struct EnergyOrbPlantMarker {
        struct EnergyOrbPlantMarker__Class* klass;
        MonitorData* monitor;
        struct EnergyOrbPlantMarker__Fields fields;
    };

    struct EnergyOrbPlantLargeMarker__Fields {
        struct EnergyOrbPlantMarker__Fields _;
    };

    struct EnergyOrbPlantLargeMarker {
        struct EnergyOrbPlantLargeMarker__Class* klass;
        MonitorData* monitor;
        struct EnergyOrbPlantLargeMarker__Fields fields;
    };

    struct EnergyOrbPlantMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnergyOrbPlantMarker__StaticFields {
    };

    struct EnergyOrbPlantMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyOrbPlantMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyOrbPlantMarker__VTable vtable;
    };

    struct EnergyOrbPlantLargeMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnergyOrbPlantLargeMarker__StaticFields {
    };

    struct EnergyOrbPlantLargeMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyOrbPlantLargeMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyOrbPlantLargeMarker__VTable vtable;
    };

    struct EnergyOrbPlantMediumMarker__Fields {
        struct EnergyOrbPlantMarker__Fields _;
    };

    struct EnergyOrbPlantMediumMarker {
        struct EnergyOrbPlantMediumMarker__Class* klass;
        MonitorData* monitor;
        struct EnergyOrbPlantMediumMarker__Fields fields;
    };

    struct EnergyOrbPlantMediumMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnergyOrbPlantMediumMarker__StaticFields {
    };

    struct EnergyOrbPlantMediumMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyOrbPlantMediumMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyOrbPlantMediumMarker__VTable vtable;
    };

    struct EnergyOrbPlantSmallMarker__Fields {
        struct EnergyOrbPlantMarker__Fields _;
    };

    struct EnergyOrbPlantSmallMarker {
        struct EnergyOrbPlantSmallMarker__Class* klass;
        MonitorData* monitor;
        struct EnergyOrbPlantSmallMarker__Fields fields;
    };

    struct EnergyOrbPlantSmallMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnergyOrbPlantSmallMarker__StaticFields {
    };

    struct EnergyOrbPlantSmallMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnergyOrbPlantSmallMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnergyOrbPlantSmallMarker__VTable vtable;
    };

    struct LandOnAndSpawnOrbMarker__Fields {
        struct PlaceholderMarker__Fields _;
    };

    struct LandOnAndSpawnOrbMarker {
        struct LandOnAndSpawnOrbMarker__Class* klass;
        MonitorData* monitor;
        struct LandOnAndSpawnOrbMarker__Fields fields;
    };

    struct LandOnAndSpawnOrbMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LandOnAndSpawnOrbMarker__StaticFields {
    };

    struct LandOnAndSpawnOrbMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LandOnAndSpawnOrbMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LandOnAndSpawnOrbMarker__VTable vtable;
    };

    struct OrePlaceholderMarker__Fields {
        struct PlaceholderMarker__Fields _;
    };

    struct OrePlaceholderMarker {
        struct OrePlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct OrePlaceholderMarker__Fields fields;
    };

    struct OrePlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OrePlaceholderMarker__StaticFields {
    };

    struct OrePlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OrePlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OrePlaceholderMarker__VTable vtable;
    };

    struct SeedPlaceholderMarker__Fields {
        struct PlaceholderMarker__Fields _;
    };

    struct SeedPlaceholderMarker {
        struct SeedPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct SeedPlaceholderMarker__Fields fields;
    };

    struct SeedPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SeedPlaceholderMarker__StaticFields {
    };

    struct SeedPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeedPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeedPlaceholderMarker__VTable vtable;
    };

    struct ShootableSeedPodPlaceholderMarker__Fields {
        struct SeedPlaceholderMarker__Fields _;
    };

    struct ShootableSeedPodPlaceholderMarker {
        struct ShootableSeedPodPlaceholderMarker__Class* klass;
        MonitorData* monitor;
        struct ShootableSeedPodPlaceholderMarker__Fields fields;
    };

    struct ShootableSeedPodPlaceholderMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShootableSeedPodPlaceholderMarker__StaticFields {
    };

    struct ShootableSeedPodPlaceholderMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShootableSeedPodPlaceholderMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShootableSeedPodPlaceholderMarker__VTable vtable;
    };

    struct ReverseSceneLoadingZone__Fields {
        struct MonoBehaviour__Fields _;
        struct SceneMetaData* SceneToLoad;
    };

    struct ReverseSceneLoadingZone {
        struct ReverseSceneLoadingZone__Class* klass;
        MonitorData* monitor;
        struct ReverseSceneLoadingZone__Fields fields;
    };

    struct ReverseSceneLoadingZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

} // namespace app
