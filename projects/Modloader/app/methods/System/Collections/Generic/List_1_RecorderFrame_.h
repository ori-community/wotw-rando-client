#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_RecorderFrame_.h>
#include <Modloader/app/structs/List_1_RecorderFrame_.h>
#include <Modloader/app/structs/RecorderFrame.h>

namespace app::classes::System::Collections::Generic::List_1_RecorderFrame_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_RecorderFrame_, GetEnumerator, (app::List_1_RecorderFrame_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A648, List_1_RecorderFrame__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_RecorderFrame_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754DB0, List_1_RecorderFrame__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RecorderFrame*, get_Item, (app::List_1_RecorderFrame_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476C018, List_1_RecorderFrame__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_RecorderFrame_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047043F8, List_1_RecorderFrame__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_RecorderFrame_ * this_ptr, app::RecorderFrame* item))
    IL2CPP_REGISTER_METHODINFO(0x04714A40, List_1_RecorderFrame__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_RecorderFrame_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B9D8, List_1_RecorderFrame___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_RecorderFrame_
