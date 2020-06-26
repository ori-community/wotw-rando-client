#include <features/input_poller.h>

#include <interception_macros.h>
#include <map>
#include <vector>

// We might want to make this thread safe?

namespace {

    BINDING(11253376, Core_Input_InputButtonProcessor_o*, Core_Input__GetButton, (int32_t button));

    struct InputData
    {
        InputState state;
        std::vector<input_callback> callbacks;
    };

    std::map<InputButton, InputData> input_data;

    void on_fixed_update(GameController_o* this_ptr)
    {
        auto cmd = *reinterpret_cast<Core_Input_Cmd_c**>(resolve_rva(71563216));
        if (cmd->_2.bitflags2 & 2 != 0 && cmd->_2.cctor_finished == 0)
            return;

        auto processors = &cmd->static_fields->AnyStart;
        auto count = static_cast<int>(InputButton::InputButton_LAST);
        for (auto i = 0; i < count; ++i)
        {
            auto button = static_cast<InputButton>(i);
            auto& data = input_data[button];
            data.state.button = button;

            auto old_pressed = data.state.pressed;
            auto input_processor = processors[i];
            if (input_processor != nullptr)
            {
                data.state.just_pressed = !input_processor->WasPressed && input_processor->IsPressed;
                data.state.pressed = input_processor->IsPressed;
            }

            if (old_pressed || data.state.pressed)
                for (auto callback : data.callbacks)
                    callback(data.state);
        }
    }

    INTERCEPT(10044704, void, GameController_FixedUpdate, (GameController_o* this_ptr)) {
        GameController_FixedUpdate(this_ptr);
        on_fixed_update(this_ptr);
    }
}

InputState const& get_input_state(InputButton button)
{
    return input_data[button].state;
}

void register_input_callback(InputButton button, input_callback callback)
{
    input_data[button].callbacks.push_back(callback);
}

void unregister_input_callback(InputButton button, input_callback callback)
{
    auto& callbacks = input_data[button].callbacks;
    auto it = std::find(callbacks.begin(), callbacks.end(), callback);
    if (it != callbacks.end())
        callbacks.erase(it);
}
