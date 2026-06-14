#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/ComboMoveState__Enum.h>
#include <Modloader/app/structs/SpiritLeashComboMove.h>

namespace app::classes::Moon::ComboSystem::SpiritLeashComboMove {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::ComboMoveState__Enum, get_m_comboMoveState, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_m_comboMoveState, app::SpiritLeashComboMove* this_ptr, app::ComboMoveState__Enum value)
    IL2CPP_REGISTER_METHOD(0x006FB830, app::AbilityType__Enum, get_ComboAbilityType, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC8310, bool, CanExecute, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC5250, void, EnterMove, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC8420, void, Interrupt, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC8530, app::CharacterState*, get_CharacterState, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC8580, bool, get_IsAttackButtonDown, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC86C0, bool, get_OnAttackButtonPressed, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC8810, bool, get_OnAttackButtonReleased, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A244F0, float, get_TimeToStartComboWindow, app::SpiritLeashComboMove* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC5850, void, ctor, app::SpiritLeashComboMove* this_ptr)
} // namespace app::classes::Moon::ComboSystem::SpiritLeashComboMove
