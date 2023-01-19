#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/types/SavePedestalController.h>

using namespace app::classes;

namespace {
    constexpr float MINIMUM_TELEPORTATION_TIME = 2.0f;

    IL2CPP_INTERCEPT(SavePedestalController, void, BeginTeleportation, (app::Vector2 teleport_target_world_position)) {
        next::SavePedestalController::BeginTeleportation(teleport_target_world_position);

        // 7.f is the default
        types::SavePedestalController::get_class()->static_fields->Instance->fields.m_startTime -= (7.f - MINIMUM_TELEPORTATION_TIME);
    }
}