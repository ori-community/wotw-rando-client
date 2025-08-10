#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MechSpiderLeg.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::MechSpiderLeg {
    IL2CPP_REGISTER_METHOD(0x02225500, bool, get_isStepping, app::MechSpiderLeg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02225520, app::Vector3, get_position, app::MechSpiderLeg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02225590, void, set_position, app::MechSpiderLeg* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x022255E0, void, Start, app::MechSpiderLeg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02225A20, app::Vector3, GetStepTarget, app::MechSpiderLeg* this_ptr, bool* step_found, float focus, float distance)
    IL2CPP_REGISTER_METHOD(0x022261B0, void, Update, app::MechSpiderLeg* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022266A0, app::IEnumerator*, Step, app::MechSpiderLeg* this_ptr, app::Vector3 step_start_position, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x02226820, void, ctor, app::MechSpiderLeg* this_ptr)
} // namespace app::classes::RootMotion::Demos::MechSpiderLeg
