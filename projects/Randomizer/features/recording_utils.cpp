#include <Common/ext.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/CameraOffsetController.h>
#include <Modloader/app/methods/CameraPostProcessing.h>
#include <Modloader/app/methods/CameraTarget.h>
#include <Modloader/app/methods/FaderB.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/Moon/Rendering/ShaderTime.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/UberPostProcess.h>
#include <Modloader/app/methods/UnityEngine/Camera.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Rigidbody.h>
#include <Modloader/app/methods/UnityEngine/ScreenCapture.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/types/CapsuleCollider.h>
#include <Modloader/app/types/Rigidbody.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

using namespace app::classes;
using namespace modloader::win;

namespace {
    enum class OrishotState {
        None,
        PositionOriAndUnload,
        LoadScenes,
        RunScenes,
        Wait,
        PrepareScreenshot,
        Screenshot,
    };

    app::Color default_background_color;
    bool enable_vignette = true;
    bool camera_locked = false;
    bool camera_ortho = false;

    constexpr float TAU = 6.283185307179586f;

    // Orishots
    constexpr float DELTA_X = 16.f;
    constexpr float DELTA_Y = 9.f;
    constexpr float START_X = -528.f;
    constexpr float START_Y = -4083.f;
    constexpr float END_X = 146.f;
    constexpr float END_Y = -3824.f;
    constexpr float LOAD_RADIUS_STEP_SIZE = 5.f;
    constexpr int LOAD_STEPS = 1;
    constexpr float LOAD_STEP_TIMEOUT = 0.5f;
    constexpr float LOAD_STEP_TIMEOUT_MULTIPLIER = 2.f;
    constexpr float SCENE_RUN_TIME = 2.f;
    constexpr float WAIT_TIME = 0.1f;

    float current_x = 0.f;
    float current_y = 0.f;
    float camera_target_x = 0.f;
    float camera_target_y = 0.f;
    int row = 0;
    int column = 0;
    float run_scenes_timeout = 0.f;
    float wait_timeout = 0.f;
    float load_step_timeout = 0.f;
    int load_step = 0;
    OrishotState orishot_state = OrishotState::None;

    core::api::uber_states::UberState prevent_pickup_state(UberStateGroup::RandoConfig, 8);

    IL2CPP_INTERCEPT(UberPostProcess, void, ApplySettings_2, (app::UberPostProcess * this_ptr, app::CameraSettings* settingsAsset)) {
        next::UberPostProcess::ApplySettings_2(this_ptr, settingsAsset);

        if (!enable_vignette) {
            this_ptr->fields.Vignetting->fields.Intensity = 0.0f;
            this_ptr->fields.Vignetting->fields.SecondVignetteAmount = 0.0f;
        }
    }

    // IL2CPP_INTERCEPT(CameraOffsetController, void, set_Offset, (app::CameraOffsetController * this_ptr, app::Vector3 offset)) {
    //     next::CameraOffsetController::set_Offset(this_ptr, app::Vector3{offset.x, offset.y + 1.f, offset.z});
    // }

    IL2CPP_INTERCEPT(CameraOffsetController, void, UpdateOffset, (app::CameraOffsetController * this_ptr, bool instant, float time_delta)) {
        if (orishot_state != OrishotState::None) {
            this_ptr->fields.AdditiveDefaultOffset = app::Vector3{ 0.f, 0.f, 0.f };
            this_ptr->fields.ApplyExtraZoom = false;
            this_ptr->fields.m_characterSpeed = 0.f;

            CameraOffsetController::set_Offset(this_ptr, app::Vector3{0.f, 0.f, -40.f});

            return;
        }

        if (!camera_locked) {
            next::CameraOffsetController::UpdateOffset(this_ptr, instant, time_delta);
        }
    }

    IL2CPP_INTERCEPT(CameraTarget, void, UpdateTargetPosition, (app::CameraTarget * this_ptr)) {
        if (orishot_state != OrishotState::None) {
            this_ptr->fields.TargetPosition = app::Vector3{
                    camera_target_x,
                    camera_target_y,
                    0.f,
            };

            return;
        }

        if (!camera_locked) {
            next::CameraTarget::UpdateTargetPosition(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(FaderB, void, FixedUpdate, (app::FaderB * this_ptr)) {
        if (orishot_state != OrishotState::None) {
            this_ptr->fields.CurrentState = app::FaderB_State__Enum::Invisible;
            return;
        }

        next::FaderB::FixedUpdate(this_ptr);
    }

    IL2CPP_INTERCEPT(GameplayCamera, void, ForceCameraToObayScrollLockConstraints, (app::GameplayCamera * this_ptr)) {
        if (orishot_state != OrishotState::None) {
            return;
        }

        next::GameplayCamera::ForceCameraToObayScrollLockConstraints(this_ptr);
    }

    IL2CPP_INTERCEPT(ScenesManager, bool, CanDisable, (app::ScenesManager * this_ptr, app::RuntimeSceneMetaData* meta_data)) {
        if (orishot_state != OrishotState::None && orishot_state != OrishotState::PositionOriAndUnload) {
            return false;
        }

        return next::ScenesManager::CanDisable(this_ptr, meta_data);
    }

    IL2CPP_INTERCEPT(Game::UI_Hints, app::MessageBox*, Show, (app::MessageProvider * message_provider, app::HintLayer__Enum layer, float duration, app::Vector3 hint_offset)) {
        if (orishot_state != OrishotState::None) {
            return nullptr;
        }

        return next::Game::UI_Hints::Show(message_provider, layer, duration, hint_offset);
    }

    IL2CPP_INTERCEPT(Game::UI_Hints, app::MessageBox*, ShowAndPersist, (app::ManagedHintConfiguration config)) {
        if (orishot_state != OrishotState::None) {
            return nullptr;
        }

        return next::Game::UI_Hints::ShowAndPersist(config);
    }

    IL2CPP_INTERCEPT(UnityEngine::Time, float, get_deltaTime, ()) {
        if (orishot_state != OrishotState::None && orishot_state != OrishotState::RunScenes) {
            UnityEngine::Time::set_fixedDeltaTime(FLT_EPSILON);
            UnityEngine::Time::set_maximumDeltaTime(FLT_EPSILON);

            return FLT_EPSILON;
        }

        return next::UnityEngine::Time::get_deltaTime();
    }

    IL2CPP_INTERCEPT(Moon::Timeline::TimelineEntity, void, OnUpdate, (app::TimelineEntity* this_ptr, float delta_time)) {
        if (orishot_state != OrishotState::None && orishot_state != OrishotState::RunScenes) {
            next::Moon::Timeline::TimelineEntity::OnUpdate(this_ptr, FLT_MIN);
            return;
        }

        next::Moon::Timeline::TimelineEntity::OnUpdate(this_ptr, delta_time);
    }

    bool read_single_bool_from_command(std::vector<console::CommandParam> const& params, bool& boolean) {
        if (params.size() != 1) {
            console::console_send("Invalid number of arguments. Expected 1");
            return false;
        }

        if (!console::try_get_bool(params[0], boolean)) {
            console::console_send("Invalid argument. Expected boolean (on/off)");
            return false;
        }

        return true;
    }

    void set_background_color(app::Color color) {
        auto camera = UnityEngine::Camera::get_main();
        UnityEngine::Camera::set_backgroundColor(camera, color);
    }

    void set_camera_ortho(bool ortho) {
        auto camera = UnityEngine::Camera::get_main();
        UnityEngine::Camera::set_orthographic(camera, ortho);
    }

    void set_camera_ortho_size(float size) {
        auto camera = UnityEngine::Camera::get_main();
        UnityEngine::Camera::set_orthographicSize(camera, size);
    }

    void update_vignette() {
        auto const gameplay_camera = types::UI_Cameras::get_class()->static_fields->Current;
        auto const camera_post_processing = GameplayCamera::get_CameraPostProcessing(gameplay_camera);
        auto uber_post_process = camera_post_processing->fields.UberPostProcess;
        UberPostProcess::ApplySettings_2(uber_post_process, CameraPostProcessing::get_CameraSettingsToUse(camera_post_processing));
    }

    void set_background_color_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (params.size() != 3) {
            console::console_send("Invalid number of arguments. Expected 3");
            return;
        }

        float r = 0.f;
        float g = 0.f;
        float b = 0.f;

        if (!console::try_get_float(params[0], r)) {
            console::console_send(std::format("Invalid argument. Expected float, got '{}'", params[0].value.data()));
            return;
        }

        if (!console::try_get_float(params[1], g)) {
            console::console_send(std::format("Invalid argument. Expected float, got '{}'", params[1].value.data()));
            return;
        }

        if (!console::try_get_float(params[2], b)) {
            console::console_send(std::format("Invalid argument. Expected float, got '{}'", params[2].value.data()));
            return;
        }

        set_background_color(app::Color{ r, g, b });

        console::console_send("Background color set");
    }

    void reset_background_color_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        set_background_color(default_background_color);
        console::console_send("Background color reset");
    }

    void set_vignette_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (read_single_bool_from_command(params, enable_vignette)) {
            update_vignette();
            console::console_send(std::format("Vignette {}", enable_vignette ? "enabled" : "disabled"));
        }
    }

    void set_camera_swaying_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        bool enable = false;
        if (read_single_bool_from_command(params, enable)) {
            Moon::Rendering::ShaderTime::set_freezeCameraSwaying(!enable);
            console::console_send(std::format("Camera swaying {}", enable ? "enabled" : "disabled"));
        }
    }

    void set_camera_locked_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (read_single_bool_from_command(params, camera_locked)) {
            console::console_send(std::format("Camera {}", camera_locked ? "locked" : "unlocked"));
        }
    }

    void set_camera_ortho_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (read_single_bool_from_command(params, camera_ortho)) {
            set_camera_ortho(camera_ortho);
            console::console_send(std::format("Camera {}", camera_ortho ? "orthographic projection enabled" : "orthographic projection disabled"));
        }
    }

    void set_camera_ortho_size_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (params.size() != 1) {
            console::console_send("Invalid number of arguments. Expected 1");
            return;
        }

        float size = 0.f;

        if (!console::try_get_float(params[0], size)) {
            console::console_send(std::format("Invalid argument. Expected float, got '{}'", params[0].value.data()));
            return;
        }


        set_camera_ortho_size(size);
        console::console_send("Camera orthographic size set");
    }

    void set_orishot_target_position(float x, float y) {
        camera_target_x = x;
        camera_target_y = y;
        core::api::game::player::set_position(x, y);
        auto const gameplay_camera = types::UI_Cameras::get_class()->static_fields->Current;
        GameplayCamera::MoveCameraToTargetInstantly(gameplay_camera, true);
    }

    void position_ori_and_unload() {
        orishot_state = OrishotState::PositionOriAndUnload;
        set_orishot_target_position(current_x, current_y);
        ScenesManager::UnloadAllUneededScenes(core::api::scenes::get_scenes_manager(), true);
    }

    void start_orishot_command(std::string const& command, std::vector<console::CommandParam> const& params) {
        column = 0;
        row = 0;

        prevent_pickup_state.set(true);
        core::api::game::save(false, core::api::game::SaveOptions(false, false, false, false));

        set_camera_ortho(true);
        set_camera_ortho_size(-9);
        Moon::Rendering::ShaderTime::set_freezeAll(true);

        enable_vignette = false;
        update_vignette();

        auto sein = core::api::game::player::sein();
        il2cpp::unity::destroy_object(il2cpp::unity::find_child(sein, "ori3D"));
        il2cpp::unity::destroy_object(il2cpp::unity::find_child(sein, "mortality"));
        il2cpp::unity::set_active_recursively(il2cpp::unity::find_child(sein, "abilities"), false);

        auto rigid_body = il2cpp::unity::get_component<app::Rigidbody>(sein, types::Rigidbody::get_class());
        UnityEngine::Rigidbody::set_constraints(rigid_body, app::RigidbodyConstraints__Enum::FreezeAll);

        il2cpp::unity::destroy_object(il2cpp::unity::get_component(sein, types::CapsuleCollider::get_class()));
        UnityEngine::GameObject::set_layer(il2cpp::unity::get_game_object(sein), 0);

        current_x = START_X;
        current_y = START_Y;
        position_ori_and_unload();
    }

    auto before_unity_update = core::api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::Before, [](GameEvent event, EventTiming timing) {
        if (orishot_state != OrishotState::None) {
            // if (orishot_state == OrishotState::VisitScenes || orishot_state == OrishotState::RunScenes || orishot_state == OrishotState::UnsuspendForOneFrameAndContinueScreenshotting) {
            //     GameController::ResumeGameplay(types::GameController::get_class()->static_fields->Instance);
            // } else {
            //     GameController::SuspendGameplay(types::GameController::get_class()->static_fields->Instance);
            // }
        }
    });

    auto after_unity_update = core::api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](GameEvent event, EventTiming timing) {
        if (orishot_state != OrishotState::None) {
            auto delta = next::UnityEngine::Time::get_deltaTime();

            core::api::game::player::set_position(current_x, current_y);
            auto const gameplay_camera = types::UI_Cameras::get_class()->static_fields->Current;
            GameplayCamera::MoveCameraToTargetInstantly(gameplay_camera, true);

            core::api::scenes::get_scenes_manager()->fields.m_currentCameraTargetPosition = { current_x, current_y };

            switch (orishot_state) {
                case OrishotState::PositionOriAndUnload: {
                    load_step = 0;
                    load_step_timeout = LOAD_STEP_TIMEOUT;
                    orishot_state = OrishotState::LoadScenes;
                    break;
                }
                case OrishotState::LoadScenes: {
                    if (ScenesManager::get_IsLoadingOrEnablingScenes(core::api::scenes::get_scenes_manager())) {
                        break;
                    }

                    load_step_timeout -= delta;

                    if (load_step_timeout <= 0.f) {
                        load_step++;
                        load_step_timeout = LOAD_STEP_TIMEOUT + load_step * LOAD_STEP_TIMEOUT * LOAD_STEP_TIMEOUT_MULTIPLIER;
                    }

                    if (load_step >= LOAD_STEPS) {
                        set_orishot_target_position(current_x, current_y);
                        run_scenes_timeout = SCENE_RUN_TIME;
                        orishot_state = OrishotState::PrepareScreenshot;
                        break;
                    }

                    auto progress = load_step_timeout / (LOAD_STEP_TIMEOUT + load_step * LOAD_STEP_TIMEOUT * LOAD_STEP_TIMEOUT_MULTIPLIER);

                    set_orishot_target_position(
                            current_x + std::cos(TAU * progress) * LOAD_RADIUS_STEP_SIZE * (load_step + 1),
                            current_y + std::sin(TAU * progress) * LOAD_RADIUS_STEP_SIZE * (load_step + 1)
                    );

                    break;
                }
                case OrishotState::RunScenes: {
                    run_scenes_timeout -= delta;

                    if (run_scenes_timeout <= 0) {
                        orishot_state = OrishotState::PrepareScreenshot;
                    }
                    break;
                }
                case OrishotState::PrepareScreenshot: {
                    if (!ScenesManager::get_IsLoadingOrEnablingScenes(core::api::scenes::get_scenes_manager())) {
                        orishot_state = OrishotState::Screenshot;
                    }
                    break;
                }
                case OrishotState::Screenshot: {
                    console::console_send(std::format("Capturing screenshot {}-{}", column, row));

                    UnityEngine::ScreenCapture::CaptureScreenshot_1(
                            il2cpp::string_new(std::format(R"(C:\Users\Timo\orishots2\{}-{}.png)", column, row))
                    );

                    column++;
                    current_x += DELTA_X;

                    if (current_x > END_X) {
                        current_x = START_X;
                        column = 0;
                        row++;
                        current_y += DELTA_Y;

                        if (current_y > END_Y) {
                            console::console_send("Done");
                            orishot_state = OrishotState::None;
                            break;
                        }

                        break;
                    }

                    position_ori_and_unload();
                    break;
                }
            }
        }
    });

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        auto camera = UnityEngine::Camera::get_main();
        default_background_color = UnityEngine::Camera::get_backgroundColor(camera);

        console::register_command({ "recording_utils", "set_background_color" }, set_background_color_command);
        console::register_command({ "recording_utils", "reset_background_color" }, reset_background_color_command);
        console::register_command({ "recording_utils", "set_vignette" }, set_vignette_command);
        console::register_command({ "recording_utils", "set_camera_swaying" }, set_camera_swaying_command);
        console::register_command({ "recording_utils", "set_camera_locked" }, set_camera_locked_command);
        console::register_command({ "recording_utils", "set_camera_ortho" }, set_camera_ortho_command);
        console::register_command({ "recording_utils", "set_camera_ortho_size" }, set_camera_ortho_size_command);
        console::register_command({ "recording_utils", "start_orishot_experimental" }, start_orishot_command, true);

    });
} // namespace
