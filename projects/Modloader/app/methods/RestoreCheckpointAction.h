#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RestoreCheckpointAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::RestoreCheckpointAction {
    IL2CPP_REGISTER_METHOD(0x0090B690, void, Perform, (app::RestoreCheckpointAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RestoreCheckpointAction * this_ptr))
} // namespace app::classes::RestoreCheckpointAction
