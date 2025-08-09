#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/FieldAttributes__Enum.h>
#include <Modloader/app/structs/FieldBuilder.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeFieldHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::Emit::FieldBuilder {
    IL2CPP_REGISTER_METHOD(0x02680210, app::FieldAttributes__Enum, get_Attributes, app::FieldBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02680260, app::Type*, get_DeclaringType, app::FieldBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026802B0, app::Type*, get_FieldType, app::FieldBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02680300, app::String*, get_Name, app::FieldBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02680350, app::Object*, GetValue, app::FieldBuilder* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x026803A0, app::RuntimeFieldHandle, get_FieldHandle, app::FieldBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026803D0, app::Type*, get_ReflectedType, app::FieldBuilder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02680400, app::Object__Array*, GetCustomAttributes_1, app::FieldBuilder* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02680430, app::Object__Array*, GetCustomAttributes_2, app::FieldBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02680460, bool, IsDefined, app::FieldBuilder* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(
        0x02680490,
        void,
        SetValue,
        app::FieldBuilder* this_ptr,
        app::Object* obj,
        app::Object* val,
        app::BindingFlags__Enum invoke_attr,
        app::Binder* binder,
        app::CultureInfo* culture
    )
} // namespace app::classes::System::Reflection::Emit::FieldBuilder
