#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/List_1_RuntimeQuest_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_RuntimeQuest_.h>

namespace app::classes::System::Collections::Generic::List_1_RuntimeQuest_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RuntimeQuest*, get_Item, (app::List_1_RuntimeQuest_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04732EC8, List_1_RuntimeQuest__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_RuntimeQuest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785040, List_1_RuntimeQuest__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_RuntimeQuest_, GetEnumerator, (app::List_1_RuntimeQuest_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A6D0, List_1_RuntimeQuest__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_RuntimeQuest_
