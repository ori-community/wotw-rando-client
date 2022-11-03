namespace app {
    struct EditorAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct EditorAttribute__StaticFields {
    };

    struct EditorAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EditorAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EditorAttribute__VTable vtable;
    };

    enum class EditorBrowsableState__Enum : int32_t {
        Always = 0x00000000,
        Never = 0x00000001,
        Advanced = 0x00000002,
    };

    struct EditorBrowsableState__Enum__Boxed {
        struct EditorBrowsableState__Enum__Class* klass;
        MonitorData* monitor;
        EditorBrowsableState__Enum value;
    };

    struct __declspec(align(8)) EditorBrowsableAttribute__Fields {
        EditorBrowsableState__Enum browsableState;
    };

    struct EditorBrowsableAttribute {
        struct EditorBrowsableAttribute__Class* klass;
        MonitorData* monitor;
        struct EditorBrowsableAttribute__Fields fields;
    };

    struct EditorBrowsableState__Enum__VTable {
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

    struct EditorBrowsableState__Enum__StaticFields {
    };

    struct EditorBrowsableState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EditorBrowsableState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EditorBrowsableState__Enum__VTable vtable;
    };

    struct EditorBrowsableAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct EditorBrowsableAttribute__StaticFields {
    };

    struct EditorBrowsableAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EditorBrowsableAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EditorBrowsableAttribute__VTable vtable;
    };

    struct __declspec(align(8)) EnumConverter__Fields {
        struct TypeConverter_StandardValuesCollection* values;
        struct Type* type;
    };

    struct EnumConverter {
        struct EnumConverter__Class* klass;
        MonitorData* monitor;
        struct EnumConverter__Fields fields;
    };

    struct EnumConverter__VTable {
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
        VirtualInvokeData get_Comparer;
    };

    struct EnumConverter__StaticFields {
    };

    struct EnumConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumConverter__VTable vtable;
    };

    struct ExpandableObjectConverter {
        struct ExpandableObjectConverter__Class* klass;
        MonitorData* monitor;
    };

    struct ExpandableObjectConverter__VTable {
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

    struct ExpandableObjectConverter__StaticFields {
    };

    struct ExpandableObjectConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExpandableObjectConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExpandableObjectConverter__VTable vtable;
    };

    struct ExtendedPropertyDescriptor__Fields {
        struct PropertyDescriptor__Fields _;
        struct ReflectPropertyDescriptor* extenderInfo;
        struct IExtenderProvider* provider;
    };

    struct ExtendedPropertyDescriptor {
        struct ExtendedPropertyDescriptor__Class* klass;
        MonitorData* monitor;
        struct ExtendedPropertyDescriptor__Fields fields;
    };

    struct BitVector32 {
        uint32_t data;
    };

    struct BitVector32__Boxed {
        struct BitVector32__Class* klass;
        MonitorData* monitor;
        struct BitVector32 fields;
    };

    struct ReflectPropertyDescriptor__Fields {
        struct PropertyDescriptor__Fields _;
        struct BitVector32 state;
        struct Type* componentClass;
        struct Type* type;
        struct Object* defaultValue;
        struct Object* ambientValue;
        struct PropertyInfo_1* propInfo;
        struct MethodInfo_1* getMethod;
        struct MethodInfo_1* setMethod;
        struct MethodInfo_1* shouldSerializeMethod;
        struct MethodInfo_1* resetMethod;
        struct EventDescriptor_1* realChangedEvent;
        struct EventDescriptor_1* realIPropChangedEvent;
        struct Type* receiverType;
    };

    struct ReflectPropertyDescriptor {
        struct ReflectPropertyDescriptor__Class* klass;
        MonitorData* monitor;
        struct ReflectPropertyDescriptor__Fields fields;
    };

    struct BitVector32__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BitVector32__StaticFields {
    };

    struct BitVector32__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BitVector32__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BitVector32__VTable vtable;
    };

    struct ReflectPropertyDescriptor__VTable {
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
        VirtualInvokeData get_Converter;
        VirtualInvokeData get_IsLocalizable;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PropertyType;
        VirtualInvokeData AddValueChanged;
        VirtualInvokeData CanResetValue;
        VirtualInvokeData GetChildProperties;
        VirtualInvokeData GetEditor;
        VirtualInvokeData GetValue;
        VirtualInvokeData OnValueChanged;
        VirtualInvokeData RemoveValueChanged;
        VirtualInvokeData ResetValue;
        VirtualInvokeData SetValue;
        VirtualInvokeData ShouldSerializeValue;
        VirtualInvokeData get_SupportsChangeEvents;
    };

    struct ReflectPropertyDescriptor__StaticFields {
        struct Type__Array* argsNone;
        struct Object* noValue;
        struct TraceSwitch* PropDescCreateSwitch;
        struct TraceSwitch* PropDescUsageSwitch;
        int32_t BitDefaultValueQueried;
        int32_t BitGetQueried;
        int32_t BitSetQueried;
        int32_t BitShouldSerializeQueried;
        int32_t BitResetQueried;
        int32_t BitChangedQueried;
        int32_t BitIPropChangedQueried;
        int32_t BitReadOnlyChecked;
        int32_t BitAmbientValueQueried;
        int32_t BitSetOnDemand;
    };

    struct ReflectPropertyDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReflectPropertyDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReflectPropertyDescriptor__VTable vtable;
    };

    struct ExtendedPropertyDescriptor__VTable {
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
        VirtualInvokeData get_Converter;
        VirtualInvokeData get_IsLocalizable;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PropertyType;
        VirtualInvokeData AddValueChanged;
        VirtualInvokeData CanResetValue;
        VirtualInvokeData GetChildProperties;
        VirtualInvokeData GetEditor;
        VirtualInvokeData GetValue;
        VirtualInvokeData OnValueChanged;
        VirtualInvokeData RemoveValueChanged;
        VirtualInvokeData ResetValue;
        VirtualInvokeData SetValue;
        VirtualInvokeData ShouldSerializeValue;
        VirtualInvokeData get_SupportsChangeEvents;
    };

    struct ExtendedPropertyDescriptor__StaticFields {
    };

    struct ExtendedPropertyDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExtendedPropertyDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExtendedPropertyDescriptor__VTable vtable;
    };

    struct __declspec(align(8)) ExtenderProvidedPropertyAttribute__Fields {
        struct PropertyDescriptor* extenderProperty;
        struct IExtenderProvider* provider;
        struct Type* receiverType;
    };

    struct ExtenderProvidedPropertyAttribute {
        struct ExtenderProvidedPropertyAttribute__Class* klass;
        MonitorData* monitor;
        struct ExtenderProvidedPropertyAttribute__Fields fields;
    };

    struct ExtenderProvidedPropertyAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ExtenderProvidedPropertyAttribute__StaticFields {
    };

    struct ExtenderProvidedPropertyAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExtenderProvidedPropertyAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExtenderProvidedPropertyAttribute__VTable vtable;
    };

    struct GuidConverter {
        struct GuidConverter__Class* klass;
        MonitorData* monitor;
    };

    struct GuidConverter__VTable {
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

    struct GuidConverter__StaticFields {
    };

    struct GuidConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GuidConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GuidConverter__VTable vtable;
    };

    struct __declspec(align(8)) HandledEventArgs__Fields {
        bool handled;
    };

    struct HandledEventArgs {
        struct HandledEventArgs__Class* klass;
        MonitorData* monitor;
        struct HandledEventArgs__Fields fields;
    };

    struct HandledEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HandledEventArgs__StaticFields {
    };

    struct HandledEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HandledEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HandledEventArgs__VTable vtable;
    };

    struct HandledEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct HandledEventHandler {
        struct HandledEventHandler__Class* klass;
        MonitorData* monitor;
        struct HandledEventHandler__Fields fields;
    };

    struct HandledEventHandler__VTable {
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

    struct HandledEventHandler__StaticFields {
    };

    struct HandledEventHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HandledEventHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HandledEventHandler__VTable vtable;
    };

    struct __declspec(align(8)) ImmutableObjectAttribute__Fields {
        bool immutable;
    };

    struct ImmutableObjectAttribute {
        struct ImmutableObjectAttribute__Class* klass;
        MonitorData* monitor;
        struct ImmutableObjectAttribute__Fields fields;
    };

    struct ImmutableObjectAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ImmutableObjectAttribute__StaticFields {
        struct ImmutableObjectAttribute* Yes;
        struct ImmutableObjectAttribute* No;
        struct ImmutableObjectAttribute* Default;
    };

    struct ImmutableObjectAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ImmutableObjectAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ImmutableObjectAttribute__VTable vtable;
    };

    struct __declspec(align(8)) InitializationEventAttribute__Fields {
        struct String* eventName;
    };

    struct InitializationEventAttribute {
        struct InitializationEventAttribute__Class* klass;
        MonitorData* monitor;
        struct InitializationEventAttribute__Fields fields;
    };

    struct InitializationEventAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct InitializationEventAttribute__StaticFields {
    };

    struct InitializationEventAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InitializationEventAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InitializationEventAttribute__VTable vtable;
    };

    struct __declspec(align(8)) InstallerTypeAttribute__Fields {
        struct String* _typeName;
    };

    struct InstallerTypeAttribute {
        struct InstallerTypeAttribute__Class* klass;
        MonitorData* monitor;
        struct InstallerTypeAttribute__Fields fields;
    };

    struct InstallerTypeAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
        VirtualInvokeData get_InstallerType;
    };

    struct InstallerTypeAttribute__StaticFields {
    };

    struct InstallerTypeAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InstallerTypeAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InstallerTypeAttribute__VTable vtable;
    };

    struct InstanceCreationEditor {
        struct InstanceCreationEditor__Class* klass;
        MonitorData* monitor;
    };

    struct InstanceCreationEditor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Text;
        VirtualInvokeData __unknown;
    };

    struct InstanceCreationEditor__StaticFields {
    };

    struct InstanceCreationEditor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InstanceCreationEditor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InstanceCreationEditor__VTable vtable;
    };

    struct Int16Converter {
        struct Int16Converter__Class* klass;
        MonitorData* monitor;
    };

    struct Int16Converter__VTable {
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

    struct Int16Converter__StaticFields {
    };

    struct Int16Converter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int16Converter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int16Converter__VTable vtable;
    };

    struct Int32Converter {
        struct Int32Converter__Class* klass;
        MonitorData* monitor;
    };

    struct Int32Converter__VTable {
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

    struct Int32Converter__StaticFields {
    };

    struct Int32Converter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int32Converter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int32Converter__VTable vtable;
    };

    struct Int64Converter {
        struct Int64Converter__Class* klass;
        MonitorData* monitor;
    };

    struct Int64Converter__VTable {
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

    struct Int64Converter__StaticFields {
    };

    struct Int64Converter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int64Converter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int64Converter__VTable vtable;
    };

    struct InvalidAsynchronousStateException__Fields {
        struct ArgumentException__Fields _;
    };

    struct InvalidAsynchronousStateException {
        struct InvalidAsynchronousStateException__Class* klass;
        MonitorData* monitor;
        struct InvalidAsynchronousStateException__Fields fields;
    };

    struct InvalidAsynchronousStateException__VTable {
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

    struct InvalidAsynchronousStateException__StaticFields {
    };

    struct InvalidAsynchronousStateException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InvalidAsynchronousStateException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InvalidAsynchronousStateException__VTable vtable;
    };

    struct InvalidEnumArgumentException__Fields {
        struct ArgumentException__Fields _;
    };

    struct InvalidEnumArgumentException {
        struct InvalidEnumArgumentException__Class* klass;
        MonitorData* monitor;
        struct InvalidEnumArgumentException__Fields fields;
    };

    struct InvalidEnumArgumentException__VTable {
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

    struct InvalidEnumArgumentException__StaticFields {
    };

    struct InvalidEnumArgumentException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InvalidEnumArgumentException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InvalidEnumArgumentException__VTable vtable;
    };

    struct LicenseProvider {
        struct LicenseProvider__Class* klass;
        MonitorData* monitor;
    };

    struct LicFileLicenseProvider {
        struct LicFileLicenseProvider__Class* klass;
        MonitorData* monitor;
    };

    struct License {
        struct License__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) LicFileLicenseProvider_LicFileLicense__Fields {
        struct String* key;
    };

    struct LicFileLicenseProvider_LicFileLicense {
        struct LicFileLicenseProvider_LicFileLicense__Class* klass;
        MonitorData* monitor;
        struct LicFileLicenseProvider_LicFileLicense__Fields fields;
    };

    struct LicenseContext {
        struct LicenseContext__Class* klass;
        MonitorData* monitor;
    };

    enum class LicenseUsageMode__Enum : int32_t {
        Runtime = 0x00000000,
        Designtime = 0x00000001,
    };

    struct LicenseUsageMode__Enum__Boxed {
        struct LicenseUsageMode__Enum__Class* klass;
        MonitorData* monitor;
        LicenseUsageMode__Enum value;
    };

    struct LicFileLicenseProvider_LicFileLicense__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData get_LicenseKey;
        VirtualInvokeData Dispose_1;
    };

    struct LicFileLicenseProvider_LicFileLicense__StaticFields {
    };

    struct LicFileLicenseProvider_LicFileLicense__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LicFileLicenseProvider_LicFileLicense__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LicFileLicenseProvider_LicFileLicense__VTable vtable;
    };

    struct License__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
    };

    struct License__StaticFields {
    };

    struct License__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct License__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct License__VTable vtable;
    };

    struct LicenseUsageMode__Enum__VTable {
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

    struct LicenseUsageMode__Enum__StaticFields {
    };

    struct LicenseUsageMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LicenseUsageMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LicenseUsageMode__Enum__VTable vtable;
    };

    struct LicenseContext__VTable {
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

    struct LicenseContext__StaticFields {
    };

    struct LicenseContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LicenseContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LicenseContext__VTable vtable;
    };

    struct LicenseProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
    };

    struct LicenseProvider__StaticFields {
    };

    struct LicenseProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LicenseProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LicenseProvider__VTable vtable;
    };

    struct LicFileLicenseProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetLicense;
        VirtualInvokeData IsKeyValid;
        VirtualInvokeData GetKey;
    };

} // namespace app
