#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_ILever_.h>
#include <Modloader/app/structs/ILever.h>

namespace app::classes::System::Collections::Generic::List_1_ILever_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ILever_ * this_ptr, app::ILever* item))
    IL2CPP_REGISTER_METHODINFO(0x0477ADE0, List_1_ILever__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_ILever_ * this_ptr, app::ILever* item))
    IL2CPP_REGISTER_METHODINFO(0x04799C10, List_1_ILever__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ILever_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719840, List_1_ILever___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ILever*, get_Item, (app::List_1_ILever_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474CAD0, List_1_ILever__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ILever_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AA60, List_1_ILever__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_ILever_
