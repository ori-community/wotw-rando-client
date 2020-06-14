#include <pch.h>
#include <interception_macros.h>
#include <dll_main.h>
#include <features/invert_swim.h>

namespace
{
    BINDING(34965920, UnityEngine_AnimationCurve_o*, UnityEngine_AnimationCurve__EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));
}

void set_swim_params(float normal, float boost) {
    auto swim = get_sein()->Abilities->SwimmingWrapper;
    if (swim->HasState)
    {
        swim->State->SwimSpeed = normal;
        swim->State->SwimSpeedBoostCurve = UnityEngine_AnimationCurve__EaseInOut(0.05, 1.f, 0.2, boost / normal);
    }
}

void invert_swim() {
  if(csharp_lib->call<bool>("InvertSwim"))
    // Default boosted speed is 9.59... so we use 9.6
    set_swim_params(9.6f, 6.f);
}
