#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Panel_.h>
#include <Modloader/app/structs/Panel.h>

namespace app::classes::System::Collections::Generic::List_1_Panel_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Panel_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047088A8, List_1_Panel__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Panel*, get_Item, (app::List_1_Panel_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04727448, List_1_Panel__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Panel_
