#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkCommonOutputSettings {
    IL2CPP_REGISTER_METHOD(0x026D9E60, void, CopyTo, (app::AkCommonOutputSettings * this_ptr, app::AkOutputSettings * settings))
    IL2CPP_REGISTER_METHOD(0x026D9F80, void, ctor, (app::AkCommonOutputSettings * this_ptr))
}
