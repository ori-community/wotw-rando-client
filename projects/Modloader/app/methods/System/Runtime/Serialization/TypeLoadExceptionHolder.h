#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeLoadExceptionHolder.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Serialization::TypeLoadExceptionHolder {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TypeLoadExceptionHolder * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_TypeName, (app::TypeLoadExceptionHolder * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::TypeLoadExceptionHolder
