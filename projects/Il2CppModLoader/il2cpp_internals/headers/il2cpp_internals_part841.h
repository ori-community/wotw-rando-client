namespace app {
struct UGCFileWriteStreamHandle_t__StaticFields {
  struct UGCFileWriteStreamHandle_t Invalid;
};
struct UGCFileWriteStreamHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UGCFileWriteStreamHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UGCFileWriteStreamHandle_t__VTable vtable;
};

enum EUGCReadAction__Enum : int32_t {
  EUGCReadAction__Enum_k_EUGCRead_ContinueReadingUntilFinished = 0,
  EUGCReadAction__Enum_k_EUGCRead_ContinueReading = 1,
  EUGCReadAction__Enum_k_EUGCRead_Close = 2,
};
struct EUGCReadAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EUGCReadAction__Enum value;
};

struct PublishedFileUpdateHandle_t {
  uint64_t m_PublishedFileUpdateHandle;
};
struct PublishedFileUpdateHandle_t__Boxed {
  struct PublishedFileUpdateHandle_t__Class *klass;
  struct MonitorData *monitor;
  struct PublishedFileUpdateHandle_t fields;
};
struct PublishedFileUpdateHandle_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct PublishedFileUpdateHandle_t__StaticFields {
  struct PublishedFileUpdateHandle_t Invalid;
};
struct PublishedFileUpdateHandle_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PublishedFileUpdateHandle_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PublishedFileUpdateHandle_t__VTable vtable;
};

enum EWorkshopVideoProvider__Enum : int32_t {
  EWorkshopVideoProvider__Enum_k_EWorkshopVideoProviderNone = 0,
  EWorkshopVideoProvider__Enum_k_EWorkshopVideoProviderYoutube = 1,
};
struct EWorkshopVideoProvider__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EWorkshopVideoProvider__Enum value;
};

enum EWorkshopFileAction__Enum : int32_t {
  EWorkshopFileAction__Enum_k_EWorkshopFileActionPlayed = 0,
  EWorkshopFileAction__Enum_k_EWorkshopFileActionCompleted = 1,
};
struct EWorkshopFileAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EWorkshopFileAction__Enum value;
};

enum EWorkshopEnumerationType__Enum : int32_t {
  EWorkshopEnumerationType__Enum_k_EWorkshopEnumerationTypeRankedByVote = 0,
  EWorkshopEnumerationType__Enum_k_EWorkshopEnumerationTypeRecent = 1,
  EWorkshopEnumerationType__Enum_k_EWorkshopEnumerationTypeTrending = 2,
  EWorkshopEnumerationType__Enum_k_EWorkshopEnumerationTypeFavoritesOfFriends = 3,
  EWorkshopEnumerationType__Enum_k_EWorkshopEnumerationTypeVotedByFriends = 4,
  EWorkshopEnumerationType__Enum_k_EWorkshopEnumerationTypeContentByFriends = 5,
  EWorkshopEnumerationType__Enum_k_EWorkshopEnumerationTypeRecentFromFollowedUsers = 6,
};
struct EWorkshopEnumerationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EWorkshopEnumerationType__Enum value;
};

struct ScreenshotHandle {
  uint32_t m_ScreenshotHandle;
};
struct ScreenshotHandle__Boxed {
  struct ScreenshotHandle__Class *klass;
  struct MonitorData *monitor;
  struct ScreenshotHandle fields;
};
struct ScreenshotHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct ScreenshotHandle__StaticFields {
  struct ScreenshotHandle Invalid;
};
struct ScreenshotHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScreenshotHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScreenshotHandle__VTable vtable;
};

enum EVRScreenshotType__Enum_1 : int32_t {
  EVRScreenshotType__Enum_1_k_EVRScreenshotType_None = 0,
  EVRScreenshotType__Enum_1_k_EVRScreenshotType_Mono = 1,
  EVRScreenshotType__Enum_1_k_EVRScreenshotType_Stereo = 2,
  EVRScreenshotType__Enum_1_k_EVRScreenshotType_MonoCubemap = 3,
  EVRScreenshotType__Enum_1_k_EVRScreenshotType_MonoPanorama = 4,
  EVRScreenshotType__Enum_1_k_EVRScreenshotType_StereoPanorama = 5,
};
struct EVRScreenshotType__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRScreenshotType__Enum_1 value;
};

enum EVoiceResult__Enum : int32_t {
  EVoiceResult__Enum_k_EVoiceResultOK = 0,
  EVoiceResult__Enum_k_EVoiceResultNotInitialized = 1,
  EVoiceResult__Enum_k_EVoiceResultNotRecording = 2,
  EVoiceResult__Enum_k_EVoiceResultNoData = 3,
  EVoiceResult__Enum_k_EVoiceResultBufferTooSmall = 4,
  EVoiceResult__Enum_k_EVoiceResultDataCorrupted = 5,
  EVoiceResult__Enum_k_EVoiceResultRestricted = 6,
  EVoiceResult__Enum_k_EVoiceResultUnsupportedCodec = 7,
  EVoiceResult__Enum_k_EVoiceResultReceiverOutOfDate = 8,
  EVoiceResult__Enum_k_EVoiceResultReceiverDidNotAnswer = 9,
};
struct EVoiceResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVoiceResult__Enum value;
};

enum ELeaderboardSortMethod__Enum : int32_t {
  ELeaderboardSortMethod__Enum_k_ELeaderboardSortMethodNone = 0,
  ELeaderboardSortMethod__Enum_k_ELeaderboardSortMethodAscending = 1,
  ELeaderboardSortMethod__Enum_k_ELeaderboardSortMethodDescending = 2,
};
struct ELeaderboardSortMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ELeaderboardSortMethod__Enum value;
};
enum ELeaderboardDisplayType__Enum : int32_t {
  ELeaderboardDisplayType__Enum_k_ELeaderboardDisplayTypeNone = 0,
  ELeaderboardDisplayType__Enum_k_ELeaderboardDisplayTypeNumeric = 1,
  ELeaderboardDisplayType__Enum_k_ELeaderboardDisplayTypeTimeSeconds = 2,
  ELeaderboardDisplayType__Enum_k_ELeaderboardDisplayTypeTimeMilliSeconds = 3,
};
struct ELeaderboardDisplayType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ELeaderboardDisplayType__Enum value;
};

struct SteamLeaderboard_t {
  uint64_t m_SteamLeaderboard;
};
struct SteamLeaderboard_t__Boxed {
  struct SteamLeaderboard_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamLeaderboard_t fields;
};
struct SteamLeaderboard_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SteamLeaderboard_t__StaticFields {
};
struct SteamLeaderboard_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamLeaderboard_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamLeaderboard_t__VTable vtable;
};

enum ELeaderboardDataRequest__Enum : int32_t {
  ELeaderboardDataRequest__Enum_k_ELeaderboardDataRequestGlobal = 0,
  ELeaderboardDataRequest__Enum_k_ELeaderboardDataRequestGlobalAroundUser = 1,
  ELeaderboardDataRequest__Enum_k_ELeaderboardDataRequestFriends = 2,
  ELeaderboardDataRequest__Enum_k_ELeaderboardDataRequestUsers = 3,
};
struct ELeaderboardDataRequest__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ELeaderboardDataRequest__Enum value;
};

struct SteamLeaderboardEntries_t {
  uint64_t m_SteamLeaderboardEntries;
};
struct SteamLeaderboardEntries_t__Boxed {
  struct SteamLeaderboardEntries_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamLeaderboardEntries_t fields;
};
struct LeaderboardEntry_t {
  struct CSteamID m_steamIDUser;
  int32_t m_nGlobalRank;
  int32_t m_nScore;
  int32_t m_cDetails;
  struct UGCHandle_t m_hUGC;
};
struct LeaderboardEntry_t__Boxed {
  struct LeaderboardEntry_t__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboardEntry_t fields;
};
struct SteamLeaderboardEntries_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SteamLeaderboardEntries_t__StaticFields {
};
struct SteamLeaderboardEntries_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamLeaderboardEntries_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamLeaderboardEntries_t__VTable vtable;
};
struct LeaderboardEntry_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderboardEntry_t__StaticFields {
};
struct LeaderboardEntry_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboardEntry_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboardEntry_t__VTable vtable;
};

enum ELeaderboardUploadScoreMethod__Enum : int32_t {
  ELeaderboardUploadScoreMethod__Enum_k_ELeaderboardUploadScoreMethodNone = 0,
  ELeaderboardUploadScoreMethod__Enum_k_ELeaderboardUploadScoreMethodKeepBest = 1,
  ELeaderboardUploadScoreMethod__Enum_k_ELeaderboardUploadScoreMethodForceUpdate = 2,
};
struct ELeaderboardUploadScoreMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ELeaderboardUploadScoreMethod__Enum value;
};

struct InteropHelp_UTF8StringHandle__Fields {
  struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
};
struct InteropHelp_UTF8StringHandle {
  struct InteropHelp_UTF8StringHandle__Class *klass;
  struct MonitorData *monitor;
  struct InteropHelp_UTF8StringHandle__Fields fields;
};
struct InteropHelp_UTF8StringHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_IsInvalid;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData ReleaseHandle;
};
struct InteropHelp_UTF8StringHandle__StaticFields {
};
struct InteropHelp_UTF8StringHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteropHelp_UTF8StringHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteropHelp_UTF8StringHandle__VTable vtable;
};

enum EServerMode__Enum : int32_t {
  EServerMode__Enum_eServerModeInvalid = 0,
  EServerMode__Enum_eServerModeNoAuthentication = 1,
  EServerMode__Enum_eServerModeAuthentication = 2,
  EServerMode__Enum_eServerModeAuthenticationAndSecure = 3,
};
struct EServerMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EServerMode__Enum value;
};

struct __declspec(align(8)) CCallbackBase__Fields {
  void * m_vfptr;
  uint8_t m_nCallbackFlags;
  int32_t m_iCallback;
};
struct CCallbackBase {
  struct CCallbackBase__Class *klass;
  struct MonitorData *monitor;
  struct CCallbackBase__Fields fields;
};
struct CCallbackBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CCallbackBase__StaticFields {
};
struct CCallbackBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCallbackBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCallbackBase__VTable vtable;
};

struct __declspec(align(8)) CCallbackBaseVTable__Fields {
  struct CCallbackBaseVTable_RunCRDel * m_RunCallResult;
  struct CCallbackBaseVTable_RunCBDel * m_RunCallback;
  struct CCallbackBaseVTable_GetCallbackSizeBytesDel * m_GetCallbackSizeBytes;
};
struct CCallbackBaseVTable {
  struct CCallbackBaseVTable__Class *klass;
  struct MonitorData *monitor;
  struct CCallbackBaseVTable__Fields fields;
};
struct CCallbackBaseVTable_RunCRDel__Fields {
  struct MulticastDelegate__Fields _;
};
struct CCallbackBaseVTable_RunCRDel {
  struct CCallbackBaseVTable_RunCRDel__Class *klass;
  struct MonitorData *monitor;
  struct CCallbackBaseVTable_RunCRDel__Fields fields;
};
struct CCallbackBaseVTable_RunCBDel__Fields {
  struct MulticastDelegate__Fields _;
};
struct CCallbackBaseVTable_RunCBDel {
  struct CCallbackBaseVTable_RunCBDel__Class *klass;
  struct MonitorData *monitor;
  struct CCallbackBaseVTable_RunCBDel__Fields fields;
};
struct CCallbackBaseVTable_GetCallbackSizeBytesDel__Fields {
  struct MulticastDelegate__Fields _;
};
struct CCallbackBaseVTable_GetCallbackSizeBytesDel {
  struct CCallbackBaseVTable_GetCallbackSizeBytesDel__Class *klass;
  struct MonitorData *monitor;
  struct CCallbackBaseVTable_GetCallbackSizeBytesDel__Fields fields;
};
struct CCallbackBaseVTable_RunCRDel__VTable {
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
struct CCallbackBaseVTable_RunCRDel__StaticFields {
};
struct CCallbackBaseVTable_RunCRDel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCallbackBaseVTable_RunCRDel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCallbackBaseVTable_RunCRDel__VTable vtable;
};
struct CCallbackBaseVTable_RunCBDel__VTable {
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
struct CCallbackBaseVTable_RunCBDel__StaticFields {
};
struct CCallbackBaseVTable_RunCBDel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCallbackBaseVTable_RunCBDel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCallbackBaseVTable_RunCBDel__VTable vtable;
};
struct CCallbackBaseVTable_GetCallbackSizeBytesDel__VTable {
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
struct CCallbackBaseVTable_GetCallbackSizeBytesDel__StaticFields {
};
struct CCallbackBaseVTable_GetCallbackSizeBytesDel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCallbackBaseVTable_GetCallbackSizeBytesDel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCallbackBaseVTable_GetCallbackSizeBytesDel__VTable vtable;
};
struct CCallbackBaseVTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CCallbackBaseVTable__StaticFields {
};
struct CCallbackBaseVTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCallbackBaseVTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCallbackBaseVTable__VTable vtable;
};

struct CallbackIdentities {
  struct CallbackIdentities__Class *klass;
  struct MonitorData *monitor;
};
struct CallbackIdentities__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CallbackIdentities__StaticFields {
};
struct CallbackIdentities__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CallbackIdentities__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CallbackIdentities__VTable vtable;
};

struct __declspec(align(8)) CallbackIdentityAttribute__Fields {
  int32_t _Identity_k__BackingField;
};
struct CallbackIdentityAttribute {
  struct CallbackIdentityAttribute__Class *klass;
  struct MonitorData *monitor;
  struct CallbackIdentityAttribute__Fields fields;
};
struct CallbackIdentityAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CallbackIdentityAttribute__StaticFields {
};
struct CallbackIdentityAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CallbackIdentityAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CallbackIdentityAttribute__VTable vtable;
};

struct InteropHelp {
  struct InteropHelp__Class *klass;
  struct MonitorData *monitor;
};
struct InteropHelp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteropHelp__StaticFields {
};
struct InteropHelp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteropHelp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteropHelp__VTable vtable;
};

struct __declspec(align(8)) InteropHelp_SteamParamStringArray__Fields {
  struct IntPtr__Array * m_Strings;
  void * m_ptrStrings;
  void * m_pSteamParamStringArray;
};
struct InteropHelp_SteamParamStringArray {
  struct InteropHelp_SteamParamStringArray__Class *klass;
  struct MonitorData *monitor;
  struct InteropHelp_SteamParamStringArray__Fields fields;
};
struct InteropHelp_SteamParamStringArray__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InteropHelp_SteamParamStringArray__StaticFields {
};
struct InteropHelp_SteamParamStringArray__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteropHelp_SteamParamStringArray__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteropHelp_SteamParamStringArray__VTable vtable;
};

struct __declspec(align(8)) MMKVPMarshaller__Fields {
  void * m_pNativeArray;
  void * m_pArrayEntries;
};
struct MMKVPMarshaller {
  struct MMKVPMarshaller__Class *klass;
  struct MonitorData *monitor;
  struct MMKVPMarshaller__Fields fields;
};
struct MMKVPMarshaller__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MMKVPMarshaller__StaticFields {
};
struct MMKVPMarshaller__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MMKVPMarshaller__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MMKVPMarshaller__VTable vtable;
};

struct DllCheck {
  struct DllCheck__Class *klass;
  struct MonitorData *monitor;
};
struct DllCheck__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DllCheck__StaticFields {
};
struct DllCheck__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DllCheck__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DllCheck__VTable vtable;
};

struct MonoPInvokeCallbackAttribute_3 {
  struct MonoPInvokeCallbackAttribute_3__Class *klass;
  struct MonitorData *monitor;
};
struct MonoPInvokeCallbackAttribute_3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MonoPInvokeCallbackAttribute_3__StaticFields {
};
struct MonoPInvokeCallbackAttribute_3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoPInvokeCallbackAttribute_3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoPInvokeCallbackAttribute_3__VTable vtable;
};

struct SteamAPI_CheckCallbackRegistered_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct SteamAPI_CheckCallbackRegistered_t {
  struct SteamAPI_CheckCallbackRegistered_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamAPI_CheckCallbackRegistered_t__Fields fields;
};
struct SteamAPI_CheckCallbackRegistered_t__VTable {
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
struct SteamAPI_CheckCallbackRegistered_t__StaticFields {
};
struct SteamAPI_CheckCallbackRegistered_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamAPI_CheckCallbackRegistered_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamAPI_CheckCallbackRegistered_t__VTable vtable;
};

enum CGameID_EGameIDType__Enum : int32_t {
  CGameID_EGameIDType__Enum_k_EGameIDTypeApp = 0,
  CGameID_EGameIDType__Enum_k_EGameIDTypeGameMod = 1,
  CGameID_EGameIDType__Enum_k_EGameIDTypeShortcut = 2,
  CGameID_EGameIDType__Enum_k_EGameIDTypeP2P = 3,
};
struct CGameID_EGameIDType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CGameID_EGameIDType__Enum value;
};

struct ManifestId_t {
  uint64_t m_ManifestId;
};
struct ManifestId_t__Boxed {
  struct ManifestId_t__Class *klass;
  struct MonitorData *monitor;
  struct ManifestId_t fields;
};
struct ManifestId_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct ManifestId_t__StaticFields {
  struct ManifestId_t Invalid;
};
struct ManifestId_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ManifestId_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ManifestId_t__VTable vtable;
};

struct RTime32 {
  uint32_t m_RTime32;
};
struct RTime32__Boxed {
  struct RTime32__Class *klass;
  struct MonitorData *monitor;
  struct RTime32 fields;
};
struct RTime32__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct RTime32__StaticFields {
};
struct RTime32__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RTime32__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RTime32__VTable vtable;
};

struct SiteId_t {
  uint64_t m_SiteId;
};
struct SiteId_t__Boxed {
  struct SiteId_t__Class *klass;
  struct MonitorData *monitor;
  struct SiteId_t fields;
};
struct SiteId_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData CompareTo;
};
struct SiteId_t__StaticFields {
  struct SiteId_t Invalid;
};
struct SiteId_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SiteId_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SiteId_t__VTable vtable;
};

struct Action_1_Steamworks_UserAchievementStored_t___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Steamworks_UserAchievementStored_t_ {
  struct Action_1_Steamworks_UserAchievementStored_t___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Steamworks_UserAchievementStored_t___Fields fields;
};
struct Action_1_Steamworks_UserAchievementStored_t___VTable {
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
struct Action_1_Steamworks_UserAchievementStored_t___StaticFields {
};
struct Action_1_Steamworks_UserAchievementStored_t___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Steamworks_UserAchievementStored_t___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Steamworks_UserAchievementStored_t___VTable vtable;
};

struct Action_2_Steamworks_UserAchievementStored_t_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Steamworks_UserAchievementStored_t_Boolean_ {
  struct Action_2_Steamworks_UserAchievementStored_t_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Steamworks_UserAchievementStored_t_Boolean___Fields fields;
};
struct Action_2_Steamworks_UserAchievementStored_t_Boolean___VTable {
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
struct Action_2_Steamworks_UserAchievementStored_t_Boolean___StaticFields {
};
struct Action_2_Steamworks_UserAchievementStored_t_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_Steamworks_UserAchievementStored_t_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_Steamworks_UserAchievementStored_t_Boolean___VTable vtable;
};

struct Action_1_Steamworks_UserStatsReceived_t___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Steamworks_UserStatsReceived_t_ {
  struct Action_1_Steamworks_UserStatsReceived_t___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Steamworks_UserStatsReceived_t___Fields fields;
};
struct Action_1_Steamworks_UserStatsReceived_t___VTable {
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
struct Action_1_Steamworks_UserStatsReceived_t___StaticFields {
};
struct Action_1_Steamworks_UserStatsReceived_t___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Steamworks_UserStatsReceived_t___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Steamworks_UserStatsReceived_t___VTable vtable;
};

struct Action_2_Steamworks_UserStatsReceived_t_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Steamworks_UserStatsReceived_t_Boolean_ {
  struct Action_2_Steamworks_UserStatsReceived_t_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Steamworks_UserStatsReceived_t_Boolean___Fields fields;
};
struct Action_2_Steamworks_UserStatsReceived_t_Boolean___VTable {
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
struct Action_2_Steamworks_UserStatsReceived_t_Boolean___StaticFields {
};
struct Action_2_Steamworks_UserStatsReceived_t_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_Steamworks_UserStatsReceived_t_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_Steamworks_UserStatsReceived_t_Boolean___VTable vtable;
};

struct Action_1_Steamworks_UserStatsStored_t___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Steamworks_UserStatsStored_t_ {
  struct Action_1_Steamworks_UserStatsStored_t___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Steamworks_UserStatsStored_t___Fields fields;
};
struct Action_1_Steamworks_UserStatsStored_t___VTable {
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
struct Action_1_Steamworks_UserStatsStored_t___StaticFields {
};
struct Action_1_Steamworks_UserStatsStored_t___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Steamworks_UserStatsStored_t___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Steamworks_UserStatsStored_t___VTable vtable;
};

struct Action_2_Steamworks_UserStatsStored_t_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Steamworks_UserStatsStored_t_Boolean_ {
  struct Action_2_Steamworks_UserStatsStored_t_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Steamworks_UserStatsStored_t_Boolean___Fields fields;
};
struct Action_2_Steamworks_UserStatsStored_t_Boolean___VTable {
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
struct Action_2_Steamworks_UserStatsStored_t_Boolean___StaticFields {
};
struct Action_2_Steamworks_UserStatsStored_t_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_Steamworks_UserStatsStored_t_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_Steamworks_UserStatsStored_t_Boolean___VTable vtable;
};

enum ButtonAxisInput_Mode__Enum : int32_t {
  ButtonAxisInput_Mode__Enum_Positive = 0,
  ButtonAxisInput_Mode__Enum_Negative = 1,
};
struct ButtonAxisInput_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ButtonAxisInput_Mode__Enum value;
};
struct ButtonAxisInput__Fields {
  struct CachedAxisInput__Fields _;
  struct IButtonInput * m_button;
  enum ButtonAxisInput_Mode__Enum m_mode;
};}