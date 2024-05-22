#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/MoonTimeline.h>
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
    std::shared_ptr<core::reactivity::ReactiveEffect> effect;

    core::api::uber_states::UberState disable_cutscenes_state(UberStateGroup::RandoConfig, 20);

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
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
                {"vineSetups", "vineHSetup", "vineHFadeoutTimeline"},
            };

            for (const auto& timeline_path: timeline_paths) {
                const auto core_go = il2cpp::unity::find_child(scene_root_go, timeline_path);

                if (il2cpp::unity::is_valid(core_go)) {
                    vine_timelines.emplace_back(il2cpp::unity::get_component<app::MoonTimeline>(core_go, types::MoonTimeline::get_class()));
                }
            }

            // Fix coreG timeline
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

            effect = core::reactivity::watch_effect([] {
                auto vines_it = vine_timelines.begin();
                while (vines_it != vine_timelines.end()) {
                    if (!vines_it->is_valid()) {
                        vines_it = vine_timelines.erase(vines_it);
                        continue;
                    }

                    (**vines_it)->fields._._PlayState_k__BackingField = disable_cutscenes_state.get<bool>()
                        ? app::AnimatorPlayState__Enum::None
                        : app::AnimatorPlayState__Enum::Stopped;
                    ++vines_it;
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
