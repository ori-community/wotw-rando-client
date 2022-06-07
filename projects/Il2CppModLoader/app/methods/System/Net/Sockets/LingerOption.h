#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Sockets::LingerOption {
    IL2CPP_REGISTER_METHOD(0x01BE0270, void, ctor, (app::LingerOption * this_ptr, bool enable, int32_t seconds))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Enabled, (app::LingerOption * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_LingerTime, (app::LingerOption * this_ptr, int32_t value))
}
