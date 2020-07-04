#include <interception_macros.h>
#include <dll_main.h>
#include <features/invert_swim.h>

#include <csharp_bridge.h>

namespace
{
    BINDING(34965920, app::AnimationCurve*, UnityEngine_AnimationCurve__EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));
}

void set_swim_params(float normal, float boost) {
    auto swim = get_sein()->fields.Abilities->fields.SwimmingWrapper;
    if (swim->fields.HasState)
    {
        swim->fields.State->fields.SwimSpeed = normal;
        swim->fields.State->fields.SwimSpeedBoostCurve = UnityEngine_AnimationCurve__EaseInOut(0.05, 1.f, 0.2, boost / normal);
    }
}

void invert_swim() {
    // Default boosted speed is 9.59... so we use 9.6
    if(csharp_bridge::invert_swim())
        set_swim_params(9.6f, 6.f);
    else
        set_swim_params(6.f, 9.6f);
}

namespace
{
    INTERCEPT(6709008, void, NewGameAction__Perform, (__int64 thisPtr, __int64 ctxPtr)) {
        NewGameAction__Perform(thisPtr, ctxPtr);
        invert_swim();
    }

    INTERCEPT(8252224, void, SaveGameController__OnFinishedLoading, (app::SaveGameController* thisPtr)) {
        SaveGameController__OnFinishedLoading(thisPtr);
        invert_swim();
    }

    INTERCEPT(8249872, void, SaveGameController__RestoreCheckpoint, (app::SaveGameController* thisPtr)) {
        SaveGameController__RestoreCheckpoint(thisPtr);
        invert_swim();
    }

    INTERCEPT(18324032, void, SeinHealthController__OnRespawn, (app::SeinHealthController* thisPtr)) {
        SeinHealthController__OnRespawn(thisPtr);
        invert_swim();
    }
}
