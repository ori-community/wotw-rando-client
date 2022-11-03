#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RigidbodyInteractionController_InteractionInformation {
    IL2CPP_REGISTER_METHOD(0x0011AE50, void, ctor_1, (app::RigidbodyInteractionController_InteractionInformation__Boxed * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x0011AE60, void, ctor_2, (app::RigidbodyInteractionController_InteractionInformation__Boxed * this_ptr, app::Vector3 point, app::Vector3 normal, app::Vector3 relative_velocity, bool is_player, int32_t layer))
} // namespace app::classes::RigidbodyInteractionController_InteractionInformation
