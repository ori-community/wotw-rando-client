#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DayThreeBridgeSetupController.h>

namespace app::classes::DayThreeBridgeSetupController {
    IL2CPP_REGISTER_METHOD(0x00DD42F0, void, NaruTrigger, (app::DayThreeBridgeSetupController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD4910, void, BridgeCollapseNaruOnAnimationEnded, (app::DayThreeBridgeSetupController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C728, DayThreeBridgeSetupController_BridgeCollapseNaruOnAnimationEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DayThreeBridgeSetupController * this_ptr))
} // namespace app::classes::DayThreeBridgeSetupController
