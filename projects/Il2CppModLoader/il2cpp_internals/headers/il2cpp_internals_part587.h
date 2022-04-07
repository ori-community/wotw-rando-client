namespace app {
struct PurchaseThingScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData Hide;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_NavigationManager;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData PurchaseInput;
  VirtualInvokeData PurchaseBegin;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
  VirtualInvokeData __unknown_9;
};
struct PurchaseThingScreen__StaticFields {
};
struct PurchaseThingScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PurchaseThingScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PurchaseThingScreen__VTable vtable;
};

struct RaceLeaderboardEntry__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * m_rankMessageBox;
  struct MessageBox * m_nameMessageBox;
  struct MessageBox * m_timeMessageBox;
  struct Color m_isSelfColor;
  struct Color m_defaultColor;
  struct String * _PlayerName_k__BackingField;
  bool IsLiveEntry;
  struct String * _UserID_k__BackingField;
};
struct RaceLeaderboardEntry {
  struct RaceLeaderboardEntry__Class *klass;
  struct MonitorData *monitor;
  struct RaceLeaderboardEntry__Fields fields;
};
struct RaceLeaderboardEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderboardEntry__StaticFields {
};
struct RaceLeaderboardEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardEntry__VTable vtable;
};

enum RaceContentType__Enum : int32_t {
  RaceContentType__Enum_Race = 0,
  RaceContentType__Enum_Boss = 1,
  RaceContentType__Enum_Shrine = 2,
  RaceContentType__Enum_Escape = 3,
};
struct RaceContentType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceContentType__Enum value;
};
struct RaceLeaderboardScreen__Fields {
  struct MonoBehaviour__Fields _;
  struct RaceLeaderboardEntry * m_leaderboardEntryPrefab;
  struct RaceLeaderboardEntry * m_personalEntry;
  struct Transform * m_pivot;
  struct MessageProvider * m_toggleMessageProvider;
  struct MessageProvider * m_toggleMyScoreMessageProvider;
  struct MessageProvider * m_toggleHighScoreMessageProvider;
  struct MessageProvider * m_leaderboardFilterFriendsMessageProvider;
  struct MessageProvider * m_leaderboardFilterGlobalMessageProvider;
  struct MessageBox * m_toggleMessageBox;
  struct MessageBox * m_toggleMessageBoxForXbox;
  struct MessageBox * m_toggleMessageBoxForSwitch;
  struct MessageProvider * m_leaderboardFilterMessageProvider;
  struct MessageBox * m_leaderboardToggleMessageBox;
  struct MessageBox * m_leaderboardToggleMessageBoxForXbox;
  struct MessageBox * m_titleMessageBox;
  struct MessageProvider * DebugOldGhostMessage;
  struct CleverMenuItemSelectionManager * m_downloadingPopup;
  struct LegacyTransparencyAnimator * m_selectTransparencyAnimator;
  struct LegacyTransparencyAnimator * m_watchTransparencyAnimator;
  struct LegacyTransparencyAnimator * m_selectXboxTransparencyAnimator;
  struct LegacyTransparencyAnimator * m_watchXboxTransparencyAnimator;
  struct LegacyTransparencyAnimator * m_selectSwitchTransparencyAnimator;
  struct LegacyTransparencyAnimator * m_watchSwitchTransparencyAnimator;
  struct LegacyTransparencyAnimator * m_showCardXboxTransparencyAnimator;
  struct List_1_RaceLeaderboardEntry_ * m_entries;
  struct List_1_Moon_Race_LeaderBoardEntry_ * m_leaderboard;
  enum RaceContentType__Enum m_raceContentType;
  struct CleverMenuItemSelectionManager * m_selectionManager;
  struct Action_2_String_Boolean_ * m_onSelected;
  struct Action * m_onCancelDownload;
};
struct RaceLeaderboardScreen {
  struct RaceLeaderboardScreen__Class *klass;
  struct MonitorData *monitor;
  struct RaceLeaderboardScreen__Fields fields;
};
struct __declspec(align(8)) List_1_RaceLeaderboardEntry___Fields {
  struct RaceLeaderboardEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RaceLeaderboardEntry_ {
  struct List_1_RaceLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RaceLeaderboardEntry___Fields fields;
};
struct RaceLeaderboardEntry__Array {
  struct RaceLeaderboardEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceLeaderboardEntry * vector[32];
};
struct IEnumerator_1_RaceLeaderboardEntry_ {
  struct IEnumerator_1_RaceLeaderboardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Race_LeaderBoardEntry___Fields {
  struct LeaderBoardEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Race_LeaderBoardEntry_ {
  struct List_1_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Race_LeaderBoardEntry___Fields fields;
};
struct __declspec(align(8)) LeaderBoardEntry__Fields {
  struct String * DisplayName;
  int32_t Time;
  int32_t Position;
  bool IsMe;
  struct String * Replay;
  struct String * UserID;
  bool IsSteamEntry;
  bool IsLiveEntry;
};
struct LeaderBoardEntry {
  struct LeaderBoardEntry__Class *klass;
  struct MonitorData *monitor;
  struct LeaderBoardEntry__Fields fields;
};
struct LeaderBoardEntry__Array {
  struct LeaderBoardEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LeaderBoardEntry * vector[32];
};
struct IEnumerator_1_Moon_Race_LeaderBoardEntry_ {
  struct IEnumerator_1_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_RaceLeaderboardEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_RaceLeaderboardEntry___StaticFields {
};
struct IEnumerator_1_RaceLeaderboardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_RaceLeaderboardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_RaceLeaderboardEntry___VTable vtable;
};
struct List_1_RaceLeaderboardEntry___VTable {
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
struct List_1_RaceLeaderboardEntry___StaticFields {
  struct RaceLeaderboardEntry__Array * _emptyArray;
};
struct List_1_RaceLeaderboardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_RaceLeaderboardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_RaceLeaderboardEntry___VTable vtable;
};
struct LeaderBoardEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderBoardEntry__StaticFields {
};
struct LeaderBoardEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderBoardEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderBoardEntry__VTable vtable;
};
struct IEnumerator_1_Moon_Race_LeaderBoardEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Race_LeaderBoardEntry___StaticFields {
};
struct IEnumerator_1_Moon_Race_LeaderBoardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Race_LeaderBoardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Race_LeaderBoardEntry___VTable vtable;
};
struct List_1_Moon_Race_LeaderBoardEntry___VTable {
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
struct List_1_Moon_Race_LeaderBoardEntry___StaticFields {
  struct LeaderBoardEntry__Array * _emptyArray;
};
struct List_1_Moon_Race_LeaderBoardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Race_LeaderBoardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Race_LeaderBoardEntry___VTable vtable;
};
struct RaceLeaderboardScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderboardScreen__StaticFields {
};
struct RaceLeaderboardScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardScreen__VTable vtable;
};

struct IEnumerable_1_Moon_Race_LeaderBoardEntry_ {
  struct IEnumerable_1_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Race_LeaderBoardEntry___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Race_LeaderBoardEntry___StaticFields {
};
struct IEnumerable_1_Moon_Race_LeaderBoardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Race_LeaderBoardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Race_LeaderBoardEntry___VTable vtable;
};

struct RaceLeaderboardScreen_c {
  struct RaceLeaderboardScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_Moon_Race_LeaderBoardEntry___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_Moon_Race_LeaderBoardEntry_ {
  struct Comparison_1_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_Moon_Race_LeaderBoardEntry___Fields fields;
};
struct Func_2_Moon_Race_LeaderBoardEntry_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Moon_Race_LeaderBoardEntry_Int32_ {
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32___Fields fields;
};
struct Predicate_1_Moon_Race_LeaderBoardEntry___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_Moon_Race_LeaderBoardEntry_ {
  struct Predicate_1_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_Moon_Race_LeaderBoardEntry___Fields fields;
};
struct Comparison_1_Moon_Race_LeaderBoardEntry___VTable {
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
struct Comparison_1_Moon_Race_LeaderBoardEntry___StaticFields {
};
struct Comparison_1_Moon_Race_LeaderBoardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_Moon_Race_LeaderBoardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_Moon_Race_LeaderBoardEntry___VTable vtable;
};
struct Func_2_Moon_Race_LeaderBoardEntry_Int32___VTable {
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
struct Func_2_Moon_Race_LeaderBoardEntry_Int32___StaticFields {
};
struct Func_2_Moon_Race_LeaderBoardEntry_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32___VTable vtable;
};
struct Predicate_1_Moon_Race_LeaderBoardEntry___VTable {
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
struct Predicate_1_Moon_Race_LeaderBoardEntry___StaticFields {
};
struct Predicate_1_Moon_Race_LeaderBoardEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_Moon_Race_LeaderBoardEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_Moon_Race_LeaderBoardEntry___VTable vtable;
};
struct RaceLeaderboardScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderboardScreen_c__StaticFields {
  struct RaceLeaderboardScreen_c * __9;
  struct Comparison_1_Moon_Race_LeaderBoardEntry_ * __9__46_0;
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32_ * __9__55_0;
  struct Func_2_Moon_Race_LeaderBoardEntry_Int32_ * __9__55_1;
  struct Predicate_1_Moon_Race_LeaderBoardEntry_ * __9__55_2;
  struct Action_2_String_Boolean_ * __9__64_0;
  struct Action * __9__64_1;
};
struct RaceLeaderboardScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardScreen_c__VTable vtable;
};

enum RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum : int32_t {
  RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum_NotConnected = 0,
  RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum_Connected = 1,
  RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum_Connecting = 2,
  RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum_Invalid = 3,
  RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum_TryAgain = 4,
  RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum_NoToken = 5,
};
struct RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum value;
};
struct RaceLeaderboardsTitlescreenController__Fields {
  struct MonoBehaviour__Fields _;
  struct RaceLeaderboardScreen * RaceLeaderboardScreen;
  bool m_isSyncing;
  int32_t m_entriesCount;
  struct RaceSettings * m_raceSettings;
  struct String * m_raceName;
  float m_inactiveTime;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * DownloadingPopup;
  struct GameObject * NoEntriesText;
  struct GameObject * NoFriendsText;
  struct INetworkConnectivityChecker * m_netConnectivityChecker;
  struct GameObject * NotConnected;
  struct GameObject * Connecting;
  struct GameObject * TryAgain;
  struct GameObject * ConnectedNoNsaId;
  enum RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum m_handlerState;
};
struct RaceLeaderboardsTitlescreenController {
  struct RaceLeaderboardsTitlescreenController__Class *klass;
  struct MonitorData *monitor;
  struct RaceLeaderboardsTitlescreenController__Fields fields;
};
struct RaceSettings__Fields {
  struct ScriptableObject__Fields _;
  enum RaceContentType__Enum type;
  bool IsPlayable;
  struct String * LeaderboardsID;
  bool SeparateDifficultyLeaderboards;
  struct Texture2D * RaceIcon;
  struct MessageProvider * Title;
  struct SceneMetaData * scene;
  struct SceneMetaData * overrideGoToScene;
  struct List_1_SceneMetaData_ * RequiredScenes;
  struct MoonReference_1_ISerializedUberState_ * Descriptor;
  int32_t MinDesiredValue;
  int32_t MaxDesiredValue;
  struct MoonReference_1_SerializedIntUberState_ * LeaderboardPlaceState;
};
struct RaceSettings {
  struct RaceSettings__Class *klass;
  struct MonitorData *monitor;
  struct RaceSettings__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_ISerializedUberState___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ISerializedUberState_ * m_cachedProxyType;
  struct ISerializedUberState * m_volatileValue;
};
struct MoonReference_1_ISerializedUberState_ {
  struct MoonReference_1_ISerializedUberState___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ISerializedUberState___Fields fields;
};
struct IMoonType_1_ISerializedUberState_ {
  struct IMoonType_1_ISerializedUberState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonReference_1_SerializedIntUberState___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_SerializedIntUberState_ * m_cachedProxyType;
  struct SerializedIntUberState * m_volatileValue;
};
struct MoonReference_1_SerializedIntUberState_ {
  struct MoonReference_1_SerializedIntUberState___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_SerializedIntUberState___Fields fields;
};
struct IMoonType_1_SerializedIntUberState_ {
  struct IMoonType_1_SerializedIntUberState___Class *klass;
  struct MonitorData *monitor;
};
struct INetworkConnectivityChecker {
  struct INetworkConnectivityChecker__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) LeaderBoardService__Fields {
  struct Database * Database;
};
struct LeaderBoardService {
  struct LeaderBoardService__Class *klass;
  struct MonitorData *monitor;
  struct LeaderBoardService__Fields fields;
};
struct __declspec(align(8)) Database__Fields {
  struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ * LeaderBoards;
  struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry_ * m_bestLocalTimes;
};
struct Database {
  struct Database__Class *klass;
  struct MonitorData *monitor;
  struct Database__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_Moon_Race_RaceLeaderBoard___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ {
  struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct RaceLeaderBoard * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard_ vector[32];
};
struct __declspec(align(8)) RaceLeaderBoard__Fields {
  bool IsSyncing;
  struct List_1_Moon_Race_LeaderBoardEntry_ * Entries;
};
struct RaceLeaderBoard {
  struct RaceLeaderBoard__Class *klass;
  struct MonitorData *monitor;
  struct RaceLeaderBoard__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___Fields {
  struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___Fields {
  struct Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___Fields fields;
};
struct RaceLeaderBoard__Array {
  struct RaceLeaderBoard__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceLeaderBoard * vector[32];
};
struct IEnumerator_1_Moon_Race_RaceLeaderBoard_ {
  struct IEnumerator_1_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Race_RaceLeaderBoard_ {
  struct ICollection_1_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard_ {
  struct String * key;
  struct RaceLeaderBoard * value;
};
struct KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard___Boxed {
  struct KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard_ fields;
};
struct KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard___Array {
  struct KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Race_RaceLeaderBoard_ {
  struct IEnumerable_1_Moon_Race_RaceLeaderBoard___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_String_Moon_Race_LeaderBoardEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_LeaderBoardEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_LeaderBoardEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry_ {
  struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct LeaderBoardEntry * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_LeaderBoardEntry_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_LeaderBoardEntry___Fields {
  struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_LeaderBoardEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_LeaderBoardEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_LeaderBoardEntry___Fields {
  struct Dictionary_2_System_String_Moon_Race_LeaderBoardEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_LeaderBoardEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_LeaderBoardEntry___Fields fields;
};
struct ICollection_1_Moon_Race_LeaderBoardEntry_ {
  struct ICollection_1_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry_ {
  struct String * key;
  struct LeaderBoardEntry * value;
};
struct KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry___Boxed {
  struct KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry_ fields;
};
struct KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry___Array {
  struct KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Race_LeaderBoardEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_ISerializedUberState___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ISerializedUberState___StaticFields {
};
struct IMoonType_1_ISerializedUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ISerializedUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ISerializedUberState___VTable vtable;
};
struct MoonReference_1_ISerializedUberState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_ISerializedUberState___StaticFields {
};
struct MoonReference_1_ISerializedUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ISerializedUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ISerializedUberState___VTable vtable;
};
struct IMoonType_1_SerializedIntUberState___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_SerializedIntUberState___StaticFields {
};
struct IMoonType_1_SerializedIntUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_SerializedIntUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_SerializedIntUberState___VTable vtable;
};
struct MoonReference_1_SerializedIntUberState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_SerializedIntUberState___StaticFields {
};
struct MoonReference_1_SerializedIntUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_SerializedIntUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_SerializedIntUberState___VTable vtable;
};
struct RaceSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceSettings__StaticFields {
};
struct RaceSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceSettings__VTable vtable;
};
struct INetworkConnectivityChecker__VTable {
  VirtualInvokeData set_RunningInBackground;
  VirtualInvokeData get_CanSendNetCommunications;
  VirtualInvokeData ResolveNoConnectionIssue;
  VirtualInvokeData IsResolvingIssues;
  VirtualInvokeData get_HasToken;
  VirtualInvokeData get_HasConnection;
};
struct INetworkConnectivityChecker__StaticFields {
};
struct INetworkConnectivityChecker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INetworkConnectivityChecker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INetworkConnectivityChecker__VTable vtable;
};
struct RaceLeaderboardsTitlescreenController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderboardsTitlescreenController__StaticFields {
};
struct RaceLeaderboardsTitlescreenController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderboardsTitlescreenController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderboardsTitlescreenController__VTable vtable;
};
struct RaceLeaderBoard__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceLeaderBoard__StaticFields {
};
struct RaceLeaderBoard__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceLeaderBoard__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceLeaderBoard__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Race_RaceLeaderBoard___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Race_RaceLeaderBoard___VTable vtable;
};
struct IEnumerator_1_Moon_Race_RaceLeaderBoard___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Race_RaceLeaderBoard___StaticFields {
};
struct IEnumerator_1_Moon_Race_RaceLeaderBoard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Race_RaceLeaderBoard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Race_RaceLeaderBoard___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Race_RaceLeaderBoard___VTable vtable;
};}