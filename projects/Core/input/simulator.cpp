#include <Core/input/simulator.h>

#include <Common/ext.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/sprite.h>
#include <Core/enums/controller_axis.h>
#include <Modloader/app/methods/PlayerInput.h>
#include <Modloader/app/methods/SmartInput/CachedAxisInput.h>
#include <Modloader/app/methods/SmartInput/CachedButtonInput.h>
#include <Modloader/app/methods/SmartInput/CompoundAxisInput.h>
#include <Modloader/app/methods/SmartInput/CompoundButtonInput.h>
#include <Modloader/app/methods/UnityEngine/Camera.h>
#include <Modloader/app/methods/UnityEngine/Input.h>
#include <Modloader/app/methods/UnityEngine/Vector3.h>
#include <Modloader/app/types/Input_1.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <unordered_map>

using namespace app::classes;
using namespace app::classes::SmartInput;
using namespace UnityEngine::Vector3::operators;

namespace core::input {
    struct SimulatedButtonEntry {
        app::CompoundButtonInput* input = nullptr;
        SimulatedButton simulator;
    };

    struct SimulatedAxisEntry {
        app::CompoundAxisInput* input = nullptr;
        SimulatedAxis simulator;
    };

    std::unordered_map<app::CompoundButtonInput*, Action> button_inputs;
    std::unordered_map<app::CompoundAxisInput*, ControllerAxis> axis_inputs;

    std::unordered_map<Action, SimulatedButtonEntry> simulated_buttons;
    std::unordered_map<ControllerAxis, SimulatedAxisEntry> simulated_axes;

    MousePositionSimulationMode mouse_position_simulation_mode = MousePositionSimulationMode::UI;
    SimulatedPosition simulated_mouse_position;

    app::Vector2 real_mouse_position;
    std::unique_ptr<core::Sprite> simulated_mouse_position_indicator;

    Action* get_button_input_action(app::CompoundButtonInput* input) {
        auto it = button_inputs.find(input);
        return it != button_inputs.end() ? &it->second : nullptr;
    }

    ControllerAxis* get_axis_input_axis(app::CompoundAxisInput* input) {
        auto it = axis_inputs.find(input);
        return it != axis_inputs.end() ? &it->second : nullptr;
    }

    app::Vector2 get_simulated_mouse_position_in_viewport_space() {
        app::Vector2 position{ simulated_mouse_position.x, simulated_mouse_position.y };

        auto ui_cameras = types::UI_Cameras::get_class();
        auto ui_camera = ui_cameras->static_fields->System->fields.GUICamera->fields.Camera;

        switch (mouse_position_simulation_mode) {
            case MousePositionSimulationMode::ViewportRelative: {
                return position;
            }

            case MousePositionSimulationMode::OriRelative: {
                auto position_world_space = game::player::get_position();

                position_world_space.x += position.x;
                position_world_space.y += position.y;

                auto main_camera = UnityEngine::Camera::get_main();

                auto position_viewport_space = UnityEngine::Camera::WorldToViewportPoint_2(main_camera, position_world_space);
                return app::Vector2{ position_viewport_space.x, position_viewport_space.y };
            }

            case MousePositionSimulationMode::UI: {
                app::Vector3 position_ui_space{ simulated_mouse_position.x, simulated_mouse_position.y, 0.f };
                auto position_viewport_space = UnityEngine::Camera::WorldToViewportPoint_2(ui_camera, position_ui_space);
                return app::Vector2{ position_viewport_space.x, position_viewport_space.y };
            }
        }

        return app::Vector2{ 0.f, 0.f };
    }

    namespace {
        IL2CPP_INTERCEPT(SmartInput::CompoundButtonInput, bool, GetValue, (app::CompoundButtonInput * this_ptr)) {
            auto action = get_button_input_action(this_ptr);
            if (action != nullptr) {
                auto& simulator = simulated_buttons[*action].simulator;

                if (simulator.enabled) {
                    return simulator.pressed;
                }
            }

            return next::SmartInput::CompoundButtonInput::GetValue(this_ptr);
        }

        IL2CPP_INTERCEPT(SmartInput::CachedButtonInput, bool, GetButton, (app::CachedButtonInput * this_ptr)) {
            auto action = get_button_input_action(reinterpret_cast<app::CompoundButtonInput*>(this_ptr));
            if (action != nullptr) {
                auto& simulator = simulated_buttons[*action].simulator;

                if (simulator.enabled) {
                    return simulator.pressed;
                }
            }

            return next::SmartInput::CachedButtonInput::GetButton(this_ptr);
        }

        IL2CPP_INTERCEPT(SmartInput::CompoundAxisInput, float, GetValue, (app::CompoundAxisInput * this_ptr)) {
            auto axis = get_axis_input_axis(this_ptr);
            if (axis != nullptr) {
                auto& simulator = simulated_axes[*axis].simulator;

                if (simulator.enabled) {
                    return simulator.value;
                }
            }

            return next::SmartInput::CompoundAxisInput::GetValue(this_ptr);
        }

        IL2CPP_INTERCEPT(SmartInput::CachedAxisInput, float, AxisValue, (app::CachedAxisInput * this_ptr)) {
            auto axis = get_axis_input_axis(reinterpret_cast<app::CompoundAxisInput*>(this_ptr));
            if (axis != nullptr) {
                auto& simulator = simulated_axes[*axis].simulator;

                if (simulator.enabled) {
                    return simulator.value;
                }
            }

            return next::SmartInput::CachedAxisInput::AxisValue(this_ptr);
        }

        IL2CPP_INTERCEPT(UnityEngine::Input, app::Vector3, get_mousePosition, ()) {
            if (simulated_mouse_position.enabled) {
                auto ui_cameras = types::UI_Cameras::get_class();
                auto camera = ui_cameras->static_fields->System->fields.GUICamera->fields.Camera;
                auto position_in_viewport_space = get_simulated_mouse_position_in_viewport_space();
                return UnityEngine::Camera::ViewportToScreenPoint(camera, app::Vector3{ position_in_viewport_space.x, position_in_viewport_space.y, 0.f });
            }

            return next::UnityEngine::Input::get_mousePosition();
        }

        IL2CPP_INTERCEPT(PlayerInput, void, FixedUpdate, (app::PlayerInput * this_ptr)) {
            auto previous_mouse_position = types::Input_1::get_class()->static_fields->CursorPosition;

            for (const auto& item : simulated_buttons) {
                if (item.second.simulator.enabled) {
                    item.second.input->fields._._.m_cache = item.second.simulator.pressed;
                }
            }

            for (const auto& item : simulated_axes) {
                if (item.second.simulator.enabled) {
                    item.second.input->fields._._.m_cache = item.second.simulator.value;
                }
            }

            next::PlayerInput::FixedUpdate(this_ptr);

            real_mouse_position = types::Input_1::get_class()->static_fields->CursorPosition;

            if (simulated_mouse_position.enabled) {
                auto position_in_viewport_space = get_simulated_mouse_position_in_viewport_space();

                types::Input_1::get_class()->static_fields->CursorPosition.x = position_in_viewport_space.x;
                types::Input_1::get_class()->static_fields->CursorPosition.y = position_in_viewport_space.y;

                types::Input_1::get_class()->static_fields->CursorMoved =
                        !eps_equals(position_in_viewport_space.x, previous_mouse_position.x) ||
                        !eps_equals(position_in_viewport_space.y, previous_mouse_position.y);
            }
        }

        IL2CPP_INTERCEPT(PlayerInput, void, ClearControls, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::ClearControls(this_ptr);
            core::input::clear_simulators();
        }

        IL2CPP_INTERCEPT(PlayerInput, void, InitInputCache, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::InitInputCache(this_ptr);

            game::event_bus().trigger_event(GameEvent::RegisteringInputSimulators, EventTiming::Before);
            core::input::register_simulators(this_ptr);
            game::event_bus().trigger_event(GameEvent::RegisteringInputSimulators, EventTiming::After);
        }

        void update_simulated_mouse_position_indicator(GameEvent event, EventTiming timing) {
            if (!simulated_mouse_position.enabled) {
                if (simulated_mouse_position_indicator != nullptr) {
                    simulated_mouse_position_indicator->enabled(false);
                }
                return;
            }

            if (simulated_mouse_position_indicator == nullptr) {
                simulated_mouse_position_indicator = std::make_unique<core::Sprite>();

                core::textures::MaterialParams params;
                params.uvs = std::optional<app::Vector4>({ 0.f, 0.f, 1.f, 1.f });

                simulated_mouse_position_indicator->texture(core::textures::get_texture(L"file:assets/icons/cursor.png"), std::make_optional(params));
                simulated_mouse_position_indicator->set_parent(game::container(game::RandoContainer::Randomizer));
                simulated_mouse_position_indicator->layer(Layer::UI);
            }

            simulated_mouse_position_indicator->enabled(true);

            auto viewport_position = get_simulated_mouse_position_in_viewport_space();
            auto ui_cameras = types::UI_Cameras::get_class();
            auto camera = ui_cameras->static_fields->System->fields.GUICamera->fields.Camera;
            auto ui_position = UnityEngine::Camera::ViewportToWorldPoint_2(camera, app::Vector3{ viewport_position.x, viewport_position.y, 0.f });

            constexpr float scale = 0.33f;
            constexpr float position_offset = 0.5f * scale;
            simulated_mouse_position_indicator->local_scale(app::Vector3{ scale, scale, 1.f });
            simulated_mouse_position_indicator->local_position(ui_position + app::Vector3{ position_offset, -position_offset, 0.f });
        }

        void initialize() {
            game::event_bus().register_handler(GameEvent::Update, &update_simulated_mouse_position_indicator);
        }

        CALL_ON_INIT(initialize);
    } // namespace

    void register_button_simulator(app::CompoundButtonInput* input, Action action) {
        button_inputs[input] = action;
        simulated_buttons[action].input = input;
    }

    void register_axis_simulator(app::CompoundAxisInput* input, ControllerAxis axis) {
        axis_inputs[input] = axis;
        simulated_axes[axis].input = input;
    }

    void clear_simulators() {
        button_inputs.clear();
        axis_inputs.clear();
    }

    void register_simulators(app::PlayerInput* input) {
        register_button_simulator(input->fields.MainMenuSaveCopy, Action::MainMenuSaveCopy);
        register_button_simulator(input->fields.MainMenuSaveDelete, Action::MainMenuSaveDelete);
        register_button_simulator(input->fields.Interact, Action::Interact);
        register_button_simulator(input->fields.Jump, Action::Jump);
        register_button_simulator(input->fields.Ability1, Action::Ability1);
        register_button_simulator(input->fields.Ability2, Action::Ability2);
        register_button_simulator(input->fields.Ability3, Action::Ability3);
        register_button_simulator(input->fields.Glide, Action::Glide);
        register_button_simulator(input->fields.Grab, Action::Grab);
        register_button_simulator(input->fields.Dash, Action::Dash);
        register_button_simulator(input->fields.Burrow, Action::Burrow);
        register_button_simulator(input->fields.Bash, Action::Bash);
        register_button_simulator(input->fields.Grapple, Action::Grapple);
        register_button_simulator(input->fields.DialogueAdvance, Action::DialogueAdvance);
        register_button_simulator(input->fields.DialogueOption1, Action::DialogueOption1);
        register_button_simulator(input->fields.DialogueOption2, Action::DialogueOption2);
        register_button_simulator(input->fields.DialogueOption3, Action::DialogueOption3);
        register_button_simulator(input->fields.DialogueExit, Action::DialogueExit);
        register_button_simulator(input->fields.OpenMapsShardsInventory, Action::OpenMapsShardsInventory);
        register_button_simulator(input->fields.OpenWeaponWheel, Action::OpenWeaponWheel);
        register_button_simulator(input->fields.PauseScreen, Action::PauseScreen);
        register_button_simulator(input->fields.LiveSignIn, Action::LiveSignIn);
        register_button_simulator(input->fields.MapZoomIn, Action::MapZoomIn);
        register_button_simulator(input->fields.MapZoomOut, Action::MapZoomOut);
        register_button_simulator(input->fields.MenuSelect, Action::MenuSelect);
        register_button_simulator(input->fields.MenuBack, Action::MenuBack);
        register_button_simulator(input->fields.MenuClose, Action::MenuClose);
        register_button_simulator(input->fields.MenuDown, Action::MenuDown);
        register_button_simulator(input->fields.MenuUp, Action::MenuUp);
        register_button_simulator(input->fields.MenuLeft, Action::MenuLeft);
        register_button_simulator(input->fields.MenuRight, Action::MenuRight);
        register_button_simulator(input->fields.MenuPageLeft, Action::MenuPageLeft);
        register_button_simulator(input->fields.MenuPageRight, Action::MenuPageRight);
        register_button_simulator(input->fields.LeaderboardCycleFilter, Action::LeaderboardCycleFilter);
        register_button_simulator(input->fields.MapFilter, Action::MapFilter);
        register_button_simulator(input->fields.MapDetails, Action::MapDetails);
        register_button_simulator(input->fields.MapFocusOri, Action::MapFocusOri);
        register_button_simulator(input->fields.MapFocusObjective, Action::MapFocusObjective);
        register_button_simulator(input->fields.Left, Action::Left);
        register_button_simulator(input->fields.Right, Action::Right);
        register_button_simulator(input->fields.Up, Action::Up);
        register_button_simulator(input->fields.Down, Action::Down);

        register_axis_simulator(input->fields.HorizontalAnalogLeft, ControllerAxis::HorizontalAnalogLeft);
        register_axis_simulator(input->fields.VerticalAnalogLeft, ControllerAxis::VerticalAnalogLeft);
        register_axis_simulator(input->fields.HorizontalAnalogRight, ControllerAxis::HorizontalAnalogRight);
        register_axis_simulator(input->fields.VerticalAnalogRight, ControllerAxis::VerticalAnalogRight);
        register_axis_simulator(input->fields.HorizontalDigiPad, ControllerAxis::HorizontalDigiPad);
        register_axis_simulator(input->fields.VerticalDigiPad, ControllerAxis::VerticalDigiPad);
    }

    SimulatedButton* get_simulator_for(Action action) {
        auto it = simulated_buttons.find(action);
        if (it == simulated_buttons.end()) {
            return nullptr;
        }

        return &it->second.simulator;
    }

    SimulatedAxis* get_simulator_for(ControllerAxis axis) {
        auto it = simulated_axes.find(axis);
        if (it == simulated_axes.end()) {
            return nullptr;
        }

        return &it->second.simulator;
    }

    SimulatedPosition* get_mouse_position_simulator() {
        return &simulated_mouse_position;
    }

    void enable_all_simulators(bool reset) {
        for (auto& simulator : simulated_buttons) {
            simulator.second.simulator.enabled = true;

            if (reset) {
                simulator.second.simulator.pressed = false;
            }
        }

        for (auto& simulator : simulated_axes) {
            simulator.second.simulator.enabled = true;

            if (reset) {
                simulator.second.simulator.value = 0.f;
            }
        }

        simulated_mouse_position.enabled = true;

        if (reset) {
            simulated_mouse_position.x = 0.f;
            simulated_mouse_position.y = 0.f;
        }
    }

    void disable_all_simulators() {
        for (auto& simulator : simulated_buttons) {
            simulator.second.simulator.enabled = false;
        }

        for (auto& simulator : simulated_axes) {
            simulator.second.simulator.enabled = false;
        }

        simulated_mouse_position.enabled = false;
    }

    void set_mouse_position_simulation_mode(MousePositionSimulationMode mode) {
        mouse_position_simulation_mode = mode;
    }

    MousePositionSimulationMode get_mouse_position_simulation_mode() {
        return mouse_position_simulation_mode;
    }

    app::Vector2 get_real_mouse_position_in_ui_space() {
        auto ui_cameras = types::UI_Cameras::get_class();
        auto camera_system = ui_cameras->static_fields->System;

        if (camera_system == nullptr) {
            return app::Vector2{ 0.f, 0.f };
        }

        auto gui_camera = camera_system->fields.GUICamera;

        if (gui_camera == nullptr) {
            return app::Vector2{ 0.f, 0.f };
        }

        auto camera = gui_camera->fields.Camera;

        if (camera == nullptr) {
            return app::Vector2{ 0.f, 0.f };
        }

        auto ui_position = UnityEngine::Camera::ViewportToWorldPoint_2(camera, app::Vector3{ real_mouse_position.x, real_mouse_position.y, 0.f });
        return app::Vector2{ ui_position.x, ui_position.y };
    }
} // namespace core::input
