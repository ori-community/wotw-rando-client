#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplatformVideoPlayerAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::MultiplatformVideoPlayerAction {
    IL2CPP_REGISTER_METHOD(0x00879F00, void, Stop, (app::MultiplatformVideoPlayerAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087A040, bool, get_IsPerforming, (app::MultiplatformVideoPlayerAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087A0E0, void, Perform, (app::MultiplatformVideoPlayerAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0087A2D0, void, ctor, (app::MultiplatformVideoPlayerAction * this_ptr))
} // namespace app::classes::MultiplatformVideoPlayerAction
