#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayMoonTimelineAction.h>

namespace app::classes::PlayMoonTimelineAction {
    IL2CPP_REGISTER_METHOD(0x01179F20, void, Perform, app::PlayMoonTimelineAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::PlayMoonTimelineAction* this_ptr)
} // namespace app::classes::PlayMoonTimelineAction
