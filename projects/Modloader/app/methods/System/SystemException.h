#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::SystemException {
    IL2CPP_REGISTER_METHOD(0x0243E4C0, void, ctor_1, (app::SystemException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0243E580, void, ctor_2, (app::SystemException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0243E640, void, ctor_3, (app::SystemException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x0243E700, void, ctor_4, (app::SystemException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::SystemException
