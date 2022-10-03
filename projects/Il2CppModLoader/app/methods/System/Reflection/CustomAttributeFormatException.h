#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Reflection::CustomAttributeFormatException {
    IL2CPP_REGISTER_METHOD(0x0267EB30, void, ctor_1, (app::CustomAttributeFormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1CA20, void, ctor_2, (app::CustomAttributeFormatException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01EA7840, void, ctor_3, (app::CustomAttributeFormatException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Reflection::CustomAttributeFormatException
