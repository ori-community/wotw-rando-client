#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PassiveSetupInfo {
    IL2CPP_REGISTER_METHOD(0x004465A0, int32_t, get_CurrentStateGUID, (app::PassiveSetupInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004465C0, app::SetupState *, get_State0, (app::PassiveSetupInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004465F0, app::SetupState *, get_State1, (app::PassiveSetupInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446620, app::SetupState *, GetState, (app::PassiveSetupInfo * this_ptr, app::PassiveSetupInfo_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00446670, app::MoonTimeline *, GetTransition, (app::PassiveSetupInfo * this_ptr, app::PassiveSetupInfo_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00446690, void, SetState, (app::PassiveSetupInfo * this_ptr, app::PassiveSetupInfo_State__Enum desired_state))
    IL2CPP_REGISTER_METHOD(0x00446700, void, DoTransition, (app::PassiveSetupInfo * this_ptr, app::PassiveSetupInfo_State__Enum desired_state))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PassiveSetupInfo * this_ptr))
}
