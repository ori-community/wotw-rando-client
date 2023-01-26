#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanRestartLoremasterReplayCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CanRestartLoremasterReplayCondition {
    IL2CPP_REGISTER_METHOD(0x00B21FD0, bool, Validate, (app::CanRestartLoremasterReplayCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanRestartLoremasterReplayCondition * this_ptr))
} // namespace app::classes::CanRestartLoremasterReplayCondition
