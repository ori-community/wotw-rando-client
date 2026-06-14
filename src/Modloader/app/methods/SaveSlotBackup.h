#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SaveSlotBackup.h>

namespace app::classes::SaveSlotBackup {
    IL2CPP_REGISTER_METHOD(0x0091D890, void, ctor, app::SaveSlotBackup* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0091D930, int32_t, IndexOfOldestSaveSlotInfo_1, app::SaveSlotBackup* this_ptr, int32_t from, int32_t to)
    IL2CPP_REGISTER_METHOD(0x0091D9D0, int32_t, TimeOfNewestSaveSlotInfo, app::SaveSlotBackup* this_ptr, int32_t from, int32_t to)
    IL2CPP_REGISTER_METHOD(0x0091DA60, int32_t, IndexOfOldestReservedSaveSlotInfo, app::SaveSlotBackup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091DA70, int32_t, IndexOfOldestGatedSaveSlotInfo, app::SaveSlotBackup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091DAA0, int32_t, TimeOfNewestGatedSaveSlotInfo, app::SaveSlotBackup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091DB40, int32_t, IndexOfOldestSaveSlotInfo_2, app::SaveSlotBackup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091DC00, int32_t, GetLargestOrderValue, app::SaveSlotBackup* this_ptr)
} // namespace app::classes::SaveSlotBackup
