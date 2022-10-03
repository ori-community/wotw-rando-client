namespace app {
    struct CountryCode__Enum_1__Boxed {
        struct CountryCode__Enum_1__Class* klass;
        MonitorData* monitor;
        CountryCode__Enum_1 value;
    };

    struct Nullable_1_PlayFab_ServerModels_CountryCode_ {
        CountryCode__Enum_1 value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ServerModels_CountryCode___Boxed {
        struct Nullable_1_PlayFab_ServerModels_CountryCode___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ServerModels_CountryCode_ fields;
    };

    struct __declspec(align(8)) LocationModel_1__Fields {
        struct String* City;
        struct Nullable_1_PlayFab_ServerModels_ContinentCode_ ContinentCode;
        struct Nullable_1_PlayFab_ServerModels_CountryCode_ CountryCode;
        struct Nullable_1_Double_ Latitude;
        struct Nullable_1_Double_ Longitude;
    };

    struct LocationModel_1 {
        struct LocationModel_1__Class* klass;
        MonitorData* monitor;
        struct LocationModel_1__Fields fields;
    };

    struct LocationModel_1__Array {
        struct LocationModel_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LocationModel_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_LocationModel_ {
        struct IEnumerator_1_PlayFab_ServerModels_LocationModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_MembershipModel___Fields {
        struct MembershipModel_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_MembershipModel_ {
        struct List_1_PlayFab_ServerModels_MembershipModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_MembershipModel___Fields fields;
    };

    struct __declspec(align(8)) MembershipModel_1__Fields {
        bool IsActive;
        struct DateTime MembershipExpiration;
        struct String* MembershipId;
        struct Nullable_1_DateTime_ OverrideExpiration;
        struct List_1_PlayFab_ServerModels_SubscriptionModel_* Subscriptions;
    };

    struct MembershipModel_1 {
        struct MembershipModel_1__Class* klass;
        MonitorData* monitor;
        struct MembershipModel_1__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_SubscriptionModel___Fields {
        struct SubscriptionModel_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_SubscriptionModel_ {
        struct List_1_PlayFab_ServerModels_SubscriptionModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_SubscriptionModel___Fields fields;
    };

    enum class SubscriptionProviderStatus__Enum_1 : int32_t {
        NoError = 0x00000000,
        Cancelled = 0x00000001,
        UnknownError = 0x00000002,
        BillingError = 0x00000003,
        ProductUnavailable = 0x00000004,
        CustomerDidNotAcceptPriceChange = 0x00000005,
        FreeTrial = 0x00000006,
        PaymentPending = 0x00000007,
    };

    struct SubscriptionProviderStatus__Enum_1__Boxed {
        struct SubscriptionProviderStatus__Enum_1__Class* klass;
        MonitorData* monitor;
        SubscriptionProviderStatus__Enum_1 value;
    };

    struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus_ {
        SubscriptionProviderStatus__Enum_1 value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus___Boxed {
        struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus_ fields;
    };

    struct __declspec(align(8)) SubscriptionModel_1__Fields {
        struct DateTime Expiration;
        struct DateTime InitialSubscriptionTime;
        bool IsActive;
        struct Nullable_1_PlayFab_ServerModels_SubscriptionProviderStatus_ Status;
        struct String* SubscriptionId;
        struct String* SubscriptionItemId;
        struct String* SubscriptionProvider;
    };

    struct SubscriptionModel_1 {
        struct SubscriptionModel_1__Class* klass;
        MonitorData* monitor;
        struct SubscriptionModel_1__Fields fields;
    };

    struct SubscriptionModel_1__Array {
        struct SubscriptionModel_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SubscriptionModel_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_SubscriptionModel_ {
        struct IEnumerator_1_PlayFab_ServerModels_SubscriptionModel___Class* klass;
        MonitorData* monitor;
    };

    struct MembershipModel_1__Array {
        struct MembershipModel_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MembershipModel_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_MembershipModel_ {
        struct IEnumerator_1_PlayFab_ServerModels_MembershipModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Fields {
        struct PushNotificationRegistrationModel_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel_ {
        struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Fields fields;
    };

    enum class PushNotificationPlatform__Enum_1 : int32_t {
        ApplePushNotificationService = 0x00000000,
        GoogleCloudMessaging = 0x00000001,
    };

    struct PushNotificationPlatform__Enum_1__Boxed {
        struct PushNotificationPlatform__Enum_1__Class* klass;
        MonitorData* monitor;
        PushNotificationPlatform__Enum_1 value;
    };

    struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform_ {
        PushNotificationPlatform__Enum_1 value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform___Boxed {
        struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform_ fields;
    };

    struct __declspec(align(8)) PushNotificationRegistrationModel_1__Fields {
        struct String* NotificationEndpointARN;
        struct Nullable_1_PlayFab_ServerModels_PushNotificationPlatform_ Platform;
    };

    struct PushNotificationRegistrationModel_1 {
        struct PushNotificationRegistrationModel_1__Class* klass;
        MonitorData* monitor;
        struct PushNotificationRegistrationModel_1__Fields fields;
    };

    struct PushNotificationRegistrationModel_1__Array {
        struct PushNotificationRegistrationModel_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PushNotificationRegistrationModel_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistrationModel_ {
        struct IEnumerator_1_PlayFab_ServerModels_PushNotificationRegistrationModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_StatisticModel___Fields {
        struct StatisticModel_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_StatisticModel_ {
        struct List_1_PlayFab_ServerModels_StatisticModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_StatisticModel___Fields fields;
    };

    struct __declspec(align(8)) StatisticModel_1__Fields {
        struct String* Name;
        int32_t Value;
        int32_t Version;
    };

    struct StatisticModel_1 {
        struct StatisticModel_1__Class* klass;
        MonitorData* monitor;
        struct StatisticModel_1__Fields fields;
    };

    struct StatisticModel_1__Array {
        struct StatisticModel_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct StatisticModel_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_StatisticModel_ {
        struct IEnumerator_1_PlayFab_ServerModels_StatisticModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_TagModel___Fields {
        struct TagModel_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_TagModel_ {
        struct List_1_PlayFab_ServerModels_TagModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_TagModel___Fields fields;
    };

    struct __declspec(align(8)) TagModel_1__Fields {
        struct String* TagValue;
    };

    struct TagModel_1 {
        struct TagModel_1__Class* klass;
        MonitorData* monitor;
        struct TagModel_1__Fields fields;
    };

    struct TagModel_1__Array {
        struct TagModel_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TagModel_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_TagModel_ {
        struct IEnumerator_1_PlayFab_ServerModels_TagModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ServerModels_ValueToDateModel___Fields {
        struct ValueToDateModel_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ServerModels_ValueToDateModel_ {
        struct List_1_PlayFab_ServerModels_ValueToDateModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ServerModels_ValueToDateModel___Fields fields;
    };

    struct __declspec(align(8)) ValueToDateModel_1__Fields {
        struct String* Currency;
        uint32_t TotalValue;
        struct String* TotalValueAsDecimal;
    };

    struct ValueToDateModel_1 {
        struct ValueToDateModel_1__Class* klass;
        MonitorData* monitor;
        struct ValueToDateModel_1__Fields fields;
    };

    struct ValueToDateModel_1__Array {
        struct ValueToDateModel_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ValueToDateModel_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_ValueToDateModel_ {
        struct IEnumerator_1_PlayFab_ServerModels_ValueToDateModel___Class* klass;
        MonitorData* monitor;
    };

    struct PlayerLeaderboardEntry_1__Array {
        struct PlayerLeaderboardEntry_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PlayerLeaderboardEntry_1* vector[32];
    };

    struct IEnumerator_1_PlayFab_ServerModels_PlayerLeaderboardEntry_ {
        struct IEnumerator_1_PlayFab_ServerModels_PlayerLeaderboardEntry___Class* klass;
        MonitorData* monitor;
    };

    struct PlayerProfileViewConstraints_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerProfileViewConstraints_1__StaticFields {
    };

    struct PlayerProfileViewConstraints_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerProfileViewConstraints_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerProfileViewConstraints_1__VTable vtable;
    };

    struct GetFriendLeaderboardRequest_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetFriendLeaderboardRequest_1__StaticFields {
    };

    struct GetFriendLeaderboardRequest_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetFriendLeaderboardRequest_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetFriendLeaderboardRequest_1__VTable vtable;
    };

    struct AdCampaignAttributionModel_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AdCampaignAttributionModel_1__StaticFields {
    };

    struct AdCampaignAttributionModel_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AdCampaignAttributionModel_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AdCampaignAttributionModel_1__VTable vtable;
    };

    struct AdCampaignAttributionModel_1__Array__VTable {
    };

    struct AdCampaignAttributionModel_1__Array__StaticFields {
    };

    struct AdCampaignAttributionModel_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AdCampaignAttributionModel_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AdCampaignAttributionModel_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable vtable;
    };

    struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable {
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

    struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields {
        struct AdCampaignAttributionModel_1__Array* _emptyArray;
    };

    struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ServerModels_AdCampaignAttributionModel___VTable vtable;
    };

    struct EmailVerificationStatus__Enum_1__VTable {
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

    struct EmailVerificationStatus__Enum_1__StaticFields {
    };

    struct EmailVerificationStatus__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EmailVerificationStatus__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EmailVerificationStatus__Enum_1__VTable vtable;
    };

    struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___StaticFields {
    };

    struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ServerModels_EmailVerificationStatus___VTable vtable;
    };

    struct ContactEmailInfoModel_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ContactEmailInfoModel_1__StaticFields {
    };

    struct ContactEmailInfoModel_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactEmailInfoModel_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactEmailInfoModel_1__VTable vtable;
    };

    struct ContactEmailInfoModel_1__Array__VTable {
    };

    struct ContactEmailInfoModel_1__Array__StaticFields {
    };

    struct ContactEmailInfoModel_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactEmailInfoModel_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactEmailInfoModel_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable vtable;
    };

    struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable {
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

    struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields {
        struct ContactEmailInfoModel_1__Array* _emptyArray;
    };

    struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ServerModels_ContactEmailInfoModel___VTable vtable;
    };

    struct LoginIdentityProvider__Enum_1__VTable {
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

    struct LoginIdentityProvider__Enum_1__StaticFields {
    };

    struct LoginIdentityProvider__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoginIdentityProvider__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoginIdentityProvider__Enum_1__VTable vtable;
    };

    struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___StaticFields {
    };

    struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ServerModels_LoginIdentityProvider___VTable vtable;
    };

    struct LinkedPlatformAccountModel_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LinkedPlatformAccountModel_1__StaticFields {
    };

    struct LinkedPlatformAccountModel_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LinkedPlatformAccountModel_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LinkedPlatformAccountModel_1__VTable vtable;
    };

    struct LinkedPlatformAccountModel_1__Array__VTable {
    };

    struct LinkedPlatformAccountModel_1__Array__StaticFields {
    };

    struct LinkedPlatformAccountModel_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LinkedPlatformAccountModel_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LinkedPlatformAccountModel_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ServerModels_LinkedPlatformAccountModel___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ServerModels_LinkedPlatformAccountModel___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ServerModels_LinkedPlatformAccountModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ServerModels_LinkedPlatformAccountModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ServerModels_LinkedPlatformAccountModel___VTable vtable;
    };

    struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___VTable {
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

    struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___StaticFields {
        struct LinkedPlatformAccountModel_1__Array* _emptyArray;
    };

    struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ServerModels_LinkedPlatformAccountModel___VTable vtable;
    };

    struct ContinentCode__Enum_1__VTable {
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

    struct ContinentCode__Enum_1__StaticFields {
    };

    struct ContinentCode__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContinentCode__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContinentCode__Enum_1__VTable vtable;
    };

    struct Nullable_1_PlayFab_ServerModels_ContinentCode___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ServerModels_ContinentCode___StaticFields {
    };

    struct Nullable_1_PlayFab_ServerModels_ContinentCode___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ServerModels_ContinentCode___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ServerModels_ContinentCode___VTable vtable;
    };

    struct CountryCode__Enum_1__VTable {
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

    struct CountryCode__Enum_1__StaticFields {
    };

    struct CountryCode__Enum_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CountryCode__Enum_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CountryCode__Enum_1__VTable vtable;
    };

    struct Nullable_1_PlayFab_ServerModels_CountryCode___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ServerModels_CountryCode___StaticFields {
    };

    struct Nullable_1_PlayFab_ServerModels_CountryCode___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ServerModels_CountryCode___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ServerModels_CountryCode___VTable vtable;
    };

    struct LocationModel_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LocationModel_1__StaticFields {
    };

    struct LocationModel_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocationModel_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocationModel_1__VTable vtable;
    };

    struct LocationModel_1__Array__VTable {
    };

    struct LocationModel_1__Array__StaticFields {
    };

    struct LocationModel_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocationModel_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocationModel_1__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ServerModels_LocationModel___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ServerModels_LocationModel___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ServerModels_LocationModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ServerModels_LocationModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ServerModels_LocationModel___VTable vtable;
    };

    struct List_1_PlayFab_ServerModels_LocationModel___VTable {
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

} // namespace app
