namespace app {
struct AkCommonAdvancedSettings__StaticFields {
};
struct AkCommonAdvancedSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkCommonAdvancedSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkCommonAdvancedSettings__VTable vtable;
};

struct __declspec(align(8)) AkCommonCommSettings__Fields {
  uint32_t m_PoolSize;
  uint16_t m_DiscoveryBroadcastPort;
  uint16_t m_CommandPort;
  uint16_t m_NotificationPort;
  bool m_InitializeSystemComms;
  struct String * m_NetworkName;
};
struct AkCommonCommSettings {
  struct AkCommonCommSettings__Class *klass;
  struct MonitorData *monitor;
  struct AkCommonCommSettings__Fields fields;
};
struct AkCommonCommSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData CopyTo;
};
struct AkCommonCommSettings__StaticFields {
  uint16_t DefaultDiscoveryBroadcastPort;
};
struct AkCommonCommSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkCommonCommSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkCommonCommSettings__VTable vtable;
};

struct __declspec(align(8)) MoonIntegrationSettings__Fields {
  uint32_t m_MaxRtpcSyncTasks;
  uint32_t m_MaxPositionSyncTasks;
  uint32_t m_MaxListenerZoneTasks;
  uint32_t m_MaxEmitterZoneTasks;
  uint32_t m_MaxControlledEvents;
  uint32_t m_MaxListenerSyncTasks;
  uint32_t m_MaxArtificialSoundHosts;
  uint32_t m_ArtificialSoundHostIdRange;
  struct SoundBankCollection * m_GlobalSoundBankCollection;
};
struct MoonIntegrationSettings {
  struct MoonIntegrationSettings__Class *klass;
  struct MonitorData *monitor;
  struct MoonIntegrationSettings__Fields fields;
};
struct SoundBankCollection__Fields {
  struct ScriptableObject__Fields _;
  struct String__Array * Banks;
  struct Bank__Array * WwiseBanks;
};
struct SoundBankCollection {
  struct SoundBankCollection__Class *klass;
  struct MonitorData *monitor;
  struct SoundBankCollection__Fields fields;
};
struct Bank__Fields {
  struct BaseType__Fields _;
};
struct Bank {
  struct Bank__Class *klass;
  struct MonitorData *monitor;
  struct Bank__Fields fields;
};
struct Bank__Array {
  struct Bank__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Bank * vector[32];
};
struct Bank__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_WwiseObjectType;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
};
struct Bank__StaticFields {
};
struct Bank__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Bank__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Bank__VTable vtable;
};
struct SoundBankCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundBankCollection__StaticFields {
};
struct SoundBankCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundBankCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundBankCollection__VTable vtable;
};
struct MoonIntegrationSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
};
struct MoonIntegrationSettings__StaticFields {
};
struct MoonIntegrationSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonIntegrationSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonIntegrationSettings__VTable vtable;
};

struct AkCommonPlatformSettings__Fields {
  struct AkBasePlatformSettings__Fields _;
};
struct AkCommonPlatformSettings {
  struct AkCommonPlatformSettings__Class *klass;
  struct MonitorData *monitor;
  struct AkCommonPlatformSettings__Fields fields;
};
struct AkWwiseInitializationSettings__Fields {
  struct AkCommonPlatformSettings__Fields _;
  struct List_1_System_String_ * PlatformSettingsNameList;
  struct List_1_AkWwiseInitializationSettings_PlatformSettings_ * PlatformSettingsList;
  struct List_1_System_String_ * InvalidReferencePlatforms;
  struct AkCommonUserSettings * UserSettings;
  struct AkCommonAdvancedSettings * AdvancedSettings;
  struct AkCommonCommSettings * CommsSettings;
  struct MoonIntegrationSettings * MoonSettings;
};
struct AkWwiseInitializationSettings {
  struct AkWwiseInitializationSettings__Class *klass;
  struct MonitorData *monitor;
  struct AkWwiseInitializationSettings__Fields fields;
};
struct __declspec(align(8)) List_1_AkWwiseInitializationSettings_PlatformSettings___Fields {
  struct AkWwiseInitializationSettings_PlatformSettings__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AkWwiseInitializationSettings_PlatformSettings_ {
  struct List_1_AkWwiseInitializationSettings_PlatformSettings___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AkWwiseInitializationSettings_PlatformSettings___Fields fields;
};
struct AkWwiseInitializationSettings_PlatformSettings__Fields {
  struct AkCommonPlatformSettings__Fields _;
  struct List_1_System_String_ * IgnorePropertyNameList;
  struct List_1_System_String_ * GlobalPropertyNameList;
  struct HashSet_1_System_String_ * _GlobalPropertyHashSet;
};
struct AkWwiseInitializationSettings_PlatformSettings {
  struct AkWwiseInitializationSettings_PlatformSettings__Class *klass;
  struct MonitorData *monitor;
  struct AkWwiseInitializationSettings_PlatformSettings__Fields fields;
};
struct AkWwiseInitializationSettings_PlatformSettings__Array {
  struct AkWwiseInitializationSettings_PlatformSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AkWwiseInitializationSettings_PlatformSettings * vector[32];
};
struct AkWwiseInitializationSettings_CommonPlatformSettings__Fields {
  struct AkWwiseInitializationSettings_PlatformSettings__Fields _;
  struct AkCommonUserSettings * UserSettings;
  struct AkCommonAdvancedSettings * AdvancedSettings;
  struct AkCommonCommSettings * CommsSettings;
  struct MoonIntegrationSettings * MoonSettings;
};
struct AkWwiseInitializationSettings_CommonPlatformSettings {
  struct AkWwiseInitializationSettings_CommonPlatformSettings__Class *klass;
  struct MonitorData *monitor;
  struct AkWwiseInitializationSettings_CommonPlatformSettings__Fields fields;
};
struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings_ {
  struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___Class *klass;
  struct MonitorData *monitor;
};
struct AkWwiseInitializationSettings_CommonPlatformSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AkInitializationSettings;
  VirtualInvokeData get_AkSpatialAudioInitSettings;
  VirtualInvokeData get_CallbackManagerInitializationSettings;
  VirtualInvokeData get_InitialLanguage;
  VirtualInvokeData get_RenderDuringFocusLoss;
  VirtualInvokeData get_SoundbankPath;
  VirtualInvokeData get_AkCommunicationSettings;
  VirtualInvokeData get_UseAsyncOpen;
  VirtualInvokeData GetUserSettings;
  VirtualInvokeData GetAdvancedSettings;
  VirtualInvokeData GetCommsSettings;
};
struct AkWwiseInitializationSettings_CommonPlatformSettings__StaticFields {
};
struct AkWwiseInitializationSettings_CommonPlatformSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkWwiseInitializationSettings_CommonPlatformSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkWwiseInitializationSettings_CommonPlatformSettings__VTable vtable;
};
struct AkWwiseInitializationSettings_PlatformSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AkInitializationSettings;
  VirtualInvokeData get_AkSpatialAudioInitSettings;
  VirtualInvokeData get_CallbackManagerInitializationSettings;
  VirtualInvokeData get_InitialLanguage;
  VirtualInvokeData get_RenderDuringFocusLoss;
  VirtualInvokeData get_SoundbankPath;
  VirtualInvokeData get_AkCommunicationSettings;
  VirtualInvokeData get_UseAsyncOpen;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct AkWwiseInitializationSettings_PlatformSettings__StaticFields {
};
struct AkWwiseInitializationSettings_PlatformSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkWwiseInitializationSettings_PlatformSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkWwiseInitializationSettings_PlatformSettings__VTable vtable;
};
struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields {
};
struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___VTable vtable;
};
struct List_1_AkWwiseInitializationSettings_PlatformSettings___VTable {
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
struct List_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields {
  struct AkWwiseInitializationSettings_PlatformSettings__Array * _emptyArray;
};
struct List_1_AkWwiseInitializationSettings_PlatformSettings___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AkWwiseInitializationSettings_PlatformSettings___VTable vtable;
};
struct AkWwiseInitializationSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AkInitializationSettings;
  VirtualInvokeData get_AkSpatialAudioInitSettings;
  VirtualInvokeData get_CallbackManagerInitializationSettings;
  VirtualInvokeData get_InitialLanguage;
  VirtualInvokeData get_RenderDuringFocusLoss;
  VirtualInvokeData get_SoundbankPath;
  VirtualInvokeData get_AkCommunicationSettings;
  VirtualInvokeData get_UseAsyncOpen;
  VirtualInvokeData GetUserSettings;
  VirtualInvokeData GetAdvancedSettings;
  VirtualInvokeData GetCommsSettings;
};
struct AkWwiseInitializationSettings__StaticFields {
  struct String__Array * AllGlobalValues;
  struct AkWwiseInitializationSettings * m_Instance;
  struct AkBasePlatformSettings * m_ActivePlatformSettings;
};
struct AkWwiseInitializationSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkWwiseInitializationSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkWwiseInitializationSettings__VTable vtable;
};
struct AkCommonPlatformSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AkInitializationSettings;
  VirtualInvokeData get_AkSpatialAudioInitSettings;
  VirtualInvokeData get_CallbackManagerInitializationSettings;
  VirtualInvokeData get_InitialLanguage;
  VirtualInvokeData get_RenderDuringFocusLoss;
  VirtualInvokeData get_SoundbankPath;
  VirtualInvokeData get_AkCommunicationSettings;
  VirtualInvokeData get_UseAsyncOpen;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct AkCommonPlatformSettings__StaticFields {
};
struct AkCommonPlatformSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkCommonPlatformSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkCommonPlatformSettings__VTable vtable;
};

struct __declspec(align(8)) AkEnumFlagAttribute__Fields {
  struct Type * Type;
};
struct AkEnumFlagAttribute {
  struct AkEnumFlagAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AkEnumFlagAttribute__Fields fields;
};
struct AkEnumFlagAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AkEnumFlagAttribute__StaticFields {
};
struct AkEnumFlagAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkEnumFlagAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkEnumFlagAttribute__VTable vtable;
};

struct __declspec(align(8)) AkLogger__Fields {
  struct AkLogger_ErrorLoggerInteropDelegate * errorLoggerDelegate;
};
struct AkLogger {
  struct AkLogger__Class *klass;
  struct MonitorData *monitor;
  struct AkLogger__Fields fields;
};
struct AkLogger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AkLogger__StaticFields {
  struct AkLogger * ms_Instance;
};
struct AkLogger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkLogger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkLogger__VTable vtable;
};

struct AkShowOnlyAttribute {
  struct AkShowOnlyAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct AkShowOnlyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AkShowOnlyAttribute__StaticFields {
};
struct AkShowOnlyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkShowOnlyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkShowOnlyAttribute__VTable vtable;
};

struct __declspec(align(8)) WwiseSettings__Fields {
  bool CreatedPicker;
  bool CreateWwiseGlobal;
  bool ShowMissingRigidBodyWarning;
  struct String * SoundbankPath;
  struct String * WwiseInstallationPathMac;
  struct String * WwiseInstallationPathWindows;
  struct String * WwiseProjectPath;
};
struct WwiseSettings {
  struct WwiseSettings__Class *klass;
  struct MonitorData *monitor;
  struct WwiseSettings__Fields fields;
};
struct WwiseSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseSettings__StaticFields {
  struct WwiseSettings * s_Instance;
};
struct WwiseSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseSettings__VTable vtable;
};

struct AkUtilities {
  struct AkUtilities__Class *klass;
  struct MonitorData *monitor;
};
struct AkUtilities__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AkUtilities__StaticFields {
};
struct AkUtilities__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkUtilities__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkUtilities__VTable vtable;
};

struct AkUtilities_ShortIDGenerator {
  struct AkUtilities_ShortIDGenerator__Class *klass;
  struct MonitorData *monitor;
};
struct AkUtilities_ShortIDGenerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AkUtilities_ShortIDGenerator__StaticFields {
  uint8_t s_hashSize;
  uint32_t s_mask;
};
struct AkUtilities_ShortIDGenerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AkUtilities_ShortIDGenerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AkUtilities_ShortIDGenerator__VTable vtable;
};

struct __declspec(align(8)) RuntimeGuidMapping__Fields {
  int32_t m_bucketOffset;
  struct RuntimeGuidMapping_BucketEntry__Array * m_linearBucket;
  struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * m_internalCache;
};
struct RuntimeGuidMapping {
  struct RuntimeGuidMapping__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeGuidMapping__Fields fields;
};
struct RuntimeGuidMapping_BucketEntry {
  struct Byte__Array * Guid;
  uint32_t Id;
};
struct RuntimeGuidMapping_BucketEntry__Boxed {
  struct RuntimeGuidMapping_BucketEntry__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeGuidMapping_BucketEntry fields;
};
struct RuntimeGuidMapping_BucketEntry__Array {
  struct RuntimeGuidMapping_BucketEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RuntimeGuidMapping_BucketEntry vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_UInt32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
  struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields fields;
};
struct RuntimeGuidMapping_CacheEntry {
  int32_t Offset;
  int32_t Head;
};
struct RuntimeGuidMapping_CacheEntry__Boxed {
  struct RuntimeGuidMapping_CacheEntry__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeGuidMapping_CacheEntry fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
  int32_t hashCode;
  int32_t next;
  uint32_t key;
  struct RuntimeGuidMapping_CacheEntry value;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields {
  struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields {
  struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Fields fields;
};
struct RuntimeGuidMapping_CacheEntry__Array {
  struct RuntimeGuidMapping_CacheEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RuntimeGuidMapping_CacheEntry vector[32];
};
struct IEnumerator_1_RuntimeGuidMapping_CacheEntry_ {
  struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_RuntimeGuidMapping_CacheEntry_ {
  struct ICollection_1_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
  uint32_t key;
  struct RuntimeGuidMapping_CacheEntry value;
};
struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Boxed {
  struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ fields;
};
struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array {
  struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry_ {
  struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_RuntimeGuidMapping_CacheEntry_ {
  struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___Class *klass;
  struct MonitorData *monitor;
};
struct RuntimeGuidMapping_BucketEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RuntimeGuidMapping_BucketEntry__StaticFields {
};
struct RuntimeGuidMapping_BucketEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeGuidMapping_BucketEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeGuidMapping_BucketEntry__VTable vtable;
};
struct RuntimeGuidMapping_CacheEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RuntimeGuidMapping_CacheEntry__StaticFields {
};
struct RuntimeGuidMapping_CacheEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeGuidMapping_CacheEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeGuidMapping_CacheEntry__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct ICollection_1_RuntimeGuidMapping_CacheEntry___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct ICollection_1_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable {
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
struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields {
};
struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry___VTable vtable;
};
struct RuntimeGuidMapping__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RuntimeGuidMapping__StaticFields {
  struct RuntimeGuidMapping * m_instance;
};
struct RuntimeGuidMapping__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeGuidMapping__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeGuidMapping__VTable vtable;
};

struct MurmurHash2 {
  struct MurmurHash2__Class *klass;
  struct MonitorData *monitor;
};
struct MurmurHash2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MurmurHash2__StaticFields {
};
struct MurmurHash2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MurmurHash2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MurmurHash2__VTable vtable;
};

struct WwiseBootstrapConfiguration__Fields {
  struct MonoBehaviour__Fields _;
};
struct WwiseBootstrapConfiguration {
  struct WwiseBootstrapConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct WwiseBootstrapConfiguration__Fields fields;
};
struct WotwWwiseBootstrapConfiguration__Fields {
  struct WwiseBootstrapConfiguration__Fields _;
  struct SoundHost * DefaultHost;
  struct SoundListener * DefaultListener;
};
struct WotwWwiseBootstrapConfiguration {
  struct WotwWwiseBootstrapConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct WotwWwiseBootstrapConfiguration__Fields fields;
};
enum WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum : int32_t {
  WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum_CoreOneOnly = 2,
  WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum_CoreTwoOnly = 4,
  WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum_CoreOneAndTwo = 6,
  WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum_AllCores = 7,
};
struct WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WotwWwiseBootstrapConfiguration_WwiseSwitchThreadAffinity__Enum value;
};
struct SoundListener__Fields {
  struct SoundHost__Fields _;
  struct Vector3 m_positionOffset;
};
struct SoundListener {
  struct SoundListener__Class *klass;
  struct MonitorData *monitor;
  struct SoundListener__Fields fields;
};
struct SoundListener__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsActiveVersion;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData get_Version;
  VirtualInvokeData get_Position;
  VirtualInvokeData get_Rotation;
  VirtualInvokeData get_GameObject;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_AsListener;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Position_1;
  VirtualInvokeData get_Rotation_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDrawGizmos;
  VirtualInvokeData get_PositionOffset;
  VirtualInvokeData Reregister;
};
struct SoundListener__StaticFields {
};}