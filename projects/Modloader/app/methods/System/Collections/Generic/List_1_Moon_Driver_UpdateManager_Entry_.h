#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/IComparer_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/UpdateManager_Entry.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Driver_UpdateManager_Entry_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::IEnumerable_1_Moon_Driver_UpdateManager_Entry_* collection))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::UpdateManager_Entry*, get_Item, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1E380, int32_t, BinarySearch, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::UpdateManager_Entry* item, app::IComparer_1_Moon_Driver_UpdateManager_Entry_* comparer))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, int32_t index, app::UpdateManager_Entry* item))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Driver_UpdateManager_Entry_, GetEnumerator, (app::List_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Driver_UpdateManager_Entry_
