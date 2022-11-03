namespace app {
    struct ToolboxItemFilterType__Enum__StaticFields {
    };

    struct ToolboxItemFilterType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ToolboxItemFilterType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ToolboxItemFilterType__Enum__VTable vtable;
    };

    struct ToolboxItemFilterAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ToolboxItemFilterAttribute__StaticFields {
    };

    struct ToolboxItemFilterAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ToolboxItemFilterAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ToolboxItemFilterAttribute__VTable vtable;
    };

    struct __declspec(align(8)) TypeConverterAttribute__Fields {
        struct String* typeName;
    };

    struct TypeConverterAttribute {
        struct TypeConverterAttribute__Class* klass;
        MonitorData* monitor;
        struct TypeConverterAttribute__Fields fields;
    };

    struct TypeConverterAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct TypeConverterAttribute__StaticFields {
        struct TypeConverterAttribute* Default;
    };

    struct TypeConverterAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeConverterAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeConverterAttribute__VTable vtable;
    };

    struct __declspec(align(8)) TypeDescriptionProviderAttribute__Fields {
        struct String* _typeName;
    };

    struct TypeDescriptionProviderAttribute {
        struct TypeDescriptionProviderAttribute__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptionProviderAttribute__Fields fields;
    };

    struct TypeDescriptionProviderAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct TypeDescriptionProviderAttribute__StaticFields {
    };

    struct TypeDescriptionProviderAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptionProviderAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptionProviderAttribute__VTable vtable;
    };

    struct TypeDescriptor {
        struct TypeDescriptor__Class* klass;
        MonitorData* monitor;
    };

    struct WeakHashtable__Fields {
        struct Hashtable__Fields _;
        int64_t _lastGlobalMem;
        int32_t _lastHashCount;
    };

    struct WeakHashtable {
        struct WeakHashtable__Class* klass;
        MonitorData* monitor;
        struct WeakHashtable__Fields fields;
    };

    struct WeakHashtable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData get_Keys;
        VirtualInvokeData get_Values;
        VirtualInvokeData Contains;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_IsFixedSize;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData Remove;
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData Clone;
        VirtualInvokeData Add_1;
        VirtualInvokeData Clear_1;
        VirtualInvokeData Clone_1;
        VirtualInvokeData Contains_1;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData CopyTo_1;
        VirtualInvokeData ToKeyValuePairsArray;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData set_Item_1;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData GetHash;
        VirtualInvokeData get_IsReadOnly_1;
        VirtualInvokeData get_IsFixedSize_1;
        VirtualInvokeData get_IsSynchronized_1;
        VirtualInvokeData KeyEquals;
        VirtualInvokeData get_Keys_1;
        VirtualInvokeData get_Values_1;
        VirtualInvokeData Remove_1;
        VirtualInvokeData get_SyncRoot_1;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
    };

    struct WeakHashtable__StaticFields {
        struct IEqualityComparer* _comparer;
    };

    struct WeakHashtable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeakHashtable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeakHashtable__VTable vtable;
    };

    struct TypeDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeDescriptor__StaticFields {
        struct WeakHashtable* _providerTable;
        struct Hashtable* _providerTypeTable;
        struct Hashtable* _defaultProviders;
        struct WeakHashtable* _associationTable;
        int32_t _metadataVersion;
        int32_t _collisionIndex;
        struct BooleanSwitch* TraceDescriptor;
        struct Guid__Array* _pipelineInitializeKeys;
        struct Guid__Array* _pipelineMergeKeys;
        struct Guid__Array* _pipelineFilterKeys;
        struct Guid__Array* _pipelineAttributeFilterKeys;
        struct Object* _internalSyncObject;
        struct RefreshEventHandler* Refreshed;
    };

    struct TypeDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor__VTable vtable;
    };

    struct IComNativeDescriptorHandler {
        struct IComNativeDescriptorHandler__Class* klass;
        MonitorData* monitor;
    };

    struct IComNativeDescriptorHandler__VTable {
        VirtualInvokeData GetAttributes;
        VirtualInvokeData GetClassName;
        VirtualInvokeData GetConverter;
        VirtualInvokeData GetDefaultEvent;
        VirtualInvokeData GetDefaultProperty;
        VirtualInvokeData GetEditor;
        VirtualInvokeData GetName;
        VirtualInvokeData GetEvents;
        VirtualInvokeData GetEvents_1;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetPropertyValue;
        VirtualInvokeData GetPropertyValue_1;
    };

    struct IComNativeDescriptorHandler__StaticFields {
    };

    struct IComNativeDescriptorHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IComNativeDescriptorHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IComNativeDescriptorHandler__VTable vtable;
    };

    struct IDesigner {
        struct IDesigner__Class* klass;
        MonitorData* monitor;
    };

    struct IDesigner__VTable {
    };

    struct IDesigner__StaticFields {
    };

    struct IDesigner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDesigner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDesigner__VTable vtable;
    };

    struct TypeDescriptor_TypeDescriptionNode__Fields {
        struct TypeDescriptionProvider__Fields _;
        struct TypeDescriptor_TypeDescriptionNode* Next;
        struct TypeDescriptionProvider* Provider;
    };

    struct TypeDescriptor_TypeDescriptionNode {
        struct TypeDescriptor_TypeDescriptionNode__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_TypeDescriptionNode__Fields fields;
    };

    struct TypeDescriptor_TypeDescriptionNode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCache;
        VirtualInvokeData GetExtendedTypeDescriptor;
        VirtualInvokeData GetExtenderProviders;
        VirtualInvokeData GetFullComponentName;
        VirtualInvokeData GetReflectionType;
        VirtualInvokeData GetRuntimeType;
        VirtualInvokeData GetTypeDescriptor;
        VirtualInvokeData IsSupportedType;
    };

    struct TypeDescriptor_TypeDescriptionNode__StaticFields {
    };

    struct TypeDescriptor_TypeDescriptionNode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_TypeDescriptionNode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_TypeDescriptionNode__VTable vtable;
    };

    struct TypeDescriptor_AttributeProvider__Fields {
        struct TypeDescriptionProvider__Fields _;
        struct Attribute__Array* _attrs;
    };

    struct TypeDescriptor_AttributeProvider {
        struct TypeDescriptor_AttributeProvider__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_AttributeProvider__Fields fields;
    };

    struct TypeDescriptor_AttributeProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCache;
        VirtualInvokeData GetExtendedTypeDescriptor;
        VirtualInvokeData GetExtenderProviders;
        VirtualInvokeData GetFullComponentName;
        VirtualInvokeData GetReflectionType;
        VirtualInvokeData GetRuntimeType;
        VirtualInvokeData GetTypeDescriptor;
        VirtualInvokeData IsSupportedType;
    };

    struct TypeDescriptor_AttributeProvider__StaticFields {
    };

    struct TypeDescriptor_AttributeProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_AttributeProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_AttributeProvider__VTable vtable;
    };

    struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Fields {
        struct CustomTypeDescriptor__Fields _;
        struct Attribute__Array* _attributeArray;
    };

    struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor {
        struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Fields fields;
    };

    struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
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
        VirtualInvokeData GetAttributes_1;
        VirtualInvokeData GetClassName_1;
        VirtualInvokeData GetComponentName_1;
        VirtualInvokeData GetConverter_1;
        VirtualInvokeData GetDefaultEvent_1;
        VirtualInvokeData GetDefaultProperty_1;
        VirtualInvokeData GetEditor_1;
        VirtualInvokeData GetEvents_2;
        VirtualInvokeData GetEvents_3;
        VirtualInvokeData GetProperties_2;
        VirtualInvokeData GetProperties_3;
        VirtualInvokeData GetPropertyOwner_1;
    };

    struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__StaticFields {
    };

    struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__VTable vtable;
    };

    struct TypeDescriptor_ComNativeDescriptionProvider__Fields {
        struct TypeDescriptionProvider__Fields _;
        struct IComNativeDescriptorHandler* _handler;
    };

    struct TypeDescriptor_ComNativeDescriptionProvider {
        struct TypeDescriptor_ComNativeDescriptionProvider__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_ComNativeDescriptionProvider__Fields fields;
    };

    struct TypeDescriptor_ComNativeDescriptionProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCache;
        VirtualInvokeData GetExtendedTypeDescriptor;
        VirtualInvokeData GetExtenderProviders;
        VirtualInvokeData GetFullComponentName;
        VirtualInvokeData GetReflectionType;
        VirtualInvokeData GetRuntimeType;
        VirtualInvokeData GetTypeDescriptor;
        VirtualInvokeData IsSupportedType;
    };

    struct TypeDescriptor_ComNativeDescriptionProvider__StaticFields {
    };

    struct TypeDescriptor_ComNativeDescriptionProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_ComNativeDescriptionProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_ComNativeDescriptionProvider__VTable vtable;
    };

    struct __declspec(align(8)) TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Fields {
        struct IComNativeDescriptorHandler* _handler;
        struct Object* _instance;
    };

    struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor {
        struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Fields fields;
    };

    struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
    };

    struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__StaticFields {
    };

    struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_ComNativeDescriptionProvider_ComNativeTypeDescriptor__VTable vtable;
    };

    struct __declspec(align(8)) TypeDescriptor_AttributeFilterCacheItem__Fields {
        struct Attribute__Array* _filter;
        struct ICollection* FilteredMembers;
    };

    struct TypeDescriptor_AttributeFilterCacheItem {
        struct TypeDescriptor_AttributeFilterCacheItem__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_AttributeFilterCacheItem__Fields fields;
    };

    struct TypeDescriptor_AttributeFilterCacheItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeDescriptor_AttributeFilterCacheItem__StaticFields {
    };

    struct TypeDescriptor_AttributeFilterCacheItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_AttributeFilterCacheItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_AttributeFilterCacheItem__VTable vtable;
    };

    struct __declspec(align(8)) TypeDescriptor_FilterCacheItem__Fields {
        struct ITypeDescriptorFilterService* _filterService;
        struct ICollection* FilteredMembers;
    };

    struct TypeDescriptor_FilterCacheItem {
        struct TypeDescriptor_FilterCacheItem__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_FilterCacheItem__Fields fields;
    };

    struct ITypeDescriptorFilterService {
        struct ITypeDescriptorFilterService__Class* klass;
        MonitorData* monitor;
    };

    struct ITypeDescriptorFilterService__VTable {
        VirtualInvokeData FilterAttributes;
        VirtualInvokeData FilterEvents;
        VirtualInvokeData FilterProperties;
    };

    struct ITypeDescriptorFilterService__StaticFields {
    };

    struct ITypeDescriptorFilterService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ITypeDescriptorFilterService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ITypeDescriptorFilterService__VTable vtable;
    };

    struct TypeDescriptor_FilterCacheItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeDescriptor_FilterCacheItem__StaticFields {
    };

    struct TypeDescriptor_FilterCacheItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_FilterCacheItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_FilterCacheItem__VTable vtable;
    };

    struct TypeDescriptor_MemberDescriptorComparer {
        struct TypeDescriptor_MemberDescriptorComparer__Class* klass;
        MonitorData* monitor;
    };

    struct TypeDescriptor_MemberDescriptorComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Compare;
    };

    struct TypeDescriptor_MemberDescriptorComparer__StaticFields {
        struct TypeDescriptor_MemberDescriptorComparer* Instance;
    };

    struct TypeDescriptor_MemberDescriptorComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_MemberDescriptorComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_MemberDescriptorComparer__VTable vtable;
    };

    struct __declspec(align(8)) TypeDescriptor_MergedTypeDescriptor__Fields {
        struct ICustomTypeDescriptor* _primary;
        struct ICustomTypeDescriptor* _secondary;
    };

    struct TypeDescriptor_MergedTypeDescriptor {
        struct TypeDescriptor_MergedTypeDescriptor__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_MergedTypeDescriptor__Fields fields;
    };

    struct TypeDescriptor_MergedTypeDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
    };

    struct TypeDescriptor_MergedTypeDescriptor__StaticFields {
    };

    struct TypeDescriptor_MergedTypeDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_MergedTypeDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_MergedTypeDescriptor__VTable vtable;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor {
        struct TypeDescriptor_TypeDescriptionNode* _node;
        struct Object* _instance;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Boxed {
        struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor fields;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__StaticFields {
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor__VTable vtable;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor {
        struct TypeDescriptor_TypeDescriptionNode* _node;
        struct Type* _objectType;
        struct Object* _instance;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Boxed {
        struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class* klass;
        MonitorData* monitor;
        struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor fields;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetAttributes;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetClassName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetComponentName;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetConverter;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEditor;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetEvents_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetProperties_1;
        VirtualInvokeData System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner;
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__StaticFields {
    };

    struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor__VTable vtable;
    };

    struct TypeDescriptor_TypeDescriptorComObject {
        struct TypeDescriptor_TypeDescriptorComObject__Class* klass;
        MonitorData* monitor;
    };

    struct TypeDescriptor_TypeDescriptorComObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeDescriptor_TypeDescriptorComObject__StaticFields {
    };

    struct TypeDescriptor_TypeDescriptorComObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_TypeDescriptorComObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_TypeDescriptorComObject__VTable vtable;
    };

    struct TypeDescriptor_TypeDescriptorInterface {
        struct TypeDescriptor_TypeDescriptorInterface__Class* klass;
        MonitorData* monitor;
    };

    struct TypeDescriptor_TypeDescriptorInterface__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TypeDescriptor_TypeDescriptorInterface__StaticFields {
    };

    struct TypeDescriptor_TypeDescriptorInterface__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeDescriptor_TypeDescriptorInterface__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeDescriptor_TypeDescriptorInterface__VTable vtable;
    };

    struct __declspec(align(8)) TypeListConverter__Fields {
        struct Type__Array* types;
        struct TypeConverter_StandardValuesCollection* values;
    };

    struct TypeListConverter {
        struct TypeListConverter__Class* klass;
        MonitorData* monitor;
        struct TypeListConverter__Fields fields;
    };

    struct TypeListConverter__VTable {
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
    };

    struct TypeListConverter__StaticFields {
    };

    struct TypeListConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeListConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeListConverter__VTable vtable;
    };

    struct UInt16Converter {
        struct UInt16Converter__Class* klass;
        MonitorData* monitor;
    };

    struct UInt16Converter__VTable {
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
        VirtualInvokeData get_AllowHex;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData FromString;
        VirtualInvokeData FromString_1;
        VirtualInvokeData FromString_2;
        VirtualInvokeData FromStringError;
        VirtualInvokeData ToString_1;
    };

    struct UInt16Converter__StaticFields {
    };

    struct UInt16Converter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt16Converter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt16Converter__VTable vtable;
    };

    struct UInt32Converter {
        struct UInt32Converter__Class* klass;
        MonitorData* monitor;
    };

    struct UInt32Converter__VTable {
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
        VirtualInvokeData get_AllowHex;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData FromString;
        VirtualInvokeData FromString_1;
        VirtualInvokeData FromString_2;
        VirtualInvokeData FromStringError;
        VirtualInvokeData ToString_1;
    };

    struct UInt32Converter__StaticFields {
    };

    struct UInt32Converter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt32Converter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt32Converter__VTable vtable;
    };

    struct UInt64Converter {
        struct UInt64Converter__Class* klass;
        MonitorData* monitor;
    };

    struct UInt64Converter__VTable {
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
        VirtualInvokeData get_AllowHex;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData FromString;
        VirtualInvokeData FromString_1;
        VirtualInvokeData FromString_2;
        VirtualInvokeData FromStringError;
        VirtualInvokeData ToString_1;
    };

    struct UInt64Converter__StaticFields {
    };

    struct UInt64Converter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt64Converter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt64Converter__VTable vtable;
    };

    struct WarningException__Fields {
        struct SystemException__Fields _;
        struct String* helpUrl;
        struct String* helpTopic;
    };

    struct WarningException {
        struct WarningException__Class* klass;
        MonitorData* monitor;
        struct WarningException__Fields fields;
    };

    struct WarningException__VTable {
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

    struct WarningException__StaticFields {
    };

    struct WarningException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WarningException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WarningException__VTable vtable;
    };

    struct Win32Exception__Fields {
        struct ExternalException__Fields _;
        int32_t nativeErrorCode;
    };

    struct Win32Exception {
        struct Win32Exception__Class* klass;
        MonitorData* monitor;
        struct Win32Exception__Fields fields;
    };

    struct Win32Exception__VTable {
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
        VirtualInvokeData get_ErrorCode;
    };

    struct Win32Exception__StaticFields {
        bool s_ErrorMessagesInitialized;
        struct Dictionary_2_System_Int32_System_String_* s_ErrorMessage;
    };

} // namespace app
