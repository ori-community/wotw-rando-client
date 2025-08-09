#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/HammerComboMoveAdapter.h>

namespace app::classes::Moon::ComboSystem::HammerComboMoveAdapter {
    IL2CPP_REGISTER_METHOD(0x00CC7710, app::AbilityType__Enum, get_ComboAbilityType, app::HammerComboMoveAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7720, void, ctor, app::HammerComboMoveAdapter* this_ptr)
} // namespace app::classes::Moon::ComboSystem::HammerComboMoveAdapter
