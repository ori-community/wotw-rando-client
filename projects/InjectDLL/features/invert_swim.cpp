#include <dll_main.h>
#include <features/invert_swim.h>

#include <csharp_bridge.h>

#include <Il2CppModLoader/interception_macros.h>

namespace
{
    STATIC_IL2CPP_BINDING(UnityEngine, AnimationCurve, app::AnimationCurve*, EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));

    void set_swim_params(float normal, float boost) {
        auto swim = get_sein()->fields.Abilities->fields.SwimmingWrapper;
        if (swim->fields.HasState)
        {
            swim->fields.State->fields.SwimSpeed = normal;
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
        set_swim_params(9.6f, 6.f);
    else
        set_swim_params(6.f, 9.6f);
}
