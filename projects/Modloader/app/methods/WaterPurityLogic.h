#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterPurityLogic.h>

namespace app::classes::WaterPurityLogic {
    IL2CPP_REGISTER_METHOD(0x008DFE40, void, FixedUpdate, app::WaterPurityLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::WaterPurityLogic* this_ptr)
} // namespace app::classes::WaterPurityLogic
