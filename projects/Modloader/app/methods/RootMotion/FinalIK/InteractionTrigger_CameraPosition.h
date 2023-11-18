#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/InteractionTrigger_CameraPosition.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::FinalIK::InteractionTrigger_CameraPosition {
    IL2CPP_REGISTER_METHOD(0x02A163D0, app::Quaternion, GetRotation, (app::InteractionTrigger_CameraPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A16750, bool, IsInRange, (app::InteractionTrigger_CameraPosition * this_ptr, app::Transform* raycast_from, app::RaycastHit hit, app::Transform* trigger, float* error))
    IL2CPP_REGISTER_METHOD(0x02A16A80, void, ctor, (app::InteractionTrigger_CameraPosition * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionTrigger_CameraPosition
