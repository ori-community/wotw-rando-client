#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpikeSlugLocomotionMoveTimelineBehaviour.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpikeSlugLocomotionMoveTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x011C6BA0, app::Vector2, DeltaToPoint, app::SpikeSlugLocomotionMoveTimelineBehaviour* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, app::SpikeSlugLocomotionMoveTimelineBehaviour* this_ptr)
} // namespace app::classes::SpikeSlugLocomotionMoveTimelineBehaviour
