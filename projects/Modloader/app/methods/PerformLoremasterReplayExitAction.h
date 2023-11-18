#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PerformLoremasterReplayExitAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PerformLoremasterReplayExitAction {
    IL2CPP_REGISTER_METHOD(0x0044CC30, void, Perform, (app::PerformLoremasterReplayExitAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PerformLoremasterReplayExitAction * this_ptr))
} // namespace app::classes::PerformLoremasterReplayExitAction
