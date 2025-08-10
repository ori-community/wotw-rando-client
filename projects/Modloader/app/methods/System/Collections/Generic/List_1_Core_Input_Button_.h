#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Input_Button__Enum.h>
#include <Modloader/app/structs/List_1_Core_Input_Button_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Core_Input_Button_.h>

namespace app::classes::System::Collections::Generic::List_1_Core_Input_Button_ {
    IL2CPP_REGISTER_METHOD(0x02D201B0, app::List_1_T_Enumerator_Core_Input_Button_, GetEnumerator, app::List_1_Core_Input_Button_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Core_Input_Button_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, app::List_1_Core_Input_Button_* this_ptr, app::Input_Button__Enum item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Core_Input_Button_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Core_Input_Button_
