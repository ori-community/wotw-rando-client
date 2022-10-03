namespace app {
    struct LoginWithPSNRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* AuthCode;
        struct Nullable_1_Boolean_ CreateAccount;
        struct String* EncryptedRequest;
        struct GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
        struct Nullable_1_Int32_ IssuerId;
        struct String* PlayerSecret;
        struct String* RedirectUri;
        struct String* TitleId;
    };

    struct LoginWithPSNRequest {
        struct LoginWithPSNRequest__Class* klass;
        MonitorData* monitor;
        struct LoginWithPSNRequest__Fields fields;
    };

    struct LoginWithPSNRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LoginWithPSNRequest__StaticFields {
    };

    struct LoginWithPSNRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoginWithPSNRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoginWithPSNRequest__VTable vtable;
    };

    struct LoginWithSteamRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_Boolean_ CreateAccount;
        struct String* EncryptedRequest;
        struct GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
        struct String* PlayerSecret;
        struct String* SteamTicket;
        struct String* TitleId;
    };

    struct LoginWithSteamRequest {
        struct LoginWithSteamRequest__Class* klass;
        MonitorData* monitor;
        struct LoginWithSteamRequest__Fields fields;
    };

    struct LoginWithSteamRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LoginWithSteamRequest__StaticFields {
    };

    struct LoginWithSteamRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoginWithSteamRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoginWithSteamRequest__VTable vtable;
    };

    struct LoginWithTwitchRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* AccessToken;
        struct Nullable_1_Boolean_ CreateAccount;
        struct String* EncryptedRequest;
        struct GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
        struct String* PlayerSecret;
        struct String* TitleId;
    };

    struct LoginWithTwitchRequest {
        struct LoginWithTwitchRequest__Class* klass;
        MonitorData* monitor;
        struct LoginWithTwitchRequest__Fields fields;
    };

    struct LoginWithTwitchRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LoginWithTwitchRequest__StaticFields {
    };

    struct LoginWithTwitchRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoginWithTwitchRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoginWithTwitchRequest__VTable vtable;
    };

    struct LoginWithWindowsHelloRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* ChallengeSignature;
        struct GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
        struct String* PublicKeyHint;
        struct String* TitleId;
    };

    struct LoginWithWindowsHelloRequest {
        struct LoginWithWindowsHelloRequest__Class* klass;
        MonitorData* monitor;
        struct LoginWithWindowsHelloRequest__Fields fields;
    };

    struct LoginWithWindowsHelloRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LoginWithWindowsHelloRequest__StaticFields {
    };

    struct LoginWithWindowsHelloRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoginWithWindowsHelloRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoginWithWindowsHelloRequest__VTable vtable;
    };

    struct LoginWithXboxRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct Nullable_1_Boolean_ CreateAccount;
        struct String* EncryptedRequest;
        struct GetPlayerCombinedInfoRequestParams* InfoRequestParameters;
        struct String* PlayerSecret;
        struct String* TitleId;
        struct String* XboxToken;
    };

    struct LoginWithXboxRequest {
        struct LoginWithXboxRequest__Class* klass;
        MonitorData* monitor;
        struct LoginWithXboxRequest__Fields fields;
    };

    struct LoginWithXboxRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LoginWithXboxRequest__StaticFields {
    };

    struct LoginWithXboxRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoginWithXboxRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoginWithXboxRequest__VTable vtable;
    };

    struct MatchmakeRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* BuildVersion;
        struct String* CharacterId;
        struct String* GameMode;
        struct String* LobbyId;
        struct Nullable_1_PlayFab_ClientModels_Region_ Region_1;
        struct Nullable_1_Boolean_ StartNewIfNoneFound;
        struct String* StatisticName;
        struct CollectionFilter* TagFilter;
    };

    struct MatchmakeRequest {
        struct MatchmakeRequest__Class* klass;
        MonitorData* monitor;
        struct MatchmakeRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_MatchmakeResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_MatchmakeResult_ {
        struct Action_1_PlayFab_ClientModels_MatchmakeResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_MatchmakeResult___Fields fields;
    };

    enum class MatchmakeStatus__Enum : int32_t {
        Complete = 0x00000000,
        Waiting = 0x00000001,
        GameNotFound = 0x00000002,
        NoAvailableSlots = 0x00000003,
        SessionClosed = 0x00000004,
    };

    struct MatchmakeStatus__Enum__Boxed {
        struct MatchmakeStatus__Enum__Class* klass;
        MonitorData* monitor;
        MatchmakeStatus__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus_ {
        MatchmakeStatus__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus___Boxed {
        struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus_ fields;
    };

    struct MatchmakeResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct String* Expires;
        struct String* LobbyID;
        struct Nullable_1_Int32_ PollWaitTimeMS;
        struct String* ServerIPV4Address;
        struct String* ServerIPV6Address;
        struct Nullable_1_Int32_ ServerPort;
        struct String* ServerPublicDNSName;
        struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus_ Status;
        struct String* Ticket;
    };

    struct MatchmakeResult {
        struct MatchmakeResult__Class* klass;
        MonitorData* monitor;
        struct MatchmakeResult__Fields fields;
    };

    struct MatchmakeRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MatchmakeRequest__StaticFields {
    };

    struct MatchmakeRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakeRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakeRequest__VTable vtable;
    };

    struct MatchmakeStatus__Enum__VTable {
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

    struct MatchmakeStatus__Enum__StaticFields {
    };

    struct MatchmakeStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakeStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakeStatus__Enum__VTable vtable;
    };

    struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus___StaticFields {
    };

    struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ClientModels_MatchmakeStatus___VTable vtable;
    };

    struct MatchmakeResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MatchmakeResult__StaticFields {
    };

    struct MatchmakeResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MatchmakeResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MatchmakeResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_MatchmakeResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_MatchmakeResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_MatchmakeResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_MatchmakeResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_MatchmakeResult___VTable vtable;
    };

    struct OpenTradeRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct List_1_System_String_* AllowedPlayerIds;
        struct List_1_System_String_* OfferedInventoryInstanceIds;
        struct List_1_System_String_* RequestedCatalogItemIds;
    };

    struct OpenTradeRequest {
        struct OpenTradeRequest__Class* klass;
        MonitorData* monitor;
        struct OpenTradeRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_OpenTradeResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_OpenTradeResponse_ {
        struct Action_1_PlayFab_ClientModels_OpenTradeResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_OpenTradeResponse___Fields fields;
    };

    struct OpenTradeResponse__Fields {
        struct PlayFabResultCommon__Fields _;
        struct TradeInfo* Trade;
    };

    struct OpenTradeResponse {
        struct OpenTradeResponse__Class* klass;
        MonitorData* monitor;
        struct OpenTradeResponse__Fields fields;
    };

    struct OpenTradeRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OpenTradeRequest__StaticFields {
    };

    struct OpenTradeRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OpenTradeRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OpenTradeRequest__VTable vtable;
    };

    struct OpenTradeResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OpenTradeResponse__StaticFields {
    };

    struct OpenTradeResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OpenTradeResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OpenTradeResponse__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_OpenTradeResponse___VTable {
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

    struct Action_1_PlayFab_ClientModels_OpenTradeResponse___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_OpenTradeResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_OpenTradeResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_OpenTradeResponse___VTable vtable;
    };

    struct PayForPurchaseRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* Currency;
        struct String* OrderId;
        struct String* ProviderName;
        struct String* ProviderTransactionId;
    };

    struct PayForPurchaseRequest {
        struct PayForPurchaseRequest__Class* klass;
        MonitorData* monitor;
        struct PayForPurchaseRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_PayForPurchaseResult_ {
        struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___Fields fields;
    };

    enum class TransactionStatus__Enum : int32_t {
        CreateCart = 0x00000000,
        Init = 0x00000001,
        Approved = 0x00000002,
        Succeeded = 0x00000003,
        FailedByProvider = 0x00000004,
        DisputePending = 0x00000005,
        RefundPending = 0x00000006,
        Refunded = 0x00000007,
        RefundFailed = 0x00000008,
        ChargedBack = 0x00000009,
        FailedByUber = 0x0000000a,
        FailedByPlayFab = 0x0000000b,
        Revoked = 0x0000000c,
        TradePending = 0x0000000d,
        Traded = 0x0000000e,
        Upgraded = 0x0000000f,
        StackPending = 0x00000010,
        Stacked = 0x00000011,
        Other = 0x00000012,
        Failed = 0x00000013,
    };

    struct TransactionStatus__Enum__Boxed {
        struct TransactionStatus__Enum__Class* klass;
        MonitorData* monitor;
        TransactionStatus__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_TransactionStatus_ {
        TransactionStatus__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_TransactionStatus___Boxed {
        struct Nullable_1_PlayFab_ClientModels_TransactionStatus___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_TransactionStatus_ fields;
    };

    struct PayForPurchaseResult__Fields {
        struct PlayFabResultCommon__Fields _;
        uint32_t CreditApplied;
        struct String* OrderId;
        struct String* ProviderData;
        struct String* ProviderToken;
        struct String* PurchaseConfirmationPageURL;
        struct String* PurchaseCurrency;
        uint32_t PurchasePrice;
        struct Nullable_1_PlayFab_ClientModels_TransactionStatus_ Status;
        struct Dictionary_2_System_String_System_Int32_* VCAmount;
        struct Dictionary_2_System_String_System_Int32_* VirtualCurrency;
    };

    struct PayForPurchaseResult {
        struct PayForPurchaseResult__Class* klass;
        MonitorData* monitor;
        struct PayForPurchaseResult__Fields fields;
    };

    struct PayForPurchaseRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PayForPurchaseRequest__StaticFields {
    };

    struct PayForPurchaseRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PayForPurchaseRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PayForPurchaseRequest__VTable vtable;
    };

    struct TransactionStatus__Enum__VTable {
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

    struct TransactionStatus__Enum__StaticFields {
    };

    struct TransactionStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransactionStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransactionStatus__Enum__VTable vtable;
    };

    struct Nullable_1_PlayFab_ClientModels_TransactionStatus___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ClientModels_TransactionStatus___StaticFields {
    };

    struct Nullable_1_PlayFab_ClientModels_TransactionStatus___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ClientModels_TransactionStatus___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ClientModels_TransactionStatus___VTable vtable;
    };

    struct PayForPurchaseResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PayForPurchaseResult__StaticFields {
    };

    struct PayForPurchaseResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PayForPurchaseResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PayForPurchaseResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_PayForPurchaseResult___VTable vtable;
    };

    struct PurchaseItemRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CatalogVersion;
        struct String* CharacterId;
        struct String* ItemId;
        int32_t Price;
        struct String* StoreId;
        struct String* VirtualCurrency;
    };

    struct PurchaseItemRequest {
        struct PurchaseItemRequest__Class* klass;
        MonitorData* monitor;
        struct PurchaseItemRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_PurchaseItemResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_PurchaseItemResult_ {
        struct Action_1_PlayFab_ClientModels_PurchaseItemResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_PurchaseItemResult___Fields fields;
    };

    struct PurchaseItemResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ClientModels_ItemInstance_* Items;
    };

    struct PurchaseItemResult {
        struct PurchaseItemResult__Class* klass;
        MonitorData* monitor;
        struct PurchaseItemResult__Fields fields;
    };

    struct PurchaseItemRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PurchaseItemRequest__StaticFields {
    };

    struct PurchaseItemRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PurchaseItemRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PurchaseItemRequest__VTable vtable;
    };

    struct PurchaseItemResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PurchaseItemResult__StaticFields {
    };

    struct PurchaseItemResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PurchaseItemResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PurchaseItemResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_PurchaseItemResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_PurchaseItemResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_PurchaseItemResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_PurchaseItemResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_PurchaseItemResult___VTable vtable;
    };

    struct RedeemCouponRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* CatalogVersion;
        struct String* CharacterId;
        struct String* CouponCode;
    };

    struct RedeemCouponRequest {
        struct RedeemCouponRequest__Class* klass;
        MonitorData* monitor;
        struct RedeemCouponRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_RedeemCouponResult___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_RedeemCouponResult_ {
        struct Action_1_PlayFab_ClientModels_RedeemCouponResult___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_RedeemCouponResult___Fields fields;
    };

    struct RedeemCouponResult__Fields {
        struct PlayFabResultCommon__Fields _;
        struct List_1_PlayFab_ClientModels_ItemInstance_* GrantedItems;
    };

    struct RedeemCouponResult {
        struct RedeemCouponResult__Class* klass;
        MonitorData* monitor;
        struct RedeemCouponResult__Fields fields;
    };

    struct RedeemCouponRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RedeemCouponRequest__StaticFields {
    };

    struct RedeemCouponRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RedeemCouponRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RedeemCouponRequest__VTable vtable;
    };

    struct RedeemCouponResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RedeemCouponResult__StaticFields {
    };

    struct RedeemCouponResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RedeemCouponResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RedeemCouponResult__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_RedeemCouponResult___VTable {
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

    struct Action_1_PlayFab_ClientModels_RedeemCouponResult___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_RedeemCouponResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_RedeemCouponResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_RedeemCouponResult___VTable vtable;
    };

    struct RefreshPSNAuthTokenRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* AuthCode;
        struct Nullable_1_Int32_ IssuerId;
        struct String* RedirectUri;
    };

    struct RefreshPSNAuthTokenRequest {
        struct RefreshPSNAuthTokenRequest__Class* klass;
        MonitorData* monitor;
        struct RefreshPSNAuthTokenRequest__Fields fields;
    };

    struct Action_1_PlayFab_ClientModels_EmptyResponse___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_PlayFab_ClientModels_EmptyResponse_ {
        struct Action_1_PlayFab_ClientModels_EmptyResponse___Class* klass;
        MonitorData* monitor;
        struct Action_1_PlayFab_ClientModels_EmptyResponse___Fields fields;
    };

    struct EmptyResponse__Fields {
        struct PlayFabResultCommon__Fields _;
    };

    struct EmptyResponse {
        struct EmptyResponse__Class* klass;
        MonitorData* monitor;
        struct EmptyResponse__Fields fields;
    };

    struct RefreshPSNAuthTokenRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RefreshPSNAuthTokenRequest__StaticFields {
    };

    struct RefreshPSNAuthTokenRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RefreshPSNAuthTokenRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RefreshPSNAuthTokenRequest__VTable vtable;
    };

    struct EmptyResponse__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EmptyResponse__StaticFields {
    };

    struct EmptyResponse__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EmptyResponse__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EmptyResponse__VTable vtable;
    };

    struct Action_1_PlayFab_ClientModels_EmptyResponse___VTable {
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

    struct Action_1_PlayFab_ClientModels_EmptyResponse___StaticFields {
    };

    struct Action_1_PlayFab_ClientModels_EmptyResponse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_PlayFab_ClientModels_EmptyResponse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_PlayFab_ClientModels_EmptyResponse___VTable vtable;
    };

    struct RegisterForIOSPushNotificationRequest__Fields {
        struct PlayFabRequestCommon__Fields _;
        struct String* ConfirmationMessage;
        struct String* DeviceToken;
        struct Nullable_1_Boolean_ SendPushNotificationConfirmation;
    };

} // namespace app
