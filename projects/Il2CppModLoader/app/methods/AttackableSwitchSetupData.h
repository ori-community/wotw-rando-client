#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AttackableSwitchSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline*, get_Transition, (app::AttackableSwitchSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855D10, float, get_DesiredValue, (app::AttackableSwitchSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AttackableSwitchSetupData * this_ptr))
} // namespace app::classes::AttackableSwitchSetupData
