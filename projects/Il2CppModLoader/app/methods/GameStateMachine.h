#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GameStateMachine {
    IL2CPP_REGISTER_METHOD(0x00403F70, app::GameStateMachine*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::GameStateMachine_State__Enum, get_CurrentState, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_CurrentState, (app::GameStateMachine * this_ptr, app::GameStateMachine_State__Enum value))
    IL2CPP_REGISTER_METHOD(0x004040D0, bool, get_IsGame, ())
    IL2CPP_REGISTER_METHOD(0x00404110, bool, IsInExtendedTitleScreen, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC780, void, SetToLogos, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00404170, void, SetToStartScreen, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00404250, void, SetToTitleScreen, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00404330, void, SetToGame, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00404490, void, SetToWatchCutscene, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00404580, void, SetToTrialEnd, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00404590, void, SetToPrologue, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004046B0, void, SetToMenuRace, (app::GameStateMachine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameStateMachine * this_ptr))
} // namespace app::classes::GameStateMachine
