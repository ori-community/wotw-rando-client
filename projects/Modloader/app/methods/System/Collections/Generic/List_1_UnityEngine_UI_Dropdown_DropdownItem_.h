#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Dropdown_DropdownItem_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_UI_Dropdown_DropdownItem_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_UnityEngine_UI_Dropdown_DropdownItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_UnityEngine_UI_Dropdown_DropdownItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UnityEngine_UI_Dropdown_DropdownItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Dropdown_DropdownItem*, get_Item, app::List_1_UnityEngine_UI_Dropdown_DropdownItem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_UnityEngine_UI_Dropdown_DropdownItem_* this_ptr, app::Dropdown_DropdownItem* item)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_UI_Dropdown_DropdownItem_
