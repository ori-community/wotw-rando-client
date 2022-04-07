namespace app {
struct __declspec(align(8)) XblAchievementProgression__Fields {
  struct XblAchievementRequirement__Array * _Requirements_k__BackingField;
  struct DateTime _TimeUnlocked_k__BackingField;
};
struct XblAchievementProgression {
  struct XblAchievementProgression__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementProgression__Fields fields;
};
struct __declspec(align(8)) XblAchievementRequirement__Fields {
  struct String * _Id_k__BackingField;
  struct String * _CurrentProgressValue_k__BackingField;
  struct String * _TargetProgressValue_k__BackingField;
};
struct XblAchievementRequirement {
  struct XblAchievementRequirement__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementRequirement__Fields fields;
};
struct XblAchievementRequirement__Array {
  struct XblAchievementRequirement__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XblAchievementRequirement * vector[32];
};
enum XblAchievementMediaAssetType__Enum : uint32_t {
  XblAchievementMediaAssetType__Enum_Unknown = 0,
  XblAchievementMediaAssetType__Enum_Icon = 1,
  XblAchievementMediaAssetType__Enum_Art = 2,
};
struct XblAchievementMediaAssetType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XblAchievementMediaAssetType__Enum value;
};
struct __declspec(align(8)) XblAchievementMediaAsset__Fields {
  struct String * _Name_k__BackingField;
  enum XblAchievementMediaAssetType__Enum _MediaAssetType_k__BackingField;
  struct String * _Url_k__BackingField;
};
struct XblAchievementMediaAsset {
  struct XblAchievementMediaAsset__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementMediaAsset__Fields fields;
};
struct XblAchievementMediaAsset__Array {
  struct XblAchievementMediaAsset__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XblAchievementMediaAsset * vector[32];
};
struct __declspec(align(8)) XblAchievementTimeWindow__Fields {
  struct DateTime _StartDate_k__BackingField;
  struct DateTime _EndDate_k__BackingField;
};
struct XblAchievementTimeWindow {
  struct XblAchievementTimeWindow__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementTimeWindow__Fields fields;
};
enum XblAchievementRewardType__Enum : uint32_t {
  XblAchievementRewardType__Enum_Unknown = 0,
  XblAchievementRewardType__Enum_Gamerscore = 1,
  XblAchievementRewardType__Enum_InApp = 2,
  XblAchievementRewardType__Enum_Art = 3,
};
struct XblAchievementRewardType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XblAchievementRewardType__Enum value;
};
struct __declspec(align(8)) XblAchievementReward__Fields {
  struct String * _Name_k__BackingField;
  struct String * _Description_k__BackingField;
  struct String * _Value_k__BackingField;
  enum XblAchievementRewardType__Enum _RewardType_k__BackingField;
  struct String * _ValueType_k__BackingField;
  struct XblAchievementMediaAsset * _MediaAsset_k__BackingField;
};
struct XblAchievementReward {
  struct XblAchievementReward__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementReward__Fields fields;
};
struct XblAchievementReward__Array {
  struct XblAchievementReward__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XblAchievementReward * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementsResultHandle_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementsResultHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementTitleAssociation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblAchievementTitleAssociation__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementRequirement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblAchievementRequirement__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementProgression__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblAchievementProgression__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementMediaAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblAchievementMediaAsset__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementTimeWindow__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblAchievementTimeWindow__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementReward__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblAchievementReward__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblAchievement__VTable vtable;
};

struct XblContextHandle_1 {
  void * handle;
};
struct XblContextHandle_1__Boxed {
  struct XblContextHandle_1__Class *klass;
  struct MonitorData *monitor;
  struct XblContextHandle_1 fields;
};
struct __declspec(align(8)) XblContextHandle__Fields {
  struct XblContextHandle_1 _InteropHandle_k__BackingField;
};
struct XblContextHandle {
  struct XblContextHandle__Class *klass;
  struct MonitorData *monitor;
  struct XblContextHandle__Fields fields;
};
enum XblAchievementOrderBy__Enum : uint32_t {
  XblAchievementOrderBy__Enum_DefaultOrder = 0,
  XblAchievementOrderBy__Enum_TitleId = 1,
  XblAchievementOrderBy__Enum_UnlockTime = 2,
};
struct XblAchievementOrderBy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XblAchievementOrderBy__Enum value;
};
struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Fields {
  struct MulticastDelegate__Fields _;
};
struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult {
  struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblContextHandle_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblContextHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XblContextHandle__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult__VTable vtable;
};

struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Fields {
  struct MulticastDelegate__Fields _;
};
struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult {
  struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult__VTable vtable;
};

struct SDK_XBL_XblCleanupResult__Fields {
  struct MulticastDelegate__Fields _;
};
struct SDK_XBL_XblCleanupResult {
  struct SDK_XBL_XblCleanupResult__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_XBL_XblCleanupResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_XBL_XblCleanupResult__VTable vtable;
};

struct SDK_XBL_c {
  struct SDK_XBL_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement_ {
  struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___Fields fields;
};
struct SizeT {
  void * value;
};
struct SizeT__Boxed {
  struct SizeT__Class *klass;
  struct MonitorData *monitor;
  struct SizeT fields;
};
struct TimeT {
  int64_t SecondsSinceUnixEpoch;
};
struct TimeT__Boxed {
  struct TimeT__Class *klass;
  struct MonitorData *monitor;
  struct TimeT fields;
};
struct XblAchievementProgression_1 {
  void * requirements;
  struct SizeT requirementsCount;
  struct TimeT timeUnlocked;
};
struct XblAchievementProgression_1__Boxed {
  struct XblAchievementProgression_1__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementProgression_1 fields;
};
struct XblAchievementTimeWindow_1 {
  struct TimeT startDate;
  struct TimeT endDate;
};
struct XblAchievementTimeWindow_1__Boxed {
  struct XblAchievementTimeWindow_1__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementTimeWindow_1 fields;
};
struct XblAchievement_1 {
  struct UTF8StringPtr id;
  struct UTF8StringPtr serviceConfigurationId;
  struct UTF8StringPtr name;
  void * titleAssociations;
  struct SizeT titleAssociationsCount;
  enum XblAchievementProgressState__Enum progressState;
  struct XblAchievementProgression_1 progression;
  void * mediaAssets;
  struct SizeT mediaAssetsCount;
  void * platformsAvailableOn;
  struct SizeT platformsAvailableOnCount;
  bool isSecret;
  struct UTF8StringPtr unlockedDescription;
  struct UTF8StringPtr lockedDescription;
  struct UTF8StringPtr productId;
  enum XblAchievementType__Enum type;
  enum XblAchievementParticipationType__Enum participationType;
  struct XblAchievementTimeWindow_1 available;
  void * rewards;
  struct SizeT rewardsCount;
  uint64_t estimatedUnlockTime;
  struct UTF8StringPtr deepLink;
  bool isRevoked;
};
struct XblAchievement_1__Boxed {
  struct XblAchievement_1__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SizeT__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeT__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementProgression_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievementTimeWindow_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XblAchievement_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement___VTable vtable;
};
struct SDK_XBL_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_XBL_c__StaticFields {
  struct SDK_XBL_c * __9;
  struct Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement_ * __9__66_0;
};
struct SDK_XBL_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_XBL_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_XBL_c__VTable vtable;
};

struct __declspec(align(8)) SDK_XBL_c_DisplayClass69_0__Fields {
  struct SDK_XBL_XblAchievementsGetAchievementsForTitleIdResult * completionRoutine;
};
struct SDK_XBL_c_DisplayClass69_0 {
  struct SDK_XBL_c_DisplayClass69_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_XBL_c_DisplayClass69_0__Fields fields;
};
struct SDK_XBL_c_DisplayClass69_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_XBL_c_DisplayClass69_0__StaticFields {
};
struct SDK_XBL_c_DisplayClass69_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_XBL_c_DisplayClass69_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_XBL_c_DisplayClass69_0__VTable vtable;
};

struct XAsyncBlockPtr {
  void * IntPtr;
};
struct XAsyncBlockPtr__Boxed {
  struct XAsyncBlockPtr__Class *klass;
  struct MonitorData *monitor;
  struct XAsyncBlockPtr fields;
};
struct XAsyncBlockPtr__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XAsyncBlockPtr__StaticFields {
};
struct XAsyncBlockPtr__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XAsyncBlockPtr__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XAsyncBlockPtr__VTable vtable;
};

struct __declspec(align(8)) SDK_XBL_c_DisplayClass71_0__Fields {
  struct SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult * completionRoutine;
};
struct SDK_XBL_c_DisplayClass71_0 {
  struct SDK_XBL_c_DisplayClass71_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_XBL_c_DisplayClass71_0__Fields fields;
};
struct SDK_XBL_c_DisplayClass71_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_XBL_c_DisplayClass71_0__StaticFields {
};
struct SDK_XBL_c_DisplayClass71_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_XBL_c_DisplayClass71_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_XBL_c_DisplayClass71_0__VTable vtable;
};

struct __declspec(align(8)) SDK_XBL_c_DisplayClass130_0__Fields {
  struct SDK_XBL_XblCleanupResult * completionRoutine;
};
struct SDK_XBL_c_DisplayClass130_0 {
  struct SDK_XBL_c_DisplayClass130_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_XBL_c_DisplayClass130_0__Fields fields;
};
struct SDK_XBL_c_DisplayClass130_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_XBL_c_DisplayClass130_0__StaticFields {
};
struct SDK_XBL_c_DisplayClass130_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_XBL_c_DisplayClass130_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_XBL_c_DisplayClass130_0__VTable vtable;
};

struct __declspec(align(8)) SDK_c_DisplayClass13_0__Fields {
  struct XGameSaveInitializeProviderCompleted * completionRoutine;
};
struct SDK_c_DisplayClass13_0 {
  struct SDK_c_DisplayClass13_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_c_DisplayClass13_0__Fields fields;
};
struct SDK_c_DisplayClass13_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c_DisplayClass13_0__StaticFields {
};
struct SDK_c_DisplayClass13_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c_DisplayClass13_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c_DisplayClass13_0__VTable vtable;
};

struct SDK_c {
  struct SDK_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob_ {
  struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___Fields fields;
};
struct XGameSaveBlob_1 {
  struct XGameSaveBlobInfo info;
  void * data;
};
struct XGameSaveBlob_1__Boxed {
  struct XGameSaveBlob_1__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveBlob_1 fields;
};
struct XGameSaveBlob_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveBlob_1__StaticFields {
};
struct XGameSaveBlob_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveBlob_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveBlob_1__VTable vtable;
};
struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___VTable {
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
struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___StaticFields {
};
struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob___VTable vtable;
};
struct SDK_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c__StaticFields {
  struct SDK_c * __9;
  struct Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob_ * __9__27_1;
};
struct SDK_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c__VTable vtable;
};

struct __declspec(align(8)) SDK_c_DisplayClass27_0__Fields {
  struct XGameSaveReadBlobDataCompleted * completionRoutine;
};
struct SDK_c_DisplayClass27_0 {
  struct SDK_c_DisplayClass27_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_c_DisplayClass27_0__Fields fields;
};
struct SDK_c_DisplayClass27_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c_DisplayClass27_0__StaticFields {
};
struct SDK_c_DisplayClass27_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c_DisplayClass27_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c_DisplayClass27_0__VTable vtable;
};

struct __declspec(align(8)) SDK_c_DisplayClass33_0__Fields {
  struct XGameSaveSubmitUpdateCompleted * completionRoutine;
};
struct SDK_c_DisplayClass33_0 {
  struct SDK_c_DisplayClass33_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_c_DisplayClass33_0__Fields fields;
};
struct SDK_c_DisplayClass33_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c_DisplayClass33_0__StaticFields {
};
struct SDK_c_DisplayClass33_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c_DisplayClass33_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c_DisplayClass33_0__VTable vtable;
};

struct __declspec(align(8)) SDK_c_DisplayClass117_0__Fields {
  struct XUserAddCompleted * completionRoutine;
};
struct SDK_c_DisplayClass117_0 {
  struct SDK_c_DisplayClass117_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_c_DisplayClass117_0__Fields fields;
};
struct SDK_c_DisplayClass117_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c_DisplayClass117_0__StaticFields {
};
struct SDK_c_DisplayClass117_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c_DisplayClass117_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c_DisplayClass117_0__VTable vtable;
};

struct __declspec(align(8)) SDK_c_DisplayClass125_0__Fields {
  struct XUserGetGamerPictureCompleted * completionRoutine;
};
struct SDK_c_DisplayClass125_0 {
  struct SDK_c_DisplayClass125_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_c_DisplayClass125_0__Fields fields;
};
struct SDK_c_DisplayClass125_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c_DisplayClass125_0__StaticFields {
};
struct SDK_c_DisplayClass125_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c_DisplayClass125_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c_DisplayClass125_0__VTable vtable;
};

struct __declspec(align(8)) SDK_c_DisplayClass129_0__Fields {
  struct XUserGetTokenAndSignatureUtf16Result * completionRoutine;
};
struct SDK_c_DisplayClass129_0 {
  struct SDK_c_DisplayClass129_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_c_DisplayClass129_0__Fields fields;
};
struct SDK_c_DisplayClass129_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c_DisplayClass129_0__StaticFields {
};
struct SDK_c_DisplayClass129_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c_DisplayClass129_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c_DisplayClass129_0__VTable vtable;
};

struct __declspec(align(8)) SDK_c_DisplayClass130_0__Fields {
  struct XUserResolveIssueWithUiUtf16Result * completionRoutine;
};
struct SDK_c_DisplayClass130_0 {
  struct SDK_c_DisplayClass130_0__Class *klass;
  struct MonitorData *monitor;
  struct SDK_c_DisplayClass130_0__Fields fields;
};
struct SDK_c_DisplayClass130_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SDK_c_DisplayClass130_0__StaticFields {
};
struct SDK_c_DisplayClass130_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SDK_c_DisplayClass130_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SDK_c_DisplayClass130_0__VTable vtable;
};

struct MonoPInvokeCallbackAttribute_2 {
  struct MonoPInvokeCallbackAttribute_2__Class *klass;
  struct MonitorData *monitor;
};
struct MonoPInvokeCallbackAttribute_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MonoPInvokeCallbackAttribute_2__StaticFields {
};
struct MonoPInvokeCallbackAttribute_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoPInvokeCallbackAttribute_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoPInvokeCallbackAttribute_2__VTable vtable;
};

struct XblAchievement_c {
  struct XblAchievement_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_XGamingRuntime_XblAchievementTitleAssociation___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_XGamingRuntime_XblAchievementTitleAssociation_ {
  struct Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_XGamingRuntime_XblAchievementTitleAssociation___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_XGamingRuntime_XblAchievementTitleAssociation___Fields fields;
};}