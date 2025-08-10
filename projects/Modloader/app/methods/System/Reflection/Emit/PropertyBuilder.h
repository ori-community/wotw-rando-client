#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/PropertyAttributes__Enum.h>
#include <Modloader/app/structs/PropertyBuilder.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::Emit::PropertyBuilder {
    IL2CPP_REGISTER_METHOD(0x02689220, app::PropertyAttributes__Enum, get_Attributes, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689270, bool, get_CanRead, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026892C0, bool, get_CanWrite, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689310, app::Type*, get_DeclaringType, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689360, app::String*, get_Name, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026893B0, app::Type*, get_PropertyType, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689400, app::ParameterInfo_1__Array*, GetIndexParameters, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689450, app::Type*, get_ReflectedType, app::PropertyBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02689480, app::MethodInfo_1__Array*, GetAccessors, app::PropertyBuilder* this_ptr, bool non_public)
    IL2CPP_REGISTER_METHOD(0x026894B0, app::Object__Array*, GetCustomAttributes_1, app::PropertyBuilder* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x026894E0, app::Object__Array*, GetCustomAttributes_2, app::PropertyBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02689510, app::MethodInfo_1*, GetGetMethod, app::PropertyBuilder* this_ptr, bool non_public)
    IL2CPP_REGISTER_METHOD(0x02689540, app::MethodInfo_1*, GetSetMethod, app::PropertyBuilder* this_ptr, bool non_public)
    IL2CPP_REGISTER_METHOD(
        0x02689570,
        app::Object*,
        GetValue,
        app::PropertyBuilder* this_ptr,
        app::Object* obj,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* index,
        app::CultureInfo* culture
    )
    IL2CPP_REGISTER_METHOD(0x026895A0, bool, IsDefined, app::PropertyBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(
        0x026895D0,
        void,
        SetValue,
        app::PropertyBuilder* this_ptr,
        app::Object* obj,
        app::Object* value,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::Object__Array* index,
        app::CultureInfo* culture
    )
} // namespace app::classes::System::Reflection::Emit::PropertyBuilder
