#include <mutex>
#include <Core/settings.h>
#include <Modloader/modloader.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/J2i/Net/XInputWrapper/XboxController.h>
#include <Modloader/app/methods/Core/Input.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/IntroLogosSkip.h>
#include <Modloader/app/methods/System/TimeSpan.h>
#include <Modloader/app/types/TimeSpan.h>
#include <SDL3/SDL.h>

namespace {
    using namespace app::classes;

    bool enable_native_controller_support = false;
    SDL_Gamepad* gamepad = nullptr;

    void detect_controller() {
        if (gamepad != nullptr) {
            SDL_CloseGamepad(gamepad);
        }

        int joystick_count;
        const auto joysticks = SDL_GetJoysticks(&joystick_count);

        for (int i = 0; i < joystick_count; i++) {
            if (SDL_IsGamepad(joysticks[i])) {
                gamepad = SDL_OpenGamepad(joysticks[i]);
                SDL_SetGamepadLED(gamepad, 255, 255, 255);
                SDL_RumbleGamepad(gamepad, 0xFFFF, 0xFFFF, 225);
                SDL_RumbleGamepadTriggers(gamepad, 0xFFFF, 0xFFFF, 225);
                modloader::info("sdl_input", std::format("Gamepad connected: {}", SDL_GetGamepadName(gamepad)));
                return;
            }
        }

        modloader::info("sdl_input", "Gamepad lost");
        gamepad = nullptr;
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        enable_native_controller_support = core::settings::enable_native_controller_support();

        if (enable_native_controller_support) {
            if (!SDL_Init(SDL_INIT_GAMEPAD)) {
                modloader::error("sdl_input", std::format("Failed to initialize SDL, error {}", SDL_GetError()));
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
            if (event.type == SDL_EVENT_GAMEPAD_ADDED || event.type == SDL_EVENT_GAMEPAD_REMOVED) {
                detect_controller();
            }
        }

        if (gamepad == nullptr) {
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

        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbLX = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTX);
        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbLY = static_cast<short>(~SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTY));
        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbRX = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHTX);
        this_ptr->fields.gamepadStateCurrent.Gamepad.sThumbRY = static_cast<short>(~SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHTY));
        this_ptr->fields.gamepadStateCurrent.Gamepad.bLeftTrigger = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) / 128;
        this_ptr->fields.gamepadStateCurrent.Gamepad.bRightTrigger = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) / 128;
        this_ptr->fields.gamepadStateCurrent.Gamepad.wButtons = static_cast<short>(
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_UP) << 0) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_DOWN) << 1) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_LEFT) << 2) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_RIGHT) << 3) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_START) << 4) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_BACK) << 5) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_LEFT_STICK) << 6) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_RIGHT_STICK) << 7) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_LEFT_SHOULDER) << 8) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER) << 9) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_SOUTH) << 12) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_EAST) << 13) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_WEST) << 14) +
            (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_NORTH) << 15)
        );
        this_ptr->fields.gamepadStateCurrent.PacketNumber++;

        // Emulate Start/Select on touchpad
        if (SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_TOUCHPAD)) {
            bool state;
            float x, y, pressure;
            SDL_GetGamepadTouchpadFinger(gamepad, 0, 0, &state, &x, &y, &pressure);

            this_ptr->fields.gamepadStateCurrent.Gamepad.wButtons |=
                (!state || x >= 0.5 /* right side touchpad */)
                    ? (1u << 4u)  // Start
                    : (1u << 5u); // Select
        }

        J2i::Net::XInputWrapper::XboxController::OnStateChanged(this_ptr);
    }

    IL2CPP_INTERCEPT(J2i::Net::XInputWrapper::XboxController, void, Vibrate_2, (app::XboxController * this_ptr, double left_motor, double right_motor, app::TimeSpan length)) {
        if (!enable_native_controller_support) {
            next::J2i::Net::XInputWrapper::XboxController::Vibrate_2(this_ptr, left_motor, right_motor, length);
            return;
        }

        if (gamepad == nullptr) {
            return;
        }

        // We can ignore the length parameter since XBoxControllerManager will call this function periodically anyway
        SDL_RumbleGamepad(gamepad, left_motor * 0xFFFF, right_motor * 0xFFFF, 100);
    }
}
