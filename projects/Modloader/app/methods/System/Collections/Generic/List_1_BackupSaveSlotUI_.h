#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_BackupSaveSlotUI_.h>
#include <Modloader/app/structs/BackupSaveSlotUI.h>
#include <Modloader/app/structs/List_1_BackupSaveSlotUI_.h>

namespace app::classes::System::Collections::Generic::List_1_BackupSaveSlotUI_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_BackupSaveSlotUI_, GetEnumerator, (app::List_1_BackupSaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_BackupSaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_BackupSaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::BackupSaveSlotUI*, get_Item, (app::List_1_BackupSaveSlotUI_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_BackupSaveSlotUI_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_BackupSaveSlotUI_
