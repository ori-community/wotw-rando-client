#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::Utils {
    IL2CPP_REGISTER_METHOD(0x00303590, int64_t, MsFrom1970, ())
    IL2CPP_REGISTER_METHOD(0x00303680, int64_t, TimestampNowTicks, ())
    IL2CPP_REGISTER_METHOD(0x00303720, app::String *, TenantID, (app::String * tenant))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Utils_4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00303850, void, cctor, ())
}
