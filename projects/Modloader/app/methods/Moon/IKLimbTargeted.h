#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IKLimbTargeted.h>
#include <Modloader/app/structs/MoonAnimator.h>

namespace app::classes::Moon::IKLimbTargeted {
    IL2CPP_REGISTER_METHOD(0x010FE720, void, OnAddedToAnimator, (app::IKLimbTargeted * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x010FE730, void, OnDrawGizmosSelected, (app::IKLimbTargeted * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FEAC0, void, Process, (app::IKLimbTargeted * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x010FFBA0, void, ctor, (app::IKLimbTargeted * this_ptr))
} // namespace app::classes::Moon::IKLimbTargeted
