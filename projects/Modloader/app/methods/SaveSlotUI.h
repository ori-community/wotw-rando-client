#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SaveSlotInfo.h>
#include <Modloader/app/structs/SaveSlotUI.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SaveSlotUI {
    IL2CPP_REGISTER_METHOD(0x009238D0, void, OnDrawGizmos, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00923B20, app::Rect, get_Bounds, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00923D50, bool, get_CanBeCopied, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00923D70, bool, get_HasSave, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00923EE0, void, OnEnable, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00924200, void, Awake, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009242A0, void, OnDestroy, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00924340, void, Start, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00924490, void, Highlight, app::SaveSlotUI* this_ptr, bool turn_on)
    IL2CPP_REGISTER_METHOD(0x00924640, void, RefreshBackupsIfTheyNeedIt, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00924700, void, ClearBackupSaveSlots, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFinishedReadingBackups, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009248C0, void, FixedUpdate, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00924D50, void, ChangeSelectionIndex, app::SaveSlotUI* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00925160, void, SetCopying, app::SaveSlotUI* this_ptr, bool turn_on)
    IL2CPP_REGISTER_METHOD(0x009251F0, void, SetDeleting, app::SaveSlotUI* this_ptr, bool turn_on)
    IL2CPP_REGISTER_METHOD(0x00925290, void, SetBusy, app::SaveSlotUI* this_ptr, bool turn_on)
    IL2CPP_REGISTER_METHOD(0x009253B0, app::SaveSlotInfo*, get_SaveSlot, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009253C0, bool, get_IsReady, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00925400, bool, get_IsCompleted, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00925450, int32_t, get_BackupIndex, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00925620, app::MessageDescriptor, DifficultyModeToMessage, app::SaveSlotUI* this_ptr, app::DifficultyMode__Enum difficulty)
    IL2CPP_REGISTER_METHOD(0x00925730, void, Apply, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00926B00, bool, get_IsSuspended, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00926B10, void, set_IsSuspended, app::SaveSlotUI* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0068A510, app::SuspendableMask__Enum, get_Mask, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00926B20, void, set_Mask, app::SaveSlotUI* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00926BE0, void, RefreshBackups, app::SaveSlotUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00926CB0, void, ctor, app::SaveSlotUI* this_ptr)
} // namespace app::classes::SaveSlotUI
