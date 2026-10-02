#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/features/controls/invert_swim.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


using namespace app::classes;

namespace {
    constexpr auto DEFAULT_SWIM_SPEED = 6.f;

    auto& swim_speed_state = randomizer::uber_states::state<"randoUpgrades", "swimSpeedMultiplier">();

    IL2CPP_INTERCEPT(void, SeinSwimming, UpdateSwimMovingUnderwaterState, app::SeinSwimming * this_ptr) {
        this_ptr->fields.SwimSpeed = DEFAULT_SWIM_SPEED * swim_speed_state.get();
        this_ptr->fields.HoldAToSwimLoop = false;

        if (core::settings::invert_fast_swim()) {
            auto input_cmd = types::Input_Cmd::get_class();
            auto is_jump_pressed = input_cmd->static_fields->Jump->fields.IsPressed;
            auto was_jump_pressed = input_cmd->static_fields->Jump->fields.WasPressed;

            input_cmd->static_fields->Jump->fields.IsPressed = !is_jump_pressed;
            input_cmd->static_fields->Jump->fields.WasPressed = !was_jump_pressed;
            next::SeinSwimming::UpdateSwimMovingUnderwaterState(this_ptr);
            input_cmd->static_fields->Jump->fields.IsPressed = is_jump_pressed;
            input_cmd->static_fields->Jump->fields.WasPressed = was_jump_pressed;
        } else {
            next::SeinSwimming::UpdateSwimMovingUnderwaterState(this_ptr);
        }
    }
} // namespace
