#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/app/types/ChangeStateOnCondition.h>
#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/modloader.h>

using namespace utils;
using namespace app::classes;

namespace {
    std::vector<il2cpp::WeakGCRef<app::MoonTimeline>> vine_timelines;
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> vine_h_original_timeline_ref;
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> vine_h_rando_timeline_ref;
    std::optional<il2cpp::WeakGCRef<app::ChangeStateOnCondition>> vine_h_change_state_on_condition_ref;
    core::reactivity::ReactiveEffect::ptr_t effect;

    core::api::uber_states::UberState disable_cutscenes_state(UberStateGroup::RandoConfig, 20);

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state != app::SceneState__Enum::Enabled) {
            return;
        }

        if (metadata->scene_name == "willowsEndSetups") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            vine_timelines.clear();

            std::vector<std::vector<std::string>> timeline_paths {
                {"vineSetups", "vineASetup", "vineAFadeoutTimeline"},
                {"vineSetups", "vineBSetup", "vineBFadeoutTimeline"},
                {"vineSetups", "vineCSetup", "vineCFadeoutTimeline"},
                {"vineSetups", "vineDSetup", "coreDFadeoutTimeline"},
                {"vineSetups", "vineESetup", "coreETimeline"},
                {"vineSetups", "vineFSetup", "vineFFadeoutTimeline"},
                {"vineSetups", "vineGSetup", "vineGFadeoutTimeline"},
                // vineH is handled separately!
            };

            for (const auto& timeline_path: timeline_paths) {
                const auto core_go = il2cpp::unity::find_child(scene_root_go, timeline_path);

                if (il2cpp::unity::is_valid(core_go)) {
                    vine_timelines.emplace_back(il2cpp::unity::get_component<app::MoonTimeline>(core_go, types::MoonTimeline::get_class()));
                }
            }

            // Fix heart G (bottom right) timeline
            const auto core_g_death_timeline_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string> {
                    "vineSetups",
                    "cores",
                    "coreG",
                    "weepingRidgeInfectionCore",
                    "timelines",
                    "DeathTimeline",
                }
            );

            if (il2cpp::unity::is_valid(core_g_death_timeline_go)) {
                // Clamp all timeline entities to 0.5s so the timeline ends sooner and
                // the floor gets removed faster
                const auto timeline = il2cpp::unity::get_component<app::MoonTimeline>(core_g_death_timeline_go, types::MoonTimeline::get_class());
                for (auto& record: il2cpp::ListIterator(timeline->fields.m_entityRecords)) {
                    record->fields.EndConstraint->fields.m_timeOffset = std::min(0.5f, record->fields.EndConstraint->fields.m_timeOffset);
                }
            }

            // Add no_cutscene timeline for heart H (bottom left) to prevent the boulder
            // from teleporting
            vine_h_change_state_on_condition_ref = il2cpp::WeakGCRef(
                il2cpp::unity::get_component<app::ChangeStateOnCondition>(
                    il2cpp::unity::find_child(
                        scene_root_go,
                        std::vector<std::string> {
                            "vineSetups",
                            "cores",
                            "coreH",
                            "weepingRidgeInfectionCore"
                        }
                    ),
                    types::ChangeStateOnCondition::get_class()
                )
            );

            const auto vine_h_setup_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string> {
                    "vineSetups",
                    "vineHSetup",
                }
            );
            const auto vine_h_timeline_go = il2cpp::unity::find_child(vine_h_setup_go, "vineHFadeoutTimeline");
            const auto vine_h_no_cutscene_timeline_go = il2cpp::unity::instantiate_object(vine_h_timeline_go);
            UnityEngine::Object::set_name(reinterpret_cast<app::Object_1*>(vine_h_no_cutscene_timeline_go), il2cpp::string_new("vineHNoCutsceneTimeline(Rando)"));

            const auto vine_h_rando_timeline = il2cpp::unity::get_component<app::MoonTimeline>(vine_h_no_cutscene_timeline_go, types::MoonTimeline::get_class());

            vine_h_rando_timeline_ref = il2cpp::WeakGCRef(vine_h_rando_timeline);
            vine_h_original_timeline_ref = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MoonTimeline>(vine_h_timeline_go, types::MoonTimeline::get_class()));

            // Clean up our copied timeline
            for (auto child_index: {21, 14, 13, 5, 4, 3, 2, 1, 0}) {
                il2cpp::unity::destroy_object(il2cpp::unity::get_child(vine_h_no_cutscene_timeline_go, child_index));
                il2cpp::invoke(vine_h_rando_timeline->fields.m_entityRecords, "RemoveAt", &child_index);
            }

            il2cpp::unity::set_parent(vine_h_no_cutscene_timeline_go, vine_h_setup_go);

            // Setup the reactive effect
            effect = core::reactivity::watch_effect([] {
                const auto disable_cutscenes = disable_cutscenes_state.get<bool>();

                auto vines_it = vine_timelines.begin();
                while (vines_it != vine_timelines.end()) {
                    if (!vines_it->is_valid()) {
                        vines_it = vine_timelines.erase(vines_it);
                        continue;
                    }

                    (**vines_it)->fields._._PlayState_k__BackingField = disable_cutscenes
                        ? app::AnimatorPlayState__Enum::None
                        : app::AnimatorPlayState__Enum::Stopped;
                    ++vines_it;
                }

                if (vine_h_change_state_on_condition_ref.has_value() && vine_h_change_state_on_condition_ref->is_valid()) {
                    (**vine_h_change_state_on_condition_ref)->fields.StateChange->fields._._.StateData->fields._items->vector[0]->fields.m_transition->fields.m_volatileValue = disable_cutscenes
                        ? **vine_h_rando_timeline_ref
                        : **vine_h_original_timeline_ref;
                }

                if (vine_timelines.empty()) {
                    effect = nullptr;
                }
            });
        }
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
} // namespace
