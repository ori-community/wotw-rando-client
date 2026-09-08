#include <Core/settings.h>
#include <Modloader/app/methods/J2i/Net/XInputWrapper/XboxController.h>
#include <Modloader/app/methods/SmartInput/ControllerButtonInput.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>


namespace {
    using namespace app::classes;

    auto threshold = 0.08f;

    [[maybe_unused]]
    auto on_settings_loaded = core::settings::event_bus().register_handler(core::settings::SettingsEvent::Load, EventTiming::After, [](auto, auto) {
        threshold = core::settings::controller_trigger_threshold();
    });

    IL2CPP_INTERCEPT(bool, SmartInput::ControllerButtonInput, GetValue, app::ControllerButtonInput* this_ptr) {
        switch (this_ptr->fields.Button) {
            case app::XboxControllerInput_Button__Enum::LeftTrigger:
            case app::XboxControllerInput_Button__Enum::RightTrigger: {
                const auto controller = J2i::Net::XInputWrapper::XboxController::RetrieveController(0);

                modloader::ScopedSetter left(
                    controller->fields.gamepadStateCurrent.Gamepad.bLeftTrigger,
                    static_cast<uint8_t>(std::abs(controller->fields.gamepadStateCurrent.Gamepad.bLeftTrigger / 255.0) >= threshold ? 255 : 0)
                );
                modloader::ScopedSetter right(
                    controller->fields.gamepadStateCurrent.Gamepad.bRightTrigger,
                    static_cast<uint8_t>(std::abs(controller->fields.gamepadStateCurrent.Gamepad.bRightTrigger / 255.0) >= threshold ? 255 : 0)
                );

                return next::SmartInput::ControllerButtonInput::GetValue(this_ptr);
            }
            default:
                break;
        }

        return next::SmartInput::ControllerButtonInput::GetValue(this_ptr);
    }
}
