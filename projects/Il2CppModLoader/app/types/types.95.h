namespace app {
struct LicFileLicenseProvider__StaticFields {
};

struct LicFileLicenseProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LicFileLicenseProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LicFileLicenseProvider__VTable vtable;
};

struct LicenseException__Fields {
    struct SystemException__Fields _;
    struct Type *type;
    struct Object *instance;
};

struct LicenseException {
    struct LicenseException__Class *klass;
    MonitorData *monitor;
    struct LicenseException__Fields fields;
};

struct LicenseException__VTable {
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

struct LicenseException__StaticFields {
};

struct LicenseException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LicenseException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LicenseException__VTable vtable;
};

struct LicenseManager {
    struct LicenseManager__Class *klass;
    MonitorData *monitor;
};

struct LicenseManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LicenseManager__StaticFields {
    struct Object *selfLock;
    struct LicenseContext *context;
    struct Object *contextLockHolder;
    struct Hashtable *providers;
    struct Hashtable *providerInstances;
    struct Object *internalSyncObject;
};

struct LicenseManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LicenseManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LicenseManager__VTable vtable;
};

struct License___VTable {
};

struct License___StaticFields {
};

struct License___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct License___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct License___VTable vtable;
};

struct __declspec(align(8)) LicenseManager_LicenseInteropHelper__Fields {
    struct DesigntimeLicenseContext *helperContext;
    struct LicenseContext *savedLicenseContext;
    struct Type *savedType;
};

struct LicenseManager_LicenseInteropHelper {
    struct LicenseManager_LicenseInteropHelper__Class *klass;
    MonitorData *monitor;
    struct LicenseManager_LicenseInteropHelper__Fields fields;
};

struct __declspec(align(8)) DesigntimeLicenseContext__Fields {
    struct Hashtable *savedLicenseKeys;
};

struct DesigntimeLicenseContext {
    struct DesigntimeLicenseContext__Class *klass;
    MonitorData *monitor;
    struct DesigntimeLicenseContext__Fields fields;
};

struct DesigntimeLicenseContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetService;
    VirtualInvokeData get_UsageMode;
    VirtualInvokeData GetSavedLicenseKey;
    VirtualInvokeData GetService_1;
    VirtualInvokeData SetSavedLicenseKey;
};

struct DesigntimeLicenseContext__StaticFields {
};

struct DesigntimeLicenseContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DesigntimeLicenseContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DesigntimeLicenseContext__VTable vtable;
};

struct LicenseManager_LicenseInteropHelper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LicenseManager_LicenseInteropHelper__StaticFields {
};

struct LicenseManager_LicenseInteropHelper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LicenseManager_LicenseInteropHelper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LicenseManager_LicenseInteropHelper__VTable vtable;
};

struct __declspec(align(8)) LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields {
    LicenseUsageMode__Enum usageMode;
    
    struct Type *type;
    struct String *key;
};

struct LicenseManager_LicenseInteropHelper_CLRLicenseContext {
    struct LicenseManager_LicenseInteropHelper_CLRLicenseContext__Class *klass;
    MonitorData *monitor;
    struct LicenseManager_LicenseInteropHelper_CLRLicenseContext__Fields fields;
};

struct LicenseManager_LicenseInteropHelper_CLRLicenseContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetService;
    VirtualInvokeData get_UsageMode;
    VirtualInvokeData GetSavedLicenseKey;
    VirtualInvokeData GetService_1;
    VirtualInvokeData SetSavedLicenseKey;
};

struct LicenseManager_LicenseInteropHelper_CLRLicenseContext__StaticFields {
};

struct LicenseManager_LicenseInteropHelper_CLRLicenseContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LicenseManager_LicenseInteropHelper_CLRLicenseContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LicenseManager_LicenseInteropHelper_CLRLicenseContext__VTable vtable;
};

struct __declspec(align(8)) LicenseProviderAttribute__Fields {
    struct Type *licenseProviderType;
    struct String *licenseProviderName;
};

struct LicenseProviderAttribute {
    struct LicenseProviderAttribute__Class *klass;
    MonitorData *monitor;
    struct LicenseProviderAttribute__Fields fields;
};

struct LicenseProviderAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct LicenseProviderAttribute__StaticFields {
    struct LicenseProviderAttribute *Default;
};

struct LicenseProviderAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LicenseProviderAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LicenseProviderAttribute__VTable vtable;
};

struct __declspec(align(8)) ListBindableAttribute__Fields {
    bool listBindable;
    bool isDefault;
};

struct ListBindableAttribute {
    struct ListBindableAttribute__Class *klass;
    MonitorData *monitor;
    struct ListBindableAttribute__Fields fields;
};

struct ListBindableAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct ListBindableAttribute__StaticFields {
    struct ListBindableAttribute *Yes;
    struct ListBindableAttribute *No;
    struct ListBindableAttribute *Default;
};

struct ListBindableAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListBindableAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListBindableAttribute__VTable vtable;
};

enum class ListChangedType__Enum : int32_t {
    Reset = 0x00000000,
    ItemAdded = 0x00000001,
    ItemDeleted = 0x00000002,
    ItemMoved = 0x00000003,
    ItemChanged = 0x00000004,
    PropertyDescriptorAdded = 0x00000005,
    PropertyDescriptorDeleted = 0x00000006,
    PropertyDescriptorChanged = 0x00000007,
};

struct ListChangedType__Enum__Boxed {
    struct ListChangedType__Enum__Class *klass;
    MonitorData *monitor;
    ListChangedType__Enum value;
    
};

struct __declspec(align(8)) ListChangedEventArgs__Fields {
    ListChangedType__Enum listChangedType;
    
    int32_t newIndex;
    int32_t oldIndex;
    struct PropertyDescriptor *propDesc;
};

struct ListChangedEventArgs {
    struct ListChangedEventArgs__Class *klass;
    MonitorData *monitor;
    struct ListChangedEventArgs__Fields fields;
};

struct ListChangedType__Enum__VTable {
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

struct ListChangedType__Enum__StaticFields {
};

struct ListChangedType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListChangedType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListChangedType__Enum__VTable vtable;
};

struct ListChangedEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListChangedEventArgs__StaticFields {
};

struct ListChangedEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListChangedEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListChangedEventArgs__VTable vtable;
};

struct ListChangedEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct ListChangedEventHandler {
    struct ListChangedEventHandler__Class *klass;
    MonitorData *monitor;
    struct ListChangedEventHandler__Fields fields;
};

struct ListChangedEventHandler__VTable {
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

struct ListChangedEventHandler__StaticFields {
};

struct ListChangedEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListChangedEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListChangedEventHandler__VTable vtable;
};

enum class ListSortDirection__Enum : int32_t {
    Ascending = 0x00000000,
    Descending = 0x00000001,
};

struct ListSortDirection__Enum__Boxed {
    struct ListSortDirection__Enum__Class *klass;
    MonitorData *monitor;
    ListSortDirection__Enum value;
    
};

struct __declspec(align(8)) ListSortDescription__Fields {
    struct PropertyDescriptor *property;
    ListSortDirection__Enum sortDirection;
    
};

struct ListSortDescription {
    struct ListSortDescription__Class *klass;
    MonitorData *monitor;
    struct ListSortDescription__Fields fields;
};

struct ListSortDirection__Enum__VTable {
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

struct ListSortDirection__Enum__StaticFields {
};

struct ListSortDirection__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListSortDirection__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListSortDirection__Enum__VTable vtable;
};

struct ListSortDescription__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ListSortDescription__StaticFields {
};

struct ListSortDescription__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListSortDescription__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListSortDescription__VTable vtable;
};

struct __declspec(align(8)) ListSortDescriptionCollection__Fields {
    struct ArrayList *sorts;
};

struct ListSortDescriptionCollection {
    struct ListSortDescriptionCollection__Class *klass;
    MonitorData *monitor;
    struct ListSortDescriptionCollection__Fields fields;
};

struct ListSortDescriptionCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData Contains;
    VirtualInvokeData System_Collections_IList_Clear;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData System_Collections_IList_RemoveAt;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};

struct ListSortDescriptionCollection__StaticFields {
};

struct ListSortDescriptionCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListSortDescriptionCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListSortDescriptionCollection__VTable vtable;
};

struct ListSortDescription__Array {
    struct ListSortDescription__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ListSortDescription *vector[32];
};

struct ListSortDescription__Array__VTable {
};

struct ListSortDescription__Array__StaticFields {
};

struct ListSortDescription__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ListSortDescription__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ListSortDescription__Array__VTable vtable;
};

struct __declspec(align(8)) LocalizableAttribute__Fields {
    bool isLocalizable;
};

struct LocalizableAttribute {
    struct LocalizableAttribute__Class *klass;
    MonitorData *monitor;
    struct LocalizableAttribute__Fields fields;
};

struct LocalizableAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct LocalizableAttribute__StaticFields {
    struct LocalizableAttribute *Yes;
    struct LocalizableAttribute *No;
    struct LocalizableAttribute *Default;
};

struct LocalizableAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LocalizableAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LocalizableAttribute__VTable vtable;
};

struct __declspec(align(8)) LookupBindingPropertiesAttribute__Fields {
    struct String *dataSource;
    struct String *displayMember;
    struct String *valueMember;
    struct String *lookupMember;
};

struct LookupBindingPropertiesAttribute {
    struct LookupBindingPropertiesAttribute__Class *klass;
    MonitorData *monitor;
    struct LookupBindingPropertiesAttribute__Fields fields;
};

struct LookupBindingPropertiesAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct LookupBindingPropertiesAttribute__StaticFields {
    struct LookupBindingPropertiesAttribute *Default;
};

struct LookupBindingPropertiesAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LookupBindingPropertiesAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LookupBindingPropertiesAttribute__VTable vtable;
};

struct __declspec(align(8)) MarshalByValueComponent__Fields {
    struct ISite *site;
    struct EventHandlerList *events;
};

struct MarshalByValueComponent {
    struct MarshalByValueComponent__Class *klass;
    MonitorData *monitor;
    struct MarshalByValueComponent__Fields fields;
};

struct MarshalByValueComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Site;
    VirtualInvokeData set_Site;
    VirtualInvokeData add_Disposed;
    VirtualInvokeData remove_Disposed;
    VirtualInvokeData Dispose;
    VirtualInvokeData GetService;
    VirtualInvokeData get_Site_1;
    VirtualInvokeData set_Site_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_Container;
    VirtualInvokeData GetService_1;
    VirtualInvokeData get_DesignMode;
};

struct MarshalByValueComponent__StaticFields {
    struct Object *EventDisposed;
};

struct MarshalByValueComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MarshalByValueComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MarshalByValueComponent__VTable vtable;
};

struct __declspec(align(8)) MaskedTextProvider__Fields {
    struct BitVector32 flagState;
    struct CultureInfo *culture;
    struct StringBuilder *testString;
    int32_t assignedCharCount;
    int32_t requiredCharCount;
    int32_t requiredEditChars;
    int32_t optionalEditChars;
    struct String *mask;
    uint16_t passwordChar;
    uint16_t promptChar;
    struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ *stringDescriptor;
};

struct MaskedTextProvider {
    struct MaskedTextProvider__Class *klass;
    MonitorData *monitor;
    struct MaskedTextProvider__Fields fields;
};

struct __declspec(align(8)) List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Fields {
    struct MaskedTextProvider_CharDescriptor__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ {
    struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class *klass;
    MonitorData *monitor;
    struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Fields fields;
};

enum class MaskedTextProvider_CaseConversion__Enum : int32_t {
    None = 0x00000000,
    ToLower = 0x00000001,
    ToUpper = 0x00000002,
};

struct MaskedTextProvider_CaseConversion__Enum__Boxed {
    struct MaskedTextProvider_CaseConversion__Enum__Class *klass;
    MonitorData *monitor;
    MaskedTextProvider_CaseConversion__Enum value;
    
};

enum class MaskedTextProvider_CharType__Enum : int32_t {
    EditOptional = 0x00000001,
    EditRequired = 0x00000002,
    Separator = 0x00000004,
    Literal = 0x00000008,
    Modifier = 0x00000010,
};

struct MaskedTextProvider_CharType__Enum__Boxed {
    struct MaskedTextProvider_CharType__Enum__Class *klass;
    MonitorData *monitor;
    MaskedTextProvider_CharType__Enum value;
    
};

struct __declspec(align(8)) MaskedTextProvider_CharDescriptor__Fields {
    int32_t MaskPosition;
    MaskedTextProvider_CaseConversion__Enum CaseConversion;
    
    MaskedTextProvider_CharType__Enum CharType;
    
    bool IsAssigned;
};

struct MaskedTextProvider_CharDescriptor {
    struct MaskedTextProvider_CharDescriptor__Class *klass;
    MonitorData *monitor;
    struct MaskedTextProvider_CharDescriptor__Fields fields;
};

struct MaskedTextProvider_CharDescriptor__Array {
    struct MaskedTextProvider_CharDescriptor__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MaskedTextProvider_CharDescriptor *vector[32];
};

struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_ {
    struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class *klass;
    MonitorData *monitor;
};

struct MaskedTextProvider_CaseConversion__Enum__VTable {
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

struct MaskedTextProvider_CaseConversion__Enum__StaticFields {
};

struct MaskedTextProvider_CaseConversion__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaskedTextProvider_CaseConversion__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaskedTextProvider_CaseConversion__Enum__VTable vtable;
};

struct MaskedTextProvider_CharType__Enum__VTable {
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

struct MaskedTextProvider_CharType__Enum__StaticFields {
};

struct MaskedTextProvider_CharType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaskedTextProvider_CharType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaskedTextProvider_CharType__Enum__VTable vtable;
};

struct MaskedTextProvider_CharDescriptor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MaskedTextProvider_CharDescriptor__StaticFields {
};

struct MaskedTextProvider_CharDescriptor__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaskedTextProvider_CharDescriptor__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaskedTextProvider_CharDescriptor__VTable vtable;
};

struct MaskedTextProvider_CharDescriptor__Array__VTable {
};

struct MaskedTextProvider_CharDescriptor__Array__StaticFields {
};

struct MaskedTextProvider_CharDescriptor__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaskedTextProvider_CharDescriptor__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaskedTextProvider_CharDescriptor__Array__VTable vtable;
};

struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields {
};

struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable vtable;
};

struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable {
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

struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields {
    struct MaskedTextProvider_CharDescriptor__Array *_emptyArray;
};

struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor___VTable vtable;
};

struct MaskedTextProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Clone;
};

struct MaskedTextProvider__StaticFields {
    int32_t ASCII_ONLY;
    int32_t ALLOW_PROMPT_AS_INPUT;
    int32_t INCLUDE_PROMPT;
    int32_t INCLUDE_LITERALS;
    int32_t RESET_ON_PROMPT;
    int32_t RESET_ON_LITERALS;
    int32_t SKIP_SPACE;
    struct Type *maskTextProviderType;
};

struct MaskedTextProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MaskedTextProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MaskedTextProvider__VTable vtable;
};

enum class MaskedTextResultHint__Enum : int32_t {
    Unknown = 0x00000000,
    CharacterEscaped = 0x00000001,
    NoEffect = 0x00000002,
    SideEffect = 0x00000003,
    Success = 0x00000004,
    AsciiCharacterExpected = -1,
    AlphanumericCharacterExpected = -2,
    DigitExpected = -3,
    LetterExpected = -4,
    SignedDigitExpected = -5,
    InvalidInput = -51,
    PromptCharNotAllowed = -52,
    UnavailableEditPosition = -53,
    NonEditPosition = -54,
    PositionOutOfRange = -55,
};

struct MaskedTextResultHint__Enum__Boxed {
    struct MaskedTextResultHint__Enum__Class *klass;
    MonitorData *monitor;
    MaskedTextResultHint__Enum value;
    
};

struct MaskedTextResultHint__Enum__VTable {
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

}
