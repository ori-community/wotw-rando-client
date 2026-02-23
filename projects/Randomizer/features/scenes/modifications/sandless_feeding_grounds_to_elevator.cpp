#include <Modloader/il2cpp_helpers.h>

#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/ObjectInsideZoneChecker.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    std::vector<il2cpp::WeakGCRef<app::GameObject>> objects_to_disable;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> early_z_mesh_ref;

    core::reactivity::ReactiveEffect::ptr_t effect;

    core::api::uber_states::UberState modification_enabled_state(UberStateGroup::RandoConfig, 101);

    auto on_scene_loaded_handler = core::api::scenes::event_bus().register_handler(
        [](auto metadata) {
            if (metadata->state != app::SceneState__Enum::Enabled) {
                return;
            }

            if (metadata->scene_name == "petrifiedOwlFeedingGroundsRevised") {
                const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                objects_to_disable.clear();

                objects_to_disable.emplace_back(il2cpp::unity::find_child(scene_root_go, std::vector<std::string> {"artSetups", "desertSandZoneTileA"}));
                objects_to_disable.emplace_back(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "sandZones", "sandZoneBaseB", "outB (1)", "desertSandZoneOutlineCs (1)"}));
                early_z_mesh_ref = il2cpp::WeakGCRef(
                    il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"earlyZParent", "earlyZMesh-regular-cell[68,26,0]-0"})
                );

                effect = core::reactivity::watch_effect([] {
                    const auto modification_enabled = modification_enabled_state.get<bool>();

                    auto it = objects_to_disable.begin();
                    while (it != objects_to_disable.end()) {
                        const auto object = **it;

                        if (object.has_value()) {
                            il2cpp::unity::set_active(*object, !modification_enabled);

                            ++it;
                        } else {
                            it = objects_to_disable.erase(it);  // Delete invalid references
                        }
                    }

                    auto updated_early_z_mesh = false;
                    if (early_z_mesh_ref.has_value()) {
                        const auto early_z_mesh = **early_z_mesh_ref;

                        if (early_z_mesh.has_value()) {
                            updated_early_z_mesh = true;
                            il2cpp::unity::set_local_scale(
                                *early_z_mesh,
                                modification_enabled
                                    ? app::Vector3{0, 0, 0}
                                    : app::Vector3{1, 1, 1}
                            );
                        }
                    }

                    if (objects_to_disable.empty() && !updated_early_z_mesh) {
                        effect = nullptr;
                    }
                });
            }
        }
    );
} // namespace
