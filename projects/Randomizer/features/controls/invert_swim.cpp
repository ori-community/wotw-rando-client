#include <features/controls/invert_swim.h>
#include <Core/api/game/player.h>
#include <Core/uber_states/uber_state_interface.h>

#include <interop/csharp_bridge.h>

#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/app/methods/UnityEngine/AnimationCurve.h>
#include <Modloader/app/methods/NewGameAction.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/SeinHealthController.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Core/settings.h>

using namespace app::classes;

namespace {
    constexpr float DEFAULT_SWIM_SPEED = 6.f;

    bool invert_swim = false;

    uber_states::UberState swim_speed(UberStateGroup::RandoUpgrade, 85);

    void update_swim_params() {
        auto swim = game::player::sein()->fields.Abilities->fields.SwimmingWrapper;
        if (swim->fields.HasState) {
            swim->fields.State->fields.SwimSpeed = DEFAULT_SWIM_SPEED * swim_speed.get();
            swim->fields.State->fields.HoldAToSwimLoop = false;
        }
    }

    IL2CPP_INTERCEPT(SeinSwimming, void, UpdateSwimMovingUnderwaterState, (app::SeinSwimming * this_ptr)) {
        if (invert_swim) {
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

    IL2CPP_INTERCEPT(NewGameAction, void, Perform, (app::NewGameAction * this_ptr, app::IContext * context)) {
        next::NewGameAction::Perform(this_ptr, context
        );

        update_invert_swim();

        update_swim_params();
    }

    IL2CPP_INTERCEPT(SaveGameController, void, OnFinishedLoading, (app::SaveGameController * this_ptr)) {
        next::SaveGameController::OnFinishedLoading(this_ptr);
        update_invert_swim();
        update_swim_params();
    }

    IL2CPP_INTERCEPT(SaveGameController, void, RestoreCheckpoint, (app::SaveGameController * this_ptr)) {
        next::SaveGameController::RestoreCheckpoint(this_ptr);
        update_invert_swim();
        update_swim_params();
    }

    IL2CPP_INTERCEPT(SeinHealthController, void, OnRespawn, (app::SeinHealthController * this_ptr)) {
        next::SeinHealthController::OnRespawn(this_ptr);
        update_invert_swim();
        update_swim_params();
    }

} // namespace

void update_invert_swim() {
    invert_swim = core::settings::invert_swim();
}
