namespace app {

struct FastResourceComparer {
  struct FastResourceComparer__Class *klass;
  struct MonitorData *monitor;
};
struct FastResourceComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
  VirtualInvokeData Compare_1;
  VirtualInvokeData Equals_2;
  VirtualInvokeData GetHashCode_2;
};
struct FastResourceComparer__StaticFields {
  struct FastResourceComparer * Default;
};
struct FastResourceComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FastResourceComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FastResourceComparer__VTable vtable;
};

struct __declspec(align(8)) FileBasedResourceGroveler__Fields {
  struct ResourceManager_ResourceManagerMediator * _mediator;
};
struct FileBasedResourceGroveler {
  struct FileBasedResourceGroveler__Class *klass;
  struct MonitorData *monitor;
  struct FileBasedResourceGroveler__Fields fields;
};
struct __declspec(align(8)) ResourceManager_ResourceManagerMediator__Fields {
  struct ResourceManager * _rm;
};
struct ResourceManager_ResourceManagerMediator {
  struct ResourceManager_ResourceManagerMediator__Class *klass;
  struct MonitorData *monitor;
  struct ResourceManager_ResourceManagerMediator__Fields fields;
};
enum UltimateResourceFallbackLocation__Enum : int32_t {
  UltimateResourceFallbackLocation__Enum_MainAssembly = 0,
  UltimateResourceFallbackLocation__Enum_Satellite = 1,
};
struct UltimateResourceFallbackLocation__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UltimateResourceFallbackLocation__Enum value;
};
struct __declspec(align(8)) ResourceManager__Fields {
  struct String * BaseNameField;
  struct Hashtable * ResourceSets;
  struct Dictionary_2_System_String_System_Resources_ResourceSet_ * _resourceSets;
  struct String * moduleDir;
  struct Assembly * MainAssembly;
  struct Type * _locationInfo;
  struct Type * _userResourceSet;
  struct CultureInfo * _neutralResourcesCulture;
  struct ResourceManager_CultureNameResourceSetPair * _lastUsedResourceCache;
  bool _ignoreCase;
  bool UseManifest;
  bool UseSatelliteAssem;
  enum UltimateResourceFallbackLocation__Enum _fallbackLoc;
  struct Version * _satelliteContractVersion;
  bool _lookedForSatelliteContractVersion;
  struct Assembly * _callingAssembly;
  struct RuntimeAssembly * m_callingAssembly;
  struct IResourceGroveler * resourceGroveler;
};
struct ResourceManager {
  struct ResourceManager__Class *klass;
  struct MonitorData *monitor;
  struct ResourceManager__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Resources_ResourceSet___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Resources_ResourceSet_ {
  struct Dictionary_2_System_String_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Resources_ResourceSet___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct ResourceSet * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet_ vector[32];
};
struct __declspec(align(8)) ResourceSet__Fields {
  struct IResourceReader * Reader;
  struct Hashtable * Table;
  struct Hashtable * _caseInsensitiveTable;
};
struct ResourceSet {
  struct ResourceSet__Class *klass;
  struct MonitorData *monitor;
  struct ResourceSet__Fields fields;
};
struct IResourceReader {
  struct IResourceReader__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___Fields {
  struct Dictionary_2_System_String_System_Resources_ResourceSet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___Fields {
  struct Dictionary_2_System_String_System_Resources_ResourceSet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___Fields fields;
};
struct ResourceSet__Array {
  struct ResourceSet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ResourceSet * vector[32];
};
struct IEnumerator_1_System_Resources_ResourceSet_ {
  struct IEnumerator_1_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Resources_ResourceSet_ {
  struct ICollection_1_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceSet_ {
  struct String * key;
  struct ResourceSet * value;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceSet___Boxed {
  struct KeyValuePair_2_System_String_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Resources_ResourceSet_ fields;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceSet___Array {
  struct KeyValuePair_2_System_String_System_Resources_ResourceSet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Resources_ResourceSet_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceSet_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Resources_ResourceSet_ {
  struct IEnumerable_1_System_Resources_ResourceSet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ResourceManager_CultureNameResourceSetPair__Fields {
  struct String * lastCultureName;
  struct ResourceSet * lastResourceSet;
};
struct ResourceManager_CultureNameResourceSetPair {
  struct ResourceManager_CultureNameResourceSetPair__Class *klass;
  struct MonitorData *monitor;
  struct ResourceManager_CultureNameResourceSetPair__Fields fields;
};
struct IResourceGroveler {
  struct IResourceGroveler__Class *klass;
  struct MonitorData *monitor;
};
struct IResourceReader__VTable {
  VirtualInvokeData Close;
  VirtualInvokeData GetEnumerator;
};
struct IResourceReader__StaticFields {
};
struct IResourceReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IResourceReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IResourceReader__VTable vtable;
};
struct ResourceSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData GetString;
  VirtualInvokeData GetString_1;
  VirtualInvokeData GetObject;
  VirtualInvokeData GetObject_1;
};
struct ResourceSet__StaticFields {
};
struct ResourceSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceSet__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceSet___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceSet___VTable vtable;
};
struct IEnumerator_1_System_Resources_ResourceSet___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Resources_ResourceSet___StaticFields {
};
struct IEnumerator_1_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Resources_ResourceSet___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceSet___VTable vtable;
};
struct ICollection_1_System_Resources_ResourceSet___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Resources_ResourceSet___StaticFields {
};
struct ICollection_1_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Resources_ResourceSet___VTable vtable;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceSet___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceSet___StaticFields {
};
struct KeyValuePair_2_System_String_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_System_Resources_ResourceSet___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceSet___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceSet___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceSet___VTable vtable;
};
struct IEnumerable_1_System_Resources_ResourceSet___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Resources_ResourceSet___StaticFields {
};
struct IEnumerable_1_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Resources_ResourceSet___VTable vtable;
};
struct Dictionary_2_System_String_System_Resources_ResourceSet___VTable {
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
struct Dictionary_2_System_String_System_Resources_ResourceSet___StaticFields {
};
struct Dictionary_2_System_String_System_Resources_ResourceSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_System_Resources_ResourceSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_System_Resources_ResourceSet___VTable vtable;
};
struct ResourceManager_CultureNameResourceSetPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ResourceManager_CultureNameResourceSetPair__StaticFields {
};
struct ResourceManager_CultureNameResourceSetPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceManager_CultureNameResourceSetPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceManager_CultureNameResourceSetPair__VTable vtable;
};
struct IResourceGroveler__VTable {
  VirtualInvokeData GrovelForResourceSet;
};
struct IResourceGroveler__StaticFields {
};
struct IResourceGroveler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IResourceGroveler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IResourceGroveler__VTable vtable;
};
struct ResourceManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_BaseName;
  VirtualInvokeData get_IgnoreCase;
  VirtualInvokeData GetResourceFileName;
  VirtualInvokeData GetResourceSet;
  VirtualInvokeData InternalGetResourceSet;
  VirtualInvokeData GetString;
};
struct ResourceManager__StaticFields {
  int32_t MagicNumber;
  int32_t HeaderVersionNumber;
  struct Type * _minResourceSet;
  struct String * ResReaderTypeName;
  struct String * ResSetTypeName;
  struct String * MscorlibName;
  int32_t DEBUG;
};
struct ResourceManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceManager__VTable vtable;
};
struct ResourceManager_ResourceManagerMediator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ResourceManager_ResourceManagerMediator__StaticFields {
};
struct ResourceManager_ResourceManagerMediator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceManager_ResourceManagerMediator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceManager_ResourceManagerMediator__VTable vtable;
};
struct FileBasedResourceGroveler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GrovelForResourceSet;
};
struct FileBasedResourceGroveler__StaticFields {
};
struct FileBasedResourceGroveler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FileBasedResourceGroveler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FileBasedResourceGroveler__VTable vtable;
};

struct __declspec(align(8)) ManifestBasedResourceGroveler__Fields {
  struct ResourceManager_ResourceManagerMediator * _mediator;
};
struct ManifestBasedResourceGroveler {
  struct ManifestBasedResourceGroveler__Class *klass;
  struct MonitorData *monitor;
  struct ManifestBasedResourceGroveler__Fields fields;
};
struct ManifestBasedResourceGroveler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GrovelForResourceSet;
};
struct ManifestBasedResourceGroveler__StaticFields {
};
struct ManifestBasedResourceGroveler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ManifestBasedResourceGroveler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ManifestBasedResourceGroveler__VTable vtable;
};

struct MissingManifestResourceException__Fields {
  struct SystemException__Fields _;
};
struct MissingManifestResourceException {
  struct MissingManifestResourceException__Class *klass;
  struct MonitorData *monitor;
  struct MissingManifestResourceException__Fields fields;
};
struct MissingManifestResourceException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct MissingManifestResourceException__StaticFields {
};
struct MissingManifestResourceException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MissingManifestResourceException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MissingManifestResourceException__VTable vtable;
};

struct MissingSatelliteAssemblyException__Fields {
  struct SystemException__Fields _;
  struct String * _cultureName;
};
struct MissingSatelliteAssemblyException {
  struct MissingSatelliteAssemblyException__Class *klass;
  struct MonitorData *monitor;
  struct MissingSatelliteAssemblyException__Fields fields;
};
struct MissingSatelliteAssemblyException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct MissingSatelliteAssemblyException__StaticFields {
};
struct MissingSatelliteAssemblyException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MissingSatelliteAssemblyException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MissingSatelliteAssemblyException__VTable vtable;
};

struct __declspec(align(8)) NeutralResourcesLanguageAttribute__Fields {
  struct String * _culture;
  enum UltimateResourceFallbackLocation__Enum _fallbackLoc;
};
struct NeutralResourcesLanguageAttribute {
  struct NeutralResourcesLanguageAttribute__Class *klass;
  struct MonitorData *monitor;
  struct NeutralResourcesLanguageAttribute__Fields fields;
};
struct NeutralResourcesLanguageAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct NeutralResourcesLanguageAttribute__StaticFields {
};
struct NeutralResourcesLanguageAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NeutralResourcesLanguageAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NeutralResourcesLanguageAttribute__VTable vtable;
};

struct __declspec(align(8)) ResourceFallbackManager__Fields {
  struct CultureInfo * m_startingCulture;
  struct CultureInfo * m_neutralResourcesCulture;
  bool m_useParents;
};
struct ResourceFallbackManager {
  struct ResourceFallbackManager__Class *klass;
  struct MonitorData *monitor;
  struct ResourceFallbackManager__Fields fields;
};
struct ResourceFallbackManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct ResourceFallbackManager__StaticFields {
};
struct ResourceFallbackManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceFallbackManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceFallbackManager__VTable vtable;
};

struct __declspec(align(8)) ResourceFallbackManager_GetEnumerator_d_5__Fields {
  int32_t __1__state;
  struct CultureInfo * __2__current;
  struct ResourceFallbackManager * __4__this;
  struct CultureInfo * _currentCulture_5__1;
  bool _reachedNeutralResourcesCulture_5__2;
};
struct ResourceFallbackManager_GetEnumerator_d_5 {
  struct ResourceFallbackManager_GetEnumerator_d_5__Class *klass;
  struct MonitorData *monitor;
  struct ResourceFallbackManager_GetEnumerator_d_5__Fields fields;
};
struct ResourceFallbackManager_GetEnumerator_d_5__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Globalization_CultureInfo__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct ResourceFallbackManager_GetEnumerator_d_5__StaticFields {
};
struct ResourceFallbackManager_GetEnumerator_d_5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceFallbackManager_GetEnumerator_d_5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceFallbackManager_GetEnumerator_d_5__VTable vtable;
};

struct ResourceLocator {
  struct Object * _value;
  int32_t _dataPos;
};
struct ResourceLocator__Boxed {
  struct ResourceLocator__Class *klass;
  struct MonitorData *monitor;
  struct ResourceLocator fields;
};
struct ResourceLocator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ResourceLocator__StaticFields {
};
struct ResourceLocator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResourceLocator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResourceLocator__VTable vtable;
};

enum ResourceTypeCode__Enum : int32_t {
  ResourceTypeCode__Enum_Null = 0,
  ResourceTypeCode__Enum_String = 1,
  ResourceTypeCode__Enum_Boolean = 2,
  ResourceTypeCode__Enum_Char = 3,
  ResourceTypeCode__Enum_Byte = 4,
  ResourceTypeCode__Enum_SByte = 5,
  ResourceTypeCode__Enum_Int16 = 6,
  ResourceTypeCode__Enum_UInt16 = 7,
  ResourceTypeCode__Enum_Int32 = 8,
  ResourceTypeCode__Enum_UInt32 = 9,
  ResourceTypeCode__Enum_Int64 = 10,
  ResourceTypeCode__Enum_UInt64 = 11,
  ResourceTypeCode__Enum_Single = 12,
  ResourceTypeCode__Enum_Double = 13,
  ResourceTypeCode__Enum_Decimal = 14,
  ResourceTypeCode__Enum_DateTime = 15,
  ResourceTypeCode__Enum_TimeSpan = 16,
  ResourceTypeCode__Enum_LastPrimitive = 16,
  ResourceTypeCode__Enum_ByteArray = 32,
  ResourceTypeCode__Enum_Stream = 33,
  ResourceTypeCode__Enum_StartOfUserTypes = 64,
};
struct ResourceTypeCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ResourceTypeCode__Enum value;
};

struct __declspec(align(8)) ResourceReader__Fields {
  struct BinaryReader * _store;
  struct Dictionary_2_System_String_System_Resources_ResourceLocator_ * _resCache;
  int64_t _nameSectionOffset;
  int64_t _dataSectionOffset;
  struct Int32__Array * _nameHashes;
  int32_t * _nameHashesPtr;
  struct Int32__Array * _namePositions;
  int32_t * _namePositionsPtr;
  struct RuntimeType__Array * _typeTable;
  struct Int32__Array * _typeNamePositions;
  struct BinaryFormatter * _objFormatter;
  int32_t _numResources;
  struct UnmanagedMemoryStream * _ums;
  int32_t _version;
};
struct ResourceReader {
  struct ResourceReader__Class *klass;
  struct MonitorData *monitor;
  struct ResourceReader__Fields fields;
};
struct __declspec(align(8)) BinaryReader__Fields {
  struct Stream * m_stream;
  struct Byte__Array * m_buffer;
  struct Decoder * m_decoder;
  struct Byte__Array * m_charBytes;
  struct Char__Array * m_singleChar;
  struct Char__Array * m_charBuffer;
  int32_t m_maxCharsSize;
  bool m_2BytesPerChar;
  bool m_isMemoryStream;
  bool m_leaveOpen;
};
struct BinaryReader {
  struct BinaryReader__Class *klass;
  struct MonitorData *monitor;
  struct BinaryReader__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Resources_ResourceLocator___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceLocator_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceLocator_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Resources_ResourceLocator_ {
  struct Dictionary_2_System_String_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Resources_ResourceLocator___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct ResourceLocator value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Resources_ResourceLocator_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceLocator___Fields {
  struct Dictionary_2_System_String_System_Resources_ResourceLocator_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceLocator_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Resources_ResourceLocator___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceLocator___Fields {
  struct Dictionary_2_System_String_System_Resources_ResourceLocator_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceLocator_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Resources_ResourceLocator___Fields fields;
};
struct ResourceLocator__Array {
  struct ResourceLocator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ResourceLocator vector[32];
};
struct IEnumerator_1_System_Resources_ResourceLocator_ {
  struct IEnumerator_1_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Resources_ResourceLocator_ {
  struct ICollection_1_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceLocator_ {
  struct String * key;
  struct ResourceLocator value;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceLocator___Boxed {
  struct KeyValuePair_2_System_String_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Resources_ResourceLocator_ fields;
};
struct KeyValuePair_2_System_String_System_Resources_ResourceLocator___Array {
  struct KeyValuePair_2_System_String_System_Resources_ResourceLocator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Resources_ResourceLocator_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceLocator_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Resources_ResourceLocator_ {
  struct IEnumerable_1_System_Resources_ResourceLocator___Class *klass;
  struct MonitorData *monitor;
};
enum FormatterTypeStyle__Enum : int32_t {
  FormatterTypeStyle__Enum_TypesWhenNeeded = 0,
  FormatterTypeStyle__Enum_TypesAlways = 1,
  FormatterTypeStyle__Enum_XsdString = 2,
};
struct FormatterTypeStyle__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FormatterTypeStyle__Enum value;
};
enum FormatterAssemblyStyle__Enum : int32_t {
  FormatterAssemblyStyle__Enum_Simple = 0,
  FormatterAssemblyStyle__Enum_Full = 1,
};
struct FormatterAssemblyStyle__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FormatterAssemblyStyle__Enum value;
};
enum TypeFilterLevel__Enum : int32_t {
  TypeFilterLevel__Enum_Low = 2,
  TypeFilterLevel__Enum_Full = 3,
};
struct TypeFilterLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeFilterLevel__Enum value;
};
struct __declspec(align(8)) BinaryFormatter__Fields {
  struct ISurrogateSelector * m_surrogates;
  struct StreamingContext m_context;
  struct SerializationBinder * m_binder;
  enum FormatterTypeStyle__Enum m_typeFormat;
  enum FormatterAssemblyStyle__Enum m_assemblyFormat;
  enum TypeFilterLevel__Enum m_securityLevel;
  struct Object__Array * m_crossAppDomainArray;
};
struct BinaryFormatter {
  struct BinaryFormatter__Class *klass;
  struct MonitorData *monitor;
  struct BinaryFormatter__Fields fields;
};
struct ISurrogateSelector {
  struct ISurrogateSelector__Class *klass;
  struct MonitorData *monitor;
};
struct SerializationBinder {
  struct SerializationBinder__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DefaultSerializationBinder__Fields {
  struct ThreadSafeStore_2_StructMultiKey_2_System_String_System_String_System_Type_ * _typeCache;
};
struct DefaultSerializationBinder {
  struct DefaultSerializationBinder__Class *klass;
  struct MonitorData *monitor;
  struct DefaultSerializationBinder__Fields fields;
};
struct __declspec(align(8)) ThreadSafeStore_2_StructMultiKey_2_System_String_System_String_System_Type___Fields {
  struct ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type_ * _concurrentStore;
  struct Func_2_Newtonsoft_Json_Utilities_StructMultiKey_2_Type_ * _creator;
};
struct ThreadSafeStore_2_StructMultiKey_2_System_String_System_String_System_Type_ {
  struct ThreadSafeStore_2_StructMultiKey_2_System_String_System_String_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct ThreadSafeStore_2_StructMultiKey_2_System_String_System_String_System_Type___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type_ * _tables;
  struct IEqualityComparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ * _comparer;
  bool _growLockArray;
  int32_t _budget;
};
struct ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type_ {
  struct ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Node_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Array * _buckets;
  struct Object__Array * _locks;
  struct Int32__Array * _countPerLock;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type_ {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Fields fields;
};
struct StructMultiKey_2_System_String_System_String_ {
  struct String * Value1;
  struct String * Value2;
};
struct StructMultiKey_2_System_String_System_String___Boxed {
  struct StructMultiKey_2_System_String_System_String___Class *klass;
  struct MonitorData *monitor;
  struct StructMultiKey_2_System_String_System_String_ fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type___Fields {
  struct StructMultiKey_2_System_String_System_String_ _key;
  struct Type * _value;
  struct ConcurrentDictionary_2_TKey_TValue_Node_Newtonsoft_Json_Utilities_StructMultiKey_2_System_Type_ * _next;
  int32_t _hashcode;
};}