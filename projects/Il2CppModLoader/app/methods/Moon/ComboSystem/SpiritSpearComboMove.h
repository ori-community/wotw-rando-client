#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ComboSystem::SpiritSpearComboMove {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::ComboMoveState__Enum, get_m_comboMoveState, (app::SpiritSpearComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_m_comboMoveState, (app::SpiritSpearComboMove * this_ptr, app::ComboMoveState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A794C0, app::AbilityType__Enum, get_ComboAbilityType, (app::SpiritSpearComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8950, bool, CanExecute, (app::SpiritSpearComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8AA0, void, EnterMove, (app::SpiritSpearComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8BD0, void, Interrupt, (app::SpiritSpearComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8CE0, app::CharacterState *, get_CharacterState, (app::SpiritSpearComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC8D30, float, get_TimeToStartComboWindow, (app::SpiritSpearComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC5850, void, ctor, (app::SpiritSpearComboMove * this_ptr))
}
