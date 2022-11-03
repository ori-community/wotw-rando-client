namespace app {
    struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel_ {
        struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___Fields fields;
    };

    struct __declspec(align(8)) AdCampaignAttributionModel__Fields {
        struct DateTime AttributedAt;
        struct String* CampaignId;
        struct String* Platform;
    };

    struct AdCampaignAttributionModel {
        struct AdCampaignAttributionModel__Class* klass;
        MonitorData* monitor;
        struct AdCampaignAttributionModel__Fields fields;
    };

    struct AdCampaignAttributionModel__Array {
        struct AdCampaignAttributionModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AdCampaignAttributionModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_ContactEmailInfoModel___Fields {
        struct ContactEmailInfoModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_ContactEmailInfoModel_ {
        struct List_1_PlayFab_ClientModels_ContactEmailInfoModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_ContactEmailInfoModel___Fields fields;
    };

    enum class EmailVerificationStatus__Enum : int32_t {
        Unverified = 0x00000000,
        Pending = 0x00000001,
        Confirmed = 0x00000002,
    };

    struct EmailVerificationStatus__Enum__Boxed {
        struct EmailVerificationStatus__Enum__Class* klass;
        MonitorData* monitor;
        EmailVerificationStatus__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus_ {
        EmailVerificationStatus__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___Boxed {
        struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus_ fields;
    };

    struct __declspec(align(8)) ContactEmailInfoModel__Fields {
        struct String* EmailAddress;
        struct String* Name;
        struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus_ VerificationStatus;
    };

    struct ContactEmailInfoModel {
        struct ContactEmailInfoModel__Class* klass;
        MonitorData* monitor;
        struct ContactEmailInfoModel__Fields fields;
    };

    struct ContactEmailInfoModel__Array {
        struct ContactEmailInfoModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ContactEmailInfoModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_ContactEmailInfoModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_ContactEmailInfoModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Fields {
        struct LinkedPlatformAccountModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel_ {
        struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Fields fields;
    };

    struct __declspec(align(8)) LinkedPlatformAccountModel__Fields {
        struct String* Email;
        struct Nullable_1_PlayFab_ClientModels_LoginIdentityProvider_ Platform;
        struct String* PlatformUserId;
        struct String* Username;
    };

    struct LinkedPlatformAccountModel {
        struct LinkedPlatformAccountModel__Class* klass;
        MonitorData* monitor;
        struct LinkedPlatformAccountModel__Fields fields;
    };

    struct LinkedPlatformAccountModel__Array {
        struct LinkedPlatformAccountModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LinkedPlatformAccountModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_LinkedPlatformAccountModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_LinkedPlatformAccountModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_LocationModel___Fields {
        struct LocationModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_LocationModel_ {
        struct List_1_PlayFab_ClientModels_LocationModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_LocationModel___Fields fields;
    };

    enum class ContinentCode__Enum : int32_t {
        AF = 0x00000000,
        AN = 0x00000001,
        AS = 0x00000002,
        EU = 0x00000003,
        NA = 0x00000004,
        OC = 0x00000005,
        SA = 0x00000006,
    };

    struct ContinentCode__Enum__Boxed {
        struct ContinentCode__Enum__Class* klass;
        MonitorData* monitor;
        ContinentCode__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_ContinentCode_ {
        ContinentCode__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_ContinentCode___Boxed {
        struct Nullable_1_PlayFab_ClientModels_ContinentCode___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_ContinentCode_ fields;
    };

    enum class CountryCode__Enum : int32_t {
        AF = 0x00000000,
        AX = 0x00000001,
        AL = 0x00000002,
        DZ = 0x00000003,
        AS = 0x00000004,
        AD = 0x00000005,
        AO = 0x00000006,
        AI = 0x00000007,
        AQ = 0x00000008,
        AG = 0x00000009,
        AR = 0x0000000a,
        AM = 0x0000000b,
        AW = 0x0000000c,
        AU = 0x0000000d,
        AT = 0x0000000e,
        AZ = 0x0000000f,
        BS = 0x00000010,
        BH = 0x00000011,
        BD = 0x00000012,
        BB = 0x00000013,
        BY = 0x00000014,
        BE = 0x00000015,
        BZ = 0x00000016,
        BJ = 0x00000017,
        BM = 0x00000018,
        BT = 0x00000019,
        BO = 0x0000001a,
        BQ = 0x0000001b,
        BA = 0x0000001c,
        BW = 0x0000001d,
        BV = 0x0000001e,
        BR = 0x0000001f,
        IO = 0x00000020,
        BN = 0x00000021,
        BG = 0x00000022,
        BF = 0x00000023,
        BI = 0x00000024,
        KH = 0x00000025,
        CM = 0x00000026,
        CA = 0x00000027,
        CV = 0x00000028,
        KY = 0x00000029,
        CF = 0x0000002a,
        TD = 0x0000002b,
        CL = 0x0000002c,
        CN = 0x0000002d,
        CX = 0x0000002e,
        CC = 0x0000002f,
        CO = 0x00000030,
        KM = 0x00000031,
        CG = 0x00000032,
        CD = 0x00000033,
        CK = 0x00000034,
        CR = 0x00000035,
        CI = 0x00000036,
        HR = 0x00000037,
        CU = 0x00000038,
        CW = 0x00000039,
        CY = 0x0000003a,
        CZ = 0x0000003b,
        DK = 0x0000003c,
        DJ = 0x0000003d,
        DM = 0x0000003e,
        DO = 0x0000003f,
        EC = 0x00000040,
        EG = 0x00000041,
        SV = 0x00000042,
        GQ = 0x00000043,
        ER = 0x00000044,
        EE = 0x00000045,
        ET = 0x00000046,
        FK = 0x00000047,
        FO = 0x00000048,
        FJ = 0x00000049,
        FI = 0x0000004a,
        FR = 0x0000004b,
        GF = 0x0000004c,
        PF = 0x0000004d,
        TF = 0x0000004e,
        GA = 0x0000004f,
        GM = 0x00000050,
        GE = 0x00000051,
        DE = 0x00000052,
        GH = 0x00000053,
        GI = 0x00000054,
        GR = 0x00000055,
        GL = 0x00000056,
        GD = 0x00000057,
        GP = 0x00000058,
        GU = 0x00000059,
        GT = 0x0000005a,
        GG = 0x0000005b,
        GN = 0x0000005c,
        GW = 0x0000005d,
        GY = 0x0000005e,
        HT = 0x0000005f,
        HM = 0x00000060,
        VA = 0x00000061,
        HN = 0x00000062,
        HK = 0x00000063,
        HU = 0x00000064,
        IS = 0x00000065,
        IN = 0x00000066,
        ID = 0x00000067,
        IR = 0x00000068,
        IQ = 0x00000069,
        IE = 0x0000006a,
        IM = 0x0000006b,
        IL = 0x0000006c,
        IT = 0x0000006d,
        JM = 0x0000006e,
        JP = 0x0000006f,
        JE = 0x00000070,
        JO = 0x00000071,
        KZ = 0x00000072,
        KE = 0x00000073,
        KI = 0x00000074,
        KP = 0x00000075,
        KR = 0x00000076,
        KW = 0x00000077,
        KG = 0x00000078,
        LA = 0x00000079,
        LV = 0x0000007a,
        LB = 0x0000007b,
        LS = 0x0000007c,
        LR = 0x0000007d,
        LY = 0x0000007e,
        LI = 0x0000007f,
        LT = 0x00000080,
        LU = 0x00000081,
        MO = 0x00000082,
        MK = 0x00000083,
        MG = 0x00000084,
        MW = 0x00000085,
        MY = 0x00000086,
        MV = 0x00000087,
        ML = 0x00000088,
        MT = 0x00000089,
        MH = 0x0000008a,
        MQ = 0x0000008b,
        MR = 0x0000008c,
        MU = 0x0000008d,
        YT = 0x0000008e,
        MX = 0x0000008f,
        FM = 0x00000090,
        MD = 0x00000091,
        MC = 0x00000092,
        MN = 0x00000093,
        ME = 0x00000094,
        MS = 0x00000095,
        MA = 0x00000096,
        MZ = 0x00000097,
        MM = 0x00000098,
        NA = 0x00000099,
        NR = 0x0000009a,
        NP = 0x0000009b,
        NL = 0x0000009c,
        NC = 0x0000009d,
        NZ = 0x0000009e,
        NI = 0x0000009f,
        NE = 0x000000a0,
        NG = 0x000000a1,
        NU = 0x000000a2,
        NF = 0x000000a3,
        MP = 0x000000a4,
        NO = 0x000000a5,
        OM = 0x000000a6,
        PK = 0x000000a7,
        PW = 0x000000a8,
        PS = 0x000000a9,
        PA = 0x000000aa,
        PG = 0x000000ab,
        PY = 0x000000ac,
        PE = 0x000000ad,
        PH = 0x000000ae,
        PN = 0x000000af,
        PL = 0x000000b0,
        PT = 0x000000b1,
        PR = 0x000000b2,
        QA = 0x000000b3,
        RE = 0x000000b4,
        RO = 0x000000b5,
        RU = 0x000000b6,
        RW = 0x000000b7,
        BL = 0x000000b8,
        SH = 0x000000b9,
        KN = 0x000000ba,
        LC = 0x000000bb,
        MF = 0x000000bc,
        PM = 0x000000bd,
        VC = 0x000000be,
        WS = 0x000000bf,
        SM = 0x000000c0,
        ST = 0x000000c1,
        SA = 0x000000c2,
        SN = 0x000000c3,
        RS = 0x000000c4,
        SC = 0x000000c5,
        SL = 0x000000c6,
        SG = 0x000000c7,
        SX = 0x000000c8,
        SK = 0x000000c9,
        SI = 0x000000ca,
        SB = 0x000000cb,
        SO = 0x000000cc,
        ZA = 0x000000cd,
        GS = 0x000000ce,
        SS = 0x000000cf,
        ES = 0x000000d0,
        LK = 0x000000d1,
        SD = 0x000000d2,
        SR = 0x000000d3,
        SJ = 0x000000d4,
        SZ = 0x000000d5,
        SE = 0x000000d6,
        CH = 0x000000d7,
        SY = 0x000000d8,
        TW = 0x000000d9,
        TJ = 0x000000da,
        TZ = 0x000000db,
        TH = 0x000000dc,
        TL = 0x000000dd,
        TG = 0x000000de,
        TK = 0x000000df,
        TO = 0x000000e0,
        TT = 0x000000e1,
        TN = 0x000000e2,
        TR = 0x000000e3,
        TM = 0x000000e4,
        TC = 0x000000e5,
        TV = 0x000000e6,
        UG = 0x000000e7,
        UA = 0x000000e8,
        AE = 0x000000e9,
        GB = 0x000000ea,
        US = 0x000000eb,
        UM = 0x000000ec,
        UY = 0x000000ed,
        UZ = 0x000000ee,
        VU = 0x000000ef,
        VE = 0x000000f0,
        VN = 0x000000f1,
        VG = 0x000000f2,
        VI = 0x000000f3,
        WF = 0x000000f4,
        EH = 0x000000f5,
        YE = 0x000000f6,
        ZM = 0x000000f7,
        ZW = 0x000000f8,
    };

    struct CountryCode__Enum__Boxed {
        struct CountryCode__Enum__Class* klass;
        MonitorData* monitor;
        CountryCode__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_CountryCode_ {
        CountryCode__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_CountryCode___Boxed {
        struct Nullable_1_PlayFab_ClientModels_CountryCode___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_CountryCode_ fields;
    };

    struct __declspec(align(8)) LocationModel__Fields {
        struct String* City;
        struct Nullable_1_PlayFab_ClientModels_ContinentCode_ ContinentCode;
        struct Nullable_1_PlayFab_ClientModels_CountryCode_ CountryCode;
        struct Nullable_1_Double_ Latitude;
        struct Nullable_1_Double_ Longitude;
    };

    struct LocationModel {
        struct LocationModel__Class* klass;
        MonitorData* monitor;
        struct LocationModel__Fields fields;
    };

    struct LocationModel__Array {
        struct LocationModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LocationModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_LocationModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_LocationModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_MembershipModel___Fields {
        struct MembershipModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_MembershipModel_ {
        struct List_1_PlayFab_ClientModels_MembershipModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_MembershipModel___Fields fields;
    };

    struct __declspec(align(8)) MembershipModel__Fields {
        bool IsActive;
        struct DateTime MembershipExpiration;
        struct String* MembershipId;
        struct Nullable_1_DateTime_ OverrideExpiration;
        struct List_1_PlayFab_ClientModels_SubscriptionModel_* Subscriptions;
    };

    struct MembershipModel {
        struct MembershipModel__Class* klass;
        MonitorData* monitor;
        struct MembershipModel__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_SubscriptionModel___Fields {
        struct SubscriptionModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_SubscriptionModel_ {
        struct List_1_PlayFab_ClientModels_SubscriptionModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_SubscriptionModel___Fields fields;
    };

    enum class SubscriptionProviderStatus__Enum : int32_t {
        NoError = 0x00000000,
        Cancelled = 0x00000001,
        UnknownError = 0x00000002,
        BillingError = 0x00000003,
        ProductUnavailable = 0x00000004,
        CustomerDidNotAcceptPriceChange = 0x00000005,
        FreeTrial = 0x00000006,
        PaymentPending = 0x00000007,
    };

    struct SubscriptionProviderStatus__Enum__Boxed {
        struct SubscriptionProviderStatus__Enum__Class* klass;
        MonitorData* monitor;
        SubscriptionProviderStatus__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_ {
        SubscriptionProviderStatus__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus___Boxed {
        struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_ fields;
    };

    struct __declspec(align(8)) SubscriptionModel__Fields {
        struct DateTime Expiration;
        struct DateTime InitialSubscriptionTime;
        bool IsActive;
        struct Nullable_1_PlayFab_ClientModels_SubscriptionProviderStatus_ Status;
        struct String* SubscriptionId;
        struct String* SubscriptionItemId;
        struct String* SubscriptionProvider;
    };

    struct SubscriptionModel {
        struct SubscriptionModel__Class* klass;
        MonitorData* monitor;
        struct SubscriptionModel__Fields fields;
    };

    struct SubscriptionModel__Array {
        struct SubscriptionModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SubscriptionModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_SubscriptionModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_SubscriptionModel___Class* klass;
        MonitorData* monitor;
    };

    struct MembershipModel__Array {
        struct MembershipModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MembershipModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_MembershipModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_MembershipModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Fields {
        struct PushNotificationRegistrationModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel_ {
        struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Fields fields;
    };

    enum class PushNotificationPlatform__Enum : int32_t {
        ApplePushNotificationService = 0x00000000,
        GoogleCloudMessaging = 0x00000001,
    };

    struct PushNotificationPlatform__Enum__Boxed {
        struct PushNotificationPlatform__Enum__Class* klass;
        MonitorData* monitor;
        PushNotificationPlatform__Enum value;
    };

    struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform_ {
        PushNotificationPlatform__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform___Boxed {
        struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform_ fields;
    };

    struct __declspec(align(8)) PushNotificationRegistrationModel__Fields {
        struct String* NotificationEndpointARN;
        struct Nullable_1_PlayFab_ClientModels_PushNotificationPlatform_ Platform;
    };

    struct PushNotificationRegistrationModel {
        struct PushNotificationRegistrationModel__Class* klass;
        MonitorData* monitor;
        struct PushNotificationRegistrationModel__Fields fields;
    };

    struct PushNotificationRegistrationModel__Array {
        struct PushNotificationRegistrationModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PushNotificationRegistrationModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_PushNotificationRegistrationModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_PushNotificationRegistrationModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_StatisticModel___Fields {
        struct StatisticModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_StatisticModel_ {
        struct List_1_PlayFab_ClientModels_StatisticModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_StatisticModel___Fields fields;
    };

    struct __declspec(align(8)) StatisticModel__Fields {
        struct String* Name;
        int32_t Value;
        int32_t Version;
    };

    struct StatisticModel {
        struct StatisticModel__Class* klass;
        MonitorData* monitor;
        struct StatisticModel__Fields fields;
    };

    struct StatisticModel__Array {
        struct StatisticModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct StatisticModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_StatisticModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_StatisticModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_TagModel___Fields {
        struct TagModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_TagModel_ {
        struct List_1_PlayFab_ClientModels_TagModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_TagModel___Fields fields;
    };

    struct __declspec(align(8)) TagModel__Fields {
        struct String* TagValue;
    };

    struct TagModel {
        struct TagModel__Class* klass;
        MonitorData* monitor;
        struct TagModel__Fields fields;
    };

    struct TagModel__Array {
        struct TagModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TagModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_TagModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_TagModel___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_PlayFab_ClientModels_ValueToDateModel___Fields {
        struct ValueToDateModel__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_ClientModels_ValueToDateModel_ {
        struct List_1_PlayFab_ClientModels_ValueToDateModel___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_ClientModels_ValueToDateModel___Fields fields;
    };

    struct __declspec(align(8)) ValueToDateModel__Fields {
        struct String* Currency;
        uint32_t TotalValue;
        struct String* TotalValueAsDecimal;
    };

    struct ValueToDateModel {
        struct ValueToDateModel__Class* klass;
        MonitorData* monitor;
        struct ValueToDateModel__Fields fields;
    };

    struct ValueToDateModel__Array {
        struct ValueToDateModel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ValueToDateModel* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_ValueToDateModel_ {
        struct IEnumerator_1_PlayFab_ClientModels_ValueToDateModel___Class* klass;
        MonitorData* monitor;
    };

    struct PlayerLeaderboardEntry__Array {
        struct PlayerLeaderboardEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct PlayerLeaderboardEntry* vector[32];
    };

    struct IEnumerator_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ {
        struct IEnumerator_1_PlayFab_ClientModels_PlayerLeaderboardEntry___Class* klass;
        MonitorData* monitor;
    };

    struct PlayerProfileViewConstraints__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerProfileViewConstraints__StaticFields {
    };

    struct PlayerProfileViewConstraints__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerProfileViewConstraints__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerProfileViewConstraints__VTable vtable;
    };

    struct GetFriendLeaderboardRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GetFriendLeaderboardRequest__StaticFields {
    };

    struct GetFriendLeaderboardRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GetFriendLeaderboardRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GetFriendLeaderboardRequest__VTable vtable;
    };

    struct AdCampaignAttributionModel__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AdCampaignAttributionModel__StaticFields {
    };

    struct AdCampaignAttributionModel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AdCampaignAttributionModel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AdCampaignAttributionModel__VTable vtable;
    };

    struct AdCampaignAttributionModel__Array__VTable {
    };

    struct AdCampaignAttributionModel__Array__StaticFields {
    };

    struct AdCampaignAttributionModel__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AdCampaignAttributionModel__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AdCampaignAttributionModel__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___StaticFields {
    };

    struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_ClientModels_AdCampaignAttributionModel___VTable vtable;
    };

    struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___VTable {
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

    struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___StaticFields {
        struct AdCampaignAttributionModel__Array* _emptyArray;
    };

    struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_ClientModels_AdCampaignAttributionModel___VTable vtable;
    };

    struct EmailVerificationStatus__Enum__VTable {
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

    struct EmailVerificationStatus__Enum__StaticFields {
    };

    struct EmailVerificationStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EmailVerificationStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EmailVerificationStatus__Enum__VTable vtable;
    };

    struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___StaticFields {
    };

    struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_ClientModels_EmailVerificationStatus___VTable vtable;
    };

    struct ContactEmailInfoModel__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ContactEmailInfoModel__StaticFields {
    };

    struct ContactEmailInfoModel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactEmailInfoModel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactEmailInfoModel__VTable vtable;
    };

    struct ContactEmailInfoModel__Array__VTable {
    };

    struct ContactEmailInfoModel__Array__StaticFields {
    };

    struct ContactEmailInfoModel__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactEmailInfoModel__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactEmailInfoModel__Array__VTable vtable;
    };

} // namespace app
