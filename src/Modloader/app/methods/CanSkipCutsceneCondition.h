#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanSkipCutsceneCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CanSkipCutsceneCondition {
    IL2CPP_REGISTER_METHOD(0x00B22180, bool, Validate, app::CanSkipCutsceneCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CanSkipCutsceneCondition* this_ptr)
} // namespace app::classes::CanSkipCutsceneCondition
