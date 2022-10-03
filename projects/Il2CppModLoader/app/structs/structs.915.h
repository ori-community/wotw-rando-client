namespace app {
    struct IEnumerator_1_StatSetting___StaticFields {
    };

    struct IEnumerator_1_StatSetting___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_StatSetting___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_StatSetting___VTable vtable;
    };

    struct List_1_StatSetting___VTable {
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

    struct List_1_StatSetting___StaticFields {
        struct StatSetting__Array* _emptyArray;
    };

    struct List_1_StatSetting___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_StatSetting___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_StatSetting___VTable vtable;
    };

    struct StatisticsManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateValueStoreOnDeath;
    };

    struct StatisticsManager__StaticFields {
        struct StatisticsManager* Instance;
    };

    struct StatisticsManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StatisticsManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StatisticsManager__VTable vtable;
    };

    struct LeaderboardRowUI__Fields {
        struct MonoBehaviour__Fields _;
        struct MessageBox* Rank;
        struct MessageBox* Tag;
        struct MessageBox* Deaths;
        struct MessageBox* Time;
        struct MessageBox* Completion;
        struct BaseAnimator* Glow;
        bool IsLiveEntry;
        struct String* m_userHandle;
    };

    struct LeaderboardRowUI {
        struct LeaderboardRowUI__Class* klass;
        MonitorData* monitor;
        struct LeaderboardRowUI__Fields fields;
    };

    struct LeaderboardRowUI__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LeaderboardRowUI__StaticFields {
    };

    struct LeaderboardRowUI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardRowUI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardRowUI__VTable vtable;
    };

    enum class LeaderboardsB_LeaderboardQueryState__Enum : int32_t {
        FetchingData = 0x00000000,
        Ready = 0x00000001,
    };

    struct LeaderboardsB_LeaderboardQueryState__Enum__Boxed {
        struct LeaderboardsB_LeaderboardQueryState__Enum__Class* klass;
        MonitorData* monitor;
        LeaderboardsB_LeaderboardQueryState__Enum value;
    };

    struct LeaderboardsB__Fields {
        struct CleverMenuItemGroupBase__Fields _;
        struct LeaderboardTableUI* TableUI;
        struct MessageBox* LeaderboardTitle;
        struct MessageBox* FilterText;
        struct MessageBox* EntriesText;
        struct MessageBox* DifficultyText;
        struct ActionMethod* OnHighlightChangedAction;
        Leaderboard__Enum m_currentLeaderboard;

        DifficultyMode__Enum m_currentDifficulty;

        struct Dictionary_2_LeaderboardB_LeaderboardData_* m_data;
        int32_t m_currentRowIndex;
        bool m_isVisible;
        struct TranslatedMessageProvider* LeaderboardMessageProvider;
        struct TranslatedMessageProvider* FilterMessageProvider;
        struct TranslatedMessageProvider* DifficultyMessageProvider;
        struct TranslatedMessageProvider* EntriesMessageProvider;
        struct TranslatedMessageProvider* BoardSpeedRunnerMessageProvider;
        struct TranslatedMessageProvider* BoardExplorerMessageProvider;
        struct TranslatedMessageProvider* BoardGlobalMessageProvider;
        struct TranslatedMessageProvider* FilterOverallMessageProvider;
        struct TranslatedMessageProvider* FilterMyFriendsMessageProvider;
        struct TranslatedMessageProvider* FilterMyScoreMessageProvider;
        struct TranslatedMessageProvider* DifficultyEasyMessageProvider;
        struct TranslatedMessageProvider* DifficultyNormalMessageProvider;
        struct TranslatedMessageProvider* DifficultyHardMessageProvider;
        struct TranslatedMessageProvider* DifficultyOneLifeMessageProvider;
        struct SoundProvider* OpenSound;
        struct SoundProvider* CloseSound;
        struct SoundProvider* CycleLeaderboardSound;
        struct SoundProvider* CycleFilterSound;
        struct SoundProvider* ViewGamerSound;
        struct SoundProvider* ChangeSelectionSound;
        struct LegacyTransparencyAnimator* FadeAnimator;
        struct LegacyTransparencyAnimator* FetchingDataFadeAnimator;
        bool m_isActive;
        struct ActionSequence* OnBackAction;
        struct Transform* ShowScoreCardLegend;
        bool CycleDifficulty;
        struct OnlineHandler* m_onlineHandler;
        bool m_isHighlightVisible;
        LeaderboardsB_LeaderboardQueryState__Enum m_currentLeaderboardQueryState;

        float m_inactiveTime;
    };

    struct LeaderboardsB {
        struct LeaderboardsB__Class* klass;
        MonitorData* monitor;
        struct LeaderboardsB__Fields fields;
    };

    struct LeaderboardTableUI__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* LeaderboardRowBackground;
        float RowSpacing;
        int32_t RowCount;
        struct Transform* RowsParent;
        struct Transform* HeaderParent;
        struct List_1_LeaderboardRowUI_* m_leaderboardRows;
        struct List_1_UnityEngine_GameObject_* m_rowBackgrounds;
        struct GameObject* m_header;
        struct LeaderboardTableUI_LeaderboardMetaData__Array* MetaData;
        Leaderboard__Enum m_leaderboardType;

        bool m_tableExists;
    };

    struct LeaderboardTableUI {
        struct LeaderboardTableUI__Class* klass;
        MonitorData* monitor;
        struct LeaderboardTableUI__Fields fields;
    };

    struct __declspec(align(8)) List_1_LeaderboardRowUI___Fields {
        struct LeaderboardRowUI__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LeaderboardRowUI_ {
        struct List_1_LeaderboardRowUI___Class* klass;
        MonitorData* monitor;
        struct List_1_LeaderboardRowUI___Fields fields;
    };

    struct LeaderboardRowUI__Array {
        struct LeaderboardRowUI__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LeaderboardRowUI* vector[32];
    };

    struct IEnumerator_1_LeaderboardRowUI_ {
        struct IEnumerator_1_LeaderboardRowUI___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) LeaderboardTableUI_LeaderboardMetaData__Fields {
        struct GameObject* Header;
        struct LeaderboardRowUI* Row;
        Leaderboard__Enum Leaderboard;
    };

    struct LeaderboardTableUI_LeaderboardMetaData {
        struct LeaderboardTableUI_LeaderboardMetaData__Class* klass;
        MonitorData* monitor;
        struct LeaderboardTableUI_LeaderboardMetaData__Fields fields;
    };

    struct LeaderboardTableUI_LeaderboardMetaData__Array {
        struct LeaderboardTableUI_LeaderboardMetaData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LeaderboardTableUI_LeaderboardMetaData* vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_LeaderboardB_LeaderboardData___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_LeaderboardB_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_LeaderboardB_LeaderboardData_ {
        struct Dictionary_2_LeaderboardB_LeaderboardData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_LeaderboardB_LeaderboardData___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData_ {
        int32_t hashCode;
        int32_t next;
        LeaderboardB__Enum key;

        struct LeaderboardData* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array {
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData_ vector[32];
    };

    struct IEqualityComparer_1_LeaderboardB_ {
        struct IEqualityComparer_1_LeaderboardB___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___Fields {
        struct Dictionary_2_LeaderboardB_LeaderboardData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___Fields fields;
    };

    struct LeaderboardB__Enum__Array {
        struct LeaderboardB__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        LeaderboardB__Enum vector[32];
    };

    struct IEnumerator_1_LeaderboardB_ {
        struct IEnumerator_1_LeaderboardB___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___Fields {
        struct Dictionary_2_LeaderboardB_LeaderboardData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___Fields fields;
    };

    struct ICollection_1_LeaderboardB_ {
        struct ICollection_1_LeaderboardB___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData_ {
        LeaderboardB__Enum key;

        struct LeaderboardData* value;
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___Boxed {
        struct KeyValuePair_2_LeaderboardB_LeaderboardData___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_LeaderboardB_LeaderboardData_ fields;
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___Array {
        struct KeyValuePair_2_LeaderboardB_LeaderboardData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_LeaderboardB_LeaderboardData_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_LeaderboardB_LeaderboardData_ {
        struct IEnumerator_1_KeyValuePair_2_LeaderboardB_LeaderboardData___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_LeaderboardB_ {
        struct IEnumerable_1_LeaderboardB___Class* klass;
        MonitorData* monitor;
    };

    enum class OnlineHandler_OnlineHandlerState__Enum : int32_t {
        NotConnected = 0x00000000,
        Connected = 0x00000001,
        Connecting = 0x00000002,
        Invalid = 0x00000003,
        TryAgain = 0x00000004,
        NoToken = 0x00000005,
    };

    struct OnlineHandler_OnlineHandlerState__Enum__Boxed {
        struct OnlineHandler_OnlineHandlerState__Enum__Class* klass;
        MonitorData* monitor;
        OnlineHandler_OnlineHandlerState__Enum value;
    };

    struct OnlineHandler__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* m_noInternetConnection;
        struct GameObject* m_tryAgain;
        struct GameObject* m_connected;
        struct GameObject* m_connecting;
        struct GameObject* m_noToken;
        struct LeaderboardsB* m_leaderBoards;
        struct INetworkConnectivityChecker* m_netConnectivityChecker;
        OnlineHandler_OnlineHandlerState__Enum m_handlerState;
    };

    struct OnlineHandler {
        struct OnlineHandler__Class* klass;
        MonitorData* monitor;
        struct OnlineHandler__Fields fields;
    };

    struct LeaderboardRowUI__Array__VTable {
    };

    struct LeaderboardRowUI__Array__StaticFields {
    };

    struct LeaderboardRowUI__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardRowUI__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardRowUI__Array__VTable vtable;
    };

    struct IEnumerator_1_LeaderboardRowUI___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LeaderboardRowUI___StaticFields {
    };

    struct IEnumerator_1_LeaderboardRowUI___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LeaderboardRowUI___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LeaderboardRowUI___VTable vtable;
    };

    struct List_1_LeaderboardRowUI___VTable {
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

    struct List_1_LeaderboardRowUI___StaticFields {
        struct LeaderboardRowUI__Array* _emptyArray;
    };

    struct List_1_LeaderboardRowUI___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LeaderboardRowUI___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LeaderboardRowUI___VTable vtable;
    };

    struct LeaderboardTableUI_LeaderboardMetaData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LeaderboardTableUI_LeaderboardMetaData__StaticFields {
    };

    struct LeaderboardTableUI_LeaderboardMetaData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardTableUI_LeaderboardMetaData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardTableUI_LeaderboardMetaData__VTable vtable;
    };

    struct LeaderboardTableUI_LeaderboardMetaData__Array__VTable {
    };

    struct LeaderboardTableUI_LeaderboardMetaData__Array__StaticFields {
    };

    struct LeaderboardTableUI_LeaderboardMetaData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardTableUI_LeaderboardMetaData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardTableUI_LeaderboardMetaData__Array__VTable vtable;
    };

    struct LeaderboardTableUI__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnInstantiate;
    };

    struct LeaderboardTableUI__StaticFields {
    };

    struct LeaderboardTableUI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardTableUI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardTableUI__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_LeaderboardB_LeaderboardData___Array__VTable vtable;
    };

    struct IEqualityComparer_1_LeaderboardB___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_LeaderboardB___StaticFields {
    };

    struct IEqualityComparer_1_LeaderboardB___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_LeaderboardB___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_LeaderboardB___VTable vtable;
    };

    struct LeaderboardB__Enum__Array__VTable {
    };

    struct LeaderboardB__Enum__Array__StaticFields {
    };

    struct LeaderboardB__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardB__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardB__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_LeaderboardB___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LeaderboardB___StaticFields {
    };

    struct IEnumerator_1_LeaderboardB___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LeaderboardB___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LeaderboardB___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_LeaderboardB_LeaderboardData___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_LeaderboardB_LeaderboardData___VTable vtable;
    };

    struct ICollection_1_LeaderboardB___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_LeaderboardB___StaticFields {
    };

    struct ICollection_1_LeaderboardB___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_LeaderboardB___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_LeaderboardB___VTable vtable;
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___StaticFields {
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_LeaderboardB_LeaderboardData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_LeaderboardB_LeaderboardData___VTable vtable;
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___Array__VTable {
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___Array__StaticFields {
    };

    struct KeyValuePair_2_LeaderboardB_LeaderboardData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_LeaderboardB_LeaderboardData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_LeaderboardB_LeaderboardData___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_LeaderboardB_LeaderboardData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_LeaderboardB_LeaderboardData___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_LeaderboardB_LeaderboardData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_LeaderboardB_LeaderboardData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_LeaderboardB_LeaderboardData___VTable vtable;
    };

    struct IEnumerable_1_LeaderboardB___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_LeaderboardB___StaticFields {
    };

    struct IEnumerable_1_LeaderboardB___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_LeaderboardB___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_LeaderboardB___VTable vtable;
    };

    struct Dictionary_2_LeaderboardB_LeaderboardData___VTable {
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

    struct Dictionary_2_LeaderboardB_LeaderboardData___StaticFields {
    };

    struct Dictionary_2_LeaderboardB_LeaderboardData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_LeaderboardB_LeaderboardData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_LeaderboardB_LeaderboardData___VTable vtable;
    };

    struct OnlineHandler_OnlineHandlerState__Enum__VTable {
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

    struct OnlineHandler_OnlineHandlerState__Enum__StaticFields {
    };

    struct OnlineHandler_OnlineHandlerState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnlineHandler_OnlineHandlerState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnlineHandler_OnlineHandlerState__Enum__VTable vtable;
    };

    struct OnlineHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OnlineHandler__StaticFields {
    };

    struct OnlineHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OnlineHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OnlineHandler__VTable vtable;
    };

    struct LeaderboardsB_LeaderboardQueryState__Enum__VTable {
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

    struct LeaderboardsB_LeaderboardQueryState__Enum__StaticFields {
    };

    struct LeaderboardsB_LeaderboardQueryState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardsB_LeaderboardQueryState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardsB_LeaderboardQueryState__Enum__VTable vtable;
    };

    struct LeaderboardsB__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_IsVisible;
        VirtualInvokeData set_IsVisible;
        VirtualInvokeData get_CanBeEntered;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData set_IsActive;
        VirtualInvokeData get_IsHighlightVisible;
        VirtualInvokeData set_IsHighlightVisible;
        VirtualInvokeData Awake;
        VirtualInvokeData EnterInGroup;
        VirtualInvokeData OnMenuItemChangedInGroup;
    };

    struct LeaderboardsB__StaticFields {
        struct LeaderboardsB* Instance;
    };

    struct LeaderboardsB__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardsB__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardsB__VTable vtable;
    };

    struct __declspec(align(8)) LeaderboardsB_c_DisplayClass72_0__Fields {
        Leaderboard__Enum leaderboard;

        DifficultyMode__Enum difficulty;

        LeaderboardFilter__Enum filter;
    };

    struct LeaderboardsB_c_DisplayClass72_0 {
        struct LeaderboardsB_c_DisplayClass72_0__Class* klass;
        MonitorData* monitor;
        struct LeaderboardsB_c_DisplayClass72_0__Fields fields;
    };

    struct LeaderboardsB_c_DisplayClass72_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LeaderboardsB_c_DisplayClass72_0__StaticFields {
    };

    struct LeaderboardsB_c_DisplayClass72_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardsB_c_DisplayClass72_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardsB_c_DisplayClass72_0__VTable vtable;
    };

} // namespace app
