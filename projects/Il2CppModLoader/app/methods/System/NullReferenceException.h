#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::NullReferenceException {
    IL2CPP_REGISTER_METHOD(0x0226F5A0, void, ctor_1, (app::NullReferenceException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226F630, void, ctor_2, (app::NullReferenceException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::NullReferenceException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::NullReferenceException
