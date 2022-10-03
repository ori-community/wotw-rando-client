#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::WriteStreamClosedEventArgs {
    IL2CPP_REGISTER_METHOD(0x021BB870, void, ctor, (app::WriteStreamClosedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Exception*, get_Error, (app::WriteStreamClosedEventArgs * this_ptr))
} // namespace app::classes::System::Net::WriteStreamClosedEventArgs
