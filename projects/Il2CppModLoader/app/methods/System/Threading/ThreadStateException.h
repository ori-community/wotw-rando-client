#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::ThreadStateException {
    IL2CPP_REGISTER_METHOD(0x023496B0, void, ctor_1, (app::ThreadStateException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02349740, void, ctor_2, (app::ThreadStateException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::ThreadStateException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
