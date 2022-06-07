#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BackupSaveCleverMenuItem {
    IL2CPP_REGISTER_METHOD(0x00F814B0, void, OnDisable, (app::BackupSaveCleverMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F81610, void, SetData, (app::BackupSaveCleverMenuItem * this_ptr, app::SaveSlotInfo * save_slot, int32_t save_slot_index, int32_t display_index))
    IL2CPP_REGISTER_METHOD(0x00F81D50, void, OnPress, (app::BackupSaveCleverMenuItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753760, BackupSaveCleverMenuItem_OnPress__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F81D90, void, ctor, (app::BackupSaveCleverMenuItem * this_ptr))
}
