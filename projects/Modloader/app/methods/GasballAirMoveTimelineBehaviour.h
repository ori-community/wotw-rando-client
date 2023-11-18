#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GasballAirMoveTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x0041A160, void, OnInitializeTask, (app::GasballAirMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041A4E0, app::BehaviourStatus__Enum, OnExecuteTask, (app::GasballAirMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041B060, app::Vector3, UpdateRotation, (app::GasballAirMoveTimelineBehaviour * this_ptr, app::Vector3 current_rotation, app::Vector3 move_direction, float d_time))
    IL2CPP_REGISTER_METHOD(0x0041B290, void, ResetCurrentlyPlayingTimeline, (app::GasballAirMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041B360, void, ctor, (app::GasballAirMoveTimelineBehaviour * this_ptr))
} // namespace app::classes::GasballAirMoveTimelineBehaviour
