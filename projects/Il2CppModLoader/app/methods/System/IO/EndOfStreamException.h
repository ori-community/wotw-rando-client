#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IO::EndOfStreamException {
    IL2CPP_REGISTER_METHOD(0x01E051C0, void, ctor_1, (app::EndOfStreamException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E05250, void, ctor_2, (app::EndOfStreamException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::EndOfStreamException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
