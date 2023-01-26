#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClearScenesLoadedForCheckpointAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ClearScenesLoadedForCheckpointAction {
    IL2CPP_REGISTER_METHOD(0x012AD320, void, Perform, (app::ClearScenesLoadedForCheckpointAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ClearScenesLoadedForCheckpointAction * this_ptr))
} // namespace app::classes::ClearScenesLoadedForCheckpointAction
