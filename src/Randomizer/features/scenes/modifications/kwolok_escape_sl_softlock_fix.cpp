#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/ObjectInsideZoneChecker.h>
#include <Modloader/app/types/PlayerInsideZoneChecker.h>
#include <Modloader/il2cpp_helpers.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::PlayerInsideZoneChecker>> player_inside_zone_checker_ref;
    core::reactivity::ReactiveEffect::ptr_t effect;

    auto& fix_enabled_state = randomizer::uber_states::state<"randoConfig", "fixKwolokBossEscapeUnderwaterSpiritLightSoftlock">();

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "kwolokBossWispIntro",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Enabled) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            const auto zone_checker_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "kwolokBoss",
                    "prefightCheckers",
                    "playerInsiderIntroZoneChecker",
                }
            );

            player_inside_zone_checker_ref = il2cpp::WeakGCRef(
                il2cpp::unity::get_component<app::PlayerInsideZoneChecker>(zone_checker_go, types::PlayerInsideZoneChecker::get_class())
            );

            effect = core::reactivity::watch_effect([] {
                if (!player_inside_zone_checker_ref.has_value()) {
                    effect = nullptr;
                    return;
                }

                const auto player_inside_zone_checker = **player_inside_zone_checker_ref;

                if (!player_inside_zone_checker.has_value()) {
                    effect = nullptr;
                    return;
                }

                if (fix_enabled_state.get()) {
                    (*player_inside_zone_checker)->fields._.Anchor.y = 0.208f;  // Fixed
                    (*player_inside_zone_checker)->fields._.Size.y = 0.5625f;  // Fixed
                } else {
                    (*player_inside_zone_checker)->fields._.Anchor.y = 0.f;  // Vanilla
                    (*player_inside_zone_checker)->fields._.Size.y = 1.f;  // Vanilla
                }

                ObjectInsideZoneChecker::UpdateBounds(reinterpret_cast<app::ObjectInsideZoneChecker*>(*player_inside_zone_checker));
            });
        }
    );
} // namespace
