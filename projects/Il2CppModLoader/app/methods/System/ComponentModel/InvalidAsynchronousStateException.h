#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::InvalidAsynchronousStateException {
    IL2CPP_REGISTER_METHOD(0x01FEFCB0, void, ctor_1, (app::InvalidAsynchronousStateException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEFCD0, void, ctor_2, (app::InvalidAsynchronousStateException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01FEFCF0, void, ctor_3, (app::InvalidAsynchronousStateException * this_ptr, app::String * message, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x01FEFD10, void, ctor_4, (app::InvalidAsynchronousStateException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
