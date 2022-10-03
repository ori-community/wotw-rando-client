#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::FormatException {
    IL2CPP_REGISTER_METHOD(0x01A1C990, void, ctor_1, (app::FormatException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1CA20, void, ctor_2, (app::FormatException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A1CA40, void, ctor_3, (app::FormatException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, (app::FormatException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::FormatException
