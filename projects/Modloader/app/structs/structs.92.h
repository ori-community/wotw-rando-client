namespace app {
    struct CharConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharConverter__VTable vtable;
    };

    enum class CollectionChangeAction__Enum : int32_t {
        Add = 0x00000001,
        Remove = 0x00000002,
        Refresh = 0x00000003,
    };

    struct CollectionChangeAction__Enum__Boxed {
        struct CollectionChangeAction__Enum__Class* klass;
        MonitorData* monitor;
        CollectionChangeAction__Enum value;
    };

    struct __declspec(align(8)) CollectionChangeEventArgs__Fields {
        CollectionChangeAction__Enum action;

        struct Object* element;
    };

    struct CollectionChangeEventArgs {
        struct CollectionChangeEventArgs__Class* klass;
        MonitorData* monitor;
        struct CollectionChangeEventArgs__Fields fields;
    };

    struct CollectionChangeAction__Enum__VTable {
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

    struct CollectionChangeAction__Enum__StaticFields {
    };

    struct CollectionChangeAction__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollectionChangeAction__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollectionChangeAction__Enum__VTable vtable;
    };

    struct CollectionChangeEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Action;
        VirtualInvokeData get_Element;
    };

    struct CollectionChangeEventArgs__StaticFields {
    };

    struct CollectionChangeEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollectionChangeEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollectionChangeEventArgs__VTable vtable;
    };

    struct CollectionChangeEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct CollectionChangeEventHandler {
        struct CollectionChangeEventHandler__Class* klass;
        MonitorData* monitor;
        struct CollectionChangeEventHandler__Fields fields;
    };

    struct CollectionChangeEventHandler__VTable {
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

    struct CollectionChangeEventHandler__StaticFields {
    };

    struct CollectionChangeEventHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollectionChangeEventHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollectionChangeEventHandler__VTable vtable;
    };

    struct __declspec(align(8)) ComplexBindingPropertiesAttribute__Fields {
        struct String* dataSource;
        struct String* dataMember;
    };

    struct ComplexBindingPropertiesAttribute {
        struct ComplexBindingPropertiesAttribute__Class* klass;
        MonitorData* monitor;
        struct ComplexBindingPropertiesAttribute__Fields fields;
    };

    struct ComplexBindingPropertiesAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ComplexBindingPropertiesAttribute__StaticFields {
        struct ComplexBindingPropertiesAttribute* Default;
    };

    struct ComplexBindingPropertiesAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ComplexBindingPropertiesAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ComplexBindingPropertiesAttribute__VTable vtable;
    };

    struct IContainer {
        struct IContainer__Class* klass;
        MonitorData* monitor;
    };

    struct IContainer__VTable {
        VirtualInvokeData Add;
        VirtualInvokeData Add_1;
        VirtualInvokeData get_Components;
        VirtualInvokeData Remove;
    };

    struct IContainer__StaticFields {
    };

    struct IContainer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IContainer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IContainer__VTable vtable;
    };

    struct ComponentCollection__Fields {
        struct ReadOnlyCollectionBase__Fields _;
    };

    struct ComponentCollection {
        struct ComponentCollection__Class* klass;
        MonitorData* monitor;
        struct ComponentCollection__Fields fields;
    };

    struct IComponent {
        struct IComponent__Class* klass;
        MonitorData* monitor;
    };

    struct IComponent__Array {
        struct IComponent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IComponent* vector[32];
    };

    struct IComponent__VTable {
        VirtualInvokeData get_Site;
        VirtualInvokeData set_Site;
        VirtualInvokeData add_Disposed;
        VirtualInvokeData remove_Disposed;
    };

    struct IComponent__StaticFields {
    };

    struct IComponent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IComponent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IComponent__VTable vtable;
    };

    struct ComponentCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Item_1;
    };

    struct ComponentCollection__StaticFields {
    };

    struct ComponentCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ComponentCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ComponentCollection__VTable vtable;
    };

    struct IComponent__Array__VTable {
    };

    struct IComponent__Array__StaticFields {
    };

    struct IComponent__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IComponent__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IComponent__Array__VTable vtable;
    };

    struct __declspec(align(8)) ReferenceConverter__Fields {
        struct Type* type;
    };

    struct ReferenceConverter {
        struct ReferenceConverter__Class* klass;
        MonitorData* monitor;
        struct ReferenceConverter__Fields fields;
    };

    struct ComponentConverter__Fields {
        struct ReferenceConverter__Fields _;
    };

    struct ComponentConverter {
        struct ComponentConverter__Class* klass;
        MonitorData* monitor;
        struct ComponentConverter__Fields fields;
    };

    struct ReferenceConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CanConvertFrom;
        VirtualInvokeData CanConvertTo;
        VirtualInvokeData ConvertFrom;
        VirtualInvokeData ConvertTo;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCreateInstanceSupported;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetPropertiesSupported;
        VirtualInvokeData GetStandardValues;
        VirtualInvokeData GetStandardValuesExclusive;
        VirtualInvokeData GetStandardValuesSupported;
        VirtualInvokeData IsValid;
        VirtualInvokeData IsValueAllowed;
    };

    struct ReferenceConverter__StaticFields {
        struct String* none;
    };

    struct ReferenceConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReferenceConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReferenceConverter__VTable vtable;
    };

    struct ComponentConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CanConvertFrom;
        VirtualInvokeData CanConvertTo;
        VirtualInvokeData ConvertFrom;
        VirtualInvokeData ConvertTo;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCreateInstanceSupported;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetPropertiesSupported;
        VirtualInvokeData GetStandardValues;
        VirtualInvokeData GetStandardValuesExclusive;
        VirtualInvokeData GetStandardValuesSupported;
        VirtualInvokeData IsValid;
        VirtualInvokeData IsValueAllowed;
    };

    struct ComponentConverter__StaticFields {
    };

    struct ComponentConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ComponentConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ComponentConverter__VTable vtable;
    };

    struct ComponentResourceManager__Fields {
        struct ResourceManager__Fields _;
        struct Hashtable* _resourceSets;
        struct CultureInfo* _neutralResourcesCulture;
    };

    struct ComponentResourceManager {
        struct ComponentResourceManager__Class* klass;
        MonitorData* monitor;
        struct ComponentResourceManager__Fields fields;
    };

    struct ComponentResourceManager__VTable {
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
        VirtualInvokeData ApplyResources;
    };

    struct ComponentResourceManager__StaticFields {
    };

    struct ComponentResourceManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ComponentResourceManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ComponentResourceManager__VTable vtable;
    };

    struct __declspec(align(8)) SortedList_2_System_String_System_Object___Fields {
        struct String__Array* keys;
        struct Object__Array* values;
        int32_t _size;
        int32_t version;
        struct IComparer_1_System_String_* comparer;
        struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object_* keyList;
        struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object_* valueList;
        struct Object* _syncRoot;
    };

    struct SortedList_2_System_String_System_Object_ {
        struct SortedList_2_System_String_System_Object___Class* klass;
        MonitorData* monitor;
        struct SortedList_2_System_String_System_Object___Fields fields;
    };

    struct IComparer_1_System_String_ {
        struct IComparer_1_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Fields {
        struct SortedList_2_System_String_System_Object_* _dict;
    };

    struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object_ {
        struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Class* klass;
        MonitorData* monitor;
        struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Fields fields;
    };

    struct __declspec(align(8)) SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Fields {
        struct SortedList_2_System_String_System_Object_* _dict;
    };

    struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object_ {
        struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Class* klass;
        MonitorData* monitor;
        struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Fields fields;
    };

    struct IComparer_1_System_String___VTable {
        VirtualInvokeData Compare;
    };

    struct IComparer_1_System_String___StaticFields {
    };

    struct IComparer_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IComparer_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IComparer_1_System_String___VTable vtable;
    };

    struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___VTable {
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
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    };

    struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___StaticFields {
    };

    struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SortedList_2_TKey_TValue_KeyList_System_String_System_Object___VTable vtable;
    };

    struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___VTable {
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
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    };

    struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___StaticFields {
    };

    struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SortedList_2_TKey_TValue_ValueList_System_String_System_Object___VTable vtable;
    };

    struct SortedList_2_System_String_System_Object___VTable {
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
    };

    struct SortedList_2_System_String_System_Object___StaticFields {
    };

    struct SortedList_2_System_String_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SortedList_2_System_String_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SortedList_2_System_String_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Container__Fields {
        struct ISite__Array* sites;
        int32_t siteCount;
        struct ComponentCollection* components;
        struct ContainerFilterService* filter;
        bool checkedFilter;
        struct Object* syncObj;
    };

    struct Container {
        struct Container__Class* klass;
        MonitorData* monitor;
        struct Container__Fields fields;
    };

    struct ISite__Array {
        struct ISite__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ISite* vector[32];
    };

    struct ContainerFilterService {
        struct ContainerFilterService__Class* klass;
        MonitorData* monitor;
    };

    struct ISite__Array__VTable {
    };

    struct ISite__Array__StaticFields {
    };

    struct ISite__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISite__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISite__Array__VTable vtable;
    };

    struct ContainerFilterService__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData FilterComponents;
    };

    struct ContainerFilterService__StaticFields {
    };

    struct ContainerFilterService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContainerFilterService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContainerFilterService__VTable vtable;
    };

    struct Container__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Add;
        VirtualInvokeData Add_1;
        VirtualInvokeData get_Components;
        VirtualInvokeData Remove;
        VirtualInvokeData Dispose;
        VirtualInvokeData Add_2;
        VirtualInvokeData Add_3;
        VirtualInvokeData CreateSite;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData GetService;
        VirtualInvokeData get_Components_1;
        VirtualInvokeData Remove_1;
        VirtualInvokeData ValidateName;
    };

    struct Container__StaticFields {
    };

    struct Container__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Container__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Container__VTable vtable;
    };

    struct __declspec(align(8)) Container_Site__Fields {
        struct IComponent* component;
        struct Container* container;
        struct String* name;
    };

    struct Container_Site {
        struct Container_Site__Class* klass;
        MonitorData* monitor;
        struct Container_Site__Fields fields;
    };

    struct Container_Site__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Component;
        VirtualInvokeData get_Container;
        VirtualInvokeData get_DesignMode;
        VirtualInvokeData get_Name;
        VirtualInvokeData set_Name;
        VirtualInvokeData GetService;
    };

    struct Container_Site__StaticFields {
    };

    struct Container_Site__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Container_Site__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Container_Site__VTable vtable;
    };

    struct __declspec(align(8)) CultureInfoConverter__Fields {
        struct TypeConverter_StandardValuesCollection* values;
    };

    struct CultureInfoConverter {
        struct CultureInfoConverter__Class* klass;
        MonitorData* monitor;
        struct CultureInfoConverter__Fields fields;
    };

    struct CultureInfoConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CanConvertFrom;
        VirtualInvokeData CanConvertTo;
        VirtualInvokeData ConvertFrom;
        VirtualInvokeData ConvertTo;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCreateInstanceSupported;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetPropertiesSupported;
        VirtualInvokeData GetStandardValues;
        VirtualInvokeData GetStandardValuesExclusive;
        VirtualInvokeData GetStandardValuesSupported;
        VirtualInvokeData IsValid;
        VirtualInvokeData GetCultureName;
    };

    struct CultureInfoConverter__StaticFields {
    };

    struct CultureInfoConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CultureInfoConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CultureInfoConverter__VTable vtable;
    };

    struct __declspec(align(8)) CultureInfoConverter_CultureComparer__Fields {
        struct CultureInfoConverter* converter;
    };

    struct CultureInfoConverter_CultureComparer {
        struct CultureInfoConverter_CultureComparer__Class* klass;
        MonitorData* monitor;
        struct CultureInfoConverter_CultureComparer__Fields fields;
    };

    struct CultureInfoConverter_CultureComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Compare;
    };

    struct CultureInfoConverter_CultureComparer__StaticFields {
    };

    struct CultureInfoConverter_CultureComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CultureInfoConverter_CultureComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CultureInfoConverter_CultureComparer__VTable vtable;
    };

    struct __declspec(align(8)) CustomTypeDescriptor__Fields {
        struct ICustomTypeDescriptor* _parent;
    };

    struct CustomTypeDescriptor {
        struct CustomTypeDescriptor__Class* klass;
        MonitorData* monitor;
        struct CustomTypeDescriptor__Fields fields;
    };

    struct ICustomTypeDescriptor {
        struct ICustomTypeDescriptor__Class* klass;
        MonitorData* monitor;
    };

    struct EventDescriptor_1__Fields {
        struct MemberDescriptor__Fields _;
    };

    struct EventDescriptor_1 {
        struct EventDescriptor_1__Class* klass;
        MonitorData* monitor;
        struct EventDescriptor_1__Fields fields;
    };

    struct ReflectEventDescriptor__Fields {
        struct EventDescriptor_1__Fields _;
        struct Type* type;
        struct Type* componentClass;
        struct MethodInfo_1* addMethod;
        struct MethodInfo_1* removeMethod;
        struct EventInfo_1* realEvent;
        bool filledMethods;
    };

    struct ReflectEventDescriptor {
        struct ReflectEventDescriptor__Class* klass;
        MonitorData* monitor;
        struct ReflectEventDescriptor__Fields fields;
    };

    struct __declspec(align(8)) EventDescriptorCollection__Fields {
        struct EventDescriptor_1__Array* events;
        struct String__Array* namedSort;
        struct IComparer* comparer;
        bool eventsOwned;
        bool needSort;
        int32_t eventCount;
        bool readOnly;
    };

    struct EventDescriptorCollection {
        struct EventDescriptorCollection__Class* klass;
        MonitorData* monitor;
        struct EventDescriptorCollection__Fields fields;
    };

    struct EventDescriptor_1__Array {
        struct EventDescriptor_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EventDescriptor_1* vector[32];
    };

    struct ICustomTypeDescriptor__VTable {
        VirtualInvokeData GetAttributes;
        VirtualInvokeData GetClassName;
        VirtualInvokeData GetComponentName;
        VirtualInvokeData GetConverter;
        VirtualInvokeData GetDefaultEvent;
        VirtualInvokeData GetDefaultProperty;
        VirtualInvokeData GetEditor;
        VirtualInvokeData GetEvents;
        VirtualInvokeData GetEvents_1;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetProperties_1;
        VirtualInvokeData GetPropertyOwner;
    };

    struct ICustomTypeDescriptor__StaticFields {
    };

    struct ICustomTypeDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICustomTypeDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICustomTypeDescriptor__VTable vtable;
    };

    struct ReflectEventDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_AttributeArray;
        VirtualInvokeData set_AttributeArray;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_Description;
        VirtualInvokeData get_IsBrowsable;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_NameHashCode;
        VirtualInvokeData get_DesignTimeOnly;
        VirtualInvokeData get_DisplayName;
        VirtualInvokeData CreateAttributeCollection;
        VirtualInvokeData FillAttributes;
        VirtualInvokeData GetInvocationTarget;
        VirtualInvokeData get_ComponentType;
        VirtualInvokeData get_EventType;
        VirtualInvokeData get_IsMulticast;
        VirtualInvokeData AddEventHandler;
        VirtualInvokeData RemoveEventHandler;
    };

    struct ReflectEventDescriptor__StaticFields {
    };

    struct ReflectEventDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReflectEventDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReflectEventDescriptor__VTable vtable;
    };

    struct EventDescriptor_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_AttributeArray;
        VirtualInvokeData set_AttributeArray;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_Description;
        VirtualInvokeData get_IsBrowsable;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_NameHashCode;
        VirtualInvokeData get_DesignTimeOnly;
        VirtualInvokeData get_DisplayName;
        VirtualInvokeData CreateAttributeCollection;
        VirtualInvokeData FillAttributes;
        VirtualInvokeData GetInvocationTarget;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
    };

    struct EventDescriptor_1__StaticFields {
    };

    struct EventDescriptor_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventDescriptor_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventDescriptor_1__VTable vtable;
    };

    struct EventDescriptor_1__Array__VTable {
    };

    struct EventDescriptor_1__Array__StaticFields {
    };

    struct EventDescriptor_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventDescriptor_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventDescriptor_1__Array__VTable vtable;
    };

    struct EventDescriptorCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData System_Collections_ICollection_get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData System_Collections_IList_Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData Find;
        VirtualInvokeData Sort;
        VirtualInvokeData Sort_1;
        VirtualInvokeData Sort_2;
        VirtualInvokeData Sort_3;
    };

} // namespace app
