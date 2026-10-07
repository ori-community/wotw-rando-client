#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/cutscene_skips/custom_cutscene_skips.h>


using namespace utils;
using namespace app::classes;

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
    float blocked_for = 0.f;

    bool skip_available() {
        return blocked_for <= 0.f &&
            core::api::scenes::scene_is_loaded("waterMillCBossRoom") &&
            wellspring_escape_start_timeline.is_valid() &&
            wellspring_escape_effect_timeline.is_valid() &&
            kill_hitbox_transform.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(wellspring_escape_start_timeline.ptr)) &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(wellspring_escape_effect_timeline.ptr));
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        // Move kill hitbox out of the way
        UnityEngine::Transform::set_position(kill_hitbox_transform.ptr, app::Vector3{ 0.f, 0.f, 0.f });
        next_frame_action = ModifyTimelines;
        blocked_for = 1.f;
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "waterMillCBossRoom",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

            auto start_timeline_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "interactives",
                    "escapeSetup",
                    "timelines",
                    "opherAttacksStinkSpiritTimeline" }
            );

            if (il2cpp::unity::is_valid(start_timeline_go)) {
                wellspring_escape_start_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(start_timeline_go, types::MoonTimeline::get_class()));
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
                wellspring_escape_effect_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(effect_timeline_go, types::MoonTimeline::get_class()));
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
    );

    [[maybe_unused]]
    auto on_fixed_update_handle = core::api::game::event_bus().on<core::api::game::events::FixedUpdate>([](auto) {
        if (blocked_for > 0.f) {
            blocked_for -= TimeUtility::get_fixedDeltaTime();
        }

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
                core::api::game::player::set_position(-1257.495f, -3640.575f);
                next_frame_action = MoveHitboxBack;
                break;
            case MoveHitboxBack:
                UnityEngine::Transform::set_position(kill_hitbox_transform.ptr, kill_hitbox_original_position);
                next_frame_action = Idle;
                break;
        }
    });

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    });
} // namespace
