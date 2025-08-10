#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderBossCancellableController.h>

namespace app::classes::SpiderBossCancellableController {
    IL2CPP_REGISTER_METHOD(0x0096B230, void, InitializeForTimeline, app::SpiderBossCancellableController* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x0096B330, void, Reset, app::SpiderBossCancellableController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0096B3E0, bool, CanCancel, app::SpiderBossCancellableController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0096B570, void, ctor, app::SpiderBossCancellableController* this_ptr)
} // namespace app::classes::SpiderBossCancellableController
