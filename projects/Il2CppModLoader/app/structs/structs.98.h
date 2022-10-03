namespace app {
    struct Win32Exception__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Win32Exception__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Win32Exception__VTable vtable;
    };

    enum class InheritanceLevel__Enum : int32_t {
        Inherited = 0x00000001,
        InheritedReadOnly = 0x00000002,
        NotInherited = 0x00000003,
    };

    struct InheritanceLevel__Enum__Boxed {
        struct InheritanceLevel__Enum__Class* klass;
        MonitorData* monitor;
        InheritanceLevel__Enum value;
    };

    struct __declspec(align(8)) InheritanceAttribute__Fields {
        InheritanceLevel__Enum inheritanceLevel;
    };

    struct InheritanceAttribute {
        struct InheritanceAttribute__Class* klass;
        MonitorData* monitor;
        struct InheritanceAttribute__Fields fields;
    };

    struct InheritanceLevel__Enum__VTable {
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

    struct InheritanceLevel__Enum__StaticFields {
    };

    struct InheritanceLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InheritanceLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InheritanceLevel__Enum__VTable vtable;
    };

    struct InheritanceAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct InheritanceAttribute__StaticFields {
        struct InheritanceAttribute* Inherited;
        struct InheritanceAttribute* InheritedReadOnly;
        struct InheritanceAttribute* NotInherited;
        struct InheritanceAttribute* Default;
    };

    struct InheritanceAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InheritanceAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InheritanceAttribute__VTable vtable;
    };

    struct __declspec(align(8)) NotifyParentPropertyAttribute__Fields {
        bool notifyParent;
    };

    struct NotifyParentPropertyAttribute {
        struct NotifyParentPropertyAttribute__Class* klass;
        MonitorData* monitor;
        struct NotifyParentPropertyAttribute__Fields fields;
    };

    struct NotifyParentPropertyAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct NotifyParentPropertyAttribute__StaticFields {
        struct NotifyParentPropertyAttribute* Yes;
        struct NotifyParentPropertyAttribute* No;
        struct NotifyParentPropertyAttribute* Default;
    };

    struct NotifyParentPropertyAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NotifyParentPropertyAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NotifyParentPropertyAttribute__VTable vtable;
    };

    struct __declspec(align(8)) ParenthesizePropertyNameAttribute__Fields {
        bool needParenthesis;
    };

    struct ParenthesizePropertyNameAttribute {
        struct ParenthesizePropertyNameAttribute__Class* klass;
        MonitorData* monitor;
        struct ParenthesizePropertyNameAttribute__Fields fields;
    };

    struct ParenthesizePropertyNameAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ParenthesizePropertyNameAttribute__StaticFields {
        struct ParenthesizePropertyNameAttribute* Default;
    };

    struct ParenthesizePropertyNameAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParenthesizePropertyNameAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParenthesizePropertyNameAttribute__VTable vtable;
    };

    struct __declspec(align(8)) PropertyTabAttribute__Fields {
        struct PropertyTabScope__Enum__Array* tabScopes;
        struct Type__Array* tabClasses;
        struct String__Array* tabClassNames;
    };

    struct PropertyTabAttribute {
        struct PropertyTabAttribute__Class* klass;
        MonitorData* monitor;
        struct PropertyTabAttribute__Fields fields;
    };

    enum class PropertyTabScope__Enum : int32_t {
        Static = 0x00000000,
        Global = 0x00000001,
        Document = 0x00000002,
        Component = 0x00000003,
    };

    struct PropertyTabScope__Enum__Boxed {
        struct PropertyTabScope__Enum__Class* klass;
        MonitorData* monitor;
        PropertyTabScope__Enum value;
    };

    struct PropertyTabScope__Enum__Array {
        struct PropertyTabScope__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        PropertyTabScope__Enum vector[32];
    };

    struct PropertyTabScope__Enum__VTable {
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

    struct PropertyTabScope__Enum__StaticFields {
    };

    struct PropertyTabScope__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PropertyTabScope__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PropertyTabScope__Enum__VTable vtable;
    };

    struct PropertyTabScope__Enum__Array__VTable {
    };

    struct PropertyTabScope__Enum__Array__StaticFields {
    };

    struct PropertyTabScope__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PropertyTabScope__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PropertyTabScope__Enum__Array__VTable vtable;
    };

    struct PropertyTabAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct PropertyTabAttribute__StaticFields {
    };

    struct PropertyTabAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PropertyTabAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PropertyTabAttribute__VTable vtable;
    };

    enum class RefreshProperties__Enum : int32_t {
        None = 0x00000000,
        All = 0x00000001,
        Repaint = 0x00000002,
    };

    struct RefreshProperties__Enum__Boxed {
        struct RefreshProperties__Enum__Class* klass;
        MonitorData* monitor;
        RefreshProperties__Enum value;
    };

    struct __declspec(align(8)) RefreshPropertiesAttribute__Fields {
        RefreshProperties__Enum refresh;
    };

    struct RefreshPropertiesAttribute {
        struct RefreshPropertiesAttribute__Class* klass;
        MonitorData* monitor;
        struct RefreshPropertiesAttribute__Fields fields;
    };

    struct RefreshProperties__Enum__VTable {
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

    struct RefreshProperties__Enum__StaticFields {
    };

    struct RefreshProperties__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RefreshProperties__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RefreshProperties__Enum__VTable vtable;
    };

    struct RefreshPropertiesAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct RefreshPropertiesAttribute__StaticFields {
        struct RefreshPropertiesAttribute* All;
        struct RefreshPropertiesAttribute* Repaint;
        struct RefreshPropertiesAttribute* Default;
    };

    struct RefreshPropertiesAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RefreshPropertiesAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RefreshPropertiesAttribute__VTable vtable;
    };

    struct __declspec(align(8)) ToolboxItemAttribute__Fields {
        struct Type* toolboxItemType;
        struct String* toolboxItemTypeName;
    };

    struct ToolboxItemAttribute {
        struct ToolboxItemAttribute__Class* klass;
        MonitorData* monitor;
        struct ToolboxItemAttribute__Fields fields;
    };

    struct ToolboxItemAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ToolboxItemAttribute__StaticFields {
        struct ToolboxItemAttribute* Default;
        struct ToolboxItemAttribute* None;
    };

    struct ToolboxItemAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ToolboxItemAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ToolboxItemAttribute__VTable vtable;
    };

    struct WeakHashtable_WeakKeyComparer {
        struct WeakHashtable_WeakKeyComparer__Class* klass;
        MonitorData* monitor;
    };

    struct WeakHashtable_WeakKeyComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IEqualityComparer_Equals;
        VirtualInvokeData System_Collections_IEqualityComparer_GetHashCode;
    };

    struct WeakHashtable_WeakKeyComparer__StaticFields {
    };

    struct WeakHashtable_WeakKeyComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeakHashtable_WeakKeyComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeakHashtable_WeakKeyComparer__VTable vtable;
    };

    struct WeakHashtable_EqualityWeakReference__Fields {
        struct WeakReference__Fields _;
        int32_t _hashCode;
    };

    struct WeakHashtable_EqualityWeakReference {
        struct WeakHashtable_EqualityWeakReference__Class* klass;
        MonitorData* monitor;
        struct WeakHashtable_EqualityWeakReference__Fields fields;
    };

    struct WeakHashtable_EqualityWeakReference__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_IsAlive;
        VirtualInvokeData get_Target;
        VirtualInvokeData set_Target;
        VirtualInvokeData get_TrackResurrection;
        VirtualInvokeData GetObjectData_1;
    };

    struct WeakHashtable_EqualityWeakReference__StaticFields {
    };

    struct WeakHashtable_EqualityWeakReference__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WeakHashtable_EqualityWeakReference__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WeakHashtable_EqualityWeakReference__VTable vtable;
    };

    struct SRCategoryAttribute__Fields {
        struct CategoryAttribute__Fields _;
    };

    struct SRCategoryAttribute {
        struct SRCategoryAttribute__Class* klass;
        MonitorData* monitor;
        struct SRCategoryAttribute__Fields fields;
    };

    struct SRCategoryAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
        VirtualInvokeData GetLocalizedString;
    };

    struct SRCategoryAttribute__StaticFields {
    };

    struct SRCategoryAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SRCategoryAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SRCategoryAttribute__VTable vtable;
    };

    struct CheckoutException__Fields {
        struct ExternalException__Fields _;
    };

    struct CheckoutException {
        struct CheckoutException__Class* klass;
        MonitorData* monitor;
        struct CheckoutException__Fields fields;
    };

    struct CheckoutException__VTable {
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

    struct CheckoutException__StaticFields {
        struct CheckoutException* Canceled;
    };

    struct CheckoutException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CheckoutException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CheckoutException__VTable vtable;
    };

    struct __declspec(align(8)) RuntimeLicenseContext__Fields {
        struct Hashtable* savedLicenseKeys;
    };

    struct RuntimeLicenseContext {
        struct RuntimeLicenseContext__Class* klass;
        MonitorData* monitor;
        struct RuntimeLicenseContext__Fields fields;
    };

    struct RuntimeLicenseContext__VTable {
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

    struct RuntimeLicenseContext__StaticFields {
        struct TraceSwitch* RuntimeLicenseContextSwitch;
    };

    struct RuntimeLicenseContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeLicenseContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeLicenseContext__VTable vtable;
    };

    struct __declspec(align(8)) DesignerSerializerAttribute__Fields {
        struct String* serializerTypeName;
        struct String* serializerBaseTypeName;
        struct String* typeId;
    };

    struct DesignerSerializerAttribute {
        struct DesignerSerializerAttribute__Class* klass;
        MonitorData* monitor;
        struct DesignerSerializerAttribute__Fields fields;
    };

    struct DesignerSerializerAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct DesignerSerializerAttribute__StaticFields {
    };

    struct DesignerSerializerAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DesignerSerializerAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DesignerSerializerAttribute__VTable vtable;
    };

    struct __declspec(align(8)) InstanceDescriptor__Fields {
        struct MemberInfo_1* member;
        struct ICollection* arguments;
        bool isComplete;
    };

    struct InstanceDescriptor {
        struct InstanceDescriptor__Class* klass;
        MonitorData* monitor;
        struct InstanceDescriptor__Fields fields;
    };

    struct InstanceDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InstanceDescriptor__StaticFields {
    };

    struct InstanceDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InstanceDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InstanceDescriptor__VTable vtable;
    };

    struct __declspec(align(8)) RootDesignerSerializerAttribute__Fields {
        bool reloadable;
        struct String* serializerTypeName;
        struct String* serializerBaseTypeName;
        struct String* typeId;
    };

    struct RootDesignerSerializerAttribute {
        struct RootDesignerSerializerAttribute__Class* klass;
        MonitorData* monitor;
        struct RootDesignerSerializerAttribute__Fields fields;
    };

    struct RootDesignerSerializerAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct RootDesignerSerializerAttribute__StaticFields {
    };

    struct RootDesignerSerializerAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RootDesignerSerializerAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RootDesignerSerializerAttribute__VTable vtable;
    };

    struct __declspec(align(8)) DefaultParameterValueAttribute__Fields {
        struct Object* value;
    };

    struct DefaultParameterValueAttribute {
        struct DefaultParameterValueAttribute__Class* klass;
        MonitorData* monitor;
        struct DefaultParameterValueAttribute__Fields fields;
    };

    struct DefaultParameterValueAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct DefaultParameterValueAttribute__StaticFields {
    };

    struct DefaultParameterValueAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DefaultParameterValueAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DefaultParameterValueAttribute__VTable vtable;
    };

    struct __declspec(align(8)) HandleCollector__Fields {
        struct String* name;
        int32_t initialThreshold;
        int32_t maximumThreshold;
        int32_t threshold;
        int32_t handleCount;
        struct Int32__Array* gc_counts;
        int32_t gc_gen;
    };

    struct HandleCollector {
        struct HandleCollector__Class* klass;
        MonitorData* monitor;
        struct HandleCollector__Fields fields;
    };

    struct HandleCollector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HandleCollector__StaticFields {
    };

    struct HandleCollector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HandleCollector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HandleCollector__VTable vtable;
    };

    struct FriendAccessAllowedAttribute_1 {
        struct FriendAccessAllowedAttribute_1__Class* klass;
        MonitorData* monitor;
    };

    struct FriendAccessAllowedAttribute_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct FriendAccessAllowedAttribute_1__StaticFields {
    };

    struct FriendAccessAllowedAttribute_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FriendAccessAllowedAttribute_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FriendAccessAllowedAttribute_1__VTable vtable;
    };

    struct AuthenticationException__Fields {
        struct SystemException__Fields _;
    };

    struct AuthenticationException {
        struct AuthenticationException__Class* klass;
        MonitorData* monitor;
        struct AuthenticationException__Fields fields;
    };

    struct AuthenticationException__VTable {
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

    struct AuthenticationException__StaticFields {
    };

    struct AuthenticationException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AuthenticationException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AuthenticationException__VTable vtable;
    };

    struct ServiceNameCollection__Fields {
        struct ReadOnlyCollectionBase__Fields _;
    };

    struct ServiceNameCollection {
        struct ServiceNameCollection__Class* klass;
        MonitorData* monitor;
        struct ServiceNameCollection__Fields fields;
    };

    struct ServiceNameCollection__VTable {
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
    };

    struct ServiceNameCollection__StaticFields {
    };

    struct ServiceNameCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ServiceNameCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ServiceNameCollection__VTable vtable;
    };

    struct ExtendedProtectionPolicy {
        struct ExtendedProtectionPolicy__Class* klass;
        MonitorData* monitor;
    };

    enum class PolicyEnforcement__Enum : int32_t {
        Never = 0x00000000,
        WhenSupported = 0x00000001,
        Always = 0x00000002,
    };

    struct PolicyEnforcement__Enum__Boxed {
        struct PolicyEnforcement__Enum__Class* klass;
        MonitorData* monitor;
        PolicyEnforcement__Enum value;
    };

    struct ExtendedProtectionPolicy__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    };

    struct ExtendedProtectionPolicy__StaticFields {
    };

    struct ExtendedProtectionPolicy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExtendedProtectionPolicy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExtendedProtectionPolicy__VTable vtable;
    };

    struct PolicyEnforcement__Enum__VTable {
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

    struct PolicyEnforcement__Enum__StaticFields {
    };

    struct PolicyEnforcement__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PolicyEnforcement__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PolicyEnforcement__Enum__VTable vtable;
    };

    struct ChannelBinding__Fields {
        struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
    };

    struct ChannelBinding {
        struct ChannelBinding__Class* klass;
        MonitorData* monitor;
        struct ChannelBinding__Fields fields;
    };

    struct ChannelBinding__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_IsInvalid;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
    };

    struct ChannelBinding__StaticFields {
    };

    struct ChannelBinding__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChannelBinding__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChannelBinding__VTable vtable;
    };

    struct ExtendedProtectionPolicyTypeConverter {
        struct ExtendedProtectionPolicyTypeConverter__Class* klass;
        MonitorData* monitor;
    };

    struct ExtendedProtectionPolicyTypeConverter__VTable {
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

    struct ExtendedProtectionPolicyTypeConverter__StaticFields {
    };

    struct ExtendedProtectionPolicyTypeConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExtendedProtectionPolicyTypeConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExtendedProtectionPolicyTypeConverter__VTable vtable;
    };

    struct __declspec(align(8)) OidEnumerator__Fields {
        struct OidCollection* m_oids;
        int32_t m_current;
    };

    struct OidEnumerator {
        struct OidEnumerator__Class* klass;
        MonitorData* monitor;
        struct OidEnumerator__Fields fields;
    };

    struct OidEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData Reset;
    };

    struct OidEnumerator__StaticFields {
    };

} // namespace app
