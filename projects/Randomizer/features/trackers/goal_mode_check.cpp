#include <Randomizer/randomizer.h>
#include <Common/math_utils.h>
#include <Core/core.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/polygon.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/CameraScrollLock.h>
#include <Modloader/app/types/DamageDealer.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/CameraScrollLock.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/types/UI_Hints.h>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;

namespace {
    constexpr app::Vector3 SHRIEK_BARRIER_POSITION = app::Vector3{550.f, -3685.f, 0.f};
    constexpr app::Rect SHRIEK_BARRIER_HINT_RECT = app::Rect{582.f, -3620.f, 30.f, 30.f};

    std::optional<il2cpp::WeakGCRef<app::GameObject>> shriek_barrier_go;
    std::optional<il2cpp::WeakGCRef<app::GameObject>> shriek_barrier_killbox;
    std::optional<il2cpp::WeakGCRef<app::CameraScrollLock>> shriek_barrier_scroll_lock;
    std::shared_ptr<core::reactivity::ReactiveEffect> shriek_barrier_effect;
    bool shriek_barrier_active = false;
    bool was_showing_hint = false;
    float animation_position = 0.0f;
    common::registration_handle_t on_update_animation_handle;

    void update_animation_state() {
        const auto eased_animation_position = static_cast<float>(common::math::ease(animation_position, 0.225));

        if (shriek_barrier_go.has_value() && shriek_barrier_go->is_valid()) {
            const auto inverse_animation_position = 1.f - eased_animation_position;
            il2cpp::unity::set_active(**shriek_barrier_go, animation_position != 0.f);
            il2cpp::unity::set_position(**shriek_barrier_go, SHRIEK_BARRIER_POSITION + app::Vector3{ inverse_animation_position * 50.f, 0.f, 0.f });
        }
    }

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "willowCeremonyIntro") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto art_setups_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "artSetups" }
            );

            auto clouds_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "artSetups",
                    "deadlyClouds" }
            );

            auto door_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "interactives",
                    "entrances (1)",
                    "powlArenaExit"}
            );

            if (il2cpp::unity::is_valid(art_setups_go) && il2cpp::unity::is_valid(clouds_go) && il2cpp::unity::is_valid(door_go)) {
                // Move door to the left
                il2cpp::unity::set_local_position(door_go, app::Vector3 {-34.2f, -58.7, 0.f});

                shriek_barrier_go = il2cpp::WeakGCRef(
                    reinterpret_cast<app::GameObject*>(
                        UnityEngine::Object::Instantiate_4(
                            reinterpret_cast<app::Object_1 *>(clouds_go),
                            il2cpp::unity::get_transform(art_setups_go)
                        )
                    )
                );

                auto children = il2cpp::unity::get_children(**shriek_barrier_go);

                // Delete earlyZ mesh because it's one mesh but we're moving parts of it
                const auto early_z_it = children.begin() + 2;
                il2cpp::unity::destroy_object(*early_z_it);
                children.erase(early_z_it);

                // Bring everything back to a reasonable origin
                constexpr auto local_position_delta = app::Vector3{40.f, 3900.f, 0.f};
                for (const auto child_go: children) {
                    il2cpp::unity::set_local_position(child_go, il2cpp::unity::get_local_position(child_go) + local_position_delta);
                }

                il2cpp::unity::set_position(**shriek_barrier_go, SHRIEK_BARRIER_POSITION);
                il2cpp::unity::set_local_scale(**shriek_barrier_go, app::Vector3{-1.f, 1.f, 1.f});
                il2cpp::unity::set_local_rotation(**shriek_barrier_go, app::Vector3{0.f, 0.f, 30.f});

                // Add scroll lock because fancy
                const auto scroll_lock_go = il2cpp::create_object<app::GameObject>(types::GameObject::get_class());
                UnityEngine::GameObject::ctor_1(scroll_lock_go, il2cpp::string_new("scrollLock"));
                shriek_barrier_scroll_lock = il2cpp::WeakGCRef(il2cpp::unity::add_component<app::CameraScrollLock>(scroll_lock_go, types::CameraScrollLock::get_class()));
                CameraScrollLock::ctor(**shriek_barrier_scroll_lock);
                (**shriek_barrier_scroll_lock)->fields.m_scrollType = app::CameraScrollLock_Type__Enum::Horizontal;
                (**shriek_barrier_scroll_lock)->fields.LockMode = app::CameraScrollLock_ScrollLockMode__Enum::RightOrTop;
                (**shriek_barrier_scroll_lock)->fields.UseFader = false;
                il2cpp::unity::set_position(scroll_lock_go, app::Vector3{ 597.f, -3607.f, 0.f });
                il2cpp::unity::set_local_scale(scroll_lock_go, app::Vector3{ 30.f, 30.f, 1.f });
                il2cpp::unity::set_parent(scroll_lock_go, scene_root_go);

                // Add Killbox
                core::api::scenes::PolygonGeometry collider({
                    {594.316895, -3607.93726},
                    {596.035461, -3599.82617},
                    {597.032776, -3592.63403},
                    {597.070556, -3586.55005},
                    {595.090576, -3584.677},
                    {605.953796, -3585.36548},
                    {606.123657, -3613.2771},
                });

                il2cpp::unity::set_parent(collider.get_game_object(), **shriek_barrier_go);
                const auto damage_dealer = il2cpp::unity::add_component<app::DamageDealer>(collider.get_game_object(), types::DamageDealer::get_class());
                damage_dealer->fields.m_damageAmount = 1000.f;
                damage_dealer->fields.DamageType = app::DamageType__Enum::Laser;
                damage_dealer->fields.m_isKillSurface = true;

                shriek_barrier_killbox = il2cpp::WeakGCRef(collider.get_game_object());
                il2cpp::unity::set_parent(collider.get_game_object(), **shriek_barrier_go);

                // Reactive effect
                shriek_barrier_effect = core::reactivity::watch_effect([] {
                    shriek_barrier_active = core::api::uber_states::UberState(UberStateGroup::RandoState, 0).get<bool>();

                    if (shriek_barrier_killbox.has_value() && shriek_barrier_killbox->is_valid()) {
                        il2cpp::unity::set_active(**shriek_barrier_killbox, shriek_barrier_active);
                    }

                    if (shriek_barrier_scroll_lock.has_value() && shriek_barrier_scroll_lock->is_valid()) {
                        il2cpp::unity::set_active(**shriek_barrier_scroll_lock, shriek_barrier_active);
                    }
                });

                // Animation & Hint message box
                animation_position = shriek_barrier_active ? 1.f : 0.f;
                update_animation_state();

                on_update_animation_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
                    if (shriek_barrier_go.has_value() && shriek_barrier_go->is_valid()) {
                        if (animation_position != (shriek_barrier_active ? 1.f : 0.f)) {
                            animation_position = shriek_barrier_active
                                ? std::min(1.f, animation_position + TimeUtility::get_fixedDeltaTime())
                                : std::max(0.f, animation_position - TimeUtility::get_fixedDeltaTime());

                            update_animation_state();
                        }
                    } else {
                        shriek_barrier_go = std::nullopt;
                        shriek_barrier_killbox = std::nullopt;
                        on_update_animation_handle = nullptr;
                    }

                    auto is_in_hint_rect = modloader::math::in_rect(core::api::game::player::get_position(), SHRIEK_BARRIER_HINT_RECT);
                    auto should_show_hint = shriek_barrier_active && is_in_hint_rect;

                    if (should_show_hint && !was_showing_hint) {
                        std::shared_ptr<core::text::ITextProcessor> processor = randomizer::general_text_processor();
                        std::string hint_text("[goal_mode_progress()] [relic_progress()]");
                        processor->process(hint_text);
                        trim(hint_text);

                        Game::UI_Hints::Show(
                            core::api::system::create_message_provider(hint_text),
                            app::HintLayer__Enum::Gameplay,
                            99999999.f,
                            app::Vector3{0.f, 0.f, 0.f}
                        );
                    } else if (!should_show_hint && was_showing_hint) {
                        Game::UI_Hints::HideExistingHint();
                    }

                    was_showing_hint = should_show_hint;
                });
            }
        }
    }

    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
} // namespace
