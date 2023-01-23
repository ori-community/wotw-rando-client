#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/DoorSetupData.h>

namespace app::classes::DoorSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline*, get_Transition, (app::DoorSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::DoorSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DoorSetupData * this_ptr))
} // namespace app::classes::DoorSetupData
