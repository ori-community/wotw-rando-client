#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateControllerVirtualTimeline_Context__Boxed.h>
#include <Modloader/app/structs/NewSetupStateController.h>

namespace app::classes::Moon::Timeline::StateControllerVirtualTimeline_Context {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::StateControllerVirtualTimeline_Context__Boxed * this_ptr, app::NewSetupStateController* state_controller))
}
