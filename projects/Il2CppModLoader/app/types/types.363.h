namespace app {
enum class XblAchievementMediaAssetType__Enum : uint32_t {
    Unknown = 0x00000000,
    Icon = 0x00000001,
    Art = 0x00000002,
};

struct XblAchievementMediaAssetType__Enum__Boxed {
    struct XblAchievementMediaAssetType__Enum__Class *klass;
    MonitorData *monitor;
    XblAchievementMediaAssetType__Enum value;
    
};

struct __declspec(align(8)) XblAchievementMediaAsset__Fields {
    struct String *_Name_k__BackingField;
    XblAchievementMediaAssetType__Enum _MediaAssetType_k__BackingField;
    
    struct String *_Url_k__BackingField;
};

struct XblAchievementMediaAsset {
    struct XblAchievementMediaAsset__Class *klass;
    MonitorData *monitor;
    struct XblAchievementMediaAsset__Fields fields;
};

struct XblAchievementMediaAsset__Array {
    struct XblAchievementMediaAsset__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XblAchievementMediaAsset *vector[32];
};

struct __declspec(align(8)) XblAchievementTimeWindow__Fields {
    struct DateTime _StartDate_k__BackingField;
    struct DateTime _EndDate_k__BackingField;
};

struct XblAchievementTimeWindow {
    struct XblAchievementTimeWindow__Class *klass;
    MonitorData *monitor;
    struct XblAchievementTimeWindow__Fields fields;
};

enum class XblAchievementRewardType__Enum : uint32_t {
    Unknown = 0x00000000,
    Gamerscore = 0x00000001,
    InApp = 0x00000002,
    Art = 0x00000003,
};

struct XblAchievementRewardType__Enum__Boxed {
    struct XblAchievementRewardType__Enum__Class *klass;
    MonitorData *monitor;
    XblAchievementRewardType__Enum value;
    
};

struct __declspec(align(8)) XblAchievementReward__Fields {
    struct String *_Name_k__BackingField;
    struct String *_Description_k__BackingField;
    struct String *_Value_k__BackingField;
    XblAchievementRewardType__Enum _RewardType_k__BackingField;
    
    struct String *_ValueType_k__BackingField;
    struct XblAchievementMediaAsset *_MediaAsset_k__BackingField;
};

struct XblAchievementReward {
    struct XblAchievementReward__Class *klass;
    MonitorData *monitor;
    struct XblAchievementReward__Fields fields;
};

struct XblAchievementReward__Array {
    struct XblAchievementReward__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XblAchievementReward *vector[32];
};

struct XblAchievement__Array {
    struct XblAchievement__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct XblAchievement *vector[32];
};

struct XblAchievementsResultHandle_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementsResultHandle_1__StaticFields {
};

struct XblAchievementsResultHandle_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementsResultHandle_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementsResultHandle_1__VTable vtable;
};

struct XblAchievementsResultHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementsResultHandle__StaticFields {
};

struct XblAchievementsResultHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementsResultHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementsResultHandle__VTable vtable;
};

struct XblAchievementTitleAssociation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementTitleAssociation__StaticFields {
};

struct XblAchievementTitleAssociation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementTitleAssociation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementTitleAssociation__VTable vtable;
};

struct XblAchievementTitleAssociation__Array__VTable {
};

struct XblAchievementTitleAssociation__Array__StaticFields {
};

struct XblAchievementTitleAssociation__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementTitleAssociation__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementTitleAssociation__Array__VTable vtable;
};

struct XblAchievementProgressState__Enum__VTable {
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

struct XblAchievementProgressState__Enum__StaticFields {
};

struct XblAchievementProgressState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementProgressState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementProgressState__Enum__VTable vtable;
};

struct XblAchievementRequirement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementRequirement__StaticFields {
};

struct XblAchievementRequirement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementRequirement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementRequirement__VTable vtable;
};

struct XblAchievementRequirement__Array__VTable {
};

struct XblAchievementRequirement__Array__StaticFields {
};

struct XblAchievementRequirement__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementRequirement__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementRequirement__Array__VTable vtable;
};

struct XblAchievementProgression__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementProgression__StaticFields {
};

struct XblAchievementProgression__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementProgression__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementProgression__VTable vtable;
};

struct XblAchievementMediaAssetType__Enum__VTable {
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

struct XblAchievementMediaAssetType__Enum__StaticFields {
};

struct XblAchievementMediaAssetType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementMediaAssetType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementMediaAssetType__Enum__VTable vtable;
};

struct XblAchievementMediaAsset__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementMediaAsset__StaticFields {
};

struct XblAchievementMediaAsset__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementMediaAsset__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementMediaAsset__VTable vtable;
};

struct XblAchievementMediaAsset__Array__VTable {
};

struct XblAchievementMediaAsset__Array__StaticFields {
};

struct XblAchievementMediaAsset__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementMediaAsset__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementMediaAsset__Array__VTable vtable;
};

struct XblAchievementType__Enum__VTable {
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

struct XblAchievementType__Enum__StaticFields {
};

struct XblAchievementType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementType__Enum__VTable vtable;
};

struct XblAchievementParticipationType__Enum__VTable {
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

struct XblAchievementParticipationType__Enum__StaticFields {
};

struct XblAchievementParticipationType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementParticipationType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementParticipationType__Enum__VTable vtable;
};

struct XblAchievementTimeWindow__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementTimeWindow__StaticFields {
};

struct XblAchievementTimeWindow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementTimeWindow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementTimeWindow__VTable vtable;
};

struct XblAchievementRewardType__Enum__VTable {
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

struct XblAchievementRewardType__Enum__StaticFields {
};

struct XblAchievementRewardType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementRewardType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementRewardType__Enum__VTable vtable;
};

struct XblAchievementReward__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementReward__StaticFields {
};

struct XblAchievementReward__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementReward__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementReward__VTable vtable;
};

struct XblAchievementReward__Array__VTable {
};

struct XblAchievementReward__Array__StaticFields {
};

struct XblAchievementReward__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementReward__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementReward__Array__VTable vtable;
};

struct XblAchievement__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievement__StaticFields {
};

struct XblAchievement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievement__VTable vtable;
};

struct XblAchievement__Array__VTable {
};

struct XblAchievement__Array__StaticFields {
};

struct XblAchievement__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievement__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievement__Array__VTable vtable;
};

struct XblAchievement___VTable {
};

struct XblAchievement___StaticFields {
};

struct XblAchievement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievement___VTable vtable;
};

struct XblContextHandle_1 {
    void *handle;
};

struct XblContextHandle_1__Boxed {
    struct XblContextHandle_1__Class *klass;
    MonitorData *monitor;
    struct XblContextHandle_1 fields;
};

struct __declspec(align(8)) XblContextHandle__Fields {
    struct XblContextHandle_1 _InteropHandle_k__BackingField;
};

struct XblContextHandle {
    struct XblContextHandle__Class *klass;
    MonitorData *monitor;
    struct XblContextHandle__Fields fields;
};

enum class XblAchievementOrderBy__Enum : uint32_t {
    DefaultOrder = 0x00000000,
    TitleId = 0x00000001,
    UnlockTime = 0x00000002,
};

struct XblAchievementOrderBy__Enum__Boxed {
    struct XblAchievementOrderBy__Enum__Class *klass;
    MonitorData *monitor;
    XblAchievementOrderBy__Enum value;
    
};

struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Fields {
    struct MulticastDelegate__Fields _;
};

struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult {
    struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class *klass;
    MonitorData *monitor;
    struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Fields fields;
};

struct XblContextHandle_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblContextHandle_1__StaticFields {
};

struct XblContextHandle_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblContextHandle_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblContextHandle_1__VTable vtable;
};

struct XblContextHandle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblContextHandle__StaticFields {
};

struct XblContextHandle__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblContextHandle__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblContextHandle__VTable vtable;
};

struct XblAchievementOrderBy__Enum__VTable {
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

struct XblAchievementOrderBy__Enum__StaticFields {
};

struct XblAchievementOrderBy__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementOrderBy__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementOrderBy__Enum__VTable vtable;
};

struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__VTable {
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

struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__StaticFields {
};

struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__VTable vtable;
};

struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Fields {
    struct MulticastDelegate__Fields _;
};

struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult {
    struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Class *klass;
    MonitorData *monitor;
    struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Fields fields;
};

struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__VTable {
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

struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__StaticFields {
};

struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__VTable vtable;
};

struct SDK_XBL_XblCleanupResult__Fields {
    struct MulticastDelegate__Fields _;
};

struct SDK_XBL_XblCleanupResult {
    struct SDK_XBL_XblCleanupResult__Class *klass;
    MonitorData *monitor;
    struct SDK_XBL_XblCleanupResult__Fields fields;
};

struct SDK_XBL_XblCleanupResult__VTable {
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

struct SDK_XBL_XblCleanupResult__StaticFields {
};

struct SDK_XBL_XblCleanupResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SDK_XBL_XblCleanupResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SDK_XBL_XblCleanupResult__VTable vtable;
};

struct XblContextHandle___VTable {
};

struct XblContextHandle___StaticFields {
};

struct XblContextHandle___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblContextHandle___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblContextHandle___VTable vtable;
};

struct SDK_XBL_c {
    struct SDK_XBL_c__Class *klass;
    MonitorData *monitor;
};

struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement_ {
    struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___Class *klass;
    MonitorData *monitor;
    struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___Fields fields;
};

struct SizeT {
    void *value;
};

struct SizeT__Boxed {
    struct SizeT__Class *klass;
    MonitorData *monitor;
    struct SizeT fields;
};

struct TimeT {
    int64_t SecondsSinceUnixEpoch;
};

struct TimeT__Boxed {
    struct TimeT__Class *klass;
    MonitorData *monitor;
    struct TimeT fields;
};

struct XblAchievementProgression_1 {
    void *requirements;
    struct SizeT requirementsCount;
    struct TimeT timeUnlocked;
};

struct XblAchievementProgression_1__Boxed {
    struct XblAchievementProgression_1__Class *klass;
    MonitorData *monitor;
    struct XblAchievementProgression_1 fields;
};

struct XblAchievementTimeWindow_1 {
    struct TimeT startDate;
    struct TimeT endDate;
};

struct XblAchievementTimeWindow_1__Boxed {
    struct XblAchievementTimeWindow_1__Class *klass;
    MonitorData *monitor;
    struct XblAchievementTimeWindow_1 fields;
};

struct XblAchievement_1 {
    struct UTF8StringPtr id;
    struct UTF8StringPtr serviceConfigurationId;
    struct UTF8StringPtr name;
    void *titleAssociations;
    struct SizeT titleAssociationsCount;
    XblAchievementProgressState__Enum progressState;
    
    struct XblAchievementProgression_1 progression;
    void *mediaAssets;
    struct SizeT mediaAssetsCount;
    void *platformsAvailableOn;
    struct SizeT platformsAvailableOnCount;
    bool isSecret;
    struct UTF8StringPtr unlockedDescription;
    struct UTF8StringPtr lockedDescription;
    struct UTF8StringPtr productId;
    XblAchievementType__Enum type;
    
    XblAchievementParticipationType__Enum participationType;
    
    struct XblAchievementTimeWindow_1 available;
    void *rewards;
    struct SizeT rewardsCount;
    uint64_t estimatedUnlockTime;
    struct UTF8StringPtr deepLink;
    bool isRevoked;
};

struct XblAchievement_1__Boxed {
    struct XblAchievement_1__Class *klass;
    MonitorData *monitor;
    struct XblAchievement_1 fields;
};

struct SizeT__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SizeT__StaticFields {
};

struct SizeT__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SizeT__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SizeT__VTable vtable;
};

struct TimeT__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimeT__StaticFields {
};

struct TimeT__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimeT__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimeT__VTable vtable;
};

struct XblAchievementProgression_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementProgression_1__StaticFields {
};

struct XblAchievementProgression_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementProgression_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementProgression_1__VTable vtable;
};

struct XblAchievementTimeWindow_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievementTimeWindow_1__StaticFields {
};

struct XblAchievementTimeWindow_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievementTimeWindow_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievementTimeWindow_1__VTable vtable;
};

struct XblAchievement_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XblAchievement_1__StaticFields {
};

struct XblAchievement_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XblAchievement_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XblAchievement_1__VTable vtable;
};

struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___VTable {
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

struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___StaticFields {
};

struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___VTable vtable;
};

}
