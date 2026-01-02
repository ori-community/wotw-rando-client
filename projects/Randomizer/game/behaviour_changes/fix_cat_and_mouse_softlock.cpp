#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace {
    core::api::uber_states::UberState feeding_grounds_state(58674, 61616);
    core::api::uber_states::UberState cat_and_mouse_softlock_fix_enabled_state(UberStateGroup::RandoConfig, 23);

    std::optional<il2cpp::WeakGCRef<app::GameObject>> weeping_ridge_stone_go_ref;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> woods_stone_go_ref;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> below_teleporter_stone_go_ref;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> crackling_sticks_trigger_go_ref;

    core::reactivity::ReactiveEffect::ptr_t effect = nullptr;

    void set_rocks_visible(const bool visible) {
        if (
            !weeping_ridge_stone_go_ref.has_value() ||
            !weeping_ridge_stone_go_ref->is_valid() ||
            !woods_stone_go_ref.has_value() ||
            !woods_stone_go_ref->is_valid() ||
            !below_teleporter_stone_go_ref.has_value() ||
            !below_teleporter_stone_go_ref->is_valid()
        ) {
            return;
        }

        il2cpp::unity::set_active(**weeping_ridge_stone_go_ref, visible);
        il2cpp::unity::set_active(**woods_stone_go_ref, visible);
        il2cpp::unity::set_active(**below_teleporter_stone_go_ref, visible);
    }

    void set_crackling_sticks_trigger_active(const bool active) {
        if (!crackling_sticks_trigger_go_ref.has_value() || !crackling_sticks_trigger_go_ref->is_valid()) {
            return;
        }

        il2cpp::unity::set_active(**crackling_sticks_trigger_go_ref, active);
    }

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
        if (metadata->state == app::SceneState__Enum::Unloading) {
            effect = nullptr;
        }

        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        const auto checkpoint_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "invisibleCheckpoints",
                "invisibleCheckpoint (3)",
            }
        );

        const auto stone_1_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "setups",
                "petrifiedOwlFeedingGroundsSetup",
                "escapeRocksSetup",
                "rockGLightPaint",
            }
        );

        const auto stone_2_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "setups",
                "petrifiedOwlFeedingGroundsSetup",
                "escapeRocksSetup",
                "rockfallBLightPainting",
            }
        );

        const auto crackling_sticks_trigger_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "setups",
                "petrifiedOwlFeedingGroundsSetup",
                "timelines",
                "intro",
                "waitForTrigger",
            }
        );

        if (il2cpp::unity::is_valid(checkpoint_go)) {
            il2cpp::unity::destroy_object(checkpoint_go);
        }

        if (il2cpp::unity::is_valid(crackling_sticks_trigger_go)) {
            crackling_sticks_trigger_go_ref = il2cpp::WeakGCRef(crackling_sticks_trigger_go);
        }

        if (il2cpp::unity::is_valid(stone_1_go) && il2cpp::unity::is_valid(stone_2_go)) {
            const auto weeping_ridge_stone_go = il2cpp::unity::instantiate_object(stone_2_go);
            il2cpp::unity::set_parent(weeping_ridge_stone_go, scene_root_go);
            il2cpp::unity::set_local_scale(weeping_ridge_stone_go, app::Vector3{1.2f, 1.2f, 1.0f});
            il2cpp::unity::set_rotation(il2cpp::unity::get_child(weeping_ridge_stone_go, 0), app::Vector3(0, 0, 10.f));
            il2cpp::unity::set_position(weeping_ridge_stone_go, app::Vector3{1353.2f, -4051.f, 0.0f});
            weeping_ridge_stone_go_ref = il2cpp::WeakGCRef(weeping_ridge_stone_go);

            const auto woods_stone_go = il2cpp::unity::instantiate_object(stone_2_go);
            il2cpp::unity::set_parent(woods_stone_go, scene_root_go);
            il2cpp::unity::set_rotation(il2cpp::unity::get_child(woods_stone_go, 0), app::Vector3(0, 0, 30.f));
            il2cpp::unity::set_position(woods_stone_go, app::Vector3{1312.9f, -4083.2f, 0.0});
            woods_stone_go_ref = il2cpp::WeakGCRef(woods_stone_go);

            const auto below_teleporter_stone_go = il2cpp::unity::instantiate_object(stone_1_go);
            il2cpp::unity::set_parent(below_teleporter_stone_go, scene_root_go);
            il2cpp::unity::set_rotation(il2cpp::unity::get_child(below_teleporter_stone_go, 0), app::Vector3(0, 0, 210.f));
            il2cpp::unity::set_position(below_teleporter_stone_go, app::Vector3{1423.f - 22.7f, -4021.f  - 66.7f, 0});
            below_teleporter_stone_go_ref = il2cpp::WeakGCRef(below_teleporter_stone_go);
        }

        effect = core::reactivity::watch_effect([] {
            if (!cat_and_mouse_softlock_fix_enabled_state.get<bool>()) {
                set_rocks_visible(false);
                return;
            }

            const auto current_feeding_grounds_state = feeding_grounds_state.get<int>();
            set_crackling_sticks_trigger_active(current_feeding_grounds_state < 3);
            set_rocks_visible(current_feeding_grounds_state == 3);
        });
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::single_event_bus().register_handler("petrifiedOwlFeedingGroundsRevised", &on_scene_load);

    [[maybe_unused]]
    auto on_feeding_grounds_state_changed = core::api::uber_states::single_notification_bus().register_handler(
        feeding_grounds_state,
        [](auto params, auto) {
            const auto current_feeding_grounds_state = static_cast<int>(params.value);
            set_rocks_visible(current_feeding_grounds_state == 3);
            set_crackling_sticks_trigger_active(current_feeding_grounds_state < 3);
        }
    );

    auto on_checkpoint = core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::After, [](auto, auto) {
        const auto current_feeding_grounds_state = feeding_grounds_state.get<int>();
        set_rocks_visible(current_feeding_grounds_state == 3);
        set_crackling_sticks_trigger_active(current_feeding_grounds_state < 3);
    });
} // namespace
