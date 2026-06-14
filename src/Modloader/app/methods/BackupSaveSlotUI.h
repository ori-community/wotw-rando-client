#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BackupSaveSlotUI.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BackupSaveSlotUI {
    IL2CPP_REGISTER_METHOD(0x00F83480, app::Rect, get_Bounds, app::BackupSaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::BackupSaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, app::BackupSaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F836A0, void, Highlight, app::BackupSaveSlotUI* this_ptr, bool turn_on)
    IL2CPP_REGISTER_METHOD(0x00F83730, void, Apply, app::BackupSaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BackupSaveSlotUI* this_ptr)
} // namespace app::classes::BackupSaveSlotUI
