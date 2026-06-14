#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WeaponAnimationPlayer.h>

namespace app::classes::experiments::comboSystem::WeaponAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x00F59B40, void, ctor, app::WeaponAnimationPlayer* this_ptr)
}
