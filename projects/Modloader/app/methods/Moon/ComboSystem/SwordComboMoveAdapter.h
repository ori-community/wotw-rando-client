#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/SwordComboMoveAdapter.h>

namespace app::classes::Moon::ComboSystem::SwordComboMoveAdapter {
    IL2CPP_REGISTER_METHOD(0x00CC8D40, app::AbilityType__Enum, get_ComboAbilityType, app::SwordComboMoveAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7720, void, ctor, app::SwordComboMoveAdapter* this_ptr)
} // namespace app::classes::Moon::ComboSystem::SwordComboMoveAdapter
