#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/CollisionTriggerSetupData.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::CollisionTriggerSetupData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonReference_1_Moon_Timeline_MoonTimeline_*, get_TransitionMoonReference, (app::CollisionTriggerSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012D27D0, app::MoonTimeline*, get_Transition, (app::CollisionTriggerSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DesiredValue, (app::CollisionTriggerSetupData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DesiredValue, (app::CollisionTriggerSetupData * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x012D2890, void, ctor, (app::CollisionTriggerSetupData * this_ptr))
} // namespace app::classes::CollisionTriggerSetupData
