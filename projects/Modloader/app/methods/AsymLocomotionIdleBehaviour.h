#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::AsymLocomotionIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x00842380, void, OnEnterTask, (app::AsymLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008425C0, void, OnExitTask, (app::AsymLocomotionIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::AsymLocomotionIdleBehaviour * this_ptr))
} // namespace app::classes::AsymLocomotionIdleBehaviour
