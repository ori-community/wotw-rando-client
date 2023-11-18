#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SaveSlotBackupInfo_.h>
#include <Modloader/app/structs/Comparison_1_SaveSlotBackupInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_SaveSlotBackupInfo_.h>
#include <Modloader/app/structs/Predicate_1_SaveSlotBackupInfo_.h>
#include <Modloader/app/structs/SaveSlotBackupInfo.h>

namespace app::classes::System::Collections::Generic::List_1_SaveSlotBackupInfo_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SaveSlotBackupInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_1, (app::List_1_SaveSlotBackupInfo_ * this_ptr, app::IEnumerable_1_SaveSlotBackupInfo_* collection))
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_SaveSlotBackupInfo_ * this_ptr, app::Predicate_1_SaveSlotBackupInfo_* match))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_SaveSlotBackupInfo_ * this_ptr, app::Comparison_1_SaveSlotBackupInfo_* comparison))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (app::List_1_SaveSlotBackupInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SaveSlotBackupInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SaveSlotBackupInfo*, get_Item, (app::List_1_SaveSlotBackupInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_SaveSlotBackupInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_SaveSlotBackupInfo_
