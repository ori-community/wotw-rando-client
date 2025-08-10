#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CallingConventions__Enum.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/ConstructorInfo__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/EnumBuilder.h>
#include <Modloader/app/structs/EventInfo_1.h>
#include <Modloader/app/structs/EventInfo_1__Array.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/MemberInfo_1__Array.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterModifier__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::Emit::EnumBuilder {
    IL2CPP_REGISTER_METHOD(0x0267FAB0, app::Assembly*, get_Assembly, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FB00, app::String*, get_AssemblyQualifiedName, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FB50, app::Type*, get_BaseType, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FBA0, app::String*, get_FullName, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FBF0, app::Module*, get_Module, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FC40, app::String*, get_Name, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FC90, app::String*, get_Namespace, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FCE0, app::Type*, GetElementType, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FD30, app::Type*, get_UnderlyingSystemType, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FD60, app::TypeAttributes__Enum, GetAttributeFlagsImpl, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0267FD90,
        app::ConstructorInfo*,
        GetConstructorImpl,
        app::EnumBuilder* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_convention,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x0267FDC0, app::ConstructorInfo__Array*, GetConstructors, app::EnumBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x0267FDF0, app::Object__Array*, GetCustomAttributes_1, app::EnumBuilder* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0267FE20, app::Object__Array*, GetCustomAttributes_2, app::EnumBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0267FE50, app::EventInfo_1*, GetEvent, app::EnumBuilder* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x0267FE80, app::EventInfo_1__Array*, GetEvents, app::EnumBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x0267FEB0, app::FieldInfo_1*, GetField, app::EnumBuilder* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x0267FEE0, app::FieldInfo_1__Array*, GetFields, app::EnumBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x0267FF10, app::Type*, GetInterface, app::EnumBuilder* this_ptr, app::String* name, bool ignore_case)
    IL2CPP_REGISTER_METHOD(0x0267FF40, app::Type__Array*, GetInterfaces, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FF70, app::MemberInfo_1__Array*, GetMembers, app::EnumBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x0267FFA0,
        app::MethodInfo_1*,
        GetMethodImpl,
        app::EnumBuilder* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_convention,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x0267FFD0, app::MethodInfo_1__Array*, GetMethods, app::EnumBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02680000, app::Type*, GetNestedType, app::EnumBuilder* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02680030, app::PropertyInfo_1__Array*, GetProperties, app::EnumBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x02680060,
        app::PropertyInfo_1*,
        GetPropertyImpl,
        app::EnumBuilder* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::Type* return_type,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x02680090, bool, HasElementTypeImpl, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026800C0,
        app::Object*,
        InvokeMember,
        app::EnumBuilder* this_ptr,
        app::String* name,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object* target,
        app::Object__Array* args,
        app::ParameterModifier__Array* modifiers,
        app::CultureInfo* culture,
        app::String__Array* named_parameters
    )
    IL2CPP_REGISTER_METHOD(0x026800F0, bool, IsArrayImpl, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02680120, bool, IsByRefImpl, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02680150, bool, IsCOMObjectImpl, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02680180, bool, IsDefined, app::EnumBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x026801B0, bool, IsPointerImpl, app::EnumBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026801E0, bool, IsPrimitiveImpl, app::EnumBuilder* this_ptr)
} // namespace app::classes::System::Reflection::Emit::EnumBuilder
