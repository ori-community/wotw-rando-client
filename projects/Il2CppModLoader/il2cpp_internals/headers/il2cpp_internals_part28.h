namespace app {
struct MonoEventInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MonoEventInfo__StaticFields {
};
struct MonoEventInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoEventInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoEventInfo__VTable vtable;
};

struct MonoMethodInfo {
  struct Type * parent;
  struct Type * ret;
  enum MethodAttributes__Enum attrs;
  enum MethodImplAttributes__Enum iattrs;
  enum CallingConventions__Enum callconv;
};
struct MonoMethodInfo__Boxed {
  struct MonoMethodInfo__Class *klass;
  struct MonitorData *monitor;
  struct MonoMethodInfo fields;
};
struct MonoMethodInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MonoMethodInfo__StaticFields {
};
struct MonoMethodInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoMethodInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoMethodInfo__VTable vtable;
};

enum PInvokeAttributes__Enum : int32_t {
  PInvokeAttributes__Enum_NoMangle = 1,
  PInvokeAttributes__Enum_CharSetMask = 6,
  PInvokeAttributes__Enum_CharSetNotSpec = 0,
  PInvokeAttributes__Enum_CharSetAnsi = 2,
  PInvokeAttributes__Enum_CharSetUnicode = 4,
  PInvokeAttributes__Enum_CharSetAuto = 6,
  PInvokeAttributes__Enum_BestFitUseAssem = 0,
  PInvokeAttributes__Enum_BestFitEnabled = 16,
  PInvokeAttributes__Enum_BestFitDisabled = 32,
  PInvokeAttributes__Enum_BestFitMask = 48,
  PInvokeAttributes__Enum_ThrowOnUnmappableCharUseAssem = 0,
  PInvokeAttributes__Enum_ThrowOnUnmappableCharEnabled = 4096,
  PInvokeAttributes__Enum_ThrowOnUnmappableCharDisabled = 8192,
  PInvokeAttributes__Enum_ThrowOnUnmappableCharMask = 12288,
  PInvokeAttributes__Enum_SupportsLastError = 64,
  PInvokeAttributes__Enum_CallConvMask = 1792,
  PInvokeAttributes__Enum_CallConvWinapi = 256,
  PInvokeAttributes__Enum_CallConvCdecl = 512,
  PInvokeAttributes__Enum_CallConvStdcall = 768,
  PInvokeAttributes__Enum_CallConvThiscall = 1024,
  PInvokeAttributes__Enum_CallConvFastcall = 1280,
  PInvokeAttributes__Enum_MaxValue = 65535,
};
struct PInvokeAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PInvokeAttributes__Enum value;
};

struct MonoModule__Fields {
  struct RuntimeModule__Fields _;
};
struct MonoModule {
  struct MonoModule__Class *klass;
  struct MonitorData *monitor;
  struct MonoModule__Fields fields;
};
struct MonoModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData GetCustomAttributes;
  VirtualInvokeData GetCustomAttributes_1;
  VirtualInvokeData IsDefined;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetModuleVersionId;
  VirtualInvokeData get_Assembly;
  VirtualInvokeData get_ScopeName;
  VirtualInvokeData get_ModuleVersionId;
  VirtualInvokeData get_FullyQualifiedName;
  VirtualInvokeData IsResource;
  VirtualInvokeData GetCustomAttributes_2;
  VirtualInvokeData GetCustomAttributes_3;
  VirtualInvokeData IsDefined_1;
};
struct MonoModule__StaticFields {
};
struct MonoModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoModule__VTable vtable;
};

struct RuntimeParameterInfo__Fields {
  struct ParameterInfo_1__Fields _;
};
struct RuntimeParameterInfo {
  struct RuntimeParameterInfo__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeParameterInfo__Fields fields;
};
struct RuntimeParameterInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCustomAttributes;
  VirtualInvokeData GetCustomAttributes_1;
  VirtualInvokeData IsDefined;
  VirtualInvokeData GetRealObject;
  VirtualInvokeData get_ParameterType;
  VirtualInvokeData get_Attributes;
  VirtualInvokeData get_Member;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Position;
  VirtualInvokeData get_DefaultValue;
  VirtualInvokeData GetCustomAttributes_2;
  VirtualInvokeData GetCustomAttributes_3;
  VirtualInvokeData IsDefined_1;
};
struct RuntimeParameterInfo__StaticFields {
};
struct RuntimeParameterInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeParameterInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeParameterInfo__VTable vtable;
};

struct MonoParameterInfo__Fields {
  struct RuntimeParameterInfo__Fields _;
};
struct MonoParameterInfo {
  struct MonoParameterInfo__Class *klass;
  struct MonitorData *monitor;
  struct MonoParameterInfo__Fields fields;
};
struct MonoParameterInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCustomAttributes;
  VirtualInvokeData GetCustomAttributes_1;
  VirtualInvokeData IsDefined;
  VirtualInvokeData GetRealObject;
  VirtualInvokeData get_ParameterType;
  VirtualInvokeData get_Attributes;
  VirtualInvokeData get_Member;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Position;
  VirtualInvokeData get_DefaultValue;
  VirtualInvokeData GetCustomAttributes_2;
  VirtualInvokeData GetCustomAttributes_3;
  VirtualInvokeData IsDefined_1;
};
struct MonoParameterInfo__StaticFields {
};
struct MonoParameterInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoParameterInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoParameterInfo__VTable vtable;
};

struct ConstructorBuilder {
  struct ConstructorBuilder__Class *klass;
  struct MonitorData *monitor;
};
struct ConstructorBuilder__VTable {
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
  VirtualInvokeData Invoke_2;
};
struct ConstructorBuilder__StaticFields {
};
struct ConstructorBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstructorBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstructorBuilder__VTable vtable;
};

struct EnumBuilder__Fields {
  struct TypeInfo__Fields _;
};
struct EnumBuilder {
  struct EnumBuilder__Class *klass;
  struct MonitorData *monitor;
  struct EnumBuilder__Fields fields;
};
struct EnumBuilder__VTable {
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
struct EnumBuilder__StaticFields {
};
struct EnumBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnumBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnumBuilder__VTable vtable;
};

struct FieldBuilder {
  struct FieldBuilder__Class *klass;
  struct MonitorData *monitor;
};
struct FieldBuilder__VTable {
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
  VirtualInvokeData get_FieldHandle;
  VirtualInvokeData get_FieldType;
  VirtualInvokeData GetValue;
  VirtualInvokeData get_IsLiteral;
  VirtualInvokeData get_IsStatic;
  VirtualInvokeData get_IsInitOnly;
  VirtualInvokeData get_IsPublic;
  VirtualInvokeData get_IsPrivate;
  VirtualInvokeData get_IsNotSerialized;
  VirtualInvokeData SetValue;
  VirtualInvokeData SetValue_1;
  VirtualInvokeData GetFieldOffset;
  VirtualInvokeData SetValueDirect;
  VirtualInvokeData GetRawConstantValue;
};
struct FieldBuilder__StaticFields {
};
struct FieldBuilder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FieldBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FieldBuilder__VTable vtable;
};

struct GenericTypeParameterBuilder__Fields {
  struct TypeInfo__Fields _;
};
struct GenericTypeParameterBuilder {
  struct GenericTypeParameterBuilder__Class *klass;
  struct MonitorData *monitor;
  struct GenericTypeParameterBuilder__Fields fields;
};
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericTypeParameterBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericTypeParameterBuilder__VTable vtable;
};

struct ILGenerator {
  struct ILGenerator__Class *klass;
  struct MonitorData *monitor;
};
struct LocalBuilder__Fields {
  struct LocalVariableInfo__Fields _;
  struct String * name;
  struct ILGenerator * ilgen;
  int32_t startOffset;
  int32_t endOffset;
};
struct LocalBuilder {
  struct LocalBuilder__Class *klass;
  struct MonitorData *monitor;
  struct LocalBuilder__Fields fields;
};
struct Label {
  int32_t label;
};
struct Label__Boxed {
  struct Label__Class *klass;
  struct MonitorData *monitor;
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
  struct OpCode__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LocalBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Label__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpCode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ILGenerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ILGenerator__VTable vtable;
};

struct MethodBuilder {
  struct MethodBuilder__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MethodBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MethodBuilder__VTable vtable;
};

struct PropertyBuilder {
  struct PropertyBuilder__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PropertyBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PropertyBuilder__VTable vtable;
};

struct TypeBuilder__Fields {
  struct TypeInfo__Fields _;
};
struct TypeBuilder {
  struct TypeBuilder__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeBuilder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeBuilder__VTable vtable;
};

struct __declspec(align(8)) BinaryWriter__Fields {
  struct Stream * OutStream;
  struct Byte__Array * _buffer;
  struct Encoding * _encoding;
  struct Encoder * _encoder;
  bool _leaveOpen;
  struct Char__Array * _tmpOneCharBuffer;
  struct Byte__Array * _largeByteBuffer;
  int32_t _maxChars;
};}