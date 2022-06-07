#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderBossCancellableController {
    IL2CPP_REGISTER_METHOD(0x0096B230, void, InitializeForTimeline, (app::SpiderBossCancellableController * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x0096B330, void, Reset, (app::SpiderBossCancellableController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096B3E0, bool, CanCancel, (app::SpiderBossCancellableController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096B570, void, ctor, (app::SpiderBossCancellableController * this_ptr))
}
