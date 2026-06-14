#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsWatchingCutsceneCondition.h>

namespace app::classes::IsWatchingCutsceneCondition {
    IL2CPP_REGISTER_METHOD(0x00648FA0, bool, Validate, app::IsWatchingCutsceneCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsWatchingCutsceneCondition* this_ptr)
} // namespace app::classes::IsWatchingCutsceneCondition
