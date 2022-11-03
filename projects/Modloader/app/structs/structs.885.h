namespace app {
    struct RenderingType__Enum__StaticFields {
    };

    struct RenderingType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderingType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderingType__Enum__VTable vtable;
    };

    struct CameraFrustumOptimizer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData RenderDebug;
    };

    struct CameraFrustumOptimizer__StaticFields {
        struct CameraFrustumOptimizer_BoundsCache s_cachedBounds1;
        struct CameraFrustumOptimizer_BoundsCache s_cachedBounds2;
        float UpdateDelta;
        float Padding;
        bool m_useBatchedFrustumChecks;
        bool m_deferActivations;
        bool m_useBoundsCache;
        bool m_verifyCacheCorrectness;
        bool UseMoonFlags;
        struct AllContainer_1_IFrustumOptimizable_* s_frustumOptimizables;
        struct List_1_IFrustumOptimizable_* s_unitializedFrustumOptimizables;
        struct List_1_Game_IFrustumEnabled_* s_instantEnabledToProcess;
        struct List_1_IFrustumOptimizable_* m_deferredOnEnter;
        struct List_1_IFrustumOptimizable_* m_deferredOnExit;
        struct List_1_CameraFrustumOptimizer_EarlyZActivation_* s_earlyZActivations;
    };

    struct CameraFrustumOptimizer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFrustumOptimizer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFrustumOptimizer__VTable vtable;
    };

    enum class CameraFrustumOptimizer_IntersectionResult__Enum : int32_t {
        NOTHING = 0x00000000,
        DEFERRED_ENTER = 0x00000001,
        DEFERRED_EXIT = 0x00000002,
        ENTER = 0x00000003,
        EXIT = 0x00000004,
    };

    struct CameraFrustumOptimizer_IntersectionResult__Enum__Boxed {
        struct CameraFrustumOptimizer_IntersectionResult__Enum__Class* klass;
        MonitorData* monitor;
        CameraFrustumOptimizer_IntersectionResult__Enum value;
    };

    struct CameraFrustumOptimizer_IntersectionResult__Enum__VTable {
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

    struct CameraFrustumOptimizer_IntersectionResult__Enum__StaticFields {
    };

    struct CameraFrustumOptimizer_IntersectionResult__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraFrustumOptimizer_IntersectionResult__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraFrustumOptimizer_IntersectionResult__Enum__VTable vtable;
    };

    struct DisableGameObjectWhenOutOfFrustrum__Fields {
        struct MonoBehaviour__Fields _;
        bool Activated;
        bool isArtCell;
        bool tightBounds;
        bool AssumeStationaryTransform;
        float BoundsBorder;
        bool SpecifyBoundingBox;
        struct Rect BoundingBox;
        float BoundingBoxDepth;
        float BoundingBoxDepthOffset;
        bool SpecifyBounds;
        struct Bounds SetBounds;
        struct Vector2 BoundsIncreaseWhenEnabled;
        struct TimeSlicedActivationTask* m_activationTask;
        struct List_1_UnityEngine_GameObject_* m_updateTargetObjectsChildToParent;
        struct List_1_UnityEngine_GameObject_* m_targetObjectsChildToParent;
        struct List_1_UnityEngine_Component_* m_postEnabledObservers;
        struct List_1_UnityEngine_Component_* m_preDisableObservers;
        struct Renderer__Array* m_cachedRenderers;
        struct SceneRoot* m_root;
        bool m_insideFrustum;
        bool m_awakeCalled;
        bool m_needsToRegister;
        struct Bounds m_bounds;
    };

    struct DisableGameObjectWhenOutOfFrustrum {
        struct DisableGameObjectWhenOutOfFrustrum__Class* klass;
        MonitorData* monitor;
        struct DisableGameObjectWhenOutOfFrustrum__Fields fields;
    };

    struct DisableGameObjectWhenOutOfFrustrum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData OnFrustumInstantEnabled;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_ShouldDisable;
        VirtualInvokeData get_ShouldEnable;
        VirtualInvokeData get_ShouldChildrenEnable;
        VirtualInvokeData get_ShouldSetMoonReady;
        VirtualInvokeData OnSceneRootPreDisable;
        VirtualInvokeData Prewarm;
    };

    struct DisableGameObjectWhenOutOfFrustrum__StaticFields {
        bool SetHiddenTrue;
        bool UseSerializationToggle;
    };

    struct DisableGameObjectWhenOutOfFrustrum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DisableGameObjectWhenOutOfFrustrum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DisableGameObjectWhenOutOfFrustrum__VTable vtable;
    };

    struct DisableGameObjectWithHealthWhenOutOfFrustum__Fields {
        struct MonoBehaviour__Fields _;
        struct HealthController* HealthController;
        bool m_insideFrustum;
        struct Bounds m_bounds;
    };

    struct DisableGameObjectWithHealthWhenOutOfFrustum {
        struct DisableGameObjectWithHealthWhenOutOfFrustum__Class* klass;
        MonitorData* monitor;
        struct DisableGameObjectWithHealthWhenOutOfFrustum__Fields fields;
    };

    struct DisableGameObjectWithHealthWhenOutOfFrustum__VTable {
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

    struct DisableGameObjectWithHealthWhenOutOfFrustum__StaticFields {
    };

    struct DisableGameObjectWithHealthWhenOutOfFrustum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DisableGameObjectWithHealthWhenOutOfFrustum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DisableGameObjectWithHealthWhenOutOfFrustum__VTable vtable;
    };

    struct DisableRendererWhenOutOfFrustrum__Fields {
        struct MonoBehaviour__Fields _;
        bool m_insideFrustum;
        struct Bounds m_bounds;
    };

    struct DisableRendererWhenOutOfFrustrum {
        struct DisableRendererWhenOutOfFrustrum__Class* klass;
        MonitorData* monitor;
        struct DisableRendererWhenOutOfFrustrum__Fields fields;
    };

    struct DisableRendererWhenOutOfFrustrum__VTable {
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

    struct DisableRendererWhenOutOfFrustrum__StaticFields {
    };

    struct DisableRendererWhenOutOfFrustrum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DisableRendererWhenOutOfFrustrum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DisableRendererWhenOutOfFrustrum__VTable vtable;
    };

    struct SuspendWhenOtherOutOfFrustrum__Fields {
        struct SuspendWhenOutOfFrustrumWithCondition__Fields _;
        struct MoonReference_1_UnityEngine_Transform_* Other;
        struct Transform* m_cachedTransform;
    };

    struct SuspendWhenOtherOutOfFrustrum {
        struct SuspendWhenOtherOutOfFrustrum__Class* klass;
        MonitorData* monitor;
        struct SuspendWhenOtherOutOfFrustrum__Fields fields;
    };

    struct SuspendWhenOtherOutOfFrustrum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData get_ShouldDisable;
        VirtualInvokeData get_ShouldEnable;
        VirtualInvokeData get_ShouldChildrenEnable;
        VirtualInvokeData get_ShouldSetMoonReady;
        VirtualInvokeData Prewarm;
        VirtualInvokeData OnFrustumEnter_1;
        VirtualInvokeData OnFrustumExit_1;
        VirtualInvokeData get_Bounds_1;
    };

    struct SuspendWhenOtherOutOfFrustrum__StaticFields {
    };

    struct SuspendWhenOtherOutOfFrustrum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SuspendWhenOtherOutOfFrustrum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SuspendWhenOtherOutOfFrustrum__VTable vtable;
    };

    struct __declspec(align(8)) MenuTabEntry__Fields {
        struct MessageProvider* Name;
        MenuScreenManager_Screens__Enum Screen;
    };

    struct MenuTabEntry {
        struct MenuTabEntry__Class* klass;
        MonitorData* monitor;
        struct MenuTabEntry__Fields fields;
    };

    struct MenuTabEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MenuTabEntry__StaticFields {
    };

    struct MenuTabEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MenuTabEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MenuTabEntry__VTable vtable;
    };

    struct MenuTabManager__Fields {
        struct MonoBehaviour__Fields _;
        struct UISoundSettingsAsset* Sounds;
        struct List_1_MenuTabEntry_* Tabs;
        struct MoonTimelineUiFader* UiFader;
        struct GameObject* LegendUI;
        struct GameObject* LeftPageNameText;
        struct GameObject* RightPageNameText;
        int32_t m_currentTabIndex;
        bool m_mainMenuWasVisible;
        bool m_wasShowingPins;
        struct LegacyTransparencyAnimator* BlackBackgroundFadeAnimator;
        struct LegacyTransparencyAnimator* DarkBackgroundFadeAnimator;
        bool Loop;
        MenuTabBackground__Enum m_backgroundState;

        bool m_makeNextBackgroundFadeImediate;
        MenuTabBackground__Enum m_newState;

        bool m_wasPaused;
    };

    struct MenuTabManager {
        struct MenuTabManager__Class* klass;
        MonitorData* monitor;
        struct MenuTabManager__Fields fields;
    };

    struct __declspec(align(8)) List_1_MenuTabEntry___Fields {
        struct MenuTabEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_MenuTabEntry_ {
        struct List_1_MenuTabEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_MenuTabEntry___Fields fields;
    };

    struct MenuTabEntry__Array {
        struct MenuTabEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MenuTabEntry* vector[32];
    };

    struct IEnumerator_1_MenuTabEntry_ {
        struct IEnumerator_1_MenuTabEntry___Class* klass;
        MonitorData* monitor;
    };

    struct MenuTabEntry__Array__VTable {
    };

    struct MenuTabEntry__Array__StaticFields {
    };

    struct MenuTabEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MenuTabEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MenuTabEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_MenuTabEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_MenuTabEntry___StaticFields {
    };

    struct IEnumerator_1_MenuTabEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_MenuTabEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_MenuTabEntry___VTable vtable;
    };

    struct List_1_MenuTabEntry___VTable {
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

    struct List_1_MenuTabEntry___StaticFields {
        struct MenuTabEntry__Array* _emptyArray;
    };

    struct List_1_MenuTabEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_MenuTabEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_MenuTabEntry___VTable vtable;
    };

    struct MenuTabManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MenuTabManager__StaticFields {
        struct MenuTabManager* Instance;
    };

    struct MenuTabManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MenuTabManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MenuTabManager__VTable vtable;
    };

    struct MenuTabManager_c {
        struct MenuTabManager_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_MenuTabEntry_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_MenuTabEntry_Boolean_ {
        struct Func_2_MenuTabEntry_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_MenuTabEntry_Boolean___Fields fields;
    };

    struct Func_2_MenuTabEntry_Boolean___VTable {
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

    struct Func_2_MenuTabEntry_Boolean___StaticFields {
    };

    struct Func_2_MenuTabEntry_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_MenuTabEntry_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_MenuTabEntry_Boolean___VTable vtable;
    };

    struct MenuTabManager_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MenuTabManager_c__StaticFields {
        struct MenuTabManager_c* __9;
        struct Func_2_MenuTabEntry_Boolean_* __9__26_0;
        struct Func_2_MenuTabEntry_Boolean_* __9__26_1;
        struct Action* __9__42_0;
    };

    struct MenuTabManager_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MenuTabManager_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MenuTabManager_c__VTable vtable;
    };

    enum class SeinDoubleJumpPuppet_Event__Enum : int32_t {
        DoubleJump = 0x00000000,
    };

    struct SeinDoubleJumpPuppet_Event__Enum__Boxed {
        struct SeinDoubleJumpPuppet_Event__Enum__Class* klass;
        MonitorData* monitor;
        SeinDoubleJumpPuppet_Event__Enum value;
    };

    struct SeinDoubleJumpPuppet_Event__Enum__VTable {
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

    struct SeinDoubleJumpPuppet_Event__Enum__StaticFields {
    };

    struct SeinDoubleJumpPuppet_Event__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinDoubleJumpPuppet_Event__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinDoubleJumpPuppet_Event__Enum__VTable vtable;
    };

    struct SeinIdlePuppet_c {
        struct SeinIdlePuppet_c__Class* klass;
        MonitorData* monitor;
    };

    struct SeinIdlePuppet_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SeinIdlePuppet_c__StaticFields {
        struct SeinIdlePuppet_c* __9;
        struct Func_1_Boolean_* __9__27_0;
    };

    struct SeinIdlePuppet_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinIdlePuppet_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinIdlePuppet_c__VTable vtable;
    };

    enum class SeinWallJumpPuppet_Event__Enum : int32_t {
        OnLeftJump = 0x00000000,
        OnLeftAwayJump = 0x00000001,
        OnLeftTowardsJump = 0x00000002,
        OnEdgeJump = 0x00000003,
        OnLeftRegularJump = 0x00000004,
        OnRightAwayJump = 0x00000005,
        OnRightTowardsJump = 0x00000006,
        OnRightRegularJump = 0x00000007,
    };

    struct SeinWallJumpPuppet_Event__Enum__Boxed {
        struct SeinWallJumpPuppet_Event__Enum__Class* klass;
        MonitorData* monitor;
        SeinWallJumpPuppet_Event__Enum value;
    };

    struct SeinWallJumpPuppet_Event__Enum__VTable {
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

    struct SeinWallJumpPuppet_Event__Enum__StaticFields {
    };

    struct SeinWallJumpPuppet_Event__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinWallJumpPuppet_Event__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinWallJumpPuppet_Event__Enum__VTable vtable;
    };

    struct __declspec(align(8)) SeinWallJumpPuppet_AnimationEntry__Fields {
        struct MoonAnimation* Animation;
        struct Event_1* ExtraSound;
    };

    struct SeinWallJumpPuppet_AnimationEntry {
        struct SeinWallJumpPuppet_AnimationEntry__Class* klass;
        MonitorData* monitor;
        struct SeinWallJumpPuppet_AnimationEntry__Fields fields;
    };

    struct SeinWallJumpPuppet_AnimationEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SeinWallJumpPuppet_AnimationEntry__StaticFields {
    };

    struct SeinWallJumpPuppet_AnimationEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinWallJumpPuppet_AnimationEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinWallJumpPuppet_AnimationEntry__VTable vtable;
    };

    struct RECT {
        int32_t Left;
        int32_t Top;
        int32_t Right;
        int32_t Bottom;
    };

    struct RECT__Boxed {
        struct RECT__Class* klass;
        MonitorData* monitor;
        struct RECT fields;
    };

    struct RECT__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RECT__StaticFields {
    };

    struct RECT__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RECT__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RECT__VTable vtable;
    };

    struct RECT___VTable {
    };

    struct RECT___StaticFields {
    };

    struct RECT___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RECT___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RECT___VTable vtable;
    };

    struct WindowManager__Fields {
        struct MonoBehaviour__Fields _;
        int32_t m_borderlessSetCounter;
        float m_lastTimeCheckedMinimized;
        int32_t lastProps;
        bool m_firstTime;
        bool wasFullScreen;
        bool m_wasFocused;
        bool m_borderless;
        int32_t width;
        int32_t height;
        bool m_fullScreen;
    };

    struct WindowManager {
        struct WindowManager__Class* klass;
        MonitorData* monitor;
        struct WindowManager__Fields fields;
    };

    struct WindowManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WindowManager__StaticFields {
    };

    struct WindowManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WindowManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WindowManager__VTable vtable;
    };

    struct PerspectiveRotationSystem__Fields {
        struct MonoBehaviour__Fields _;
        bool Active;
        struct List_1_PerspectiveRotationAdjustment_* m_targets;
        bool m_wasActive;
    };

    struct PerspectiveRotationSystem {
        struct PerspectiveRotationSystem__Class* klass;
        MonitorData* monitor;
        struct PerspectiveRotationSystem__Fields fields;
    };

    struct __declspec(align(8)) List_1_PerspectiveRotationAdjustment___Fields {
        struct PerspectiveRotationAdjustment__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PerspectiveRotationAdjustment_ {
        struct List_1_PerspectiveRotationAdjustment___Class* klass;
        MonitorData* monitor;
        struct List_1_PerspectiveRotationAdjustment___Fields fields;
    };

    struct PerspectiveRotationAdjustment__Array {
        struct PerspectiveRotationAdjustment__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PerspectiveRotationAdjustment* vector[32];
    };

    struct IEnumerator_1_PerspectiveRotationAdjustment_ {
        struct IEnumerator_1_PerspectiveRotationAdjustment___Class* klass;
        MonitorData* monitor;
    };

    struct PerspectiveRotationAdjustment__Array__VTable {
    };

    struct PerspectiveRotationAdjustment__Array__StaticFields {
    };

    struct PerspectiveRotationAdjustment__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerspectiveRotationAdjustment__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerspectiveRotationAdjustment__Array__VTable vtable;
    };

    struct IEnumerator_1_PerspectiveRotationAdjustment___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PerspectiveRotationAdjustment___StaticFields {
    };

    struct IEnumerator_1_PerspectiveRotationAdjustment___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PerspectiveRotationAdjustment___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PerspectiveRotationAdjustment___VTable vtable;
    };

    struct List_1_PerspectiveRotationAdjustment___VTable {
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

    struct List_1_PerspectiveRotationAdjustment___StaticFields {
        struct PerspectiveRotationAdjustment__Array* _emptyArray;
    };

    struct List_1_PerspectiveRotationAdjustment___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PerspectiveRotationAdjustment___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PerspectiveRotationAdjustment___VTable vtable;
    };

    struct PerspectiveRotationSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PerspectiveRotationSystem__StaticFields {
        struct PerspectiveRotationSystem* s_instance;
    };

    struct PerspectiveRotationSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PerspectiveRotationSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PerspectiveRotationSystem__VTable vtable;
    };

    struct AnimatedRigidBodyController__Fields {
        struct MonoBehaviour__Fields _;
        struct Rigidbody* rigidBody;
        struct Vector3 m_oldPosition;
        struct Quaternion m_oldRotation;
    };

    struct AnimatedRigidBodyController {
        struct AnimatedRigidBodyController__Class* klass;
        MonitorData* monitor;
        struct AnimatedRigidBodyController__Fields fields;
    };

    struct AnimatedRigidBodyController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AnimatedRigidBodyController__StaticFields {
    };

    struct AnimatedRigidBodyController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimatedRigidBodyController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimatedRigidBodyController__VTable vtable;
    };

    struct ApplyForceOnDamage__Fields {
        struct MonoBehaviour__Fields _;
        float ForceMagnitude;
        float ForceVerticalScale;
        struct GameObject* Target;
    };

    struct ApplyForceOnDamage {
        struct ApplyForceOnDamage__Class* klass;
        MonitorData* monitor;
        struct ApplyForceOnDamage__Fields fields;
    };

    struct ApplyForceOnDamage__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData OnReceiveContext;
    };

    struct ApplyForceOnDamage__StaticFields {
    };

    struct ApplyForceOnDamage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ApplyForceOnDamage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ApplyForceOnDamage__VTable vtable;
    };

    struct ApplyPhysicalManagerState__Fields {
        struct MonoBehaviour__Fields _;
        struct PhysicalSystemManager* PhysicalSystemManager;
        struct String* stateName;
        struct LegacyTrigger* trigger;
        struct EventTriggerAnimator* timelineTrigger;
        struct MoonReference_1_IGenericUberState_* TrackUberState;
        float UberStateFromValue;
        float UberStateToValue;
        float m_oldState;
    };

} // namespace app
