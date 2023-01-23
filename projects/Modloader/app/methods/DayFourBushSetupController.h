#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DayFourBushSetupController.h>

namespace app::classes::DayFourBushSetupController {
    IL2CPP_REGISTER_METHOD(0x00DD38D0, void, FixedUpdate, (app::DayFourBushSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD3B20, void, PlayerCollisionTrigger, (app::DayFourBushSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD3F60, void, EnterCaveTrigger, (app::DayFourBushSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD3F90, void, OnAnimationEnd, (app::DayFourBushSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735888, DayFourBushSetupController_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DayFourBushSetupController * this_ptr))
} // namespace app::classes::DayFourBushSetupController
