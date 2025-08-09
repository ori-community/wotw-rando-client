#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/ConstructorBuilder.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/MethodAttributes__Enum.h>
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::Emit::ConstructorBuilder {
    IL2CPP_REGISTER_METHOD(0x0267F4F0, app::MethodAttributes__Enum, get_Attributes, app::ConstructorBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F540, app::Type*, get_DeclaringType, app::ConstructorBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F590, app::String*, get_Name, app::ConstructorBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F5E0, app::ParameterInfo_1__Array*, GetParameters, app::ConstructorBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F630, app::RuntimeMethodHandle, get_MethodHandle, app::ConstructorBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F660, app::Type*, get_ReflectedType, app::ConstructorBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F690, app::Object__Array*, GetCustomAttributes_1, app::ConstructorBuilder* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0267F6C0, app::Object__Array*, GetCustomAttributes_2, app::ConstructorBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0267F6F0, app::MethodImplAttributes__Enum, GetMethodImplementationFlags, app::ConstructorBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0267F720,
        app::Object*,
        Invoke_1,
        app::ConstructorBuilder* this_ptr,
        app::Object* obj,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* parameters,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(
        0x0267F750,
        app::Object*,
        Invoke_2,
        app::ConstructorBuilder* this_ptr,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* parameters,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(0x0267F780, bool, IsDefined, app::ConstructorBuilder* this_ptr, app::Type* attribute_type, bool inherit)
} // namespace app::classes::System::Reflection::Emit::ConstructorBuilder
