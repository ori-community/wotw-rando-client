#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/types/ReadyForAnimationTrigger.h>
#include <Modloader/il2cpp_helpers.h>


namespace {
    /**
     * The Regenerate tree animation and the thing that actually gives you Regenerate are
     * two separate systems, each checking for a condition every frame. That condition requires
     * Ori to be on the ground. Sometimes the tree animation raises Ori immediately, causing the
     * second check to fail until Ori hits the ground again, thus delaying the pickup.
     *
     * This fix removes the requirement to be grounded for that particular condition.
     * This is safe because this condition is exclusively checked while the player does not
     * have control over Ori.
     */

    using namespace app::classes;

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "swampSaveRoomA",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            const auto spell_pickup_trigger_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "artSetups",
                    "spellPickupSetup",
                    "spellPickupTrigger",
                }
            );

            const auto ready_for_animation_trigger = il2cpp::unity::get_component<app::ReadyForAnimationTrigger>(spell_pickup_trigger_go, types::ReadyForAnimationTrigger::get_class());
            ready_for_animation_trigger->fields._.OnlyTriggerIfGrounded = false;
        }
    );
} // namespace
