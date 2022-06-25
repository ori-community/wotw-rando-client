#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/CameraOffsetController.h>
#include <Il2CppModLoader/app/methods/CameraPostProcessing.h>
#include <Il2CppModLoader/app/methods/CameraTarget.h>
#include <Il2CppModLoader/app/methods/GameplayCamera.h>
#include <Il2CppModLoader/app/methods/Moon/Rendering/ShaderTime.h>
#include <Il2CppModLoader/app/methods/UberPostProcess.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Camera.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

using namespace app::methods;
using namespace modloader::win;

namespace {
    app::Color default_background_color;
    bool disable_vignette = false;
    bool camera_locked = false;

    IL2CPP_INTERCEPT(UberPostProcess, void, ApplySettings_2, (app::UberPostProcess * this_ptr, app::CameraSettings* settingsAsset)) {
        next::UberPostProcess::ApplySettings_2(this_ptr, settingsAsset);

        if (disable_vignette) {
            this_ptr->fields.Vignetting->fields.Intensity = 0.0f;
            this_ptr->fields.Vignetting->fields.SecondVignetteAmount = 0.0f;
        }
    }

    IL2CPP_INTERCEPT(CameraOffsetController, void, UpdateOffset, (app::CameraOffsetController * this_ptr, bool instant, float time_delta)) {
        if (!camera_locked) {
            next::CameraOffsetController::UpdateOffset(this_ptr, instant, time_delta);
        }
    }

    IL2CPP_INTERCEPT(CameraTarget, void, UpdateTargetPosition, (app::CameraTarget * this_ptr)) {
        if (!camera_locked) {
            next::CameraTarget::UpdateTargetPosition(this_ptr);
        }
    }

    void set_background_color(app::Color color) {
        auto camera = UnityEngine::Camera::get_main();
        UnityEngine::Camera::set_backgroundColor(camera, color);
    }

    void set_recording_mode(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (params.size() != 1) {
            console::console_send("Invalid number of arguments. Expected 1");
            return;
        }

        bool enable = false;
        if (!console::try_get_bool(params[0], enable)) {
            console::console_send("Invalid argument. Expected boolean (on/off)");
            return;
        }

        if (enable) {
            disable_vignette = true;
            set_background_color(app::Color{ 0.f, 0.f, 0.f });
            Moon::Rendering::ShaderTime::set_freezeCameraSwaying(true);
        } else {
            disable_vignette = false;
            set_background_color(default_background_color);
            Moon::Rendering::ShaderTime::set_freezeCameraSwaying(false);
        }

        auto const gameplay_camera = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras")->static_fields->Current;
        auto const camera_post_processing = GameplayCamera::get_CameraPostProcessing(gameplay_camera);
        auto uber_post_process = camera_post_processing->fields.UberPostProcess;
        UberPostProcess::ApplySettings_2(uber_post_process, CameraPostProcessing::get_CameraSettingsToUse(camera_post_processing));

        console::console_send(format("Recording mode %s", enable ? "enabled" : "disabled"));
    }

    void set_camera_locked(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (params.size() != 1) {
            console::console_send("Invalid number of arguments. Expected 1");
            return;
        }

        if (!console::try_get_bool(params[0], camera_locked)) {
            console::console_send("Invalid argument. Expected boolean (on/off)");
            return;
        }

        console::console_send(format("Camera %s", camera_locked ? "locked" : "unlocked"));
    }

    void initialize() {
        auto camera = UnityEngine::Camera::get_main();
        default_background_color = UnityEngine::Camera::get_backgroundColor(camera);

        console::register_command({ "recording_utils", "set_recording_mode_enabled" }, set_recording_mode);
        console::register_command({ "recording_utils", "set_camera_locked" }, set_camera_locked);
    }

    CALL_ON_INIT(initialize);
} // namespace