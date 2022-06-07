#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::PlatformNotSupportedException {
    IL2CPP_REGISTER_METHOD(0x02280400, void, ctor_1, (app::PlatformNotSupportedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02280490, void, ctor_2, (app::PlatformNotSupportedException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::PlatformNotSupportedException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
