#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MortarWormEnemy.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WormHoleManager.h>

namespace app::classes::WormHoleManager {
    IL2CPP_REGISTER_METHOD(0x0058E420, app::MortarWormEnemy*, FindMortarWorm, (app::WormHoleManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E4A0, void, Awake, (app::WormHoleManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E6C0, void, OnDestroy, (app::WormHoleManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E8C0, void, OnMortarHide, (app::WormHoleManager * this_ptr, app::MortarWormEnemy* mortar_worm_enemy))
    IL2CPP_REGISTER_METHOD(0x0058E990, void, ResetHole, (app::WormHoleManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058EB40, void, FixedUpdate, (app::WormHoleManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (app::WormHoleManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (app::WormHoleManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FDCE0, app::SuspendableMask__Enum, get_Mask, (app::WormHoleManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED90, void, set_Mask, (app::WormHoleManager * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0058EE40, void, ctor, (app::WormHoleManager * this_ptr))
} // namespace app::classes::WormHoleManager
