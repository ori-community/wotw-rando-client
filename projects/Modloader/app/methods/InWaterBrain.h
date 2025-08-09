#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/InWaterBrain.h>

namespace app::classes::InWaterBrain {
    IL2CPP_REGISTER_METHOD(0x00628470, app::Enum__Array*, GetEntries, app::InWaterBrain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00628500, app::Enum, Evaluate, app::InWaterBrain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, app::InWaterBrain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::InWaterBrain* this_ptr)
} // namespace app::classes::InWaterBrain
