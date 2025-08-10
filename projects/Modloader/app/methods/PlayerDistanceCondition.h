#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayerDistanceCondition.h>

namespace app::classes::PlayerDistanceCondition {
    IL2CPP_REGISTER_METHOD(0x0140E680, bool, Validate, app::PlayerDistanceCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::PlayerDistanceCondition* this_ptr)
} // namespace app::classes::PlayerDistanceCondition
