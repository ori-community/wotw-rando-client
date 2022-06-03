#include <features/controls/invert_swim.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>

#include <interop/csharp_bridge.h>

#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <settings.h>

namespace {
    constexpr float DEFAULT_SWIM_SPEED = 6.f;
    constexpr float DEFAULT_BOOSTED_SWIM_SPEED = 9.6f;

    bool invert_swim = false;

    STATIC_IL2CPP_BINDING(UnityEngine, AnimationCurve, app::AnimationCurve*, EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));

    uber_states::UberState swim_speed(UberStateGroup::RandoUpgrade, 85);
    void update_swim_params() {
        auto swim = game::player::sein()->fields.Abilities->fields.SwimmingWrapper;
        if (swim->fields.HasState) {
            swim->fields.State->fields.SwimSpeed = DEFAULT_SWIM_SPEED * swim_speed.get();
            swim->fields.State->fields.HoldAToSwimLoop = false;
        }
    }

    IL2CPP_INTERCEPT(, SeinSwimming, void, UpdateSwimMovingUnderwaterState, (app::SeinSwimming * this_ptr)) {
        if (invert_swim) {
            auto input_cmd = il2cpp::get_nested_class<app::Input_Cmd__Class>("Core", "Input", "Cmd");
            auto is_jump_pressed = input_cmd->static_fields->Jump->fields.IsPressed;

            input_cmd->static_fields->Jump->fields.IsPressed = !is_jump_pressed;
            SeinSwimming::UpdateSwimMovingUnderwaterState(this_ptr);
            input_cmd->static_fields->Jump->fields.IsPressed = is_jump_pressed;
        } else {
            SeinSwimming::UpdateSwimMovingUnderwaterState(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(, NewGameAction, void, Perform, (app::NewGameAction * this_ptr, app::IContext* context)) {
        NewGameAction::Perform(this_ptr, context);
        update_invert_swim();
        update_swim_params();
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, OnFinishedLoading, (app::SaveGameController * this_ptr)) {
        SaveGameController::OnFinishedLoading(this_ptr);
        update_invert_swim();
        update_swim_params();
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, RestoreCheckpoint, (app::SaveGameController * this_ptr)) {
        SaveGameController::RestoreCheckpoint(this_ptr);
        update_invert_swim();
        update_swim_params();
    }

    IL2CPP_INTERCEPT(, SeinHealthController, void, OnRespawn, (app::SeinHealthController * this_ptr)) {
        SeinHealthController::OnRespawn(this_ptr);
        update_invert_swim();
        update_swim_params();
    }
} // namespace

void update_invert_swim() {
    invert_swim = randomizer::settings::invert_swim();
}
