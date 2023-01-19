#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/Moon/Timeline/GameplayToCinematicEntity.h>
#include <Modloader/app/types/SavePedestalController.h>
#include <Modloader/app/types/UI_Cameras.h>

using namespace app::classes;

namespace {
    constexpr float MINIMUM_TELEPORTATION_TIME = 2.0f;

    void unlock_cinematics() {
        auto const gameplay_camera = types::UI_Cameras::get_class()->static_fields->Current;
        auto const camera_controller = gameplay_camera->fields.Controller;
        auto const puppet_controller = camera_controller->fields.PuppetController;
        auto const current_gameplay_to_cinematic_entity = puppet_controller->fields.CurrentGameplayToCinematicEntity;

        if (current_gameplay_to_cinematic_entity != nullptr) {
            Moon::Timeline::GameplayToCinematicEntity::RestoreToOriginalState(current_gameplay_to_cinematic_entity);
            il2cpp::unity::destroy_object(current_gameplay_to_cinematic_entity);
            puppet_controller->fields.CurrentGameplayToCinematicEntity = nullptr;
        }
    }

    IL2CPP_INTERCEPT(SavePedestalController, void, BeginTeleportation, (app::Vector2 teleport_target_world_position)) {
        unlock_cinematics();
        next::SavePedestalController::BeginTeleportation(teleport_target_world_position);

        // 7.f is the default
        types::SavePedestalController::get_class()->static_fields->Instance->fields.m_startTime -= (7.f - MINIMUM_TELEPORTATION_TIME);
    }
}