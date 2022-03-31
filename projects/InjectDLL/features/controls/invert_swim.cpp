#include <dll_main.h>
#include <features/controls/invert_swim.h>

#include <csharp_bridge.h>

#include <Il2CppModLoader/interception_macros.h>
#include <uber_states\uber_state_manager.h>

namespace
{
    constexpr float DEFAULT_SWIM_SPEED = 6.f;
    constexpr float DEFAULT_BOOSTED_SWIM_SPEED = 9.6f;

    constexpr int SWIM_SPEED_MULTIPLIER = 85;

    STATIC_IL2CPP_BINDING(UnityEngine, AnimationCurve, app::AnimationCurve*, EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));

    void set_swim_params(float normal, float boost) {
        auto swim = get_sein()->fields.Abilities->fields.SwimmingWrapper;
        if (swim->fields.HasState)
        {
            swim->fields.State->fields.SwimSpeed = normal * uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, SWIM_SPEED_MULTIPLIER);
            swim->fields.State->fields.SwimSpeedBoostCurve = AnimationCurve::EaseInOut(0.05, 1.f, 0.2, boost / normal);
        }
    }

    IL2CPP_INTERCEPT(, NewGameAction, void, Perform, (__int64 thisPtr, __int64 ctxPtr)) {
        NewGameAction::Perform(thisPtr, ctxPtr);
        invert_swim();
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, OnFinishedLoading, (app::SaveGameController* thisPtr)) {
        SaveGameController::OnFinishedLoading(thisPtr);
        invert_swim();
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, RestoreCheckpoint, (app::SaveGameController* thisPtr)) {
        SaveGameController::RestoreCheckpoint(thisPtr);
        invert_swim();
    }

    IL2CPP_INTERCEPT(, SeinHealthController, void, OnRespawn, (app::SeinHealthController* thisPtr)) {
        SeinHealthController::OnRespawn(thisPtr);
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
