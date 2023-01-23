#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayExternalTimelineAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PlayExternalTimelineAction {
    IL2CPP_REGISTER_METHOD(0x011790D0, void, Perform, (app::PlayExternalTimelineAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01179220, void, ctor, (app::PlayExternalTimelineAction * this_ptr))
} // namespace app::classes::PlayExternalTimelineAction
