#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::MethodAccessException {
    IL2CPP_REGISTER_METHOD(0x0226A010, void, ctor_1, (app::MethodAccessException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226A0A0, void, ctor_2, (app::MethodAccessException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::MethodAccessException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::MethodAccessException
