#include <Core/api/scenes/scene_load.h>
#include <Core/property/reactivity.h>
#include <Core/uber_states/core_uber_states.h>
#include <Modloader/il2cpp_helpers.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace app::classes;

    auto& use_east_woods_trunk_slow_walk_zone_enabled_state = randomizer::uber_states::state<"randoConfig", "useEastWoodsTrunkSlowWalkZoneEnabledState">();
    auto& east_woods_trunk_slow_walk_zone_enabled_state = randomizer::uber_states::state<"randoState", "eastWoodsTrunkSlowWalkZoneEnabledState">();
    auto& original_state = core::uber_states::state<"_petrifiedForestGroup", "creebBulb">();

    std::optional<il2cpp::WeakGCRef<app::GameObject>> ability_restrict_go_ref = std::nullopt;
    core::reactivity::ReactiveEffect::ptr_t effect = nullptr;

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("petrifiedForestTandemWindChaseA", [](const auto& event) {
        if (event.state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

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
                const auto ability_restrict_go = ability_restrict_go_ref.and_then([](auto& ref) { return *ref; });

                if (!ability_restrict_go.has_value()) {
                    effect = nullptr;
                    return;
                }

                if (use_east_woods_trunk_slow_walk_zone_enabled_state.get()) {
                    il2cpp::unity::set_active(*ability_restrict_go, east_woods_trunk_slow_walk_zone_enabled_state.get());
                } else {
                    il2cpp::unity::set_active(*ability_restrict_go, !original_state.get());
                }
            })
            .trigger_on_load()
            .finalize();
    });
} // namespace
