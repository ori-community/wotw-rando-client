#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::Demos::WeaponRifle {
    IL2CPP_REGISTER_METHOD(0x0204CFA0, void, Fire, (app::WeaponRifle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204D400, void, Update, (app::WeaponRifle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204D620, void, ctor, (app::WeaponRifle * this_ptr))
}
