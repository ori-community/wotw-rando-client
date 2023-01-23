#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SpikeSlugLocomotionMoveBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpikeSlugLocomotionMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x011C6BA0, app::Vector2, DeltaToPoint, (app::SpikeSlugLocomotionMoveBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, (app::SpikeSlugLocomotionMoveBehaviour * this_ptr))
} // namespace app::classes::SpikeSlugLocomotionMoveBehaviour
