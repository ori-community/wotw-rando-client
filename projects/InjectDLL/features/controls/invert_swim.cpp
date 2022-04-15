#include <game/player.h>
#include <features/controls/invert_swim.h>
#include <uber_states/uber_state_interface.h>

#include <interop/csharp_bridge.h>

#include <Il2CppModLoader/interception_macros.h>

namespace
{
    constexpr float DEFAULT_SWIM_SPEED = 6.f;
    constexpr float DEFAULT_BOOSTED_SWIM_SPEED = 9.6f;

    STATIC_IL2CPP_BINDING(UnityEngine, AnimationCurve, app::AnimationCurve*, EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));

    uber_states::UberState swim_speed(UberStateGroup::RandoUpgrade, 85);
    void set_swim_params(float normal, float boost) {
        auto swim = game::player::sein()->fields.Abilities->fields.SwimmingWrapper;
        if (swim->fields.HasState)
        {
            swim->fields.State->fields.SwimSpeed = normal * swim_speed.get();
            swim->fields.State->fields.SwimSpeedBoostCurve = AnimationCurve::EaseInOut(0.05, 1.f, 0.2, boost / normal);
        }
    }

    IL2CPP_INTERCEPT(, NewGameAction, void, Perform, (__int64 this_ptr, __int64 ctxPtr)) {
        NewGameAction::Perform(this_ptr, ctxPtr);
        invert_swim();
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, OnFinishedLoading, (app::SaveGameController* this_ptr)) {
        SaveGameController::OnFinishedLoading(this_ptr);
        invert_swim();
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, RestoreCheckpoint, (app::SaveGameController* this_ptr)) {
        SaveGameController::RestoreCheckpoint(this_ptr);
        invert_swim();
    }

    IL2CPP_INTERCEPT(, SeinHealthController, void, OnRespawn, (app::SeinHealthController* this_ptr)) {
        SeinHealthController::OnRespawn(this_ptr);
        invert_swim();
    }
}

void invert_swim() {
    // Default boosted speed is 9.59... so we use 9.6
    if (csharp_bridge::invert_swim())
        set_swim_params(DEFAULT_BOOSTED_SWIM_SPEED, DEFAULT_SWIM_SPEED);
    else
        set_swim_params(DEFAULT_SWIM_SPEED, DEFAULT_BOOSTED_SWIM_SPEED);
}
