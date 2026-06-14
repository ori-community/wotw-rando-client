#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WeaponRifle.h>

namespace app::classes::RootMotion::Demos::WeaponRifle {
    IL2CPP_REGISTER_METHOD(0x0204CFA0, void, Fire, app::WeaponRifle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0204D400, void, Update, app::WeaponRifle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0204D620, void, ctor, app::WeaponRifle* this_ptr)
} // namespace app::classes::RootMotion::Demos::WeaponRifle
