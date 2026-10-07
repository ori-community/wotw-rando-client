#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/il2cpp_helpers.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::GameObject>> restriction_emerge_trigger_ref;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> restriction_kwolok_setup_ref;
    core::reactivity::ReactiveEffect::ptr_t effect;

    auto& fix_enabled_state = randomizer::uber_states::state<"randoConfig", "fixMeetingKwolokUnderwaterAbilityRestriction">();

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("kwoloksCavernThroneRoom", [](const auto& event) {
        if (event.state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

        restriction_emerge_trigger_ref = il2cpp::WeakGCRef(
            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"kwolokSetup", "emergeTrigger", "restrictAbility"})
        );
        restriction_kwolok_setup_ref = il2cpp::WeakGCRef(
            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"beforeFirstTimeKwolokSetup", "restrictAbility"})
        );

        effect = core::reactivity::watch_effect([] {
            if (!restriction_emerge_trigger_ref.has_value() || !restriction_kwolok_setup_ref.has_value()) {
                effect = nullptr;
                return;
            }

            const auto restriction_emerge_trigger_go = **restriction_emerge_trigger_ref;
            const auto restriction_kwolok_setup_go = **restriction_kwolok_setup_ref;

            if (fix_enabled_state.get()) {
                il2cpp::unity::set_local_position(*restriction_emerge_trigger_go, {-2.9, 20.0, 0});
                il2cpp::unity::set_local_position(*restriction_kwolok_setup_go, {14, 13.5, 11.5});
            } else {
                il2cpp::unity::set_local_position(*restriction_emerge_trigger_go, {-2.9, 8.9, 0});
                il2cpp::unity::set_local_position(*restriction_kwolok_setup_go, {15.3, -7.0, 11.5});
            }
        });
    });
} // namespace
