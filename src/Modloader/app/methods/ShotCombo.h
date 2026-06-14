#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShotCombo.h>

namespace app::classes::ShotCombo {
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_CurrentShot, app::ShotCombo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C4000, void, set_CurrentShot, app::ShotCombo* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CanShoot, app::ShotCombo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_CanShoot, app::ShotCombo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x005C4010, void, Update, app::ShotCombo* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(0x005C4050, void, UpdateState, app::ShotCombo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C4090, void, Shoot, app::ShotCombo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C40A0, void, ctor, app::ShotCombo* this_ptr)
} // namespace app::classes::ShotCombo
