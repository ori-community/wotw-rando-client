#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatUberStateMatcher.h>
#include <Modloader/app/structs/FloatRangeUberStatePair.h>
#include <Modloader/app/structs/GenericDataContainer.h>
#include <Modloader/app/structs/IUberState.h>

namespace app::classes::FloatUberStateMatcher {
    IL2CPP_REGISTER_METHOD(0x01B5BC20, void, ctor, (app::FloatUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5BC90, int32_t, get_EntryCount, (app::FloatUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5BD40, void, set_EntryCount, (app::FloatUberStateMatcher * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01B5BE20, int32_t, Resolve, (app::FloatUberStateMatcher * this_ptr, app::IUberState* descriptor))
    IL2CPP_REGISTER_METHOD(0x01B5BF90, void, AddEntry, (app::GenericDataContainer * data))
    IL2CPP_REGISTER_METHOD(0x01B5C240, app::FloatRangeUberStatePair*, GetStatePairAt, (app::FloatUberStateMatcher * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01B5C590, int32_t, StateValueAt, (app::FloatUberStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x01B5C650, float, MinValueAt, (app::FloatUberStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x01B5C710, float, MaxValueAt, (app::FloatUberStateMatcher * this_ptr, int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x01B5C7D0, int32_t, EntryIndexToStateIndex, (int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x01B5C7E0, int32_t, EntryIndexToMinIndex, (int32_t entry_index))
    IL2CPP_REGISTER_METHOD(0x0140B1A0, int32_t, EntryIndexToMaxIndex, (int32_t entry_index))
} // namespace app::classes::FloatUberStateMatcher
