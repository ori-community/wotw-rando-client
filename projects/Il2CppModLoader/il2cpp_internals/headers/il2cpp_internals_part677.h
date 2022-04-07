namespace app {
struct IEnumerable_1_LeaderboardData_Entry___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_LeaderboardData_Entry___StaticFields {
};
struct IEnumerable_1_LeaderboardData_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_LeaderboardData_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_LeaderboardData_Entry___VTable vtable;
};

struct __declspec(align(8)) LeaderboardData_c_DisplayClass23_0__Fields {
  struct String * userHandle;
};
struct LeaderboardData_c_DisplayClass23_0 {
  struct LeaderboardData_c_DisplayClass23_0__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboardData_c_DisplayClass23_0__Fields fields;
};
struct LeaderboardData_c_DisplayClass23_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderboardData_c_DisplayClass23_0__StaticFields {
};
struct LeaderboardData_c_DisplayClass23_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboardData_c_DisplayClass23_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboardData_c_DisplayClass23_0__VTable vtable;
};

struct __declspec(align(8)) LeaderboardEntryData__Fields {
  struct ExtractedIntFromInt64 * m_time;
  struct ExtractedIntFromInt64 * m_deathCount;
  struct ExtractedIntFromInt64 * m_completionPercentage;
};
struct LeaderboardEntryData {
  struct LeaderboardEntryData__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboardEntryData__Fields fields;
};
struct LeaderboardEntryData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderboardEntryData__StaticFields {
};
struct LeaderboardEntryData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboardEntryData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboardEntryData__VTable vtable;
};

struct LeaderboardsController__Fields {
  struct MonoBehaviour__Fields _;
  struct Dictionary_2_Leaderboard_LeaderboardData_ * m_data;
  bool m_placeholderGUIVisible;
  enum Leaderboard__Enum m_currentLeaderboard;
  enum DifficultyMode__Enum m_currentDifficulty;
  int32_t m_currentRow;
  float m_lastInputTime;
  bool m_previousPlaceholderGUIVisible;
  float m_updateLeaderboardsTime;
};
struct LeaderboardsController {
  struct LeaderboardsController__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboardsController__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Leaderboard_LeaderboardData___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Leaderboard_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Leaderboard_LeaderboardData_ {
  struct Dictionary_2_Leaderboard_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Leaderboard_LeaderboardData___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData_ {
  int32_t hashCode;
  int32_t next;
  enum Leaderboard__Enum key;
  struct LeaderboardData * value;
};
struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___Array {
  struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData_ vector[32];
};
struct IEqualityComparer_1_Leaderboard_ {
  struct IEqualityComparer_1_Leaderboard___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___Fields {
  struct Dictionary_2_Leaderboard_LeaderboardData_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___Fields fields;
};
struct Leaderboard__Enum__Array {
  struct Leaderboard__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum Leaderboard__Enum vector[32];
};
struct IEnumerator_1_Leaderboard_ {
  struct IEnumerator_1_Leaderboard___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___Fields {
  struct Dictionary_2_Leaderboard_LeaderboardData_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___Fields fields;
};
struct LeaderboardData__Array {
  struct LeaderboardData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LeaderboardData * vector[32];
};
struct IEnumerator_1_LeaderboardData_ {
  struct IEnumerator_1_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Leaderboard_ {
  struct ICollection_1_Leaderboard___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_LeaderboardData_ {
  struct ICollection_1_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Leaderboard_LeaderboardData_ {
  enum Leaderboard__Enum key;
  struct LeaderboardData * value;
};
struct KeyValuePair_2_Leaderboard_LeaderboardData___Boxed {
  struct KeyValuePair_2_Leaderboard_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Leaderboard_LeaderboardData_ fields;
};
struct KeyValuePair_2_Leaderboard_LeaderboardData___Array {
  struct KeyValuePair_2_Leaderboard_LeaderboardData___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Leaderboard_LeaderboardData_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Leaderboard_LeaderboardData_ {
  struct IEnumerator_1_KeyValuePair_2_Leaderboard_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Leaderboard_ {
  struct IEnumerable_1_Leaderboard___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_LeaderboardData_ {
  struct IEnumerable_1_LeaderboardData___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData___VTable vtable;
};
struct IEqualityComparer_1_Leaderboard___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Leaderboard___StaticFields {
};
struct IEqualityComparer_1_Leaderboard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Leaderboard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Leaderboard___VTable vtable;
};
struct IEnumerator_1_Leaderboard___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Leaderboard___StaticFields {
};
struct IEnumerator_1_Leaderboard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Leaderboard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Leaderboard___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Leaderboard_LeaderboardData___VTable vtable;
};
struct IEnumerator_1_LeaderboardData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LeaderboardData___StaticFields {
};
struct IEnumerator_1_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LeaderboardData___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Leaderboard_LeaderboardData___VTable vtable;
};
struct ICollection_1_Leaderboard___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Leaderboard___StaticFields {
};
struct ICollection_1_Leaderboard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Leaderboard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Leaderboard___VTable vtable;
};
struct ICollection_1_LeaderboardData___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_LeaderboardData___StaticFields {
};
struct ICollection_1_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_LeaderboardData___VTable vtable;
};
struct KeyValuePair_2_Leaderboard_LeaderboardData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Leaderboard_LeaderboardData___StaticFields {
};
struct KeyValuePair_2_Leaderboard_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Leaderboard_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Leaderboard_LeaderboardData___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Leaderboard_LeaderboardData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Leaderboard_LeaderboardData___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Leaderboard_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Leaderboard_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Leaderboard_LeaderboardData___VTable vtable;
};
struct IEnumerable_1_Leaderboard___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Leaderboard___StaticFields {
};
struct IEnumerable_1_Leaderboard___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Leaderboard___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Leaderboard___VTable vtable;
};
struct IEnumerable_1_LeaderboardData___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_LeaderboardData___StaticFields {
};
struct IEnumerable_1_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_LeaderboardData___VTable vtable;
};
struct Dictionary_2_Leaderboard_LeaderboardData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_Leaderboard_LeaderboardData___StaticFields {
};
struct Dictionary_2_Leaderboard_LeaderboardData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Leaderboard_LeaderboardData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Leaderboard_LeaderboardData___VTable vtable;
};
struct LeaderboardsController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeaderboardsController__StaticFields {
  struct LeaderboardsController * s_instance;
  bool AutoUpload;
  int64_t Int52Max;
  float m_lastScoreUploadTime;
  int32_t LeaderboardVersion;
};
struct LeaderboardsController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboardsController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboardsController__VTable vtable;
};

struct LeaderboardsController_UpdateCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct LeaderboardsController_UpdateCallback {
  struct LeaderboardsController_UpdateCallback__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboardsController_UpdateCallback__Fields fields;
};
struct LeaderboardsController_UpdateCallback__VTable {
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
struct LeaderboardsController_UpdateCallback__StaticFields {
};
struct LeaderboardsController_UpdateCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboardsController_UpdateCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboardsController_UpdateCallback__VTable vtable;
};

struct __declspec(align(8)) LeaderboardsController_UploadScoresRoutine_d_32__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  int32_t time;
  int32_t deathCount;
  int32_t completionPercentage;
  enum DifficultyMode__Enum difficulty;
};
struct LeaderboardsController_UploadScoresRoutine_d_32 {
  struct LeaderboardsController_UploadScoresRoutine_d_32__Class *klass;
  struct MonitorData *monitor;
  struct LeaderboardsController_UploadScoresRoutine_d_32__Fields fields;
};
struct LeaderboardsController_UploadScoresRoutine_d_32__VTable {
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
struct LeaderboardsController_UploadScoresRoutine_d_32__StaticFields {
};
struct LeaderboardsController_UploadScoresRoutine_d_32__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeaderboardsController_UploadScoresRoutine_d_32__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeaderboardsController_UploadScoresRoutine_d_32__VTable vtable;
};

struct ForceLightTorchStopChasingZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Rect m_rect;
};
struct ForceLightTorchStopChasingZone {
  struct ForceLightTorchStopChasingZone__Class *klass;
  struct MonitorData *monitor;
  struct ForceLightTorchStopChasingZone__Fields fields;
};
struct __declspec(align(8)) List_1_ForceLightTorchStopChasingZone___Fields {
  struct ForceLightTorchStopChasingZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ForceLightTorchStopChasingZone_ {
  struct List_1_ForceLightTorchStopChasingZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ForceLightTorchStopChasingZone___Fields fields;
};
struct ForceLightTorchStopChasingZone__Array {
  struct ForceLightTorchStopChasingZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ForceLightTorchStopChasingZone * vector[32];
};
struct IEnumerator_1_ForceLightTorchStopChasingZone_ {
  struct IEnumerator_1_ForceLightTorchStopChasingZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ForceLightTorchStopChasingZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ForceLightTorchStopChasingZone___StaticFields {
};
struct IEnumerator_1_ForceLightTorchStopChasingZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ForceLightTorchStopChasingZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ForceLightTorchStopChasingZone___VTable vtable;
};
struct List_1_ForceLightTorchStopChasingZone___VTable {
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
struct List_1_ForceLightTorchStopChasingZone___StaticFields {
  struct ForceLightTorchStopChasingZone__Array * _emptyArray;
};
struct List_1_ForceLightTorchStopChasingZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ForceLightTorchStopChasingZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ForceLightTorchStopChasingZone___VTable vtable;
};
struct ForceLightTorchStopChasingZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ForceLightTorchStopChasingZone__StaticFields {
  struct List_1_ForceLightTorchStopChasingZone_ * All;
};
struct ForceLightTorchStopChasingZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ForceLightTorchStopChasingZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ForceLightTorchStopChasingZone__VTable vtable;
};

struct IgnitableSpiritTorch_c {
  struct IgnitableSpiritTorch_c__Class *klass;
  struct MonitorData *monitor;
};
struct IgnitableSpiritTorch_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IgnitableSpiritTorch_c__StaticFields {
  struct IgnitableSpiritTorch_c * __9;
};
struct IgnitableSpiritTorch_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IgnitableSpiritTorch_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IgnitableSpiritTorch_c__VTable vtable;
};

struct LightColliderGroup__Fields {
  struct MonoBehaviour__Fields _;
  bool InsideLight;
  bool Dynamic;
  struct List_1_UnityEngine_Collider_ * m_colliders;
  struct List_1_UnityEngine_Vector3_ * m_centers;
};
struct LightColliderGroup {
  struct LightColliderGroup__Class *klass;
  struct MonitorData *monitor;
  struct LightColliderGroup__Fields fields;
};
struct LightColliderGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightColliderGroup__StaticFields {
};
struct LightColliderGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightColliderGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightColliderGroup__VTable vtable;
};

struct LightSource__Fields {
  struct MonoBehaviour__Fields _;
  float Radius;
};
struct LightSource {
  struct LightSource__Class *klass;
  struct MonitorData *monitor;
  struct LightSource__Fields fields;
};
struct __declspec(align(8)) List_1_LightSource___Fields {
  struct LightSource__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LightSource_ {
  struct List_1_LightSource___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LightSource___Fields fields;
};
struct LightSource__Array {
  struct LightSource__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LightSource * vector[32];
};
struct IEnumerator_1_LightSource_ {
  struct IEnumerator_1_LightSource___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_LightSource___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LightSource___StaticFields {
};
struct IEnumerator_1_LightSource___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LightSource___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LightSource___VTable vtable;
};
struct List_1_LightSource___VTable {
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
struct List_1_LightSource___StaticFields {
  struct LightSource__Array * _emptyArray;
};
struct List_1_LightSource___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LightSource___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LightSource___VTable vtable;
};
struct LightSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightSource__StaticFields {
  struct List_1_LightSource_ * All;
};
struct LightSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightSource__VTable vtable;
};

struct LightTorch__Fields {
  struct SaveSerialize__Fields _;
  struct GameObject * AppearEffect;
  struct GameObject * DisappearEffect;
  struct SoundProvider * AppearSound;
  struct SoundProvider * DisappearSound;
  struct SoundSource * MagicMovementSound;
  struct BaseAnimator * FadeAnimator;
  struct BaseAnimator * TransparencyAnimator;
  struct AnimationCurve * ForceOverDistance;
  struct AnimationCurve * ForceOverTime;
  struct AnimationCurve * DragOverDistance;
  struct AnimationCurve * UpForceOverTime;
  struct AnimationCurve * DeltaOverTime;
  float MinDistance;
  float StopChaseRange;
  float StopChaseVelocity;
  struct GameObject * ParticlesGroup;
  struct GameObject * LightSource;
  struct CarryableRigidBody * m_carryableRigidBody;
  bool m_isChasing;
  struct Collider * m_collider;
  bool m_found;
  int32_t m_check;
  struct Rigidbody * m_rigidbody;
  float m_chaseTime;
  float m_lockFadeAnimatorRemainingTime;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct LightTorch {
  struct LightTorch__Class *klass;
  struct MonitorData *monitor;
  struct LightTorch__Fields fields;
};
struct CarryableRigidBody__Fields {
  struct SaveSerialize__Fields _;
  struct Varying2DSoundProvider * OnPickUpSoundProvider;
  struct Varying2DSoundProvider * OnPutDownSoundProvider;
  struct Varying2DSoundProvider * OnDropSoundProvider;
  struct Varying2DSoundProvider * OnHitGroundSoundProvider;
  struct ActionMethod * OnPickupAction;
  struct ActionMethod * OnDropAction;
  struct ActionMethod * OnHitGroundAction;
  struct SoundSource * CarryingSound;
  struct SoundSource * NotCarryingSound;
  struct Vector3 RespawnPosition;
  float DragOnCollision;
  struct GameObject * DeathEffect;
  struct GameObject * RespawnEffect;
  struct MessageProvider * PickupMessage;
  struct Rigidbody * m_rigidbody;
  struct Transform * m_transform;
  struct AnimationMetaDataDrivenTransform * m_animationMetaDataDrivenTransform;
  struct MessageBox * m_message;
  float m_timeNotToShowMessage;
  bool m_isCarried;
  struct Condition_1 * CanBeCarriedCondition;
  struct Action * OnDropEvent;
  bool FreezeWhenOffscreen;
  float m_timeLastSoundPlayed;
  bool DestroyOnDamage;
};
struct CarryableRigidBody {
  struct CarryableRigidBody__Class *klass;
  struct MonitorData *monitor;
  struct CarryableRigidBody__Fields fields;
};
struct CarryableRigidBody__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData CanBeCarried;
  VirtualInvokeData Pickup;
  VirtualInvokeData Drop;
  VirtualInvokeData Throw;
  VirtualInvokeData get_CarryablePosition;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
};
struct CarryableRigidBody__StaticFields {
  struct Action * OnAnyCarryablePickedUpAction;
};
struct CarryableRigidBody__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CarryableRigidBody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CarryableRigidBody__VTable vtable;
};
struct LightTorch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct LightTorch__StaticFields {
};
struct LightTorch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightTorch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightTorch__VTable vtable;
};

struct LightTorchIsSolidCondition__Fields {
  struct Condition_1__Fields _;
};
struct LightTorchIsSolidCondition {
  struct LightTorchIsSolidCondition__Class *klass;
  struct MonitorData *monitor;
  struct LightTorchIsSolidCondition__Fields fields;
};
struct LightTorchIsSolidCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct LightTorchIsSolidCondition__StaticFields {
};
struct LightTorchIsSolidCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightTorchIsSolidCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightTorchIsSolidCondition__VTable vtable;
};

struct LightTorchPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * LightTorchPrefab;
};
struct LightTorchPlaceholder {
  struct LightTorchPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct LightTorchPlaceholder__Fields fields;
};
struct LightTorchPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightTorchPlaceholder__StaticFields {
};
struct LightTorchPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightTorchPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightTorchPlaceholder__VTable vtable;
};}