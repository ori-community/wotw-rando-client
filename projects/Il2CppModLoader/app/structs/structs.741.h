namespace app {
    struct LianaEntity__StaticFields {
        bool FrustumCullPhysics;
        float LinkDensityMultiplier;
        bool SuperTightBounds;
        bool UseBatchTransformAPI;
    };

    struct LianaEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LianaEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LianaEntity__VTable vtable;
    };

    struct ActivateLianaTongueAction__VTable {
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

    struct ActivateLianaTongueAction__StaticFields {
    };

    struct ActivateLianaTongueAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActivateLianaTongueAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ActivateLianaTongueAction__VTable vtable;
    };

    struct AttachPrefabsToLiannaTongue__Fields {
        struct MonoBehaviour__Fields _;
        struct Rope* RopeToAttachTo;
        struct List_1_AttachPrefabsToLiannaTongue_TonguePoints_* TongueAttachPoints;
    };

    struct AttachPrefabsToLiannaTongue {
        struct AttachPrefabsToLiannaTongue__Class* klass;
        MonitorData* monitor;
        struct AttachPrefabsToLiannaTongue__Fields fields;
    };

    struct __declspec(align(8)) List_1_AttachPrefabsToLiannaTongue_TonguePoints___Fields {
        struct AttachPrefabsToLiannaTongue_TonguePoints__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AttachPrefabsToLiannaTongue_TonguePoints_ {
        struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___Class* klass;
        MonitorData* monitor;
        struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___Fields fields;
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints {
        int32_t JointNumber;
        struct GameObject* PrefabToAttach;
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__Boxed {
        struct AttachPrefabsToLiannaTongue_TonguePoints__Class* klass;
        MonitorData* monitor;
        struct AttachPrefabsToLiannaTongue_TonguePoints fields;
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__Array {
        struct AttachPrefabsToLiannaTongue_TonguePoints__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AttachPrefabsToLiannaTongue_TonguePoints vector[32];
    };

    struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints_ {
        struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___Class* klass;
        MonitorData* monitor;
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__StaticFields {
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttachPrefabsToLiannaTongue_TonguePoints__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttachPrefabsToLiannaTongue_TonguePoints__VTable vtable;
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__Array__VTable {
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__Array__StaticFields {
    };

    struct AttachPrefabsToLiannaTongue_TonguePoints__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttachPrefabsToLiannaTongue_TonguePoints__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttachPrefabsToLiannaTongue_TonguePoints__Array__VTable vtable;
    };

    struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields {
    };

    struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable vtable;
    };

    struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable {
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

    struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields {
        struct AttachPrefabsToLiannaTongue_TonguePoints__Array* _emptyArray;
    };

    struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AttachPrefabsToLiannaTongue_TonguePoints___VTable vtable;
    };

    struct AttachPrefabsToLiannaTongue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AttachPrefabsToLiannaTongue__StaticFields {
    };

    struct AttachPrefabsToLiannaTongue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttachPrefabsToLiannaTongue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttachPrefabsToLiannaTongue__VTable vtable;
    };

    struct __declspec(align(8)) LianaEntity_WaitReleaseTongue_d_83__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        float waitTime;
        struct LianaEntity* __4__this;
    };

    struct LianaEntity_WaitReleaseTongue_d_83 {
        struct LianaEntity_WaitReleaseTongue_d_83__Class* klass;
        MonitorData* monitor;
        struct LianaEntity_WaitReleaseTongue_d_83__Fields fields;
    };

    struct LianaEntity_WaitReleaseTongue_d_83__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct LianaEntity_WaitReleaseTongue_d_83__StaticFields {
    };

    struct LianaEntity_WaitReleaseTongue_d_83__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LianaEntity_WaitReleaseTongue_d_83__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LianaEntity_WaitReleaseTongue_d_83__VTable vtable;
    };

    struct PrefabPlaceholder__Fields {
        struct SaveSerialize__Fields _;
        struct GameObject* Prefab;
        bool SerializeSelf;
        bool SerializeInstance;
        struct Condition_1* Condition;
        bool DeleteOldInstance;
        bool ReuseInstance;
        bool AssociateWithScene;
        bool m_spawnedInstance;
        struct GameObject* m_currentInstance;
    };

    struct PrefabPlaceholder {
        struct PrefabPlaceholder__Class* klass;
        MonitorData* monitor;
        struct PrefabPlaceholder__Fields fields;
    };

    struct LianaPlaceholder__Fields {
        struct PrefabPlaceholder__Fields _;
        struct SerializedBooleanUberState* ThawedUberState;
        struct SnapTrapEntity_SnapTrapParameters SnapTrapEntityParameters;
        struct LianaEntity_LianaParameters LianaEntityParameters;
        bool CanBeFrozen;
        float m_lastFrozenLeafRotation;
        bool m_hasInitialized;
    };

    struct LianaPlaceholder {
        struct LianaPlaceholder__Class* klass;
        MonitorData* monitor;
        struct LianaPlaceholder__Fields fields;
    };

    struct PrefabPlaceholder__VTable {
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

    struct PrefabPlaceholder__StaticFields {
    };

    struct PrefabPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PrefabPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PrefabPlaceholder__VTable vtable;
    };

    struct LianaPlaceholder__VTable {
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
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    };

    struct LianaPlaceholder__StaticFields {
    };

    struct LianaPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LianaPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LianaPlaceholder__VTable vtable;
    };

    struct MessageControllerB__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* AreaMessage;
        struct GameObject* AbilityMessage;
        struct GameObject* HintMessage;
        struct GameObject* HintSmallMessage;
        struct GameObject* BottomHintMessage;
        struct GameObject* PickupMessage;
        struct GameObject* StoryMessage;
        struct GameObject* HelpMessage;
        struct GameObject* SpiritTreeText;
        struct GameObject* QuestMessage;
        struct GameObject* CompleteQuestMessage;
        struct GameObject* UpdatedQuestMessage;
        struct GameObject* RaceFinishMessage;
        struct GameObject* AchievementMessage;
        struct GameObject* WispMessage;
        struct GameObject* CinematicStoryMessage;
        struct GameObject* CinematicMessageScreen;
        struct GameObject* NPCStoryMessage;
        struct GameObject* NPCMessageScreen;
        struct GameObject* NPCInteractionMessage;
        struct List_1_UnityEngine_GameObject_* NPCSideStoryMessages;
        struct List_1_UnityEngine_GameObject_* NPCSideMessageScreens;
        struct GameObject* UrlAndCodeMessage;
        struct MessageBox* m_currentMessageBox;
        struct MessageBox* m_lastActiveNpcMessageScreen;
        struct MessageBox__Array* m_activeNpcMessageScreens;
        struct MessageBox__Array* m_activeNpcMessages;
        struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* DefaultVisuals;
        MessageControllerB_NpcMessageStyle__Enum m_currentNpcMessageStyle;

        bool _LastMessageWasShard_k__BackingField;
        bool _LastMessageWasQuest_k__BackingField;
        struct Quest* _LastQuest_k__BackingField;
        SpiritShardType__Enum _LastShard_k__BackingField;

        struct MessageBox* m_lastWindow;
        struct Vector2 spellMessageLocation;
        struct Vector2 areaMessageLocation;
    };

    struct MessageControllerB {
        struct MessageControllerB__Class* klass;
        MonitorData* monitor;
        struct MessageControllerB__Fields fields;
    };

    struct MessageBox__Array {
        struct MessageBox__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MessageBox* vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        int32_t hashCode;
        int32_t next;
        MessageControllerB_NpcMessageStyle__Enum key;

        struct ShowFixedTimeTextEntity_TextVisuals* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array {
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ vector[32];
    };

    struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle_ {
        struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields {
        struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields fields;
    };

    struct MessageControllerB_NpcMessageStyle__Enum__Array {
        struct MessageControllerB_NpcMessageStyle__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        MessageControllerB_NpcMessageStyle__Enum vector[32];
    };

    struct IEnumerator_1_MessageControllerB_NpcMessageStyle_ {
        struct IEnumerator_1_MessageControllerB_NpcMessageStyle___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields {
        struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Fields fields;
    };

    struct ShowFixedTimeTextEntity_TextVisuals__Array {
        struct ShowFixedTimeTextEntity_TextVisuals__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ShowFixedTimeTextEntity_TextVisuals* vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_MessageControllerB_NpcMessageStyle_ {
        struct ICollection_1_MessageControllerB_NpcMessageStyle___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        struct ICollection_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        MessageControllerB_NpcMessageStyle__Enum key;

        struct ShowFixedTimeTextEntity_TextVisuals* value;
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Boxed {
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ fields;
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array {
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        struct IEnumerator_1_KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_MessageControllerB_NpcMessageStyle_ {
        struct IEnumerable_1_MessageControllerB_NpcMessageStyle___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_ {
        struct IEnumerable_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class* klass;
        MonitorData* monitor;
    };

    struct MessageBox__Array__VTable {
    };

    struct MessageBox__Array__StaticFields {
    };

    struct MessageBox__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageBox__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageBox__Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__VTable vtable;
    };

    struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle___StaticFields {
    };

    struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_MessageControllerB_NpcMessageStyle___VTable vtable;
    };

    struct MessageControllerB_NpcMessageStyle__Enum__Array__VTable {
    };

    struct MessageControllerB_NpcMessageStyle__Enum__Array__StaticFields {
    };

    struct MessageControllerB_NpcMessageStyle__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageControllerB_NpcMessageStyle__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageControllerB_NpcMessageStyle__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_MessageControllerB_NpcMessageStyle___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_MessageControllerB_NpcMessageStyle___StaticFields {
    };

    struct IEnumerator_1_MessageControllerB_NpcMessageStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_MessageControllerB_NpcMessageStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_MessageControllerB_NpcMessageStyle___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct ShowFixedTimeTextEntity_TextVisuals__Array__VTable {
    };

    struct ShowFixedTimeTextEntity_TextVisuals__Array__StaticFields {
    };

    struct ShowFixedTimeTextEntity_TextVisuals__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowFixedTimeTextEntity_TextVisuals__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowFixedTimeTextEntity_TextVisuals__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_2;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct ICollection_1_MessageControllerB_NpcMessageStyle___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_MessageControllerB_NpcMessageStyle___StaticFields {
    };

    struct ICollection_1_MessageControllerB_NpcMessageStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_MessageControllerB_NpcMessageStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_MessageControllerB_NpcMessageStyle___VTable vtable;
    };

    struct ICollection_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct ICollection_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct ShowFixedTimeTextEntity_TextVisuals___VTable {
    };

    struct ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__VTable {
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__StaticFields {
    };

    struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct IEnumerable_1_MessageControllerB_NpcMessageStyle___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_MessageControllerB_NpcMessageStyle___StaticFields {
    };

    struct IEnumerable_1_MessageControllerB_NpcMessageStyle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_MessageControllerB_NpcMessageStyle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_MessageControllerB_NpcMessageStyle___VTable vtable;
    };

    struct IEnumerable_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct IEnumerable_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData System_Collections_IDictionary_Remove;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData ContainsKey_1;
        VirtualInvokeData TryGetValue_1;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
        VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields {
    };

    struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals___VTable vtable;
    };

    struct MessageControllerB__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MessageControllerB__StaticFields {
    };

    struct MessageControllerB__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageControllerB__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageControllerB__VTable vtable;
    };

    struct __declspec(align(8)) PickupContext__Fields {
        PickupMessageIcon_PickupType__Enum PickupType;

        struct GameObject* IconPrefab;
        struct Texture2D* Icon;
        struct MessageProvider* Name;
        struct MessageProvider* Description;
    };

    struct PickupContext {
        struct PickupContext__Class* klass;
        MonitorData* monitor;
        struct PickupContext__Fields fields;
    };

    struct PickupContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PickupContext__StaticFields {
    };

    struct PickupContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PickupContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PickupContext__VTable vtable;
    };

    enum class WispMessageIcon_Wisp__Enum : int32_t {
        Voice = 0x00000000,
        Memory = 0x00000001,
        Heart = 0x00000002,
        Eyes = 0x00000003,
        Strength = 0x00000004,
        Golden = 0x00000005,
    };

    struct WispMessageIcon_Wisp__Enum__Boxed {
        struct WispMessageIcon_Wisp__Enum__Class* klass;
        MonitorData* monitor;
        WispMessageIcon_Wisp__Enum value;
    };

    struct WispMessageIcon_Wisp__Enum__VTable {
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

} // namespace app
