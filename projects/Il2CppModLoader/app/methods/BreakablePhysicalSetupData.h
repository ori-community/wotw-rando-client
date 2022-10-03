#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BreakablePhysicalSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonReference_1_Moon_Timeline_MoonTimeline_*, get_TransitionMoonReference, (app::BreakablePhysicalSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4E1F0, app::MoonTimeline*, get_Transition, (app::BreakablePhysicalSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::BreakablePhysicalSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DesiredValue, (app::BreakablePhysicalSetupData * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D4E2B0, void, ctor, (app::BreakablePhysicalSetupData * this_ptr))
} // namespace app::classes::BreakablePhysicalSetupData
