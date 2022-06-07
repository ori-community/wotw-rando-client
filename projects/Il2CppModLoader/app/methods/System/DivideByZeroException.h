#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::DivideByZeroException {
    IL2CPP_REGISTER_METHOD(0x01A0F9F0, void, ctor_1, (app::DivideByZeroException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FA80, void, ctor_2, (app::DivideByZeroException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::DivideByZeroException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
