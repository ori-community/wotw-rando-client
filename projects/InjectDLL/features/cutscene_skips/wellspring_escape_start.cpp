#include <Il2CppModLoader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Il2CppModLoader/app/methods/UnityEngine/Transform.h>
#include <Il2CppModLoader/common.h>
#include <event_bus.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <game/player.h>
#include <utils/misc.h>

using namespace utils;
using namespace app::methods;

namespace {
    enum DeferredSkipAction {
        Idle,
        ModifyTimelines,
        TeleportOri,
        MoveHitboxBack,
    };

    ObjectReference<app::MoonTimeline> wellspring_escape_start_timeline;
    ObjectReference<app::MoonTimeline> wellspring_escape_effect_timeline; // Used to determine whether the cutscene is runnung since the start timeline loops
    ObjectReference<app::Transform> kill_hitbox_transform;
    app::Vector3 kill_hitbox_original_position{};

    DeferredSkipAction next_frame_action = Idle;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "waterMillCBossRoom") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto start_timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "interactives",
                            "escapeSetup",
                            "timelines",
                            "opherAttacksStinkSpiritTimeline" }
            );

            if (il2cpp::unity::is_valid(start_timeline_go)) {
                wellspring_escape_start_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(start_timeline_go, "Moon.Timeline", "MoonTimeline"));
            }

            auto effect_timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "interactives",
                            "escapeSetup",
                            "timelines",
                            "opherAttacksStinkSpiritTimeline",
                            "effectTimeline" }
            );

            if (il2cpp::unity::is_valid(effect_timeline_go)) {
                wellspring_escape_effect_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(effect_timeline_go, "Moon.Timeline", "MoonTimeline"));
            }

            kill_hitbox_transform.set_reference(
                    il2cpp::unity::get_transform(
                            il2cpp::unity::find_child(
                                    scene_root_go,
                                    std::vector<std::string>{
                                            "interactives",
                                            "escapeSetup",
                                            "killPlayer" }
                            )
                    )
            );

            kill_hitbox_original_position = UnityEngine::Transform::get_position(kill_hitbox_transform.ptr);
        }
    }

    bool skip_available() {
        return wellspring_escape_start_timeline.is_valid() &&
                wellspring_escape_effect_timeline.is_valid() &&
                kill_hitbox_transform.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(wellspring_escape_start_timeline.ptr)) &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(wellspring_escape_effect_timeline.ptr));
    }

    void skip_invoke() {
        // Move kill hitbox out of the way
        UnityEngine::Transform::set_position(kill_hitbox_transform.ptr, app::Vector3{ 0.f, 0.f, 0.f });
        next_frame_action = ModifyTimelines;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case ModifyTimelines:
                // Stinky boy go nyoom
                Moon::Timeline::TimelineEntity::SetTimeScale(reinterpret_cast<app::TimelineEntity*>(wellspring_escape_start_timeline.ptr), FLT_MAX);
                Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(wellspring_escape_effect_timeline.ptr));
                next_frame_action = TeleportOri;
                break;
            case TeleportOri:
                game::player::set_position(-1257.495f, -3640.575f);
                next_frame_action = MoveHitboxBack;
                break;
            case MoveHitboxBack:
                UnityEngine::Transform::set_position(kill_hitbox_transform.ptr, kill_hitbox_original_position);
                next_frame_action = Idle;
                break;
        }
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::End, &on_fixed_update);

        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    }

    CALL_ON_INIT(initialize);
} // namespace
