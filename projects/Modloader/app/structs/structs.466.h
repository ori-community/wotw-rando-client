namespace app {
    struct FriendInfo_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FriendInfo_1__StaticFields {
    };

    struct FriendInfo_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FriendInfo_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FriendInfo_1__VTable vtable;
    };

    struct FriendInfo_1__Array__VTable {
    };

    struct FriendInfo_1__Array__StaticFields {
    };

    struct FriendInfo_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FriendInfo_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FriendInfo_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ServerModels_FriendInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ServerModels_FriendInfo___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ServerModels_FriendInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ServerModels_FriendInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ServerModels_FriendInfo___VTable vtable;
    };

    struct List_1_PlayFab_ServerModels_FriendInfo___VTable {
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

    struct List_1_PlayFab_ServerModels_FriendInfo___StaticFields {
        struct FriendInfo_1__Array* _emptyArray;
    };

    struct List_1_PlayFab_ServerModels_FriendInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ServerModels_FriendInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ServerModels_FriendInfo___VTable vtable;
    };

    struct GetFriendsListResult_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetFriendsListResult_1__StaticFields {
    };

    struct GetFriendsListResult_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetFriendsListResult_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetFriendsListResult_1__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_GetFriendsListResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_GetFriendsListResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_GetFriendsListResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_GetFriendsListResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_GetFriendsListResult___VTable vtable;
    };

    struct GetLeaderboardRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        int32_t MaxResultsCount;
        struct PlayerProfileViewConstraints_1* ProfileConstraints;
        int32_t StartPosition;
        struct String* StatisticName;
        struct Nullable_1_Int32_ Version;
    };

    struct GetLeaderboardRequest_1 {
        struct GetLeaderboardRequest_1__Class* klass;
        MonitorData* monitor;
        struct GetLeaderboardRequest_1__Fields fields;
    };

    struct GetLeaderboardRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetLeaderboardRequest_1__StaticFields {
    };

    struct GetLeaderboardRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetLeaderboardRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetLeaderboardRequest_1__VTable vtable;
    };

    struct GetLeaderboardAroundCharacterRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CharacterId;
        struct String* CharacterType;
        int32_t MaxResultsCount;
        struct String* PlayFabId;
        struct String* StatisticName;
    };

    struct GetLeaderboardAroundCharacterRequest_1 {
        struct GetLeaderboardAroundCharacterRequest_1__Class* klass;
        MonitorData* monitor;
        struct GetLeaderboardAroundCharacterRequest_1__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult_ {
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___Fields fields;
    };

    struct GetLeaderboardAroundCharacterResult_1__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry_* Leaderboard;
    };

    struct GetLeaderboardAroundCharacterResult_1 {
        struct GetLeaderboardAroundCharacterResult_1__Class* klass;
        MonitorData* monitor;
        struct GetLeaderboardAroundCharacterResult_1__Fields fields;
    };

    struct GetLeaderboardAroundCharacterRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetLeaderboardAroundCharacterRequest_1__StaticFields {
    };

    struct GetLeaderboardAroundCharacterRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetLeaderboardAroundCharacterRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetLeaderboardAroundCharacterRequest_1__VTable vtable;
    };

    struct GetLeaderboardAroundCharacterResult_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetLeaderboardAroundCharacterResult_1__StaticFields {
    };

    struct GetLeaderboardAroundCharacterResult_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetLeaderboardAroundCharacterResult_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetLeaderboardAroundCharacterResult_1__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundCharacterResult___VTable vtable;
    };

    struct GetLeaderboardAroundUserRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        int32_t MaxResultsCount;
        struct String* PlayFabId;
        struct PlayerProfileViewConstraints_1* ProfileConstraints;
        struct String* StatisticName;
        struct Nullable_1_Int32_ Version;
    };

    struct GetLeaderboardAroundUserRequest {
        struct GetLeaderboardAroundUserRequest__Class* klass;
        MonitorData* monitor;
        struct GetLeaderboardAroundUserRequest__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult_ {
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___Fields fields;
    };

    struct GetLeaderboardAroundUserResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ServerModels_PlayerLeaderboardEntry_* Leaderboard;
        struct Nullable_1_DateTime_ NextReset;
        int32_t Version;
    };

    struct GetLeaderboardAroundUserResult {
        struct GetLeaderboardAroundUserResult__Class* klass;
        MonitorData* monitor;
        struct GetLeaderboardAroundUserResult__Fields fields;
    };

    struct GetLeaderboardAroundUserRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetLeaderboardAroundUserRequest__StaticFields {
    };

    struct GetLeaderboardAroundUserRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetLeaderboardAroundUserRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetLeaderboardAroundUserRequest__VTable vtable;
    };

    struct GetLeaderboardAroundUserResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetLeaderboardAroundUserResult__StaticFields {
    };

    struct GetLeaderboardAroundUserResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetLeaderboardAroundUserResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetLeaderboardAroundUserResult__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardAroundUserResult___VTable vtable;
    };

    struct GetLeaderboardForUsersCharactersRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        int32_t MaxResultsCount;
        struct String* PlayFabId;
        struct String* StatisticName;
    };

    struct GetLeaderboardForUsersCharactersRequest_1 {
        struct GetLeaderboardForUsersCharactersRequest_1__Class* klass;
        MonitorData* monitor;
        struct GetLeaderboardForUsersCharactersRequest_1__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult_ {
        struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___Fields fields;
    };

    struct GetLeaderboardForUsersCharactersResult_1__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ServerModels_CharacterLeaderboardEntry_* Leaderboard;
    };

    struct GetLeaderboardForUsersCharactersResult_1 {
        struct GetLeaderboardForUsersCharactersResult_1__Class* klass;
        MonitorData* monitor;
        struct GetLeaderboardForUsersCharactersResult_1__Fields fields;
    };

    struct GetLeaderboardForUsersCharactersRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetLeaderboardForUsersCharactersRequest_1__StaticFields {
    };

    struct GetLeaderboardForUsersCharactersRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetLeaderboardForUsersCharactersRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetLeaderboardForUsersCharactersRequest_1__VTable vtable;
    };

    struct GetLeaderboardForUsersCharactersResult_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetLeaderboardForUsersCharactersResult_1__StaticFields {
    };

    struct GetLeaderboardForUsersCharactersResult_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetLeaderboardForUsersCharactersResult_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetLeaderboardForUsersCharactersResult_1__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_GetLeaderboardForUsersCharactersResult___VTable vtable;
    };

    struct GetPlayerCombinedInfoRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct GetPlayerCombinedInfoRequestParams_1* InfoRequestParameters;
        struct String* PlayFabId;
    };

    struct GetPlayerCombinedInfoRequest_1 {
        struct GetPlayerCombinedInfoRequest_1__Class* klass;
        MonitorData* monitor;
        struct GetPlayerCombinedInfoRequest_1__Fields fields;
    };

    struct __declspec(align(8)) GetPlayerCombinedInfoRequestParams_1__Fields {
        bool GetCharacterInventories;
        bool GetCharacterList;
        bool GetPlayerProfile;
        bool GetPlayerStatistics;
        bool GetTitleData;
        bool GetUserAccountInfo;
        bool GetUserData;
        bool GetUserInventory;
        bool GetUserReadOnlyData;
        bool GetUserVirtualCurrency;
        struct List_1_System_String_* PlayerStatisticNames;
        struct PlayerProfileViewConstraints_1* ProfileConstraints;
        struct List_1_System_String_* TitleDataKeys;
        struct List_1_System_String_* UserDataKeys;
        struct List_1_System_String_* UserReadOnlyDataKeys;
    };

    struct GetPlayerCombinedInfoRequestParams_1 {
        struct GetPlayerCombinedInfoRequestParams_1__Class* klass;
        MonitorData* monitor;
        struct GetPlayerCombinedInfoRequestParams_1__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult_ {
        struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___Fields fields;
    };

    struct GetPlayerCombinedInfoResult_1__Fields {
        struct PlayFabResultCommon__Fields _;
        struct GetPlayerCombinedInfoResultPayload_1* InfoResultPayload;
        struct String* PlayFabId;
    };

    struct GetPlayerCombinedInfoResult_1 {
        struct GetPlayerCombinedInfoResult_1__Class* klass;
        MonitorData* monitor;
        struct GetPlayerCombinedInfoResult_1__Fields fields;
    };

    struct __declspec(align(8)) GetPlayerCombinedInfoResultPayload_1__Fields {
        struct UserAccountInfo_1* AccountInfo;
        struct List_1_PlayFab_ServerModels_CharacterInventory_* CharacterInventories;
        struct List_1_PlayFab_ServerModels_CharacterResult_* CharacterList;
        struct PlayerProfileModel_1* PlayerProfile;
        struct List_1_PlayFab_ServerModels_StatisticValue_* PlayerStatistics;
        struct Dictionary_2_System_String_System_String_* TitleData;
        struct Dictionary_2_System_String_PlayFab_ServerModels_UserDataRecord_* UserData;
        uint32_t UserDataVersion;
        struct List_1_PlayFab_ServerModels_ItemInstance_* UserInventory;
        struct Dictionary_2_System_String_PlayFab_ServerModels_UserDataRecord_* UserReadOnlyData;
        uint32_t UserReadOnlyDataVersion;
        struct Dictionary_2_System_String_System_Int32_* UserVirtualCurrency;
        struct Dictionary_2_System_String_PlayFab_ServerModels_VirtualCurrencyRechargeTime_* UserVirtualCurrencyRechargeTimes;
    };

    struct GetPlayerCombinedInfoResultPayload_1 {
        struct GetPlayerCombinedInfoResultPayload_1__Class* klass;
        MonitorData* monitor;
        struct GetPlayerCombinedInfoResultPayload_1__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_CharacterInventory___Fields {
        struct CharacterInventory_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_CharacterInventory_ {
        struct List_1_PlayFab_ServerModels_CharacterInventory___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_CharacterInventory___Fields fields;
    };

    struct __declspec(align(8)) CharacterInventory_1__Fields {
        struct String* CharacterId;
        struct List_1_PlayFab_ServerModels_ItemInstance_* Inventory;
    };

    struct CharacterInventory_1 {
        struct CharacterInventory_1__Class* klass;
        MonitorData* monitor;
        struct CharacterInventory_1__Fields fields;
    };

    struct CharacterInventory_1__Array {
        struct CharacterInventory_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CharacterInventory_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_CharacterInventory_ {
        struct IEnumerator_1_PlayFab_ServerModels_CharacterInventory___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_StatisticValue___Fields {
        struct StatisticValue_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_StatisticValue_ {
        struct List_1_PlayFab_ServerModels_StatisticValue___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_StatisticValue___Fields fields;
    };

    struct __declspec(align(8)) StatisticValue_1__Fields {
        struct String* StatisticName;
        int32_t Value;
        uint32_t Version;
    };

    struct StatisticValue_1 {
        struct StatisticValue_1__Class* klass;
        MonitorData* monitor;
        struct StatisticValue_1__Fields fields;
    };

    struct StatisticValue_1__Array {
        struct StatisticValue_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct StatisticValue_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_StatisticValue_ {
        struct IEnumerator_1_PlayFab_ServerModels_StatisticValue___Class* klass;
        MonitorData* monitor;
    };

    struct GetPlayerCombinedInfoRequestParams_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetPlayerCombinedInfoRequestParams_1__StaticFields {
    };

    struct GetPlayerCombinedInfoRequestParams_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetPlayerCombinedInfoRequestParams_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetPlayerCombinedInfoRequestParams_1__VTable vtable;
    };

    struct GetPlayerCombinedInfoRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetPlayerCombinedInfoRequest_1__StaticFields {
    };

    struct GetPlayerCombinedInfoRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetPlayerCombinedInfoRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetPlayerCombinedInfoRequest_1__VTable vtable;
    };

    struct CharacterInventory_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CharacterInventory_1__StaticFields {
    };

    struct CharacterInventory_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterInventory_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterInventory_1__VTable vtable;
    };

    struct CharacterInventory_1__Array__VTable {
    };

    struct CharacterInventory_1__Array__StaticFields {
    };

    struct CharacterInventory_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterInventory_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterInventory_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ServerModels_CharacterInventory___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ServerModels_CharacterInventory___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ServerModels_CharacterInventory___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ServerModels_CharacterInventory___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ServerModels_CharacterInventory___VTable vtable;
    };

    struct List_1_PlayFab_ServerModels_CharacterInventory___VTable {
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

    struct List_1_PlayFab_ServerModels_CharacterInventory___StaticFields {
        struct CharacterInventory_1__Array* _emptyArray;
    };

    struct List_1_PlayFab_ServerModels_CharacterInventory___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ServerModels_CharacterInventory___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ServerModels_CharacterInventory___VTable vtable;
    };

    struct StatisticValue_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StatisticValue_1__StaticFields {
    };

    struct StatisticValue_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StatisticValue_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StatisticValue_1__VTable vtable;
    };

    struct StatisticValue_1__Array__VTable {
    };

    struct StatisticValue_1__Array__StaticFields {
    };

    struct StatisticValue_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StatisticValue_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StatisticValue_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ServerModels_StatisticValue___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ServerModels_StatisticValue___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ServerModels_StatisticValue___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ServerModels_StatisticValue___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ServerModels_StatisticValue___VTable vtable;
    };

    struct List_1_PlayFab_ServerModels_StatisticValue___VTable {
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

    struct List_1_PlayFab_ServerModels_StatisticValue___StaticFields {
        struct StatisticValue_1__Array* _emptyArray;
    };

    struct List_1_PlayFab_ServerModels_StatisticValue___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ServerModels_StatisticValue___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ServerModels_StatisticValue___VTable vtable;
    };

    struct GetPlayerCombinedInfoResultPayload_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetPlayerCombinedInfoResultPayload_1__StaticFields {
    };

    struct GetPlayerCombinedInfoResultPayload_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetPlayerCombinedInfoResultPayload_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetPlayerCombinedInfoResultPayload_1__VTable vtable;
    };

    struct GetPlayerCombinedInfoResult_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetPlayerCombinedInfoResult_1__StaticFields {
    };

    struct GetPlayerCombinedInfoResult_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetPlayerCombinedInfoResult_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetPlayerCombinedInfoResult_1__VTable vtable;
    };

    struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___VTable {
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

    struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___StaticFields {
    };

    struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ServerModels_GetPlayerCombinedInfoResult___VTable vtable;
    };

    struct GetPlayerProfileRequest_1__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* PlayFabId;
        struct PlayerProfileViewConstraints_1* ProfileConstraints;
    };

    struct GetPlayerProfileRequest_1 {
        struct GetPlayerProfileRequest_1__Class* klass;
        MonitorData* monitor;
        struct GetPlayerProfileRequest_1__Fields fields;
    };

    struct Action_1_PlayFab_ServerModels_GetPlayerProfileResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ServerModels_GetPlayerProfileResult_ {
        struct Action_1_PlayFab_ServerModels_GetPlayerProfileResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ServerModels_GetPlayerProfileResult___Fields fields;
    };

    struct GetPlayerProfileResult_1__Fields {
        struct PlayFabResultCommon__Fields _;
        struct PlayerProfileModel_1* PlayerProfile;
    };

    struct GetPlayerProfileResult_1 {
        struct GetPlayerProfileResult_1__Class* klass;
        MonitorData* monitor;
        struct GetPlayerProfileResult_1__Fields fields;
    };

    struct GetPlayerProfileRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetPlayerProfileRequest_1__StaticFields {
    };

} // namespace app
