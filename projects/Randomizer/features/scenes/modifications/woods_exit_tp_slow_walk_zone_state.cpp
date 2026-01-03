#include <Core/api/scenes/scene_load.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/NewSetupStateController.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

namespace {
    using namespace app::classes;

    core::api::uber_states::UberState use_east_woods_trunk_slow_walk_zone_enabled_state(UberStateGroup::RandoConfig, 36);
    core::api::uber_states::UberState east_woods_trunk_slow_walk_zone_enabled_state(UberStateGroup::RandoState, 36);
    core::api::uber_states::UberState original_state(58674, 48394);  // Original state the slow walk zone depends on (true = slow zone inactive)

    std::optional<il2cpp::WeakGCRef<app::GameObject>> ability_restrict_go_ref = std::nullopt;
    core::reactivity::ReactiveEffect::ptr_t effect = nullptr;

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::single_event_bus().register_handler("petrifiedForestTandemWindChaseA", [](auto metadata, auto) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        const auto original_ability_restrict_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "setups",
                "trunkFloorFallSetup",
                "restrictZones",
                "abilityRestrict",
            }
        );

        // Create a clone and destroy the original because at this point it is already
        // queued up for enablement in time slice coroutines.
        const auto ability_restrict_go = il2cpp::unity::instantiate_object(original_ability_restrict_go);
        il2cpp::unity::set_parent(ability_restrict_go, il2cpp::unity::get_parent(original_ability_restrict_go), true);
        il2cpp::unity::destroy_object(original_ability_restrict_go);
        ability_restrict_go_ref = il2cpp::WeakGCRef(ability_restrict_go);

        effect = core::reactivity::watch_effect()
            .effect([] {
                if (!ability_restrict_go_ref.has_value() || !ability_restrict_go_ref->is_valid()) {
                    effect = nullptr;
                    return;
                }

                if (use_east_woods_trunk_slow_walk_zone_enabled_state.get<bool>()) {
                    il2cpp::unity::set_active(**ability_restrict_go_ref, east_woods_trunk_slow_walk_zone_enabled_state.get<bool>());
                } else {
                    il2cpp::unity::set_active(**ability_restrict_go_ref, !original_state.get<bool>());
                }
            })
            .trigger_on_load()
            .finalize();
    });
} // namespace
