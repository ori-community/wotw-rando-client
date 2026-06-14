#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DynamicMethod.h>
#include <Modloader/app/structs/ILGenerator.h>
#include <Modloader/app/structs/MethodAttributes__Enum.h>
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::Emit::DynamicMethod {
    IL2CPP_REGISTER_METHOD(
        0x0267F7B0,
        void,
        ctor_1,
        app::DynamicMethod* this_ptr,
        app::String* name,
        app::Type* return_type,
        app::Type__Array* parameter_types,
        app::Module* m,
        bool skip_visibility
    )
    IL2CPP_REGISTER_METHOD(
        0x0267F7E0,
        void,
        ctor_2,
        app::DynamicMethod* this_ptr,
        app::String* name,
        app::Type* return_type,
        app::Type__Array* parameter_types,
        app::Type* owner,
        bool skip_visibility
    )
    IL2CPP_REGISTER_METHOD(0x0267F810, app::MethodAttributes__Enum, get_Attributes, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F840, app::Type*, get_DeclaringType, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F870, void, set_InitLocals, app::DynamicMethod* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0267F8A0, app::RuntimeMethodHandle, get_MethodHandle, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F8D0, app::String*, get_Name, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F900, app::Type*, get_ReflectedType, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F930, app::MethodInfo_1*, GetBaseDefinition, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F960, app::Object__Array*, GetCustomAttributes_1, app::DynamicMethod* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0267F990, app::Object__Array*, GetCustomAttributes_2, app::DynamicMethod* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x0267F9C0, app::ILGenerator*, GetILGenerator, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267F9F0, app::MethodImplAttributes__Enum, GetMethodImplementationFlags, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267FA20, app::ParameterInfo_1__Array*, GetParameters, app::DynamicMethod* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0267FA50,
        app::Object*,
        Invoke,
        app::DynamicMethod* this_ptr,
        app::Object* obj,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* parameters,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(0x0267FA80, bool, IsDefined, app::DynamicMethod* this_ptr, app::Type* attribute_type, bool inherit)
} // namespace app::classes::System::Reflection::Emit::DynamicMethod
