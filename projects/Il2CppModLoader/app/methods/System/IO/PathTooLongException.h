#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IO::PathTooLongException {
    IL2CPP_REGISTER_METHOD(0x0237B060, void, ctor_1, (app::PathTooLongException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237B0F0, void, ctor_2, (app::PathTooLongException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::PathTooLongException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
