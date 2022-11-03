#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WeaponMasterIntroNode {
    IL2CPP_REGISTER_METHOD(0x0056F9A0, void, OnEnter, (app::WeaponMasterIntroNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FAC0, void, ctor, (app::WeaponMasterIntroNode * this_ptr))
} // namespace app::classes::WeaponMasterIntroNode
