#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DisableScale {
    IL2CPP_REGISTER_METHOD(0x00B98A70, void, Start, (app::DisableScale * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98B10, void, Update, (app::DisableScale * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DisableScale * this_ptr))
} // namespace app::classes::DisableScale
