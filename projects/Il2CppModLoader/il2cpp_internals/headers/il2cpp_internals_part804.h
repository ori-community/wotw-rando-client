namespace app {
struct EResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EResult__Enum value;
};
struct UserStatsStored_t {
  uint64_t m_nGameID;
  enum EResult__Enum m_eResult;
};
struct UserStatsStored_t__Boxed {
  struct UserStatsStored_t__Class *klass;
  struct MonitorData *monitor;
  struct UserStatsStored_t fields;
};
struct UserStatsStored_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UserStatsStored_t__StaticFields {
};
struct UserStatsStored_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UserStatsStored_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UserStatsStored_t__VTable vtable;
};

struct CSteamID {
  uint64_t m_SteamID;
};
struct CSteamID__Boxed {
  struct CSteamID__Class *klass;
  struct MonitorData *monitor;
  struct CSteamID fields;
};
struct UserStatsReceived_t {
  uint64_t m_nGameID;
  enum EResult__Enum m_eResult;
  struct CSteamID m_steamIDUser;
};
struct UserStatsReceived_t__Boxed {
  struct UserStatsReceived_t__Class *klass;
  struct MonitorData *monitor;
  struct UserStatsReceived_t fields;
};
struct CSteamID__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct CSteamID__StaticFields {
  struct CSteamID Nil;
  struct CSteamID OutofDateGS;
  struct CSteamID LanModeGS;
  struct CSteamID NotInitYetGS;
  struct CSteamID NonSteamGS;
};
struct CSteamID__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CSteamID__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CSteamID__VTable vtable;
};
struct UserStatsReceived_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UserStatsReceived_t__StaticFields {
};
struct UserStatsReceived_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UserStatsReceived_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UserStatsReceived_t__VTable vtable;
};

struct __declspec(align(8)) SteamAchievements_c_DisplayClass15_0__Fields {
  struct UserAchievementStored_t param;
};
struct SteamAchievements_c_DisplayClass15_0 {
  struct SteamAchievements_c_DisplayClass15_0__Class *klass;
  struct MonitorData *monitor;
  struct SteamAchievements_c_DisplayClass15_0__Fields fields;
};
struct SteamAchievements_c_DisplayClass15_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SteamAchievements_c_DisplayClass15_0__StaticFields {
};
struct SteamAchievements_c_DisplayClass15_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamAchievements_c_DisplayClass15_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamAchievements_c_DisplayClass15_0__VTable vtable;
};

struct __declspec(align(8)) XAchievements__Fields {
  struct XAchievement__Array * achievements;
};
struct XAchievements {
  struct XAchievements__Class *klass;
  struct MonitorData *monitor;
  struct XAchievements__Fields fields;
};
struct __declspec(align(8)) XAchievement__Fields {
  struct String * id;
  struct String * name;
  struct String * progressState;
  struct XProgression * progression;
};
struct XAchievement {
  struct XAchievement__Class *klass;
  struct MonitorData *monitor;
  struct XAchievement__Fields fields;
};
struct XAchievement__Array {
  struct XAchievement__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XAchievement * vector[32];
};
struct __declspec(align(8)) XProgression__Fields {
  struct XRequirements__Array * requirements;
};
struct XProgression {
  struct XProgression__Class *klass;
  struct MonitorData *monitor;
  struct XProgression__Fields fields;
};
struct __declspec(align(8)) XRequirements__Fields {
  struct String * id;
  struct String * current;
  struct String * target;
};
struct XRequirements {
  struct XRequirements__Class *klass;
  struct MonitorData *monitor;
  struct XRequirements__Fields fields;
};
struct XRequirements__Array {
  struct XRequirements__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XRequirements * vector[32];
};
struct XRequirements__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XRequirements__StaticFields {
};
struct XRequirements__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRequirements__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRequirements__VTable vtable;
};
struct XProgression__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XProgression__StaticFields {
};
struct XProgression__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XProgression__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XProgression__VTable vtable;
};
struct XAchievement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XAchievement__StaticFields {
};
struct XAchievement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XAchievement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XAchievement__VTable vtable;
};
struct XAchievements__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XAchievements__StaticFields {
};
struct XAchievements__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XAchievements__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XAchievements__VTable vtable;
};

enum XProgressState__Enum : int32_t {
  XProgressState__Enum_Unknown = 0,
  XProgressState__Enum_Achieved = 1,
  XProgressState__Enum_NotStarted = 2,
  XProgressState__Enum_InProgress = 3,
};
struct XProgressState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XProgressState__Enum value;
};

struct __declspec(align(8)) XalAchievements__Fields {
  bool _IsSynchronising_k__BackingField;
  bool _HasSynchronised_k__BackingField;
  struct CacheData__Array * m_cachedData;
};
struct XalAchievements {
  struct XalAchievements__Class *klass;
  struct MonitorData *monitor;
  struct XalAchievements__Fields fields;
};
struct XalAchievements__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_IsSynchronising;
  VirtualInvokeData get_HasSynchronised;
  VirtualInvokeData AwardedOnServer;
  VirtualInvokeData AwardOnServer;
  VirtualInvokeData UpdateFromServer;
  VirtualInvokeData Clear;
};
struct XalAchievements__StaticFields {
  bool _Disable_k__BackingField;
  bool m_wasLastCall401;
  struct String * _signature;
  struct String * _token;
};
struct XalAchievements__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalAchievements__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalAchievements__VTable vtable;
};

struct __declspec(align(8)) List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Fields {
  struct XalHttpHeader__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
  struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Fields fields;
};
struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
  struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields {
};
struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable vtable;
};
struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable {
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
struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields {
  struct XalHttpHeader__Array * _emptyArray;
};
struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable vtable;
};

struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
  struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields {
};
struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader___VTable vtable;
};

struct __declspec(align(8)) XalAchievements_c_DisplayClass19_0__Fields {
  struct String * fullAddress;
  struct String * body;
  struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * headers;
  struct XalAchievements * __4__this;
  struct CacheData * data;
  struct Action_1_String_ * __9__2;
};
struct XalAchievements_c_DisplayClass19_0 {
  struct XalAchievements_c_DisplayClass19_0__Class *klass;
  struct MonitorData *monitor;
  struct XalAchievements_c_DisplayClass19_0__Fields fields;
};
struct XalAchievements_c_DisplayClass19_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalAchievements_c_DisplayClass19_0__StaticFields {
};
struct XalAchievements_c_DisplayClass19_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalAchievements_c_DisplayClass19_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalAchievements_c_DisplayClass19_0__VTable vtable;
};

struct __declspec(align(8)) XalAchievements_c_DisplayClass20_0__Fields {
  struct CacheData * data;
};
struct XalAchievements_c_DisplayClass20_0 {
  struct XalAchievements_c_DisplayClass20_0__Class *klass;
  struct MonitorData *monitor;
  struct XalAchievements_c_DisplayClass20_0__Fields fields;
};
struct XalAchievements_c_DisplayClass20_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalAchievements_c_DisplayClass20_0__StaticFields {
};
struct XalAchievements_c_DisplayClass20_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalAchievements_c_DisplayClass20_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalAchievements_c_DisplayClass20_0__VTable vtable;
};

struct __declspec(align(8)) XalAchievements_c_DisplayClass21_0__Fields {
  struct String * fullAddress;
  struct List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * headers;
  struct XalAchievements * __4__this;
};
struct XalAchievements_c_DisplayClass21_0 {
  struct XalAchievements_c_DisplayClass21_0__Class *klass;
  struct MonitorData *monitor;
  struct XalAchievements_c_DisplayClass21_0__Fields fields;
};
struct XalAchievements_c_DisplayClass21_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalAchievements_c_DisplayClass21_0__StaticFields {
};
struct XalAchievements_c_DisplayClass21_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalAchievements_c_DisplayClass21_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalAchievements_c_DisplayClass21_0__VTable vtable;
};

struct __declspec(align(8)) XalAchievements_c_DisplayClass26_0__Fields {
  struct UnityWebRequest * request;
  struct Action_1_String_ * onError;
  struct Action_1_String_ * onComplete;
};
struct XalAchievements_c_DisplayClass26_0 {
  struct XalAchievements_c_DisplayClass26_0__Class *klass;
  struct MonitorData *monitor;
  struct XalAchievements_c_DisplayClass26_0__Fields fields;
};
struct XalAchievements_c_DisplayClass26_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalAchievements_c_DisplayClass26_0__StaticFields {
};
struct XalAchievements_c_DisplayClass26_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalAchievements_c_DisplayClass26_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalAchievements_c_DisplayClass26_0__VTable vtable;
};

struct __declspec(align(8)) XalAchievements_RunRequest_d_27__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct UnityWebRequest * webRequest;
  struct Action * onComplete;
};
struct XalAchievements_RunRequest_d_27 {
  struct XalAchievements_RunRequest_d_27__Class *klass;
  struct MonitorData *monitor;
  struct XalAchievements_RunRequest_d_27__Fields fields;
};
struct XalAchievements_RunRequest_d_27__VTable {
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
struct XalAchievements_RunRequest_d_27__StaticFields {
};
struct XalAchievements_RunRequest_d_27__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalAchievements_RunRequest_d_27__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalAchievements_RunRequest_d_27__VTable vtable;
};

struct __declspec(align(8)) XboxOneAchievements_1__Fields {
  struct CacheData__Array * m_cachedData;
  bool _IsSynchronising_k__BackingField;
  bool _HasSynchronised_k__BackingField;
};
struct XboxOneAchievements_1 {
  struct XboxOneAchievements_1__Class *klass;
  struct MonitorData *monitor;
  struct XboxOneAchievements_1__Fields fields;
};
struct XboxOneAchievements_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_IsSynchronising;
  VirtualInvokeData get_HasSynchronised;
  VirtualInvokeData AwardedOnServer;
  VirtualInvokeData AwardOnServer;
  VirtualInvokeData UpdateFromServer;
  VirtualInvokeData Clear;
};
struct XboxOneAchievements_1__StaticFields {
  bool _Disable_k__BackingField;
};
struct XboxOneAchievements_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XboxOneAchievements_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XboxOneAchievements_1__VTable vtable;
};

struct __declspec(align(8)) GrdkUser__Fields {
  struct Texture2D * _Image_k__BackingField;
  struct String * _GamerTag_k__BackingField;
  struct String * _Uid_k__BackingField;
};
struct GrdkUser {
  struct GrdkUser__Class *klass;
  struct MonitorData *monitor;
  struct GrdkUser__Fields fields;
};
struct GrdkUser__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Image;
  VirtualInvokeData get_GamerTag;
  VirtualInvokeData get_Uid;
  VirtualInvokeData get_SignInPrefix;
};
struct GrdkUser__StaticFields {
};
struct GrdkUser__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrdkUser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrdkUser__VTable vtable;
};

struct __declspec(align(8)) PlayFabFileDownloader__Fields {
  struct String * m_ownerId;
  struct String * m_fileName;
  enum RaceDataLeaderBoardType__Enum m_data;
  int32_t m_maxSize;
  struct TaskCompletionSource_1_System_Byte_ * m_taskCompletionSource;
};
struct PlayFabFileDownloader {
  struct PlayFabFileDownloader__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabFileDownloader__Fields fields;
};
struct PlayFabFileDownloader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabFileDownloader__StaticFields {
};
struct PlayFabFileDownloader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabFileDownloader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabFileDownloader__VTable vtable;
};

struct PlayFabFileDownloader_c {
  struct PlayFabFileDownloader_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata_ {
  struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Fields fields;
};
struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___VTable {
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
struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___StaticFields {
};
struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata___VTable vtable;
};
struct PlayFabFileDownloader_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabFileDownloader_c__StaticFields {
  struct PlayFabFileDownloader_c * __9;
  struct Func_2_System_Collections_Generic_KeyValuePair_2_PlayFab_DataModels_GetFileMetadata_ * __9__7_0;
};
struct PlayFabFileDownloader_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabFileDownloader_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabFileDownloader_c__VTable vtable;
};

struct __declspec(align(8)) PlayFabFileUploader__Fields {
  struct String * m_fileName;
  struct Byte__Array * m_data;
  struct String * m_ownerId;
  struct TaskCompletionSource_1_System_Boolean_ * m_taskCompletionSource;
};
struct PlayFabFileUploader {
  struct PlayFabFileUploader__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabFileUploader__Fields fields;
};
struct PlayFabFileUploader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabFileUploader__StaticFields {
};
struct PlayFabFileUploader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabFileUploader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabFileUploader__VTable vtable;
};

struct PlayFabFileUploader_c {
  struct PlayFabFileUploader_c__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabFileUploader_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabFileUploader_c__StaticFields {
  struct PlayFabFileUploader_c * __9;
  struct Action_1_PlayFab_DataModels_AbortFileUploadsResponse_ * __9__7_0;
  struct Action_1_PlayFab_PlayFabError_ * __9__7_1;
};
struct PlayFabFileUploader_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabFileUploader_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabFileUploader_c__VTable vtable;
};

struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Fields {
  struct Task__Fields _;
  struct RaceRequestResultEntry * m_result;
};
struct Task_1_SystemIntegration_Races_RaceRequestResultEntry_ {
  struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Class *klass;
  struct MonitorData *monitor;
  struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Fields fields;
};
struct __declspec(align(8)) TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Fields {
  struct CancellationToken m_defaultCancellationToken;
  struct TaskScheduler * m_defaultScheduler;
  enum TaskCreationOptions__Enum m_defaultCreationOptions;
  enum TaskContinuationOptions__Enum m_defaultContinuationOptions;
};
struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry_ {
  struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Class *klass;
  struct MonitorData *monitor;
  struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Fields fields;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25 {
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Class *klass;
  struct MonitorData *monitor;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Fields fields;
};
struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields {
};
struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry___VTable vtable;
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__VTable {
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
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__StaticFields {
};
struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25__VTable vtable;
};
struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData System_Threading_IThreadPoolWorkItem_MarkAborted;
  VirtualInvokeData get_IsCompleted;
  VirtualInvokeData System_IAsyncResult_get_AsyncWaitHandle;
  VirtualInvokeData get_AsyncState;
  VirtualInvokeData System_IAsyncResult_get_CompletedSynchronously;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_ShouldNotifyDebuggerOfWaitCompletion;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ShouldReplicate;
  VirtualInvokeData CreateReplicaTask;
  VirtualInvokeData get_SavedStateForNextReplica;
  VirtualInvokeData set_SavedStateFromPreviousReplica;
  VirtualInvokeData get_HandedOverChildReplica;
  VirtualInvokeData set_HandedOverChildReplica;
  VirtualInvokeData InnerInvoke;
};
struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields {
  struct TaskFactory_1_SystemIntegration_Races_RaceRequestResultEntry_ * s_Factory;
  struct Func_2_System_Threading_Tasks_Task_1_System_Threading_Tasks_Task_1__25 * TaskWhenAnyCast;
};
struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Task_1_SystemIntegration_Races_RaceRequestResultEntry___VTable vtable;
};

struct __declspec(align(8)) PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields {
  struct PlayFabRaceServiceProvider * __4__this;
  struct String * raceId;
  enum RaceDataLeaderBoardType__Enum type;
  enum LeaderboardFilter__Enum filter;
  struct RaceDataCache * dataCache;
  struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_ * tcs;
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0 {
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0__Fields fields;
};
struct __declspec(align(8)) TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Fields {
  struct Task_1_SystemIntegration_Races_RaceRequestResult_ * m_task;
};
struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_ {
  struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Class *klass;
  struct MonitorData *monitor;
  struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Fields fields;
};
struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___StaticFields {
};
struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult___VTable vtable;
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0__StaticFields {
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0__VTable vtable;
};

struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ {
  struct Task_1_SystemIntegration_Races_RaceRequestResult_ * m_task;
};
struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___Boxed {
  struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___Class *klass;
  struct MonitorData *monitor;
  struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ fields;
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d {
  int32_t __1__state;
  struct AsyncVoidMethodBuilder __t__builder;
  struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ * list;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0 * __4__this;
  struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ __u__1;
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Boxed {
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d fields;
};
struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnsafeOnCompleted;
  VirtualInvokeData OnCompleted;
};
struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___StaticFields {
};
struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult___VTable vtable;
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__StaticFields {
};
struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d__VTable vtable;
};

struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ {
  struct AsyncMethodBuilderCore m_coreState;
  struct Task_1_SystemIntegration_Races_RaceRequestResult_ * m_task;
};
struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Boxed {
  struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Class *klass;
  struct MonitorData *monitor;
  struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ fields;
};
struct PlayFabRaceServiceProvider_GetRaceData_d_10 {
  int32_t __1__state;
  struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult_ __t__builder;
  struct PlayFabRaceServiceProvider * __4__this;
  struct String * raceId;
  enum RaceDataLeaderBoardType__Enum type;
  enum LeaderboardFilter__Enum filter;
  struct PlayFabRaceServiceProvider_c_DisplayClass10_0 * __8__1;
  struct TaskCompletionSource_1_SystemIntegration_Races_RaceRequestResult_ * __7__wrap1;
  struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ __u__1;
};
struct PlayFabRaceServiceProvider_GetRaceData_d_10__Boxed {
  struct PlayFabRaceServiceProvider_GetRaceData_d_10__Class *klass;
  struct MonitorData *monitor;
  struct PlayFabRaceServiceProvider_GetRaceData_d_10 fields;
};
struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___StaticFields {
  struct Task_1_SystemIntegration_Races_RaceRequestResult_ * s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncTaskMethodBuilder_1_SystemIntegration_Races_RaceRequestResult___VTable vtable;
};
struct PlayFabRaceServiceProvider_GetRaceData_d_10__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData SetStateMachine;
};
struct PlayFabRaceServiceProvider_GetRaceData_d_10__StaticFields {
};
struct PlayFabRaceServiceProvider_GetRaceData_d_10__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabRaceServiceProvider_GetRaceData_d_10__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabRaceServiceProvider_GetRaceData_d_10__VTable vtable;
};

struct TaskAwaiter_1_SystemIntegration_Races_RaceRequestResultEntry_ {
  struct Task_1_SystemIntegration_Races_RaceRequestResultEntry__1 * m_task;
};}