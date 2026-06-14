#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/StopMoonTimelineAction.h>

namespace app::classes::StopMoonTimelineAction {
    IL2CPP_REGISTER_METHOD(0x0065CA90, void, Perform, app::StopMoonTimelineAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::StopMoonTimelineAction* this_ptr)
} // namespace app::classes::StopMoonTimelineAction
