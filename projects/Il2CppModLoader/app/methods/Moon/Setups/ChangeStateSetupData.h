#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Setups::ChangeStateSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonReference_1_Moon_Timeline_MoonTimeline_*, get_TransitionMoonReference, (app::ChangeStateSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E25190, app::MoonTimeline*, get_Transition, (app::ChangeStateSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Transition, (app::ChangeStateSetupData * this_ptr, app::MoonTimeline* value))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::ChangeStateSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DesiredValue, (app::ChangeStateSetupData * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00E25270, void, ctor, (app::ChangeStateSetupData * this_ptr))
} // namespace app::classes::Moon::Setups::ChangeStateSetupData
