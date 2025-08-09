#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashableSwitchSetupData.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::DashableSwitchSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline*, get_Transition, app::DashableSwitchSetupData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00855D10, float, get_DesiredValue, app::DashableSwitchSetupData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DashableSwitchSetupData* this_ptr)
} // namespace app::classes::DashableSwitchSetupData
