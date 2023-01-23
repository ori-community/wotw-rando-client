#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_System_Uri_.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Collections::Generic::List_1_System_Uri_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Uri_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748508, List_1_System_Uri___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Uri*, get_Item, (app::List_1_System_Uri_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474DD68, List_1_System_Uri__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Uri_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E888, List_1_System_Uri__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Uri_ * this_ptr, app::Uri* item))
    IL2CPP_REGISTER_METHODINFO(0x0478F000, List_1_System_Uri__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Uri_
