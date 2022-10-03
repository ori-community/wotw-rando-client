#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BackupSaveCleverMenuItemSelectionManager {
    IL2CPP_REGISTER_METHOD(0x00F81DA0, void, Awake, (app::BackupSaveCleverMenuItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F82040, void, OnEnable, (app::BackupSaveCleverMenuItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F82420, void, OnDestroy, (app::BackupSaveCleverMenuItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F82730, void, OnFinishedReadingBackups, (app::BackupSaveCleverMenuItemSelectionManager * this_ptr, int32_t save_slot_index))
    IL2CPP_REGISTER_METHODINFO(0x04733710, BackupSaveCleverMenuItemSelectionManager_OnFinishedReadingBackups__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F82D60, void, RefreshList, (app::BackupSaveCleverMenuItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83170, void, ctor, (app::BackupSaveCleverMenuItemSelectionManager * this_ptr))
} // namespace app::classes::BackupSaveCleverMenuItemSelectionManager
