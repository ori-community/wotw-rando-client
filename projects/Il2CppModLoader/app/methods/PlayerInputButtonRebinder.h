#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerInputButtonRebinder {
    IL2CPP_REGISTER_METHOD(0x0141CC70, bool, IsAbilityBlocked, (app::PlayerInputButtonRebinder * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x0141CDB0, void, Awake, (app::PlayerInputButtonRebinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0141CE40, void, OnDestory, (app::PlayerInputButtonRebinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0141CF20, void, Serialize, (app::PlayerInputButtonRebinder * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0141D240, void, BeginButtonBlocking, (app::PlayerInputButtonRebinder * this_ptr, app::Input_Command__Enum button))
    IL2CPP_REGISTER_METHOD(0x0141D3A0, void, EndButtonBlocking, (app::PlayerInputButtonRebinder * this_ptr, app::Input_Command__Enum button))
    IL2CPP_REGISTER_METHOD(0x0141D490, void, BeginButtonOverride, (app::PlayerInputButtonRebinder * this_ptr, app::Input_Command__Enum button, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x0141D600, void, EndButtonOverride, (app::PlayerInputButtonRebinder * this_ptr, app::Input_Command__Enum button))
    IL2CPP_REGISTER_METHOD(0x0141D800, void, BindButton, (app::PlayerInputButtonRebinder * this_ptr, app::AbilityType__Enum ability, app::Input_Command__Enum button))
    IL2CPP_REGISTER_METHOD(0x0141DA70, app::Input_Command__Enum, GetCommand, (app::PlayerInputButtonRebinder * this_ptr, app::AbilityType__Enum ability, app::PlayerInputButtonRebinder_Request__Enum request))
    IL2CPP_REGISTER_METHOD(0x0141DDB0, app::AbilityType__Enum, GetAbility, (app::PlayerInputButtonRebinder * this_ptr, app::Input_Command__Enum button, app::PlayerInputButtonRebinder_Request__Enum request))
    IL2CPP_REGISTER_METHOD(0x0141DFA0, bool, IsAbilityAssigned, (app::PlayerInputButtonRebinder * this_ptr, app::AbilityType__Enum ability_type))
    IL2CPP_REGISTER_METHOD(0x0141DFC0, void, OnEnable, (app::PlayerInputButtonRebinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0141E150, void, OnDisable, (app::PlayerInputButtonRebinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0141E2E0, void, OnGameReset, (app::PlayerInputButtonRebinder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047697E8, PlayerInputButtonRebinder_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0141E6B0, void, ctor, (app::PlayerInputButtonRebinder * this_ptr))
}
