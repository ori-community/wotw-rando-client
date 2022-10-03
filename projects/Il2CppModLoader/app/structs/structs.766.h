namespace app {
    struct RestartOneLifeMode_RestartingCleanupNextFrame_d_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RestartOneLifeMode_RestartingCleanupNextFrame_d_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RestartOneLifeMode_RestartingCleanupNextFrame_d_1__VTable vtable;
    };

    struct ReturnToTitleScreenAction__Fields {
        struct ActionMethod__Fields _;
    };

    struct ReturnToTitleScreenAction {
        struct ReturnToTitleScreenAction__Class* klass;
        MonitorData* monitor;
        struct ReturnToTitleScreenAction__Fields fields;
    };

    struct ReturnToTitleScreenAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

    struct ReturnToTitleScreenAction__StaticFields {
    };

    struct ReturnToTitleScreenAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReturnToTitleScreenAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReturnToTitleScreenAction__VTable vtable;
    };

    struct ShowInventoryAction__Fields {
        struct ActionMethod__Fields _;
        bool Show;
    };

    struct ShowInventoryAction {
        struct ShowInventoryAction__Class* klass;
        MonitorData* monitor;
        struct ShowInventoryAction__Fields fields;
    };

    struct ShowInventoryAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

    struct ShowInventoryAction__StaticFields {
    };

    struct ShowInventoryAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowInventoryAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowInventoryAction__VTable vtable;
    };

    struct ShowInventoryAction_c {
        struct ShowInventoryAction_c__Class* klass;
        MonitorData* monitor;
    };

    struct ShowInventoryAction_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShowInventoryAction_c__StaticFields {
        struct ShowInventoryAction_c* __9;
        struct Action* __9__1_0;
    };

    struct ShowInventoryAction_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowInventoryAction_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowInventoryAction_c__VTable vtable;
    };

    struct ShowMainMenuAction__Fields {
        struct ActionMethod__Fields _;
        bool Show;
        bool Immediate;
        bool Fade;
        bool SetUIMusicStateNone;
    };

    struct ShowMainMenuAction {
        struct ShowMainMenuAction__Class* klass;
        MonitorData* monitor;
        struct ShowMainMenuAction__Fields fields;
    };

    struct ShowMainMenuAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

    struct ShowMainMenuAction__StaticFields {
    };

    struct ShowMainMenuAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowMainMenuAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowMainMenuAction__VTable vtable;
    };

    enum class SkipCutscene_GameplayMode__Enum : int32_t {
        Ori = 0x00000000,
        Tandem = 0x00000001,
    };

    struct SkipCutscene_GameplayMode__Enum__Boxed {
        struct SkipCutscene_GameplayMode__Enum__Class* klass;
        MonitorData* monitor;
        SkipCutscene_GameplayMode__Enum value;
    };

    struct SkipCutscene__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* Timeline;
        int32_t Priority;
        SkipCutscene_GameplayMode__Enum GameplayModeAfterSkip;

        bool CreateCheckpoint;
        struct CheckpointFunctionality Checkpoint;
        struct List_1_Moon_MoonReference_1__11* Conditions;
        struct List_1_Moon_MoonReference_1__12* SkipReactions;
        struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_* SkipableCutscenesTriggers;
        struct SkipCutscene_OptionalSkipCutsceneSettings* Optional;
        bool m_wasValid;
        struct List_1_ICondition_* m_resolvedConditions;
        struct List_1_ISkipCutsceneAction_* m_resolvedReactions;
        struct MoonTimeline* m_resolvedTimeline;
        bool _ValidForCutsceneSkiping_k__BackingField;
    };

    struct SkipCutscene {
        struct SkipCutscene__Class* klass;
        MonitorData* monitor;
        struct SkipCutscene__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_MoonReference_1__12__Fields {
        struct MoonReference_1_ISkipCutsceneAction___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_MoonReference_1__12 {
        struct List_1_Moon_MoonReference_1__12__Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_MoonReference_1__12__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_ISkipCutsceneAction___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_ISkipCutsceneAction_* m_cachedProxyType;
        struct ISkipCutsceneAction* m_volatileValue;
    };

    struct MoonReference_1_ISkipCutsceneAction_ {
        struct MoonReference_1_ISkipCutsceneAction___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_ISkipCutsceneAction___Fields fields;
    };

    struct IMoonType_1_ISkipCutsceneAction_ {
        struct IMoonType_1_ISkipCutsceneAction___Class* klass;
        MonitorData* monitor;
    };

    struct ISkipCutsceneAction {
        struct ISkipCutsceneAction__Class* klass;
        MonitorData* monitor;
    };

    struct MoonReference_1_ISkipCutsceneAction___Array {
        struct MoonReference_1_ISkipCutsceneAction___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonReference_1_ISkipCutsceneAction_* vector[32];
    };

    struct IEnumerator_1_Moon_MoonReference_1__12 {
        struct IEnumerator_1_Moon_MoonReference_1__12__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SkipCutscene_OptionalSkipCutsceneSettings__Fields {
        struct SceneMetaData* SceneToPreload;
        struct SceneMetaData* SceneToForceUnload;
        struct Transform* TeleportPositionAfterSkip;
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* TimelineAfterSkip;
        struct List_1_Moon_Setups_ChangeStateSetupHolder_* StateChanges;
    };

    struct SkipCutscene_OptionalSkipCutsceneSettings {
        struct SkipCutscene_OptionalSkipCutsceneSettings__Class* klass;
        MonitorData* monitor;
        struct SkipCutscene_OptionalSkipCutsceneSettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Setups_ChangeStateSetupHolder___Fields {
        struct ChangeStateSetupHolder__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Setups_ChangeStateSetupHolder_ {
        struct List_1_Moon_Setups_ChangeStateSetupHolder___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Setups_ChangeStateSetupHolder___Fields fields;
    };

    struct ChangeStateSetupHolder__Array {
        struct ChangeStateSetupHolder__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ChangeStateSetupHolder* vector[32];
    };

    struct IEnumerator_1_Moon_Setups_ChangeStateSetupHolder_ {
        struct IEnumerator_1_Moon_Setups_ChangeStateSetupHolder___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_ISkipCutsceneAction___Fields {
        struct ISkipCutsceneAction__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ISkipCutsceneAction_ {
        struct List_1_ISkipCutsceneAction___Class* klass;
        MonitorData* monitor;
        struct List_1_ISkipCutsceneAction___Fields fields;
    };

    struct ISkipCutsceneAction__Array {
        struct ISkipCutsceneAction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ISkipCutsceneAction* vector[32];
    };

    struct IEnumerator_1_ISkipCutsceneAction_ {
        struct IEnumerator_1_ISkipCutsceneAction___Class* klass;
        MonitorData* monitor;
    };

    struct SkipCutscene_GameplayMode__Enum__VTable {
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

    struct SkipCutscene_GameplayMode__Enum__StaticFields {
    };

    struct SkipCutscene_GameplayMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkipCutscene_GameplayMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkipCutscene_GameplayMode__Enum__VTable vtable;
    };

    struct IMoonType_1_ISkipCutsceneAction___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_ISkipCutsceneAction___StaticFields {
    };

    struct IMoonType_1_ISkipCutsceneAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_ISkipCutsceneAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_ISkipCutsceneAction___VTable vtable;
    };

    struct ISkipCutsceneAction__VTable {
        VirtualInvokeData OnSkipCutscene;
    };

    struct ISkipCutsceneAction__StaticFields {
    };

    struct ISkipCutsceneAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISkipCutsceneAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISkipCutsceneAction__VTable vtable;
    };

    struct ISkipCutsceneAction___VTable {
    };

    struct ISkipCutsceneAction___StaticFields {
    };

    struct ISkipCutsceneAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISkipCutsceneAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISkipCutsceneAction___VTable vtable;
    };

    struct MoonReference_1_ISkipCutsceneAction___VTable {
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

    struct MoonReference_1_ISkipCutsceneAction___StaticFields {
    };

    struct MoonReference_1_ISkipCutsceneAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_ISkipCutsceneAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_ISkipCutsceneAction___VTable vtable;
    };

    struct MoonReference_1_ISkipCutsceneAction___Array__VTable {
    };

    struct MoonReference_1_ISkipCutsceneAction___Array__StaticFields {
    };

    struct MoonReference_1_ISkipCutsceneAction___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_ISkipCutsceneAction___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_ISkipCutsceneAction___Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_MoonReference_1__12__VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_MoonReference_1__12__StaticFields {
    };

    struct IEnumerator_1_Moon_MoonReference_1__12__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_MoonReference_1__12__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_MoonReference_1__12__VTable vtable;
    };

    struct List_1_Moon_MoonReference_1__12__VTable {
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

    struct List_1_Moon_MoonReference_1__12__StaticFields {
        struct MoonReference_1_ISkipCutsceneAction___Array* _emptyArray;
    };

    struct List_1_Moon_MoonReference_1__12__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_MoonReference_1__12__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_MoonReference_1__12__VTable vtable;
    };

    struct ChangeStateSetupHolder__Array__VTable {
    };

    struct ChangeStateSetupHolder__Array__StaticFields {
    };

    struct ChangeStateSetupHolder__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChangeStateSetupHolder__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChangeStateSetupHolder__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Setups_ChangeStateSetupHolder___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Setups_ChangeStateSetupHolder___StaticFields {
    };

    struct IEnumerator_1_Moon_Setups_ChangeStateSetupHolder___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Setups_ChangeStateSetupHolder___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Setups_ChangeStateSetupHolder___VTable vtable;
    };

    struct List_1_Moon_Setups_ChangeStateSetupHolder___VTable {
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

    struct List_1_Moon_Setups_ChangeStateSetupHolder___StaticFields {
        struct ChangeStateSetupHolder__Array* _emptyArray;
    };

    struct List_1_Moon_Setups_ChangeStateSetupHolder___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Setups_ChangeStateSetupHolder___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Setups_ChangeStateSetupHolder___VTable vtable;
    };

    struct SkipCutscene_OptionalSkipCutsceneSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SkipCutscene_OptionalSkipCutsceneSettings__StaticFields {
    };

    struct SkipCutscene_OptionalSkipCutsceneSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkipCutscene_OptionalSkipCutsceneSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkipCutscene_OptionalSkipCutsceneSettings__VTable vtable;
    };

    struct ISkipCutsceneAction__Array__VTable {
    };

    struct ISkipCutsceneAction__Array__StaticFields {
    };

    struct ISkipCutsceneAction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISkipCutsceneAction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISkipCutsceneAction__Array__VTable vtable;
    };

    struct IEnumerator_1_ISkipCutsceneAction___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ISkipCutsceneAction___StaticFields {
    };

    struct IEnumerator_1_ISkipCutsceneAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ISkipCutsceneAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ISkipCutsceneAction___VTable vtable;
    };

    struct List_1_ISkipCutsceneAction___VTable {
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

    struct List_1_ISkipCutsceneAction___StaticFields {
        struct ISkipCutsceneAction__Array* _emptyArray;
    };

    struct List_1_ISkipCutsceneAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ISkipCutsceneAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ISkipCutsceneAction___VTable vtable;
    };

    struct SkipCutscene__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ValidForCutsceneSkiping;
        VirtualInvokeData get_SkipCutscenePriority;
        VirtualInvokeData OnSkip;
    };

    struct SkipCutscene__StaticFields {
    };

    struct SkipCutscene__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkipCutscene__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkipCutscene__VTable vtable;
    };

    struct SkipCutsceneController__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_ISkipCutscene_* m_skips;
        struct DelayedAction* m_delayedAction;
        struct SceneRoot* m_kuFlyAway;
    };

    struct SkipCutsceneController {
        struct SkipCutsceneController__Class* klass;
        MonitorData* monitor;
        struct SkipCutsceneController__Fields fields;
    };

    struct __declspec(align(8)) List_1_ISkipCutscene___Fields {
        struct ISkipCutscene__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ISkipCutscene_ {
        struct List_1_ISkipCutscene___Class* klass;
        MonitorData* monitor;
        struct List_1_ISkipCutscene___Fields fields;
    };

    struct ISkipCutscene {
        struct ISkipCutscene__Class* klass;
        MonitorData* monitor;
    };

    struct ISkipCutscene__Array {
        struct ISkipCutscene__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ISkipCutscene* vector[32];
    };

    struct IEnumerator_1_ISkipCutscene_ {
        struct IEnumerator_1_ISkipCutscene___Class* klass;
        MonitorData* monitor;
    };

    struct ISkipCutscene__VTable {
        VirtualInvokeData get_ValidForCutsceneSkiping;
        VirtualInvokeData get_SkipCutscenePriority;
        VirtualInvokeData OnSkip;
    };

    struct ISkipCutscene__StaticFields {
    };

    struct ISkipCutscene__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISkipCutscene__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISkipCutscene__VTable vtable;
    };

    struct ISkipCutscene__Array__VTable {
    };

    struct ISkipCutscene__Array__StaticFields {
    };

    struct ISkipCutscene__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISkipCutscene__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISkipCutscene__Array__VTable vtable;
    };

    struct IEnumerator_1_ISkipCutscene___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ISkipCutscene___StaticFields {
    };

    struct IEnumerator_1_ISkipCutscene___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ISkipCutscene___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ISkipCutscene___VTable vtable;
    };

    struct List_1_ISkipCutscene___VTable {
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

    struct List_1_ISkipCutscene___StaticFields {
        struct ISkipCutscene__Array* _emptyArray;
    };

    struct List_1_ISkipCutscene___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ISkipCutscene___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ISkipCutscene___VTable vtable;
    };

    struct SkipCutsceneController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SkipCutsceneController__StaticFields {
        struct SkipCutsceneController* Instance;
    };

    struct SkipCutsceneController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkipCutsceneController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkipCutsceneController__VTable vtable;
    };

    struct __declspec(align(8)) SceneManagerScene__Fields {
        struct SceneRoot* SceneRoot;
        struct RuntimeSceneMetaData* MetaData;
        bool HasStartBeenCalled;
        SceneState__Enum m_currentState;

        float UnloadTime;
        float TimeOfDisabled;
        float TimeOfLoad;
        float LoadingTime;
        float LastActivationBeginTime;
        float LastActivationDuration;
        float LastDeactivationBeginTime;
        float LastDeactivationDuration;
        bool PreventUnloading;
        bool KeepLoadedForCheckpoint;
        bool IsHidden;
        bool HideOnLoadCompleted;
        bool _ShouldBeReady_k__BackingField;
        bool _ShouldBeVisible_k__BackingField;
        bool _ShouldBeEnabled_k__BackingField;
        float _DistanceToPositionOnLastEnable_k__BackingField;
        struct Vector3 _CameraTargetOnLastEnabled_k__BackingField;
        float _DistanceToPositionOnLastLoad_k__BackingField;
    };

    struct SceneManagerScene {
        struct SceneManagerScene__Class* klass;
        MonitorData* monitor;
        struct SceneManagerScene__Fields fields;
    };

    struct SceneManagerScene__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneManagerScene__StaticFields {
    };

    struct SceneManagerScene__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneManagerScene__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneManagerScene__VTable vtable;
    };

    struct SkipCutsceneController_c {
        struct SkipCutsceneController_c__Class* klass;
        MonitorData* monitor;
    };

    struct SkipCutsceneController_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SkipCutsceneController_c__StaticFields {
        struct SkipCutsceneController_c* __9;
        struct DelayedAction_Action* __9__21_0;
    };

    struct SkipCutsceneController_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkipCutsceneController_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkipCutsceneController_c__VTable vtable;
    };

    struct TitleScreenPressStartLogic__Fields {
        struct MonoBehaviour__Fields _;
        bool IgnoreCallbacks;
        struct ActionMethod* OnPressed;
        bool m_wasPressed;
    };

    struct TitleScreenPressStartLogic {
        struct TitleScreenPressStartLogic__Class* klass;
        MonitorData* monitor;
        struct TitleScreenPressStartLogic__Fields fields;
    };

    struct TitleScreenPressStartLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TitleScreenPressStartLogic__StaticFields {
        bool EngagedWithIIS;
    };

    struct TitleScreenPressStartLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TitleScreenPressStartLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TitleScreenPressStartLogic__VTable vtable;
    };

    struct UnlockFullGameLogic__Fields {
        struct MonoBehaviour__Fields _;
        struct ActionMethod* action;
    };

    struct UnlockFullGameLogic {
        struct UnlockFullGameLogic__Class* klass;
        MonitorData* monitor;
        struct UnlockFullGameLogic__Fields fields;
    };

    struct UnlockFullGameLogic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UnlockFullGameLogic__StaticFields {
    };

    struct UnlockFullGameLogic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnlockFullGameLogic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnlockFullGameLogic__VTable vtable;
    };

} // namespace app
