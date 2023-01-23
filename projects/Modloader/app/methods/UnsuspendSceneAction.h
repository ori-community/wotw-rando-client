#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnsuspendSceneAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::UnsuspendSceneAction {
    IL2CPP_REGISTER_METHOD(0x013AD8B0, void, Perform, (app::UnsuspendSceneAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::UnsuspendSceneAction * this_ptr))
} // namespace app::classes::UnsuspendSceneAction
