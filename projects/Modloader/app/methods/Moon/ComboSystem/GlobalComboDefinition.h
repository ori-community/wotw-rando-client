#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ComboSystem::GlobalComboDefinition {
    IL2CPP_REGISTER_METHOD(0x00CC6E10, void, InitializeDictionary, (app::GlobalComboDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC7450, app::ComboDataEntry*, GetComboDataEntryByType, (app::GlobalComboDefinition * this_ptr, app::Type* combo_type))
    IL2CPP_REGISTER_METHOD(0x00CC7530, app::MeleeComboMoveSettings*, GetMeleeSpecificComboSettings, (app::GlobalComboDefinition * this_ptr, app::Type* combo_type))
    IL2CPP_REGISTER_METHOD(0x00CC7620, app::ComboMoveSettings*, GetComboSettings, (app::GlobalComboDefinition * this_ptr, app::Type* combo_type))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::GlobalComboDefinition * this_ptr))
} // namespace app::classes::Moon::ComboSystem::GlobalComboDefinition
