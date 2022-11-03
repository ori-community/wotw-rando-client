#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CaveSleepController {
    IL2CPP_REGISTER_METHOD(0x0103B230, void, Start, (app::CaveSleepController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::CaveSleepController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103B310, void, Update, (app::CaveSleepController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103B5A0, void, OnAnimationEnd, (app::CaveSleepController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476C3C0, CaveSleepController_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0103BB00, void, ctor, (app::CaveSleepController * this_ptr))
} // namespace app::classes::CaveSleepController
