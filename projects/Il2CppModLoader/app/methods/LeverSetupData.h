#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LeverSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline*, get_Transition, (app::LeverSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::LeverSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LeverSetupData * this_ptr))
} // namespace app::classes::LeverSetupData
