#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::MarshalDirectiveException {
    IL2CPP_REGISTER_METHOD(0x01A96C00, void, ctor_1, (app::MarshalDirectiveException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A96C90, void, ctor_2, (app::MarshalDirectiveException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::MarshalDirectiveException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
