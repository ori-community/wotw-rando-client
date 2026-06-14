#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/TorchComboMoveAdapter.h>

namespace app::classes::Moon::ComboSystem::TorchComboMoveAdapter {
    IL2CPP_REGISTER_METHOD(0x009C15E0, app::AbilityType__Enum, get_ComboAbilityType, app::TorchComboMoveAdapter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC7720, void, ctor, app::TorchComboMoveAdapter* this_ptr)
} // namespace app::classes::Moon::ComboSystem::TorchComboMoveAdapter
