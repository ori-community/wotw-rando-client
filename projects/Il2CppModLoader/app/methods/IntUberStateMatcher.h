#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IntUberStateMatcher {
    IL2CPP_REGISTER_METHOD(0x01B5F170, void, ctor, (app::IntUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5F1E0, int32_t, get_EntryCount, (app::IntUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5F290, void, set_EntryCount, (app::IntUberStateMatcher * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01B5F370, int32_t, Resolve, (app::IntUberStateMatcher * this_ptr, app::IUberState* descriptor))
    IL2CPP_REGISTER_METHOD(0x01B5F4D0, void, AddEntry, (app::GenericDataContainer * data))
    IL2CPP_REGISTER_METHOD(0x01B5F6F0, app::IntUberStateMatcher_IntRangeUberStatePair*, GetStatePairAt, (app::IntUberStateMatcher * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01B5F9A0, int32_t, StateValueAt, (app::IntUberStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x01B5FA60, int32_t, GetValueAt, (app::IntUberStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B1A0, int32_t, EntryIndexToStateIndex, (int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B1B0, int32_t, EntryIndexToValueIndex, (int32_t entry_index))
} // namespace app::classes::IntUberStateMatcher
