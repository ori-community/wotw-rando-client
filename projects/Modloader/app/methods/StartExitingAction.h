#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StartExitingAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::StartExitingAction {
    IL2CPP_REGISTER_METHOD(0x009B18F0, void, Perform, (app::StartExitingAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::StartExitingAction * this_ptr))
} // namespace app::classes::StartExitingAction
