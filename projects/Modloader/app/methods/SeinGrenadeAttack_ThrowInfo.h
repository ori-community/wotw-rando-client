#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinGrenadeAttack_ThrowInfo.h>

namespace app::classes::SeinGrenadeAttack_ThrowInfo {
    IL2CPP_REGISTER_METHOD(0x014D90F0, bool, IsMovementRestricted, (app::SeinGrenadeAttack_ThrowInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinGrenadeAttack_ThrowInfo * this_ptr))
} // namespace app::classes::SeinGrenadeAttack_ThrowInfo
