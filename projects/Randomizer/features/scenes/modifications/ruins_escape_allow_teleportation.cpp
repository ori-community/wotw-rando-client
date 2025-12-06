#include <Core/api/game/game.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/graphics/textures.h>
#include <Modloader/il2cpp_helpers.h>

#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/CageStructureTool.h>
#include <Modloader/app/methods/TeleportRestrictZone.h>
#include <Modloader/app/types/TeleportRestrictZone.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::TeleportRestrictZone>> teleport_restrict_zone;
    core::reactivity::ReactiveEffect::ptr_t effect;

    core::api::uber_states::UberState fix_enabled_state(UberStateGroup::RandoConfig, 21);

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::single_event_bus().register_handler(
        "desertRuinsBGChase",
        [](const core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
            if (metadata->state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            const auto teleport_restrict_zone_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "wormSetup",
                    "teleportRestrictZone",
                }
            );

            teleport_restrict_zone = il2cpp::WeakGCRef(
                il2cpp::unity::get_component<app::TeleportRestrictZone>(teleport_restrict_zone_go, types::TeleportRestrictZone::get_class())
            );

            effect = core::reactivity::watch_effect([] {
                if (teleport_restrict_zone.has_value() && teleport_restrict_zone->is_valid()) {
                    auto cage_structure_tool = (**teleport_restrict_zone)->fields.CageStructureTool;

                    if (fix_enabled_state.get<bool>()) {
                        cage_structure_tool->fields.Vertices->fields._items->vector[0]->fields.Position = app::Vector3{-94.740479f, -140.710449f, 0.f};
                        cage_structure_tool->fields.Vertices->fields._items->vector[1]->fields.Position = app::Vector3{-94.369141f, -56.7434082f, 0.f};
                    } else {
                        // Vanilla values
                        cage_structure_tool->fields.Vertices->fields._items->vector[0]->fields.Position = app::Vector3{-134.740479f, -140.710449f, 0.f};
                        cage_structure_tool->fields.Vertices->fields._items->vector[1]->fields.Position = app::Vector3{-134.369141f, -56.7434082f, 0.f};
                    }

                    CageStructureTool::MarkDirty(cage_structure_tool);
                } else {
                    effect = nullptr;
                }
            });
        }
    );
} // namespace
