#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/InLoremasterReplayCondition.h>

namespace app::classes::InLoremasterReplayCondition {
    IL2CPP_REGISTER_METHOD(0x00628350, bool, Validate, app::InLoremasterReplayCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::InLoremasterReplayCondition* this_ptr)
} // namespace app::classes::InLoremasterReplayCondition
