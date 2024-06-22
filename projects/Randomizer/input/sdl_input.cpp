#include <mutex>
#include <Core/settings.h>
#include <Modloader/modloader.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/J2i/Net/XInputWrapper/XboxController.h>
#include <Modloader/app/methods/Core/Input.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/IntroLogosSkip.h>
#include <sdl2/SDL.h>

namespace {
    using namespace app::classes;

    bool enable_native_controller_support = false;
    SDL_GameController* controller = nullptr;

    void detect_controller() {
        if (controller != nullptr) {
            SDL_GameControllerClose(controller);
        }

        for (int i = 0; i < SDL_NumJoysticks(); i++) {
            if (SDL_IsGameController(i)) {
                controller = SDL_GameControllerOpen(i);
                SDL_GameControllerSetLED(controller, 255, 255, 255);
                SDL_GameControllerRumble(controller, 0xFFFF, 0xFFFF, 225);
                modloader::info("sdl_input", "Controller connected");
                return;
            }
        }

        modloader::info("sdl_input", "Controller lost");
        controller = nullptr;
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        enable_native_controller_support = core::settings::native_controller_support_enabled();

        if (enable_native_controller_support) {
            SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE, "1");

            if (auto sdl_init_error = SDL_Init(SDL_INIT_GAMECONTROLLER); sdl_init_error < 0) {
                modloader::error("sdl_input", std::format("Failed to initialize SDL, error {}", sdl_init_error));
            }

            modloader::info("sdl_input", "SDL initialized");
            detect_controller();
        }
    });

    [[maybe_unused]]
    auto on_shutdown = modloader::event_bus().register_handler(ModloaderEvent::Shutdown, [](auto) {
        if (enable_native_controller_support) {
            SDL_Quit();
        }
    });

    IL2CPP_INTERCEPT(IntroLogosSkip, void, Update, (app::IntroLogosSkip* this_ptr)) {
        if (GameStateMachine::get_CurrentState(GameStateMachine::get_Instance()) == app::GameStateMachine_State__Enum::Logos) {
            if (!this_ptr->fields.TimelineRunning->fields.m_isRunning && this_ptr->fields.MoonStudiosLogoTimeline->fields._._PlayState_k__BackingField != app::AnimatorPlayState__Enum::Playing) {
                return;
            }

            if (Core::Input::get_OnAnyButtonPressed()) {
                IntroLogosSkip::SkipLogos(this_ptr);
            }
        }
    }

    // Warning: This method runs in a thread!
    IL2CPP_INTERCEPT(J2i::Net::XInputWrapper::XboxController, void, UpdateState, (app::XboxController* this_ptr)) {
        if (!enable_native_controller_support) {
            next::J2i::Net::XInputWrapper::XboxController::UpdateState(this_ptr);
            return;
        }

        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_CONTROLLERDEVICEADDED || event.type == SDL_CONTROLLERDEVICEREMOVED) {
                detect_controller();
            }
        }

        if (controller == nullptr) {
            this_ptr->fields._isConnected = false;
            return;
        }

        this_ptr->fields._isConnected = true;

        this_ptr->fields.gamepadStatePrev.Gamepad.sThumbLX = this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbLX;
        this_ptr->fields.gamepadStatePrev.Gamepad.sThumbLY = this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbLY;
        this_ptr->fields.gamepadStatePrev.Gamepad.sThumbRX = this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbRX;
        this_ptr->fields.gamepadStatePrev.Gamepad.sThumbRY = this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbRY;
        this_ptr->fields.gamepadStatePrev.Gamepad.bLeftTrigger = this_ptr->fields.gamepadStateCurrent.Gamepad.bLeftTrigger;
        this_ptr->fields.gamepadStatePrev.Gamepad.bRightTrigger = this_ptr->fields.gamepadStateCurrent.Gamepad.bRightTrigger;
        this_ptr->fields.gamepadStatePrev.Gamepad.wButtons = this_ptr->fields.gamepadStateCurrent.Gamepad.wButtons;
        this_ptr->fields.gamepadStatePrev.PacketNumber = this_ptr->fields.gamepadStateCurrent.PacketNumber;

        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbLX = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTX);
        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbLY = static_cast<short>(~SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_LEFTY));
        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbRX = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTX);
        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbRY = static_cast<short>(~SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_RIGHTY));
        this_ptr->fields.gamepadStateCurrent.Gamepad.bLeftTrigger = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERLEFT) / 128;
        this_ptr->fields.gamepadStateCurrent.Gamepad.bRightTrigger = SDL_GameControllerGetAxis(controller, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) / 128;
        this_ptr->fields.gamepadStateCurrent.Gamepad.wButtons = static_cast<short>(
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_UP) << 0) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_DOWN) << 1) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_LEFT) << 2) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_DPAD_RIGHT) << 3) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_START) << 4) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_BACK) << 5) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_LEFTSTICK) << 6) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_RIGHTSTICK) << 7) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_LEFTSHOULDER) << 8) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER) << 9) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_A) << 12) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_B) << 13) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_X) << 14) +
            (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_Y) << 15)
        );
        this_ptr->fields.gamepadStateCurrent.PacketNumber++;

        // Emulate Start/Select on touchpad
        if (SDL_GameControllerGetButton(controller, SDL_CONTROLLER_BUTTON_TOUCHPAD)) {
            uint8_t state;
            float x, y, pressure;
            SDL_GameControllerGetTouchpadFinger(controller, 0, 0, &state, &x, &y, &pressure);

            this_ptr->fields.gamepadStateCurrent.Gamepad.wButtons |=
                (state != 1 || x >= 0.5 /* right side touchpad */)
                    ? (1u << 4u)  // Start
                    : (1u << 5u); // Select
        }

        J2i::Net::XInputWrapper::XboxController::OnStateChanged(this_ptr);
    }
}
