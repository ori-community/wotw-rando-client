#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::InvalidCastException {
    IL2CPP_REGISTER_METHOD(0x02265D40, void, ctor_1, (app::InvalidCastException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02265DD0, void, ctor_2, (app::InvalidCastException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02265DF0, void, ctor_3, (app::InvalidCastException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, (app::InvalidCastException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::InvalidCastException
