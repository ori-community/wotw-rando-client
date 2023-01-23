#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_SetupState_.h>
#include <Modloader/app/structs/SetupState.h>

namespace app::classes::System::Collections::Generic::List_1_SetupState_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SetupState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BE00, List_1_SetupState__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SetupState*, get_Item, (app::List_1_SetupState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04790438, List_1_SetupState__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SetupState_ * this_ptr, app::SetupState* item))
    IL2CPP_REGISTER_METHODINFO(0x0474D408, List_1_SetupState__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SetupState_ * this_ptr, app::SetupState* item))
    IL2CPP_REGISTER_METHODINFO(0x0478F3C0, List_1_SetupState__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SetupState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F6F8, List_1_SetupState___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SetupState_
