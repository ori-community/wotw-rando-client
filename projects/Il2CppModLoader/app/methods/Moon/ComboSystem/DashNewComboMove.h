#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ComboSystem::DashNewComboMove {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::ComboMoveState__Enum, get_m_comboMoveState, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_m_comboMoveState, (app::DashNewComboMove * this_ptr, app::ComboMoveState__Enum value))
    IL2CPP_REGISTER_METHOD(0x006FB830, app::AbilityType__Enum, get_ComboAbilityType, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC6670, bool, CanExecute, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC6780, void, EnterMove, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC68E0, void, Interrupt, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC69F0, app::CharacterState *, get_CharacterState, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC6A40, bool, get_IsAttackButtonDown, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC6B80, bool, get_OnAttackButtonPressed, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC6CD0, bool, get_OnAttackButtonReleased, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A244F0, float, get_TimeToStartComboWindow, (app::DashNewComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC5850, void, ctor, (app::DashNewComboMove * this_ptr))
}
