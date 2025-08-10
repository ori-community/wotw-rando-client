#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/ConstructorInfo__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/EventInfo_1.h>
#include <Modloader/app/structs/EventInfo_1__Array.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/GenericParameterAttributes__Enum.h>
#include <Modloader/app/structs/IList_1_System_Reflection_CustomAttributeData_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberInfo_1__Array.h>
#include <Modloader/app/structs/MemberTypes__Enum.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/MonoCMethod.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterModifier__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/RuntimeConstructorInfo.h>
#include <Modloader/app/structs/RuntimeConstructorInfo__Array.h>
#include <Modloader/app/structs/RuntimeEventInfo__Array.h>
#include <Modloader/app/structs/RuntimeFieldInfo__Array.h>
#include <Modloader/app/structs/RuntimeMethodInfo.h>
#include <Modloader/app/structs/RuntimeMethodInfo__Array.h>
#include <Modloader/app/structs/RuntimeModule.h>
#include <Modloader/app/structs/RuntimePropertyInfo__Array.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo_.h>
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_System_Reflection_EventInfo_.h>
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_System_Reflection_MethodInfo_.h>
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/RuntimeType_ListBuilder_1_Type_.h>
#include <Modloader/app/structs/RuntimeType_MemberListType__Enum.h>
#include <Modloader/app/structs/RuntimeType__Array.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StackCrawlMark__Enum.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#include <Modloader/app/structs/TypeCode__Enum.h>
#include <Modloader/app/structs/TypeNameKind__Enum.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::RuntimeType {
    IL2CPP_REGISTER_METHOD(0x01EE29F0, void, ThrowIfTypeNeverValidGenericArgument, app::RuntimeType* type)
    IL2CPP_REGISTER_METHOD(
        0x01EE2B70,
        void,
        SanityCheckGenericArguments,
        app::RuntimeType__Array* generic_arguments,
        app::RuntimeType__Array* generic_paramters
    )
    IL2CPP_REGISTER_METHOD(0x01EE2DF0, void, SplitName, app::String* fullname, app::String** name, app::String** ns)
    IL2CPP_REGISTER_METHOD(
        0x01EE2F10,
        void,
        FilterHelper_1,
        app::BindingFlags__Enum binding_flags,
        app::String** name,
        bool allow_prefix_lookup,
        bool* prefix_lookup,
        bool* ignore_case,
        app::RuntimeType_MemberListType__Enum* list_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE3160,
        void,
        FilterHelper_2,
        app::BindingFlags__Enum binding_flags,
        app::String** name,
        bool* ignore_case,
        app::RuntimeType_MemberListType__Enum* list_type
    )
    IL2CPP_REGISTER_METHOD(0x01EE32E0, bool, FilterApplyPrefixLookup, app::MemberInfo_1* member_info, app::String* name, bool ignore_case)
    IL2CPP_REGISTER_METHOD(
        0x01EE3530,
        bool,
        FilterApplyBase,
        app::MemberInfo_1* member_info,
        app::BindingFlags__Enum binding_flags,
        bool is_public,
        bool is_non_protected_internal,
        bool is_static,
        app::String* name,
        bool prefix_lookup
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE3780,
        bool,
        FilterApplyType,
        app::Type* type,
        app::BindingFlags__Enum binding_flags,
        app::String* name,
        bool prefix_lookup,
        app::String* ns
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE3920,
        bool,
        FilterApplyMethodInfo,
        app::RuntimeMethodInfo* method_1,
        app::BindingFlags__Enum binding_flags,
        app::CallingConventions__Enum call_conv,
        app::Type__Array* argument_types
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE3A10,
        bool,
        FilterApplyConstructorInfo,
        app::RuntimeConstructorInfo* constructor,
        app::BindingFlags__Enum binding_flags,
        app::CallingConventions__Enum call_conv,
        app::Type__Array* argument_types
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE3B00,
        bool,
        FilterApplyMethodBase,
        app::MethodBase* method_base,
        app::BindingFlags__Enum method_flags,
        app::BindingFlags__Enum binding_flags,
        app::CallingConventions__Enum call_conv,
        app::Type__Array* argument_types
    )
    IL2CPP_REGISTER_METHOD(0x01EE3E60, void, ctor, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE3EC0, bool, IsSpecialSerializableType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01EE3FE0,
        app::RuntimeType_ListBuilder_1_System_Reflection_MethodInfo_,
        GetMethodCandidates,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::CallingConventions__Enum call_conv,
        app::Type__Array* types,
        bool allow_prefix_lookup
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE4210,
        app::RuntimeType_ListBuilder_1_System_Reflection_ConstructorInfo_,
        GetConstructorCandidates,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::CallingConventions__Enum call_conv,
        app::Type__Array* types,
        bool allow_prefix_lookup
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE4500,
        app::RuntimeType_ListBuilder_1_System_Reflection_PropertyInfo_,
        GetPropertyCandidates,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Type__Array* types,
        bool allow_prefix_lookup
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE4730,
        app::RuntimeType_ListBuilder_1_System_Reflection_EventInfo_,
        GetEventCandidates,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        bool allow_prefix_lookup
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE4920,
        app::RuntimeType_ListBuilder_1_System_Reflection_FieldInfo_,
        GetFieldCandidates,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        bool allow_prefix_lookup
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE4B10,
        app::RuntimeType_ListBuilder_1_Type_,
        GetNestedTypeCandidates,
        app::RuntimeType* this_ptr,
        app::String* fullname,
        app::BindingFlags__Enum binding_attr,
        bool allow_prefix_lookup
    )
    IL2CPP_REGISTER_METHOD(0x01EE4D20, app::MethodInfo_1__Array*, GetMethods, app::RuntimeType* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EE4E10, app::ConstructorInfo__Array*, GetConstructors, app::RuntimeType* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EE4F00, app::PropertyInfo_1__Array*, GetProperties, app::RuntimeType* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EE4FF0, app::EventInfo_1__Array*, GetEvents, app::RuntimeType* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EE50D0, app::FieldInfo_1__Array*, GetFields, app::RuntimeType* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EE51B0, app::MemberInfo_1__Array*, GetMembers, app::RuntimeType* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x01EE5440,
        app::MethodInfo_1*,
        GetMethodImpl,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_conv,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE5720,
        app::ConstructorInfo*,
        GetConstructorImpl,
        app::RuntimeType* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_convention,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE5990,
        app::PropertyInfo_1*,
        GetPropertyImpl,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::Type* return_type,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x01EE5C60, app::EventInfo_1*, GetEvent, app::RuntimeType* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EE5E20, app::FieldInfo_1*, GetField, app::RuntimeType* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EE61B0, app::Type*, GetInterface, app::RuntimeType* this_ptr, app::String* fullname, bool ignore_case)
    IL2CPP_REGISTER_METHOD(0x01EE6670, app::Type*, GetNestedType, app::RuntimeType* this_ptr, app::String* fullname, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x01EE68D0,
        app::MemberInfo_1__Array*,
        GetMember,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::MemberTypes__Enum type,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(0x01EE6CB0, app::Module*, get_Module, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE6CB0, app::RuntimeModule*, GetRuntimeModule, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE6CD0, app::Assembly*, get_Assembly, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE6CD0, app::RuntimeAssembly*, GetRuntimeAssembly, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01600C80, app::RuntimeTypeHandle, get_TypeHandle, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE6CF0, bool, IsInstanceOfType, app::RuntimeType* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x01EE6D20, bool, IsSubclassOf, app::RuntimeType* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01EE6F00, bool, IsAssignableFrom, app::RuntimeType* this_ptr, app::Type* c)
    IL2CPP_REGISTER_METHOD(0x01EE7070, bool, IsEquivalentTo, app::RuntimeType* this_ptr, app::Type* other)
    IL2CPP_REGISTER_METHOD(0x01EE7170, app::Type*, get_BaseType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7180, app::RuntimeType*, GetBaseType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Type*, get_UnderlyingSystemType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7420, app::TypeAttributes__Enum, GetAttributeFlagsImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7450, bool, IsContextfulImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7520, bool, IsByRefImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7530, bool, IsPrimitiveImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7560, bool, IsPointerImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, IsCOMObjectImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7570, bool, IsValueTypeImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE76B0, bool, get_IsEnum, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7770, bool, HasElementTypeImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE77D0, app::GenericParameterAttributes__Enum, get_GenericParameterAttributes, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE78C0, bool, get_IsSzArray, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7920, bool, IsArrayImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7950, int32_t, GetArrayRank, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7A30, app::Type*, GetElementType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7AA0, app::String__Array*, GetEnumNames, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7BE0, app::Array*, GetEnumValues, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7DE0, app::Type*, GetEnumUnderlyingType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE7F10, bool, IsEnumDefined, app::RuntimeType* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01EE85A0, app::String*, GetEnumName, app::RuntimeType* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01EE8880, app::RuntimeType__Array*, GetGenericArgumentsInternal_1, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE8940, app::Type__Array*, GetGenericArguments, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE8A00, app::Type*, MakeGenericType_1, app::RuntimeType* this_ptr, app::Type__Array* instantiation)
    IL2CPP_REGISTER_METHOD(0x01EE8EA0, bool, get_IsGenericTypeDefinition, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE8ED0, bool, get_IsGenericParameter, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE8EF0, int32_t, get_GenericParameterPosition, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE9020, app::Type*, GetGenericTypeDefinition, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE9140, bool, get_IsGenericType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EE9180, bool, get_IsConstructedGenericType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01EE91D0,
        app::Object*,
        InvokeMember,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_flags,
        app::Binder* binder,
        app::Object* target,
        app::Object__Array* provided_args,
        app::ParameterModifier__Array* modifiers,
        app::CultureInfo* culture,
        app::String__Array* named_params
    )
    IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, app::RuntimeType* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, app::RuntimeType* left, app::RuntimeType* right)
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, app::RuntimeType* left, app::RuntimeType* right)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, Clone, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEA700, void, GetObjectData, app::RuntimeType* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01EEA7D0, app::Object__Array*, GetCustomAttributes_1, app::RuntimeType* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x01EEA8C0, app::Object__Array*, GetCustomAttributes_2, app::RuntimeType* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x01EEAA70, bool, IsDefined, app::RuntimeType* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x01EEAC20, app::IList_1_System_Reflection_CustomAttributeData_*, GetCustomAttributesData, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEACC0, app::String*, FormatTypeName, app::RuntimeType* this_ptr, bool serialization)
    IL2CPP_REGISTER_METHOD(0x01EEAEF0, app::MemberTypes__Enum, get_MemberType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEAF40, app::Type*, get_ReflectedType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEAF60, int32_t, get_MetadataToken, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEAF90, void, CreateInstanceCheckThis, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01EEB210,
        app::Object*,
        CreateInstanceImpl,
        app::RuntimeType* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::Object__Array* args,
        app::CultureInfo* culture,
        app::Object__Array* activation_attributes,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(
        0x01EEBA00,
        app::Object*,
        CreateInstanceDefaultCtor,
        app::RuntimeType* this_ptr,
        bool public_only,
        bool skip_check_this,
        bool fill_cache,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x01EEBB40, app::MonoCMethod*, GetDefaultConstructor, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEBD80, app::String*, GetDefaultMemberName, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEBEB0, app::RuntimeConstructorInfo*, GetSerializationCtor, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01EEC1D0,
        app::Object*,
        CreateInstanceSlow,
        app::RuntimeType* this_ptr,
        bool public_only,
        bool skip_check_this,
        bool fill_cache,
        app::StackCrawlMark__Enum* stack_mark
    )
    IL2CPP_REGISTER_METHOD(0x01EEC210, app::Object*, CreateInstanceMono, app::RuntimeType* this_ptr, bool non_public)
    IL2CPP_REGISTER_METHOD(
        0x01EEC560,
        app::Object*,
        CheckValue,
        app::RuntimeType* this_ptr,
        app::Object* value,
        app::Binder* binder,
        app::CultureInfo* culture,
        app::BindingFlags__Enum invoke_attr
    )
    IL2CPP_REGISTER_METHOD(0x01EEC7A0, app::Object*, TryConvertToType, app::RuntimeType* this_ptr, app::Object* value, bool* failed)
    IL2CPP_REGISTER_METHOD(0x01EECA70, app::Object*, IsConvertibleToPrimitiveType, app::Object* value, app::Type* target_type)
    IL2CPP_REGISTER_METHOD(0x01EED600, app::String*, GetCachedName, app::RuntimeType* this_ptr, app::TypeNameKind__Enum kind)
    IL2CPP_REGISTER_METHOD(0x01EED6C0, app::Type*, make_array_type, app::RuntimeType* this_ptr, int32_t rank)
    IL2CPP_REGISTER_METHOD(0x01EED720, app::Type*, MakeArrayType_1, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EED770, app::Type*, MakeArrayType_2, app::RuntimeType* this_ptr, int32_t rank)
    IL2CPP_REGISTER_METHOD(0x01EED870, app::Type*, make_byref_type, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EED890, app::Type*, MakeByRefType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EED960, app::Type*, MakePointerType_1, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01EED990, app::Type*, MakePointerType_2, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEDA40, bool, get_ContainsGenericParameters, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEDB80, app::Type__Array*, GetGenericParameterConstraints, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEDCA0, app::Object*, CreateInstanceForAnotherGenericParameter, app::Type* generic_type, app::RuntimeType* generic_argument)
    IL2CPP_REGISTER_METHOD(0x01EEDE80, app::Type*, MakeGenericType_2, app::Type* gt, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(
        0x01EEDE90,
        void*,
        GetMethodsByName_native,
        app::RuntimeType* this_ptr,
        void* name_ptr,
        app::BindingFlags__Enum binding_attr,
        bool ignore_case
    )
    IL2CPP_REGISTER_METHOD(
        0x01EEDEA0,
        app::RuntimeMethodInfo__Array*,
        GetMethodsByName,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        bool ignore_case,
        app::RuntimeType* reflected_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01EEE290,
        void*,
        GetPropertiesByName_native,
        app::RuntimeType* this_ptr,
        void* name,
        app::BindingFlags__Enum binding_attr,
        bool icase
    )
    IL2CPP_REGISTER_METHOD(0x01EEE2A0, void*, GetConstructors_native, app::RuntimeType* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x01EEE2B0,
        app::RuntimeConstructorInfo__Array*,
        GetConstructors_internal,
        app::RuntimeType* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::RuntimeType* reflected_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01EEE590,
        app::RuntimePropertyInfo__Array*,
        GetPropertiesByName,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        bool icase,
        app::RuntimeType* reflected_type
    )
    IL2CPP_REGISTER_METHOD(0x01EEEA90, app::TypeCode__Enum, GetTypeCodeImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEEB30, app::TypeCode__Enum, GetTypeCodeImplInternal, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01EEEB40, app::String*, ToString, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsGenericCOMObjectImpl, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEEB50, app::Object*, CreateInstanceInternal, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0173D7D0, app::MethodBase*, get_DeclaringMethod, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEEBA0, app::String*, getFullName, app::RuntimeType* this_ptr, bool full_name, bool assembly_qualified)
    IL2CPP_REGISTER_METHOD(0x01EEEBB0, app::Type__Array*, GetGenericArgumentsInternal_2, app::RuntimeType* this_ptr, bool runtime_array)
    IL2CPP_REGISTER_METHOD(0x01EEEBC0, app::GenericParameterAttributes__Enum, GetGenericParameterAttributes, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEEBE0, int32_t, GetGenericParameterPosition, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEEC30, void*, GetEvents_native, app::RuntimeType* this_ptr, void* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x01EEEC40, void*, GetFields_native, app::RuntimeType* this_ptr, void* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x01EEEC50,
        app::RuntimeFieldInfo__Array*,
        GetFields_internal,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::RuntimeType* reflected_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01EEF120,
        app::RuntimeEventInfo__Array*,
        GetEvents_internal,
        app::RuntimeType* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::RuntimeType* reflected_type
    )
    IL2CPP_REGISTER_METHOD(0x01EEF610, app::Type__Array*, GetInterfaces, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEF620, void*, GetNestedTypes_native, app::RuntimeType* this_ptr, void* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x01EEF630,
        app::RuntimeType__Array*,
        GetNestedTypes_internal,
        app::RuntimeType* this_ptr,
        app::String* display_name,
        app::BindingFlags__Enum binding_attr
    )
    IL2CPP_REGISTER_METHOD(0x01EEF9A0, app::String*, get_AssemblyQualifiedName, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEF9B0, app::Type*, get_DeclaringType, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEF9C0, app::String*, get_Name, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEFAA0, app::String*, get_Namespace, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEFB00, int32_t, GetHashCode, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEFC00, app::String*, get_FullName, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEFDD0, bool, get_IsSZArray, app::RuntimeType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EEFE40, void, cctor, )
    inline bool operator==(app::RuntimeType& left, app::RuntimeType& right) { return op_Equality(&left, &right); }
    inline bool operator!=(app::RuntimeType& left, app::RuntimeType& right) { return op_Inequality(&left, &right); }
} // namespace app::classes::System::RuntimeType
