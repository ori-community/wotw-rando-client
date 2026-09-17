#include <Modloader/il2cpp_helpers.h>

#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include "Modloader/app/methods/SeinAbilityRestrictZone.h"

namespace {
    using namespace app::classes;

    std::optional<il2cpp::WeakGCRef<app::GameObject>> restriction_emerge_trigger_ref;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> restriction_kwolok_setup_ref;
    core::reactivity::ReactiveEffect::ptr_t effect;

    core::api::uber_states::UberState fix_enabled(UberStateGroup::RandoConfig, 40);

    [[maybe_unused]]
    auto on_scene_loaded_handler = core::api::scenes::single_event_bus().register_handler("kwoloksCavernThroneRoom", [](auto metadata, auto) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

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

            if (fix_enabled.get<bool>()) {
                il2cpp::unity::set_local_position(*restriction_emerge_trigger_go, {-2.9, 20.0, 0});
                il2cpp::unity::set_local_position(*restriction_kwolok_setup_go, {14, 13.5, 11.5});
            } else {
                il2cpp::unity::set_local_position(*restriction_emerge_trigger_go, {-2.9, 8.9, 0});
                il2cpp::unity::set_local_position(*restriction_kwolok_setup_go, {15.3, -7.0, 11.5});
            }
        });
    });
} // namespace
