#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WeaponMasterIdle_c.h>

namespace app::classes::WeaponMasterIdle___c {
    IL2CPP_REGISTER_METHOD(0x0056F860, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WeaponMasterIdle_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _PlayTimeline_b__11_0, (app::WeaponMasterIdle_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnExitTask_b__13_0, (app::WeaponMasterIdle_c * this_ptr))
} // namespace app::classes::WeaponMasterIdle___c
