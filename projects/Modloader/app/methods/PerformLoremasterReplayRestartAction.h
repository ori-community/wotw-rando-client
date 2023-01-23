#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PerformLoremasterReplayRestartAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PerformLoremasterReplayRestartAction {
    IL2CPP_REGISTER_METHOD(0x0044CCC0, void, Perform, (app::PerformLoremasterReplayRestartAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PerformLoremasterReplayRestartAction * this_ptr))
} // namespace app::classes::PerformLoremasterReplayRestartAction
