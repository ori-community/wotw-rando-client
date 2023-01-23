#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PrewarmLoremasterReplayExitAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PrewarmLoremasterReplayExitAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::PrewarmLoremasterReplayExitAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PrewarmLoremasterReplayExitAction * this_ptr))
} // namespace app::classes::PrewarmLoremasterReplayExitAction
