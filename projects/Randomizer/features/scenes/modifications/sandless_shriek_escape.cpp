#include <Modloader/il2cpp_helpers.h>

#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/ObjectInsideZoneChecker.h>
#include <Modloader/app/types/PlayerInsideZoneChecker.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::PlayerInsideZoneChecker>> trigger_player_inside_zone_checker;
    std::vector<il2cpp::WeakGCRef<app::GameObject>> objects_to_disable;

    core::reactivity::ReactiveEffect::ptr_t effect;

    core::api::uber_states::UberState modification_enabled_state(UberStateGroup::RandoConfig, 100);

    void setup_effect() {
        effect = core::reactivity::watch_effect([] {
            auto any_affected_reference_valid = false;
            const auto modification_enabled = modification_enabled_state.get<bool>();

            if (trigger_player_inside_zone_checker.has_value() && trigger_player_inside_zone_checker->is_valid()) {
                any_affected_reference_valid = true;

                (**trigger_player_inside_zone_checker)->fields._.Size.y = modification_enabled
                    ? 95.4f  // Modified
                    : 27.7000008f;  // Vanilla

                ObjectInsideZoneChecker::UpdateBounds(reinterpret_cast<app::ObjectInsideZoneChecker*>(**trigger_player_inside_zone_checker));
            }

            auto it = objects_to_disable.begin();
            while (it != objects_to_disable.end()) {
                if (it->is_valid()) {
                    any_affected_reference_valid = true;
                    il2cpp::unity::set_active(**it, !modification_enabled);

                    ++it;
                } else {
                    it = objects_to_disable.erase(it);  // Delete invalid references
                }
            }

            if (!any_affected_reference_valid) {
                effect = nullptr;
            }
        });
    }

    auto on_scene_loaded_handler = core::api::scenes::event_bus().register_handler(
        [](auto metadata) {
            if (metadata->state != app::SceneState__Enum::Enabled) {
                return;
            }

            if (metadata->scene_name == "willowPOwlChaseB") {
                const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                const auto tree_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{
                    "setups",
                    "digTrunkSetup",
                    "activationGroup",
                    "tree",
                });

                objects_to_disable.clear();

                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"earlyZMesh_tree"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"fill (4)"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"killSurface (1)"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"sand"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "backSpikesRow"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundBridgeA"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundBranchGoThroughB"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundCornerConvexA"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundDetailB"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundDetailC"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundProtrusionB"}));
                for (const auto& go: il2cpp::unity::find_children(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundStraightB"})) {
                    objects_to_disable.emplace_back(go);
                }
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "spiritTreeGroundDcs", "weepingRidgeGroundStraightD"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(tree_go, std::vector<std::string> {"treeArt", "weepingRidgeHazardCrystalCs"}));

                setup_effect();

            } else if (metadata->scene_name == "willowPowlBackground") {
                const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                const auto zone_checker_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                        "petrifiedOwlBossSetup",
                        "arenaObjects",
                        "escape1",
                        "timelineTriggers",
                        "trigger8",
                    }
                );

                trigger_player_inside_zone_checker = il2cpp::WeakGCRef(
                    il2cpp::unity::get_component<app::PlayerInsideZoneChecker>(zone_checker_go, types::PlayerInsideZoneChecker::get_class())
                );

                setup_effect();
            }
        }
    );
} // namespace
