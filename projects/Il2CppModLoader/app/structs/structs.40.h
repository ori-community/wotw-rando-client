namespace app {
    struct GenericTypeParameterBuilder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetCustomAttributes;
        VirtualInvokeData GetCustomAttributes_1;
        VirtualInvokeData IsDefined;
        VirtualInvokeData get_MemberType;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_DeclaringType;
        VirtualInvokeData get_ReflectedType;
        VirtualInvokeData GetCustomAttributes_2;
        VirtualInvokeData GetCustomAttributes_3;
        VirtualInvokeData IsDefined_1;
        VirtualInvokeData GetCustomAttributesData;
        VirtualInvokeData get_MetadataToken;
        VirtualInvokeData get_Module;
        VirtualInvokeData get_DeclaringMethod;
        VirtualInvokeData MakePointerType;
        VirtualInvokeData MakeByRefType;
        VirtualInvokeData MakeArrayType;
        VirtualInvokeData MakeArrayType_1;
        VirtualInvokeData GetTypeCodeImpl;
        VirtualInvokeData InvokeMember;
        VirtualInvokeData InvokeMember_1;
        VirtualInvokeData get_Assembly;
        VirtualInvokeData get_TypeHandle;
        VirtualInvokeData get_FullName;
        VirtualInvokeData get_Namespace;
        VirtualInvokeData get_AssemblyQualifiedName;
        VirtualInvokeData GetArrayRank;
        VirtualInvokeData get_BaseType;
        VirtualInvokeData GetConstructor;
        VirtualInvokeData GetConstructor_1;
        VirtualInvokeData GetConstructor_2;
        VirtualInvokeData GetConstructorImpl;
        VirtualInvokeData GetConstructors;
        VirtualInvokeData GetConstructors_1;
        VirtualInvokeData GetMethod;
        VirtualInvokeData GetMethod_1;
        VirtualInvokeData GetMethod_2;
        VirtualInvokeData GetMethod_3;
        VirtualInvokeData GetMethod_4;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetMethods;
        VirtualInvokeData GetMethods_1;
        VirtualInvokeData GetField;
        VirtualInvokeData GetField_1;
        VirtualInvokeData GetFields;
        VirtualInvokeData GetFields_1;
        VirtualInvokeData GetInterface;
        VirtualInvokeData GetInterface_1;
        VirtualInvokeData GetInterfaces;
        VirtualInvokeData FindInterfaces;
        VirtualInvokeData GetEvent;
        VirtualInvokeData GetEvent_1;
        VirtualInvokeData GetEvents;
        VirtualInvokeData GetProperty;
        VirtualInvokeData GetProperty_1;
        VirtualInvokeData GetProperty_2;
        VirtualInvokeData GetProperty_3;
        VirtualInvokeData GetProperty_4;
        VirtualInvokeData GetPropertyImpl;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetProperties_1;
        VirtualInvokeData GetNestedType;
        VirtualInvokeData GetNestedType_1;
        VirtualInvokeData GetMember;
        VirtualInvokeData GetMember_1;
        VirtualInvokeData GetMember_2;
        VirtualInvokeData GetMembers;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_GenericParameterAttributes;
        VirtualInvokeData get_IsNotPublic;
        VirtualInvokeData get_IsPublic;
        VirtualInvokeData get_IsNestedPublic;
        VirtualInvokeData get_IsNestedAssembly;
        VirtualInvokeData get_IsExplicitLayout;
        VirtualInvokeData get_IsClass;
        VirtualInvokeData get_IsInterface;
        VirtualInvokeData get_IsValueType;
        VirtualInvokeData get_IsAbstract;
        VirtualInvokeData get_IsSealed;
        VirtualInvokeData get_IsEnum;
        VirtualInvokeData get_IsSerializable;
        VirtualInvokeData get_IsArray;
        VirtualInvokeData get_IsSzArray;
        VirtualInvokeData get_IsGenericType;
        VirtualInvokeData get_IsGenericTypeDefinition;
        VirtualInvokeData get_IsConstructedGenericType;
        VirtualInvokeData get_IsGenericParameter;
        VirtualInvokeData get_GenericParameterPosition;
        VirtualInvokeData get_ContainsGenericParameters;
        VirtualInvokeData GetGenericParameterConstraints;
        VirtualInvokeData get_IsByRef;
        VirtualInvokeData get_IsPointer;
        VirtualInvokeData get_IsPrimitive;
        VirtualInvokeData get_IsCOMObject;
        VirtualInvokeData get_HasElementType;
        VirtualInvokeData get_IsContextful;
        VirtualInvokeData get_IsMarshalByRef;
        VirtualInvokeData IsValueTypeImpl;
        VirtualInvokeData GetAttributeFlagsImpl;
        VirtualInvokeData IsArrayImpl;
        VirtualInvokeData IsByRefImpl;
        VirtualInvokeData IsPointerImpl;
        VirtualInvokeData IsPrimitiveImpl;
        VirtualInvokeData IsCOMObjectImpl;
        VirtualInvokeData MakeGenericType;
        VirtualInvokeData IsContextfulImpl;
        VirtualInvokeData IsMarshalByRefImpl;
        VirtualInvokeData GetElementType;
        VirtualInvokeData GetGenericArguments;
        VirtualInvokeData GetGenericTypeDefinition;
        VirtualInvokeData HasElementTypeImpl;
        VirtualInvokeData GetEnumNames;
        VirtualInvokeData GetEnumValues;
        VirtualInvokeData GetEnumUnderlyingType;
        VirtualInvokeData IsEnumDefined;
        VirtualInvokeData GetEnumName;
        VirtualInvokeData get_UnderlyingSystemType;
        VirtualInvokeData IsSubclassOf;
        VirtualInvokeData IsInstanceOfType;
        VirtualInvokeData IsAssignableFrom;
        VirtualInvokeData IsEquivalentTo;
        VirtualInvokeData FormatTypeName;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetType;
        VirtualInvokeData get_IsSZArray;
        VirtualInvokeData System_Reflection_IReflectableType_GetTypeInfo;
        VirtualInvokeData get_DeclaredFields;
        VirtualInvokeData get_ImplementedInterfaces;
    };

    struct GenericTypeParameterBuilder__StaticFields {
    };

    struct GenericTypeParameterBuilder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericTypeParameterBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericTypeParameterBuilder__VTable vtable;
    };

    struct ILGenerator {
        struct ILGenerator__Class* klass;
        MonitorData* monitor;
    };

    struct LocalBuilder__Fields {
        struct LocalVariableInfo__Fields _;
        struct String* name;
        struct ILGenerator* ilgen;
        int32_t startOffset;
        int32_t endOffset;
    };

    struct LocalBuilder {
        struct LocalBuilder__Class* klass;
        MonitorData* monitor;
        struct LocalBuilder__Fields fields;
    };

    struct Label {
        int32_t label;
    };

    struct Label__Boxed {
        struct Label__Class* klass;
        MonitorData* monitor;
        struct Label fields;
    };

    struct OpCode {
        uint8_t op1;
        uint8_t op2;
        uint8_t push;
        uint8_t pop;
        uint8_t size;
        uint8_t type;
        uint8_t args;
        uint8_t flow;
    };

    struct OpCode__Boxed {
        struct OpCode__Class* klass;
        MonitorData* monitor;
        struct OpCode fields;
    };

    struct LocalBuilder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LocalBuilder__StaticFields {
    };

    struct LocalBuilder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocalBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocalBuilder__VTable vtable;
    };

    struct Label__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Label__StaticFields {
    };

    struct Label__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Label__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Label__VTable vtable;
    };

    struct OpCode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OpCode__StaticFields {
    };

    struct OpCode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OpCode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OpCode__VTable vtable;
    };

    struct ILGenerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData DeclareLocal;
        VirtualInvokeData DefineLabel;
        VirtualInvokeData Emit;
        VirtualInvokeData Emit_1;
        VirtualInvokeData Emit_2;
        VirtualInvokeData Emit_3;
        VirtualInvokeData Emit_4;
        VirtualInvokeData Emit_5;
        VirtualInvokeData Emit_6;
        VirtualInvokeData Emit_7;
        VirtualInvokeData MarkLabel;
    };

    struct ILGenerator__StaticFields {
    };

    struct ILGenerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ILGenerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ILGenerator__VTable vtable;
    };

    struct MethodBuilder {
        struct MethodBuilder__Class* klass;
        MonitorData* monitor;
    };

    struct MethodBuilder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetCustomAttributes;
        VirtualInvokeData GetCustomAttributes_1;
        VirtualInvokeData IsDefined;
        VirtualInvokeData get_MemberType;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_DeclaringType;
        VirtualInvokeData get_ReflectedType;
        VirtualInvokeData GetCustomAttributes_2;
        VirtualInvokeData GetCustomAttributes_3;
        VirtualInvokeData IsDefined_1;
        VirtualInvokeData GetCustomAttributesData;
        VirtualInvokeData get_MetadataToken;
        VirtualInvokeData get_Module;
        VirtualInvokeData GetParametersNoCopy;
        VirtualInvokeData GetParameters;
        VirtualInvokeData GetMethodImplementationFlags;
        VirtualInvokeData get_MethodHandle;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData Invoke;
        VirtualInvokeData get_CallingConvention;
        VirtualInvokeData GetGenericArguments;
        VirtualInvokeData get_IsGenericMethodDefinition;
        VirtualInvokeData get_ContainsGenericParameters;
        VirtualInvokeData get_IsGenericMethod;
        VirtualInvokeData get_IsSecurityCritical;
        VirtualInvokeData Invoke_1;
        VirtualInvokeData get_IsPublic;
        VirtualInvokeData get_IsStatic;
        VirtualInvokeData get_IsFinal;
        VirtualInvokeData get_IsVirtual;
        VirtualInvokeData get_IsAbstract;
        VirtualInvokeData get_IsSpecialName;
        VirtualInvokeData get_IsConstructor;
        VirtualInvokeData GetMethodBody;
        VirtualInvokeData FormatNameAndSig;
        VirtualInvokeData GetParameterTypes;
        VirtualInvokeData GetParametersInternal;
        VirtualInvokeData GetParametersCount;
        VirtualInvokeData get_ReturnType;
        VirtualInvokeData GetBaseDefinition;
        VirtualInvokeData GetGenericMethodDefinition;
        VirtualInvokeData MakeGenericMethod;
        VirtualInvokeData CreateDelegate;
        VirtualInvokeData CreateDelegate_1;
        VirtualInvokeData GetBaseMethod;
    };

    struct MethodBuilder__StaticFields {
    };

    struct MethodBuilder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MethodBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MethodBuilder__VTable vtable;
    };

    struct PropertyBuilder {
        struct PropertyBuilder__Class* klass;
        MonitorData* monitor;
    };

    struct PropertyBuilder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetCustomAttributes;
        VirtualInvokeData GetCustomAttributes_1;
        VirtualInvokeData IsDefined;
        VirtualInvokeData get_MemberType;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_DeclaringType;
        VirtualInvokeData get_ReflectedType;
        VirtualInvokeData GetCustomAttributes_2;
        VirtualInvokeData GetCustomAttributes_3;
        VirtualInvokeData IsDefined_1;
        VirtualInvokeData GetCustomAttributesData;
        VirtualInvokeData get_MetadataToken;
        VirtualInvokeData get_Module;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_CanRead;
        VirtualInvokeData get_CanWrite;
        VirtualInvokeData get_PropertyType;
        VirtualInvokeData GetAccessors;
        VirtualInvokeData GetGetMethod;
        VirtualInvokeData GetGetMethod_1;
        VirtualInvokeData GetIndexParameters;
        VirtualInvokeData GetSetMethod;
        VirtualInvokeData GetSetMethod_1;
        VirtualInvokeData GetValue;
        VirtualInvokeData GetValue_1;
        VirtualInvokeData SetValue;
        VirtualInvokeData SetValue_1;
        VirtualInvokeData GetOptionalCustomModifiers;
        VirtualInvokeData GetRequiredCustomModifiers;
        VirtualInvokeData GetConstantValue;
        VirtualInvokeData GetRawConstantValue;
    };

    struct PropertyBuilder__StaticFields {
    };

    struct PropertyBuilder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PropertyBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PropertyBuilder__VTable vtable;
    };

    struct TypeBuilder__Fields {
        struct TypeInfo__Fields _;
    };

    struct TypeBuilder {
        struct TypeBuilder__Class* klass;
        MonitorData* monitor;
        struct TypeBuilder__Fields fields;
    };

    struct TypeBuilder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetCustomAttributes;
        VirtualInvokeData GetCustomAttributes_1;
        VirtualInvokeData IsDefined;
        VirtualInvokeData get_MemberType;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_DeclaringType;
        VirtualInvokeData get_ReflectedType;
        VirtualInvokeData GetCustomAttributes_2;
        VirtualInvokeData GetCustomAttributes_3;
        VirtualInvokeData IsDefined_1;
        VirtualInvokeData GetCustomAttributesData;
        VirtualInvokeData get_MetadataToken;
        VirtualInvokeData get_Module;
        VirtualInvokeData get_DeclaringMethod;
        VirtualInvokeData MakePointerType;
        VirtualInvokeData MakeByRefType;
        VirtualInvokeData MakeArrayType;
        VirtualInvokeData MakeArrayType_1;
        VirtualInvokeData GetTypeCodeImpl;
        VirtualInvokeData InvokeMember;
        VirtualInvokeData InvokeMember_1;
        VirtualInvokeData get_Assembly;
        VirtualInvokeData get_TypeHandle;
        VirtualInvokeData get_FullName;
        VirtualInvokeData get_Namespace;
        VirtualInvokeData get_AssemblyQualifiedName;
        VirtualInvokeData GetArrayRank;
        VirtualInvokeData get_BaseType;
        VirtualInvokeData GetConstructor;
        VirtualInvokeData GetConstructor_1;
        VirtualInvokeData GetConstructor_2;
        VirtualInvokeData GetConstructorImpl;
        VirtualInvokeData GetConstructors;
        VirtualInvokeData GetConstructors_1;
        VirtualInvokeData GetMethod;
        VirtualInvokeData GetMethod_1;
        VirtualInvokeData GetMethod_2;
        VirtualInvokeData GetMethod_3;
        VirtualInvokeData GetMethod_4;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetMethods;
        VirtualInvokeData GetMethods_1;
        VirtualInvokeData GetField;
        VirtualInvokeData GetField_1;
        VirtualInvokeData GetFields;
        VirtualInvokeData GetFields_1;
        VirtualInvokeData GetInterface;
        VirtualInvokeData GetInterface_1;
        VirtualInvokeData GetInterfaces;
        VirtualInvokeData FindInterfaces;
        VirtualInvokeData GetEvent;
        VirtualInvokeData GetEvent_1;
        VirtualInvokeData GetEvents;
        VirtualInvokeData GetProperty;
        VirtualInvokeData GetProperty_1;
        VirtualInvokeData GetProperty_2;
        VirtualInvokeData GetProperty_3;
        VirtualInvokeData GetProperty_4;
        VirtualInvokeData GetPropertyImpl;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetProperties_1;
        VirtualInvokeData GetNestedType;
        VirtualInvokeData GetNestedType_1;
        VirtualInvokeData GetMember;
        VirtualInvokeData GetMember_1;
        VirtualInvokeData GetMember_2;
        VirtualInvokeData GetMembers;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_GenericParameterAttributes;
        VirtualInvokeData get_IsNotPublic;
        VirtualInvokeData get_IsPublic;
        VirtualInvokeData get_IsNestedPublic;
        VirtualInvokeData get_IsNestedAssembly;
        VirtualInvokeData get_IsExplicitLayout;
        VirtualInvokeData get_IsClass;
        VirtualInvokeData get_IsInterface;
        VirtualInvokeData get_IsValueType;
        VirtualInvokeData get_IsAbstract;
        VirtualInvokeData get_IsSealed;
        VirtualInvokeData get_IsEnum;
        VirtualInvokeData get_IsSerializable;
        VirtualInvokeData get_IsArray;
        VirtualInvokeData get_IsSzArray;
        VirtualInvokeData get_IsGenericType;
        VirtualInvokeData get_IsGenericTypeDefinition;
        VirtualInvokeData get_IsConstructedGenericType;
        VirtualInvokeData get_IsGenericParameter;
        VirtualInvokeData get_GenericParameterPosition;
        VirtualInvokeData get_ContainsGenericParameters;
        VirtualInvokeData GetGenericParameterConstraints;
        VirtualInvokeData get_IsByRef;
        VirtualInvokeData get_IsPointer;
        VirtualInvokeData get_IsPrimitive;
        VirtualInvokeData get_IsCOMObject;
        VirtualInvokeData get_HasElementType;
        VirtualInvokeData get_IsContextful;
        VirtualInvokeData get_IsMarshalByRef;
        VirtualInvokeData IsValueTypeImpl;
        VirtualInvokeData GetAttributeFlagsImpl;
        VirtualInvokeData IsArrayImpl;
        VirtualInvokeData IsByRefImpl;
        VirtualInvokeData IsPointerImpl;
        VirtualInvokeData IsPrimitiveImpl;
        VirtualInvokeData IsCOMObjectImpl;
        VirtualInvokeData MakeGenericType;
        VirtualInvokeData IsContextfulImpl;
        VirtualInvokeData IsMarshalByRefImpl;
        VirtualInvokeData GetElementType;
        VirtualInvokeData GetGenericArguments;
        VirtualInvokeData GetGenericTypeDefinition;
        VirtualInvokeData HasElementTypeImpl;
        VirtualInvokeData GetEnumNames;
        VirtualInvokeData GetEnumValues;
        VirtualInvokeData GetEnumUnderlyingType;
        VirtualInvokeData IsEnumDefined;
        VirtualInvokeData GetEnumName;
        VirtualInvokeData get_UnderlyingSystemType;
        VirtualInvokeData IsSubclassOf;
        VirtualInvokeData IsInstanceOfType;
        VirtualInvokeData IsAssignableFrom;
        VirtualInvokeData IsEquivalentTo;
        VirtualInvokeData FormatTypeName;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetType;
        VirtualInvokeData get_IsSZArray;
        VirtualInvokeData System_Reflection_IReflectableType_GetTypeInfo;
        VirtualInvokeData get_DeclaredFields;
        VirtualInvokeData get_ImplementedInterfaces;
    };

    struct TypeBuilder__StaticFields {
    };

    struct TypeBuilder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeBuilder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeBuilder__VTable vtable;
    };

    struct __declspec(align(8)) BinaryWriter__Fields {
        struct Stream* OutStream;
        struct Byte__Array* _buffer;
        struct Encoding* _encoding;
        struct Encoder* _encoder;
        bool _leaveOpen;
        struct Char__Array* _tmpOneCharBuffer;
        struct Byte__Array* _largeByteBuffer;
        int32_t _maxChars;
    };

    struct BinaryWriter {
        struct BinaryWriter__Class* klass;
        MonitorData* monitor;
        struct BinaryWriter__Fields fields;
    };

    struct BinaryWriter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Close;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData get_BaseStream;
        VirtualInvokeData Flush;
        VirtualInvokeData Seek;
        VirtualInvokeData Write;
        VirtualInvokeData Write_1;
        VirtualInvokeData Write_2;
        VirtualInvokeData Write_3;
        VirtualInvokeData Write_4;
        VirtualInvokeData Write_5;
        VirtualInvokeData Write_6;
        VirtualInvokeData Write_7;
        VirtualInvokeData Write_8;
        VirtualInvokeData Write_9;
        VirtualInvokeData Write_10;
        VirtualInvokeData Write_11;
        VirtualInvokeData Write_12;
        VirtualInvokeData Write_13;
        VirtualInvokeData Write_14;
        VirtualInvokeData Write_15;
    };

    struct BinaryWriter__StaticFields {
        struct BinaryWriter* Null;
    };

    struct BinaryWriter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BinaryWriter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BinaryWriter__VTable vtable;
    };

    enum class SearchOption__Enum : int32_t {
        TopDirectoryOnly = 0x00000000,
        AllDirectories = 0x00000001,
    };

    struct SearchOption__Enum__Boxed {
        struct SearchOption__Enum__Class* klass;
        MonitorData* monitor;
        SearchOption__Enum value;
    };

    struct SearchOption__Enum__VTable {
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

    struct SearchOption__Enum__StaticFields {
    };

    struct SearchOption__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SearchOption__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SearchOption__Enum__VTable vtable;
    };

    enum class FileAttributes__Enum : int32_t {
        Archive = 0x00000020,
        Compressed = 0x00000800,
        Device = 0x00000040,
        Directory = 0x00000010,
        Encrypted = 0x00004000,
        Hidden = 0x00000002,
        Normal = 0x00000080,
        NotContentIndexed = 0x00002000,
        Offline = 0x00001000,
        ReadOnly = 0x00000001,
        ReparsePoint = 0x00000400,
        SparseFile = 0x00000200,
        System = 0x00000004,
        Temporary = 0x00000100,
        IntegrityStream = 0x00008000,
        NoScrubData = 0x00020000,
    };

    struct FileAttributes__Enum__Boxed {
        struct FileAttributes__Enum__Class* klass;
        MonitorData* monitor;
        FileAttributes__Enum value;
    };

    struct MonoIOStat {
        FileAttributes__Enum fileAttributes;

        int64_t Length;
        int64_t CreationTime;
        int64_t LastAccessTime;
        int64_t LastWriteTime;
    };

    struct MonoIOStat__Boxed {
        struct MonoIOStat__Class* klass;
        MonitorData* monitor;
        struct MonoIOStat fields;
    };

    struct FileSystemInfo__Fields {
        struct MarshalByRefObject__Fields _;
        struct MonoIOStat _data;
        int32_t _dataInitialised;
        struct String* FullPath;
        struct String* OriginalPath;
        struct String* _displayPath;
    };

    struct FileSystemInfo {
        struct FileSystemInfo__Class* klass;
        MonitorData* monitor;
        struct FileSystemInfo__Fields fields;
    };

    struct DirectoryInfo__Fields {
        struct FileSystemInfo__Fields _;
        struct String* current;
        struct String* parent;
    };

    struct DirectoryInfo {
        struct DirectoryInfo__Class* klass;
        MonitorData* monitor;
        struct DirectoryInfo__Fields fields;
    };

    struct FileInfo__Fields {
        struct FileSystemInfo__Fields _;
        struct String* _name;
    };

    struct FileInfo {
        struct FileInfo__Class* klass;
        MonitorData* monitor;
        struct FileInfo__Fields fields;
    };

    struct FileAttributes__Enum__VTable {
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

    struct FileAttributes__Enum__StaticFields {
    };

    struct FileAttributes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FileAttributes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FileAttributes__Enum__VTable vtable;
    };

    struct MonoIOStat__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MonoIOStat__StaticFields {
    };

    struct MonoIOStat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MonoIOStat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MonoIOStat__VTable vtable;
    };

    struct FileInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData InitializeLifetimeService;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_FullName;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_Exists;
        VirtualInvokeData GetObjectData_1;
    };

    struct FileInfo__StaticFields {
    };

    struct FileInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FileInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FileInfo__VTable vtable;
    };

    struct FileSystemInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData InitializeLifetimeService;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_FullName;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData GetObjectData_1;
    };

    struct FileSystemInfo__StaticFields {
    };

    struct FileSystemInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FileSystemInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FileSystemInfo__VTable vtable;
    };

    struct DirectoryInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData InitializeLifetimeService;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_FullName;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_Exists;
        VirtualInvokeData GetObjectData_1;
    };

    struct DirectoryInfo__StaticFields {
    };

    struct DirectoryInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DirectoryInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DirectoryInfo__VTable vtable;
    };

    struct __declspec(align(8)) Directory_SearchData__Fields {
        struct String* fullPath;
        struct String* userPath;
        SearchOption__Enum searchOption;
    };

    struct Directory_SearchData {
        struct Directory_SearchData__Class* klass;
        MonitorData* monitor;
        struct Directory_SearchData__Fields fields;
    };

    struct Directory_SearchData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Directory_SearchData__StaticFields {
    };

    struct Directory_SearchData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Directory_SearchData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Directory_SearchData__VTable vtable;
    };

    struct DirectoryNotFoundException__Fields {
        struct IOException__Fields _;
    };

    struct DirectoryNotFoundException {
        struct DirectoryNotFoundException__Class* klass;
        MonitorData* monitor;
        struct DirectoryNotFoundException__Fields fields;
    };

    struct DirectoryNotFoundException__VTable {
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

    struct DirectoryNotFoundException__StaticFields {
    };

    struct DirectoryNotFoundException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DirectoryNotFoundException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DirectoryNotFoundException__VTable vtable;
    };

    struct DriveNotFoundException__Fields {
        struct IOException__Fields _;
    };

    struct DriveNotFoundException {
        struct DriveNotFoundException__Class* klass;
        MonitorData* monitor;
        struct DriveNotFoundException__Fields fields;
    };

    struct DriveNotFoundException__VTable {
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

    struct DriveNotFoundException__StaticFields {
    };

    struct DriveNotFoundException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DriveNotFoundException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DriveNotFoundException__VTable vtable;
    };

    struct EndOfStreamException__Fields {
        struct IOException__Fields _;
    };

    struct EndOfStreamException {
        struct EndOfStreamException__Class* klass;
        MonitorData* monitor;
        struct EndOfStreamException__Fields fields;
    };

    struct EndOfStreamException__VTable {
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

} // namespace app
