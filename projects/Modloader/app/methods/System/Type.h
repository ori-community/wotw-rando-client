#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/ConstructorInfo__Array.h>
#include <Modloader/app/structs/EventInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_.h>
#include <Modloader/app/structs/Func_4_System_Reflection_Assembly_String_Boolean_Type_.h>
#include <Modloader/app/structs/GenericParameterAttributes__Enum.h>
#include <Modloader/app/structs/MemberInfo_1__Array.h>
#include <Modloader/app/structs/MemberTypes__Enum.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterModifier__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/TypeFilter.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Type {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3EE80, app::MemberTypes__Enum, get_MemberType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Type*, get_DeclaringType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MethodBase*, get_DeclaringMethod, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Type*, get_ReflectedType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027BB460,
        app::Type*,
        GetType_1,
        app::String* type_name,
        app::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_* assembly_resolver,
        app::Func_4_System_Reflection_Assembly_String_Boolean_Type_* type_resolver
    )
    IL2CPP_REGISTER_METHOD(
        0x027BB490,
        app::Type*,
        GetType_2,
        app::String* type_name,
        app::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_* assembly_resolver,
        app::Func_4_System_Reflection_Assembly_String_Boolean_Type_* type_resolver,
        bool throw_on_error
    )
    IL2CPP_REGISTER_METHOD(
        0x027BB4C0,
        app::Type*,
        GetType_3,
        app::String* type_name,
        app::Func_2_System_Reflection_AssemblyName_System_Reflection_Assembly_* assembly_resolver,
        app::Func_4_System_Reflection_Assembly_String_Boolean_Type_* type_resolver,
        bool throw_on_error,
        bool ignore_case
    )
    IL2CPP_REGISTER_METHOD(0x027BB4F0, app::Type*, MakePointerType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BB540, app::Type*, MakeByRefType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BB590, app::Type*, MakeArrayType_1, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BB5E0, app::Type*, MakeArrayType_2, app::Type* this_ptr, int32_t rank)
    IL2CPP_REGISTER_METHOD(0x027BB630, app::TypeCode__Enum, GetTypeCode, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x027BB6E0, app::TypeCode__Enum, GetTypeCodeImpl, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BB820, app::Binder*, get_DefaultBinder, )
    IL2CPP_REGISTER_METHOD(0x027BB920, void, CreateBinder, )
    IL2CPP_REGISTER_METHOD(
        0x027BBAC0,
        app::Object*,
        InvokeMember,
        app::Type* this_ptr,
        app::String* name,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object* target,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x027BBB10, app::RuntimeTypeHandle, get_TypeHandle, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BBB60, app::RuntimeTypeHandle, GetTypeHandle, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x027BBC90, int32_t, GetArrayRank, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027BBD00,
        app::ConstructorInfo*,
        GetConstructor_1,
        app::Type* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_convention,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x027BBEA0,
        app::ConstructorInfo*,
        GetConstructor_2,
        app::Type* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x027BC040, app::ConstructorInfo*, GetConstructor_3, app::Type* this_ptr, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x027BC070, app::ConstructorInfo__Array*, GetConstructors, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027BC090,
        app::MethodInfo_1*,
        GetMethod_1,
        app::Type* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_convention,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x027BC280,
        app::MethodInfo_1*,
        GetMethod_2,
        app::Type* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x027BC470, app::MethodInfo_1*, GetMethod_3, app::Type* this_ptr, app::String* name, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x027BC650, app::MethodInfo_1*, GetMethod_4, app::Type* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x027BC750, app::MethodInfo_1*, GetMethod_5, app::Type* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027BC840, app::MethodInfo_1__Array*, GetMethods, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BC860, app::FieldInfo_1*, GetField, app::Type* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027BC880, app::FieldInfo_1__Array*, GetFields, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BC8A0, app::Type*, GetInterface, app::Type* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027BC8C0, app::Type__Array*, FindInterfaces, app::Type* this_ptr, app::TypeFilter* filter, app::Object* filter_criteria)
    IL2CPP_REGISTER_METHOD(0x027BCB20, app::EventInfo_1*, GetEvent, app::Type* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x027BCB40,
        app::PropertyInfo_1*,
        GetProperty_1,
        app::Type* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::Type* return_type,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x027BCC90, app::PropertyInfo_1*, GetProperty_2, app::Type* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x027BCD90,
        app::PropertyInfo_1*,
        GetProperty_3,
        app::Type* this_ptr,
        app::String* name,
        app::Type* return_type,
        app::Type__Array* types
    )
    IL2CPP_REGISTER_METHOD(0x027BCEE0, app::PropertyInfo_1*, GetProperty_4, app::Type* this_ptr, app::String* name, app::Type* return_type)
    IL2CPP_REGISTER_METHOD(0x027BD040, app::PropertyInfo_1*, GetProperty_5, app::Type* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027BD130, app::PropertyInfo_1__Array*, GetProperties, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD150, app::Type*, GetNestedType, app::Type* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027BD170, app::MemberInfo_1__Array*, GetMember_1, app::Type* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027BD190, app::MemberInfo_1__Array*, GetMember_2, app::Type* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x027BD1C0,
        app::MemberInfo_1__Array*,
        GetMember_3,
        app::Type* this_ptr,
        app::String* name,
        app::MemberTypes__Enum type,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(0x027BD230, bool, get_IsNested, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD2E0, app::TypeAttributes__Enum, get_Attributes, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD300, app::GenericParameterAttributes__Enum, get_GenericParameterAttributes, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD350, bool, get_IsVisible, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD520, bool, get_IsNotPublic, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD540, bool, get_IsPublic, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD560, bool, get_IsNestedPublic, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD580, bool, get_IsNestedAssembly, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD5B0, bool, get_IsExplicitLayout, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD5D0, bool, get_IsClass, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD620, bool, get_IsInterface, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD720, bool, get_IsValueType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD740, bool, get_IsAbstract, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD770, bool, get_IsSealed, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD7A0, bool, get_IsEnum, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BD860, bool, get_IsSerializable, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDA90, bool, get_IsArray, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSzArray, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericTypeDefinition, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDAB0, bool, get_IsConstructedGenericType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsGenericParameter, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDB00, int32_t, get_GenericParameterPosition, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDB70, bool, get_ContainsGenericParameters, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDC80, app::Type__Array*, GetGenericParameterConstraints, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDD70, bool, get_IsByRef, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDD90, bool, get_IsPointer, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDDB0, bool, get_IsPrimitive, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDDD0, bool, get_IsCOMObject, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDDF0, bool, get_HasElementType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDE10, bool, get_IsContextful, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDE30, bool, get_IsMarshalByRef, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDE50, bool, IsValueTypeImpl, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BDF10, app::Type*, MakeGenericType, app::Type* this_ptr, app::Type__Array* type_arguments)
    IL2CPP_REGISTER_METHOD(0x027BDF80, bool, IsContextfulImpl, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE050, bool, IsMarshalByRefImpl, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE120, app::Type__Array*, GetGenericArguments, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE190, app::Type*, GetGenericTypeDefinition, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE200, app::Type*, GetRootElementType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE260, app::String__Array*, GetEnumNames, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE360, app::Array*, GetEnumValues, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE460, app::Array*, GetEnumRawConstantValues, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BE490, void, GetEnumData, app::Type* this_ptr, app::String__Array** enum_names, app::Array** enum_values)
    IL2CPP_REGISTER_METHOD(0x027BE910, app::Type*, GetEnumUnderlyingType, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BEA80, bool, IsEnumDefined, app::Type* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x027BF020, app::String*, GetEnumName, app::Type* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x027BF290, int32_t, BinarySearch, app::Array* array, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x027BF4D0, bool, IsIntegerType, app::Type* t)
    IL2CPP_REGISTER_METHOD(0x027BF780, bool, IsSubclassOf, app::Type* this_ptr, app::Type* c)
    IL2CPP_REGISTER_METHOD(0x027BF8A0, bool, IsInstanceOfType, app::Type* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x027BF8E0, bool, IsAssignableFrom, app::Type* this_ptr, app::Type* c)
    IL2CPP_REGISTER_METHOD(0x027BFB20, bool, IsEquivalentTo, app::Type* this_ptr, app::Type* other)
    IL2CPP_REGISTER_METHOD(0x027BFBD0, bool, ImplementInterface, app::Type* this_ptr, app::Type* iface_type)
    IL2CPP_REGISTER_METHOD(0x027BFDC0, app::String*, FormatTypeName_1, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BFDE0, app::String*, FormatTypeName_2, app::Type* this_ptr, bool serialization)
    IL2CPP_REGISTER_METHOD(0x027BFE30, app::String*, ToString, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027BFED0, bool, Equals_1, app::Type* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x027BFFC0, bool, Equals_2, app::Type* this_ptr, app::Type* o)
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, app::Type* left, app::Type* right)
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, app::Type* left, app::Type* right)
    IL2CPP_REGISTER_METHOD(0x027C0020, int32_t, GetHashCode, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1C4F0, app::Type*, GetType_4, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027C0080, bool, get_IsSZArray, app::Type* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027C00D0, app::Type*, internal_from_name, app::String* name, bool throw_on_error, bool ignore_case)
    IL2CPP_REGISTER_METHOD(0x027C00E0, app::Type*, GetType_5, app::String* type_name)
    IL2CPP_REGISTER_METHOD(0x027C01B0, app::Type*, GetType_6, app::String* type_name, bool throw_on_error)
    IL2CPP_REGISTER_METHOD(0x027C0290, app::Type*, GetType_7, app::String* type_name, bool throw_on_error, bool ignore_case)
    IL2CPP_REGISTER_METHOD(0x027C0480, app::Type*, GetTypeFromHandle, app::RuntimeTypeHandle handle)
    IL2CPP_REGISTER_METHOD(0x027C0530, app::Type*, internal_from_handle, void* handle)
    IL2CPP_REGISTER_METHOD(0x027C0550, void, cctor, )
    inline bool operator==(app::Type& left, app::Type& right) { return op_Equality(&left, &right); }
    inline bool operator!=(app::Type& left, app::Type& right) { return op_Inequality(&left, &right); }
} // namespace app::classes::System::Type
