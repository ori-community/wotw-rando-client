#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Game::DashableSwitch {
    IL2CPP_REGISTER_METHOD(0x00A09730, void, Reset, (app::DashableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, ShouldCreateCheckpoint, (app::DashableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01523B50, bool, get_IsOn, (app::DashableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsOn, (app::DashableSwitch * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01523C60, bool, get_IsUberStateInActivatedState, (app::DashableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01523D60, bool, get_IsPlayingTransitionAnimation, (app::DashableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01523D80, bool, HitFromTop, (app::DashableSwitch * this_ptr, app::Vector3 impact_velocity))
    IL2CPP_REGISTER_METHOD(0x01523F10, void, OnCollisionEnter, (app::DashableSwitch * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x01524100, void, OnDashHit, (app::DashableSwitch * this_ptr, app::Vector3 impact_velocity))
    IL2CPP_REGISTER_METHOD(0x015241F0, void, PushButton, (app::DashableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015243F0, void, RecedeSlightly, (app::DashableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015244D0, void, Perform, (app::DashableSwitch * this_ptr, app::DashableSwitchSetupData * setup_data))
    IL2CPP_REGISTER_METHOD(0x01524730, void, ctor, (app::DashableSwitch * this_ptr))
}
