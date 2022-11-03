namespace app {
    struct __declspec(align(8)) StatisticLeaderboardSource__Fields {
        uint32_t StatisticId;
        struct String* StatisticName;
    };

    struct StatisticLeaderboardSource {
        struct StatisticLeaderboardSource__Class* klass;
        MonitorData* monitor;
        struct StatisticLeaderboardSource__Fields fields;
    };

    struct StatisticLeaderboardSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StatisticLeaderboardSource__StaticFields {
    };

    struct StatisticLeaderboardSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StatisticLeaderboardSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StatisticLeaderboardSource__VTable vtable;
    };

    struct LeaderboardSource__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LeaderboardSource__StaticFields {
    };

    struct LeaderboardSource__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardSource__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardSource__VTable vtable;
    };

    struct LeaderboardVersionChangeBehavior__Enum__VTable {
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

    struct LeaderboardVersionChangeBehavior__Enum__StaticFields {
    };

    struct LeaderboardVersionChangeBehavior__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardVersionChangeBehavior__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardVersionChangeBehavior__Enum__VTable vtable;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___StaticFields {
    };

    struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_PlayStreamModels_LeaderboardVersionChangeBehavior___VTable vtable;
    };

    struct PlayerRankedOnLeaderboardVersionEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerRankedOnLeaderboardVersionEventData__StaticFields {
    };

    struct PlayerRankedOnLeaderboardVersionEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerRankedOnLeaderboardVersionEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerRankedOnLeaderboardVersionEventData__VTable vtable;
    };

    enum class PaymentType__Enum : int32_t {
        Purchase = 0x00000000,
        ReceiptValidation = 0x00000001,
    };

    struct PaymentType__Enum__Boxed {
        struct PaymentType__Enum__Class* klass;
        MonitorData* monitor;
        PaymentType__Enum value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ {
        PaymentType__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ fields;
    };

    enum class Currency__Enum_2 : int32_t {
        AED = 0x00000000,
        AFN = 0x00000001,
        ALL = 0x00000002,
        AMD = 0x00000003,
        ANG = 0x00000004,
        AOA = 0x00000005,
        ARS = 0x00000006,
        AUD = 0x00000007,
        AWG = 0x00000008,
        AZN = 0x00000009,
        BAM = 0x0000000a,
        BBD = 0x0000000b,
        BDT = 0x0000000c,
        BGN = 0x0000000d,
        BHD = 0x0000000e,
        BIF = 0x0000000f,
        BMD = 0x00000010,
        BND = 0x00000011,
        BOB = 0x00000012,
        BRL = 0x00000013,
        BSD = 0x00000014,
        BTN = 0x00000015,
        BWP = 0x00000016,
        BYR = 0x00000017,
        BZD = 0x00000018,
        CAD = 0x00000019,
        CDF = 0x0000001a,
        CHF = 0x0000001b,
        CLP = 0x0000001c,
        CNY = 0x0000001d,
        COP = 0x0000001e,
        CRC = 0x0000001f,
        CUC = 0x00000020,
        CUP = 0x00000021,
        CVE = 0x00000022,
        CZK = 0x00000023,
        DJF = 0x00000024,
        DKK = 0x00000025,
        DOP = 0x00000026,
        DZD = 0x00000027,
        EGP = 0x00000028,
        ERN = 0x00000029,
        ETB = 0x0000002a,
        EUR = 0x0000002b,
        FJD = 0x0000002c,
        FKP = 0x0000002d,
        GBP = 0x0000002e,
        GEL = 0x0000002f,
        GGP = 0x00000030,
        GHS = 0x00000031,
        GIP = 0x00000032,
        GMD = 0x00000033,
        GNF = 0x00000034,
        GTQ = 0x00000035,
        GYD = 0x00000036,
        HKD = 0x00000037,
        HNL = 0x00000038,
        HRK = 0x00000039,
        HTG = 0x0000003a,
        HUF = 0x0000003b,
        IDR = 0x0000003c,
        ILS = 0x0000003d,
        IMP = 0x0000003e,
        INR = 0x0000003f,
        IQD = 0x00000040,
        IRR = 0x00000041,
        ISK = 0x00000042,
        JEP = 0x00000043,
        JMD = 0x00000044,
        JOD = 0x00000045,
        JPY = 0x00000046,
        KES = 0x00000047,
        KGS = 0x00000048,
        KHR = 0x00000049,
        KMF = 0x0000004a,
        KPW = 0x0000004b,
        KRW = 0x0000004c,
        KWD = 0x0000004d,
        KYD = 0x0000004e,
        KZT = 0x0000004f,
        LAK = 0x00000050,
        LBP = 0x00000051,
        LKR = 0x00000052,
        LRD = 0x00000053,
        LSL = 0x00000054,
        LYD = 0x00000055,
        MAD = 0x00000056,
        MDL = 0x00000057,
        MGA = 0x00000058,
        MKD = 0x00000059,
        MMK = 0x0000005a,
        MNT = 0x0000005b,
        MOP = 0x0000005c,
        MRO = 0x0000005d,
        MUR = 0x0000005e,
        MVR = 0x0000005f,
        MWK = 0x00000060,
        MXN = 0x00000061,
        MYR = 0x00000062,
        MZN = 0x00000063,
        NAD = 0x00000064,
        NGN = 0x00000065,
        NIO = 0x00000066,
        NOK = 0x00000067,
        NPR = 0x00000068,
        NZD = 0x00000069,
        OMR = 0x0000006a,
        PAB = 0x0000006b,
        PEN = 0x0000006c,
        PGK = 0x0000006d,
        PHP = 0x0000006e,
        PKR = 0x0000006f,
        PLN = 0x00000070,
        PYG = 0x00000071,
        QAR = 0x00000072,
        RON = 0x00000073,
        RSD = 0x00000074,
        RUB = 0x00000075,
        RWF = 0x00000076,
        SAR = 0x00000077,
        SBD = 0x00000078,
        SCR = 0x00000079,
        SDG = 0x0000007a,
        SEK = 0x0000007b,
        SGD = 0x0000007c,
        SHP = 0x0000007d,
        SLL = 0x0000007e,
        SOS = 0x0000007f,
        SPL = 0x00000080,
        SRD = 0x00000081,
        STD = 0x00000082,
        SVC = 0x00000083,
        SYP = 0x00000084,
        SZL = 0x00000085,
        THB = 0x00000086,
        TJS = 0x00000087,
        TMT = 0x00000088,
        TND = 0x00000089,
        TOP = 0x0000008a,
        TRY = 0x0000008b,
        TTD = 0x0000008c,
        TVD = 0x0000008d,
        TWD = 0x0000008e,
        TZS = 0x0000008f,
        UAH = 0x00000090,
        UGX = 0x00000091,
        USD = 0x00000092,
        UYU = 0x00000093,
        UZS = 0x00000094,
        VEF = 0x00000095,
        VND = 0x00000096,
        VUV = 0x00000097,
        WST = 0x00000098,
        XAF = 0x00000099,
        XCD = 0x0000009a,
        XDR = 0x0000009b,
        XOF = 0x0000009c,
        XPF = 0x0000009d,
        YER = 0x0000009e,
        ZAR = 0x0000009f,
        ZMW = 0x000000a0,
        ZWD = 0x000000a1,
    };

    struct Currency__Enum_2__Boxed {
        struct Currency__Enum_2__Class* klass;
        MonitorData* monitor;
        Currency__Enum_2 value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_Currency_ {
        Currency__Enum_2 value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_Currency___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_Currency___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_Currency_ fields;
    };

    struct PlayerRealMoneyPurchaseEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* OrderId;
        uint32_t OrderTotal;
        struct String* PaymentProvider;
        struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ PaymentType;
        struct List_1_System_String_* PurchasedProduct;
        struct String* TitleId;
        struct Nullable_1_PlayFab_PlayStreamModels_Currency_ TransactionCurrency;
        struct String* TransactionId;
        struct Nullable_1_UInt32_ TransactionTotal;
    };

    struct PlayerRealMoneyPurchaseEventData {
        struct PlayerRealMoneyPurchaseEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerRealMoneyPurchaseEventData__Fields fields;
    };

    struct PaymentType__Enum__VTable {
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

    struct PaymentType__Enum__StaticFields {
    };

    struct PaymentType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PaymentType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PaymentType__Enum__VTable vtable;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___StaticFields {
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_PlayStreamModels_PaymentType___VTable vtable;
    };

    struct Currency__Enum_2__VTable {
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

    struct Currency__Enum_2__StaticFields {
    };

    struct Currency__Enum_2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Currency__Enum_2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Currency__Enum_2__VTable vtable;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_Currency___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_Currency___StaticFields {
    };

    struct Nullable_1_PlayFab_PlayStreamModels_Currency___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_Currency___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_PlayStreamModels_Currency___VTable vtable;
    };

    struct PlayerRealMoneyPurchaseEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerRealMoneyPurchaseEventData__StaticFields {
    };

    struct PlayerRealMoneyPurchaseEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerRealMoneyPurchaseEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerRealMoneyPurchaseEventData__VTable vtable;
    };

    struct PlayerReceiptValidationEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* Error;
        struct String* PaymentProvider;
        struct Nullable_1_PlayFab_PlayStreamModels_PaymentType_ PaymentType;
        struct String* ReceiptContent;
        struct String* TitleId;
        bool Valid;
    };

    struct PlayerReceiptValidationEventData {
        struct PlayerReceiptValidationEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerReceiptValidationEventData__Fields fields;
    };

    struct PlayerReceiptValidationEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerReceiptValidationEventData__StaticFields {
    };

    struct PlayerReceiptValidationEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerReceiptValidationEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerReceiptValidationEventData__VTable vtable;
    };

    struct PlayerRedeemedCouponEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* CouponCode;
        struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem_* GrantedInventoryItems;
        struct String* TitleId;
    };

    struct PlayerRedeemedCouponEventData {
        struct PlayerRedeemedCouponEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerRedeemedCouponEventData__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Fields {
        struct CouponGrantedInventoryItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem_ {
        struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Fields fields;
    };

    struct __declspec(align(8)) CouponGrantedInventoryItem__Fields {
        struct String* CatalogVersion;
        struct String* InstanceId;
        struct String* ItemId;
    };

    struct CouponGrantedInventoryItem {
        struct CouponGrantedInventoryItem__Class* klass;
        MonitorData* monitor;
        struct CouponGrantedInventoryItem__Fields fields;
    };

    struct CouponGrantedInventoryItem__Array {
        struct CouponGrantedInventoryItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CouponGrantedInventoryItem* vector[32];
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem_ {
        struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class* klass;
        MonitorData* monitor;
    };

    struct CouponGrantedInventoryItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CouponGrantedInventoryItem__StaticFields {
    };

    struct CouponGrantedInventoryItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CouponGrantedInventoryItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CouponGrantedInventoryItem__VTable vtable;
    };

    struct CouponGrantedInventoryItem__Array__VTable {
    };

    struct CouponGrantedInventoryItem__Array__StaticFields {
    };

    struct CouponGrantedInventoryItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CouponGrantedInventoryItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CouponGrantedInventoryItem__Array__VTable vtable;
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields {
    };

    struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable vtable;
    };

    struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable {
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

    struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields {
        struct CouponGrantedInventoryItem__Array* _emptyArray;
    };

    struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_PlayStreamModels_CouponGrantedInventoryItem___VTable vtable;
    };

    struct PlayerRedeemedCouponEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerRedeemedCouponEventData__StaticFields {
    };

    struct PlayerRedeemedCouponEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerRedeemedCouponEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerRedeemedCouponEventData__VTable vtable;
    };

    enum class PushNotificationPlatform__Enum_2 : int32_t {
        ApplePushNotificationService = 0x00000000,
        GoogleCloudMessaging = 0x00000001,
    };

    struct PushNotificationPlatform__Enum_2__Boxed {
        struct PushNotificationPlatform__Enum_2__Class* klass;
        MonitorData* monitor;
        PushNotificationPlatform__Enum_2 value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ {
        PushNotificationPlatform__Enum_2 value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ fields;
    };

    struct PlayerRegisteredPushNotificationsEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* DeviceToken;
        struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform_ Platform;
        struct String* TitleId;
    };

    struct PlayerRegisteredPushNotificationsEventData {
        struct PlayerRegisteredPushNotificationsEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerRegisteredPushNotificationsEventData__Fields fields;
    };

    struct PushNotificationPlatform__Enum_2__VTable {
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

    struct PushNotificationPlatform__Enum_2__StaticFields {
    };

    struct PushNotificationPlatform__Enum_2__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PushNotificationPlatform__Enum_2__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PushNotificationPlatform__Enum_2__VTable vtable;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___StaticFields {
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_PlayStreamModels_PushNotificationPlatform___VTable vtable;
    };

    struct PlayerRegisteredPushNotificationsEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerRegisteredPushNotificationsEventData__StaticFields {
    };

    struct PlayerRegisteredPushNotificationsEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerRegisteredPushNotificationsEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerRegisteredPushNotificationsEventData__VTable vtable;
    };

    struct PlayerRemovedTitleEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* TitleId;
    };

    struct PlayerRemovedTitleEventData {
        struct PlayerRemovedTitleEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerRemovedTitleEventData__Fields fields;
    };

    struct PlayerRemovedTitleEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerRemovedTitleEventData__StaticFields {
    };

    struct PlayerRemovedTitleEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerRemovedTitleEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerRemovedTitleEventData__VTable vtable;
    };

    struct PlayerReportedAsAbusiveEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* Comment;
        struct String* ReportedByPlayer;
        struct String* TitleId;
    };

    struct PlayerReportedAsAbusiveEventData {
        struct PlayerReportedAsAbusiveEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerReportedAsAbusiveEventData__Fields fields;
    };

    struct PlayerReportedAsAbusiveEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerReportedAsAbusiveEventData__StaticFields {
    };

    struct PlayerReportedAsAbusiveEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerReportedAsAbusiveEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerReportedAsAbusiveEventData__VTable vtable;
    };

    enum class PlayerProfileProperty__Enum : int32_t {
        TotalValueToDateInUSD = 0x00000000,
        PlayerValuesToDate = 0x00000001,
    };

    struct PlayerProfileProperty__Enum__Boxed {
        struct PlayerProfileProperty__Enum__Class* klass;
        MonitorData* monitor;
        PlayerProfileProperty__Enum value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty_ {
        PlayerProfileProperty__Enum value;

        bool has_value;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___Boxed {
        struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___Class* klass;
        MonitorData* monitor;
        struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty_ fields;
    };

    struct PlayerSetProfilePropertyEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty_ Property;
        struct String* TitleId;
        struct Object* Value;
    };

    struct PlayerSetProfilePropertyEventData {
        struct PlayerSetProfilePropertyEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerSetProfilePropertyEventData__Fields fields;
    };

    struct PlayerProfileProperty__Enum__VTable {
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

    struct PlayerProfileProperty__Enum__StaticFields {
    };

    struct PlayerProfileProperty__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerProfileProperty__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerProfileProperty__Enum__VTable vtable;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___StaticFields {
    };

    struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Nullable_1_PlayFab_PlayStreamModels_PlayerProfileProperty___VTable vtable;
    };

    struct PlayerSetProfilePropertyEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerSetProfilePropertyEventData__StaticFields {
    };

    struct PlayerSetProfilePropertyEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerSetProfilePropertyEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerSetProfilePropertyEventData__VTable vtable;
    };

    struct PlayerStartPurchaseEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* CatalogVersion;
        struct List_1_PlayFab_PlayStreamModels_CartItem_* Contents;
        struct String* OrderId;
        struct String* StoreId;
        struct String* TitleId;
    };

    struct PlayerStartPurchaseEventData {
        struct PlayerStartPurchaseEventData__Class* klass;
        MonitorData* monitor;
        struct PlayerStartPurchaseEventData__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_CartItem___Fields {
        struct CartItem_1__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

} // namespace app
