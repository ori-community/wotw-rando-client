#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayerAbilityStateMatcher {
    IL2CPP_REGISTER_METHOD(0x0140A570, void, ctor, (app::PlayerAbilityStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140A5E0, int32_t, get_EntryCount, (app::PlayerAbilityStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140A690, void, set_EntryCount, (app::PlayerAbilityStateMatcher * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0140A770, int32_t, Resolve, (app::PlayerAbilityStateMatcher * this_ptr, app::IUberState* descriptor))
    IL2CPP_REGISTER_METHOD(0x0140A960, void, AddEntry, (app::GenericDataContainer * data))
    IL2CPP_REGISTER_METHOD(0x0140AC10, app::PlayerAbilityStatePair*, GetStatePairAt, (app::PlayerAbilityStateMatcher * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0140AF60, int32_t, StateValueAt, (app::PlayerAbilityStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B020, app::AbilityType__Enum, AbilityValueAt, (app::PlayerAbilityStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B0E0, bool, HasAbilityValueAt, (app::PlayerAbilityStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B1A0, int32_t, EntryIndexToStateIndex, (int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B1B0, int32_t, EntryIndexToAbilityIndex, (int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, EntryIndexToHasAbilityIndex, (int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B1C0, app::Dictionary_2_System_Int32_System_Type_*, GetIdToTypeMap, (app::PlayerAbilityStateMatcher * this_ptr))
} // namespace app::classes::PlayerAbilityStateMatcher
