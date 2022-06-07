#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::TypeLoadExceptionHolder {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TypeLoadExceptionHolder * this_ptr, app::String * type_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_TypeName, (app::TypeLoadExceptionHolder * this_ptr))
}
