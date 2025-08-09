#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsReplayPlayingCondition.h>

namespace app::classes::IsReplayPlayingCondition {
    IL2CPP_REGISTER_METHOD(0x006475D0, bool, Validate, app::IsReplayPlayingCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsReplayPlayingCondition* this_ptr)
} // namespace app::classes::IsReplayPlayingCondition
