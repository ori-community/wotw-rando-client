#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FlipPlantLogic.h>

namespace app::classes::FlipPlantLogic {
    IL2CPP_REGISTER_METHOD(0x012700C0, void, Awake, (app::FlipPlantLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01270150, void, GoDown, (app::FlipPlantLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01270360, void, GoUp, (app::FlipPlantLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FlipPlantLogic * this_ptr))
} // namespace app::classes::FlipPlantLogic
