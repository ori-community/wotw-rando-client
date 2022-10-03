#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GenericDamageTrigger_DamageTriggerSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonReference_1_Moon_Timeline_MoonTimeline_*, get_TransitionMoonReference, (app::GenericDamageTrigger_DamageTriggerSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E07570, app::MoonTimeline*, get_Transition, (app::GenericDamageTrigger_DamageTriggerSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::GenericDamageTrigger_DamageTriggerSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DesiredValue, (app::GenericDamageTrigger_DamageTriggerSetupData * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00E07630, void, ctor, (app::GenericDamageTrigger_DamageTriggerSetupData * this_ptr))
} // namespace app::classes::GenericDamageTrigger_DamageTriggerSetupData
