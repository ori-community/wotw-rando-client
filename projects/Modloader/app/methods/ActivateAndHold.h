#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ActivateAndHold {
    IL2CPP_REGISTER_METHOD(0x004C7770, app::ILever*, get_ResolvedLever, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7830, void, Awake, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7840, void, OnEnable, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7A20, void, OnDisable, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7C00, void, Update, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7C10, void, ChangeState, (app::ActivateAndHold * this_ptr, app::ActivateAndHold_State__Enum new_state))
    IL2CPP_REGISTER_METHODINFO(0x0478B6B0, ActivateAndHold_ChangeState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C7DB0, void, EnterResting, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7E00, void, EnterForward, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7E10, void, EnterHold, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7E20, void, EnterBack, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C7E30, void, UpdateCurrentState, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703648, ActivateAndHold_UpdateCurrentState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C8170, void, OnForwardFinished, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BFD0, ActivateAndHold_OnForwardFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C8200, void, PlayTimeline, (app::ActivateAndHold * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x004C7DB0, void, StopAllTimelines, (app::ActivateAndHold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ActivateAndHold * this_ptr))
} // namespace app::classes::ActivateAndHold
