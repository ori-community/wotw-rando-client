#pragma once
#include <Modloader/interception_macros.h>

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
#include <Modloader/app/structs/TypeBuilder.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::Emit::TypeBuilder {
    IL2CPP_REGISTER_METHOD(0x02689600, app::Assembly*, get_Assembly, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689650, app::String*, get_AssemblyQualifiedName, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026896A0, app::Type*, get_BaseType, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026896F0, app::String*, get_FullName, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689740, app::Module*, get_Module, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689790, app::String*, get_Name, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026897E0, app::String*, get_Namespace, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689830, app::Type*, GetElementType, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689880, app::Type*, get_UnderlyingSystemType, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026898B0, app::TypeAttributes__Enum, GetAttributeFlagsImpl, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x026898E0,
        app::ConstructorInfo*,
        GetConstructorImpl,
        app::TypeBuilder* this_ptr,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_convention,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x02689910, app::ConstructorInfo__Array*, GetConstructors, app::TypeBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02689940, app::Object__Array*, GetCustomAttributes_1, app::TypeBuilder* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02689970, app::Object__Array*, GetCustomAttributes_2, app::TypeBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x026899A0, app::EventInfo_1*, GetEvent, app::TypeBuilder* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x026899D0, app::EventInfo_1__Array*, GetEvents, app::TypeBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02689A00, app::FieldInfo_1*, GetField, app::TypeBuilder* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02689A30, app::FieldInfo_1__Array*, GetFields, app::TypeBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02689A60, app::Type*, GetInterface, app::TypeBuilder* this_ptr, app::String* name, bool ignore_case)
    IL2CPP_REGISTER_METHOD(0x02689A90, app::Type__Array*, GetInterfaces, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689AC0, app::MemberInfo_1__Array*, GetMembers, app::TypeBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x02689AF0,
        app::MethodInfo_1*,
        GetMethodImpl,
        app::TypeBuilder* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::CallingConventions__Enum call_convention,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x02689B20, app::MethodInfo_1__Array*, GetMethods, app::TypeBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02689B50, app::Type*, GetNestedType, app::TypeBuilder* this_ptr, app::String* name, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(0x02689B80, app::PropertyInfo_1__Array*, GetProperties, app::TypeBuilder* this_ptr, app::BindingFlags__Enum binding_attr)
    IL2CPP_REGISTER_METHOD(
        0x02689BB0,
        app::PropertyInfo_1*,
        GetPropertyImpl,
        app::TypeBuilder* this_ptr,
        app::String* name,
        app::BindingFlags__Enum binding_attr,
        app::Binder* binder,
        app::Type* return_type,
        app::Type__Array* types,
        app::ParameterModifier__Array* modifiers
    )
    IL2CPP_REGISTER_METHOD(0x02689BE0, bool, HasElementTypeImpl, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02689C10,
        app::Object*,
        InvokeMember,
        app::TypeBuilder* this_ptr,
        app::String* name,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object* target,
        app::Object__Array* args,
        app::ParameterModifier__Array* modifiers,
        app::CultureInfo* culture,
        app::String__Array* named_parameters
    )
    IL2CPP_REGISTER_METHOD(0x02689C40, bool, IsArrayImpl, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689C70, bool, IsByRefImpl, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689CA0, bool, IsCOMObjectImpl, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689CD0, bool, IsDefined, app::TypeBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02689D00, bool, IsPointerImpl, app::TypeBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689D30, bool, IsPrimitiveImpl, app::TypeBuilder* this_ptr)
} // namespace app::classes::System::Reflection::Emit::TypeBuilder
