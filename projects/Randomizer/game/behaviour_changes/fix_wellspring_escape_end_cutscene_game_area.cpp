#include <optional>

#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/QuestsController.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/modloader.h>

#include "Core/api/game/player.h"

using namespace app::classes;

namespace {
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> end_timeline;
    std::unique_ptr<core::api::game::player::CurrentAreaOverrideHandle> current_area_override = nullptr;

    std::optional<GameArea> current_area_override_fn() {
        if (!end_timeline.has_value() || !end_timeline->is_valid()) {
            return std::nullopt;
        }

        return Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(**end_timeline))
            ? std::make_optional(GameArea::Wellspring)
            : std::nullopt;
    }

    void on_watermill_escape_end_load(const core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
        if (metadata->state == app::SceneState__Enum::Disabled) {
            current_area_override = nullptr;
        }

        if (metadata->state != app::SceneState__Enum::Enabled) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        const auto end_timeline_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "setups",
                "escapeSequenceFinishSetup",
                "master",
            }
        );

        if (il2cpp::unity::is_valid(end_timeline_go)) {
            end_timeline = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MoonTimeline>(end_timeline_go, types::MoonTimeline::get_class()));
            current_area_override = core::api::game::player::add_current_area_override(current_area_override_fn);
        }
    }

    [[maybe_unused]]
    auto on_watermill_escape_end_load_handle = core::api::scenes::single_event_bus().register_handler("waterMillEscapeEnd", on_watermill_escape_end_load);
} // namespace
