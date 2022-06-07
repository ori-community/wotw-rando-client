#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IndexOutOfRangeException {
    IL2CPP_REGISTER_METHOD(0x0238C2C0, void, ctor_1, (app::IndexOutOfRangeException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238C350, void, ctor_2, (app::IndexOutOfRangeException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::IndexOutOfRangeException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
