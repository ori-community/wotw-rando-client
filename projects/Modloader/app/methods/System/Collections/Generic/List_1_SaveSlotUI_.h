#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SaveSlotUI_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SaveSlotUI_.h>
#include <Modloader/app/structs/Predicate_1_SaveSlotUI_.h>
#include <Modloader/app/structs/SaveSlotUI.h>

namespace app::classes::System::Collections::Generic::List_1_SaveSlotUI_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SaveSlotUI_ * this_ptr, app::SaveSlotUI* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SaveSlotUI*, get_Item, (app::List_1_SaveSlotUI_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_SaveSlotUI_ * this_ptr, int32_t index, app::SaveSlotUI* value))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SaveSlotUI_, GetEnumerator, (app::List_1_SaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_SaveSlotUI_ * this_ptr, app::Predicate_1_SaveSlotUI_* match))
} // namespace app::classes::System::Collections::Generic::List_1_SaveSlotUI_
