#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngine_UI_Toggle_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_UI_Toggle_.h>
#include <Modloader/app/structs/Toggle.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_UI_Toggle_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_UnityEngine_UI_Toggle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_UnityEngine_UI_Toggle_* this_ptr, app::Toggle* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Toggle*, get_Item, app::List_1_UnityEngine_UI_Toggle_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UnityEngine_UI_Toggle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_UnityEngine_UI_Toggle_* this_ptr, app::Toggle* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_UnityEngine_UI_Toggle_* this_ptr, app::Toggle* item)
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::Toggle*, Find, app::List_1_UnityEngine_UI_Toggle_* this_ptr, app::Predicate_1_UnityEngine_UI_Toggle_* match)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_UI_Toggle_
