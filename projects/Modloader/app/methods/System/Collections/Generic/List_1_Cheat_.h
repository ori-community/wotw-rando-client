#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Cheat_.h>
#include <Modloader/app/structs/Cheat.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Cheat_.h>

namespace app::classes::System::Collections::Generic::List_1_Cheat_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Cheat_ * this_ptr, app::Cheat* item))
    IL2CPP_REGISTER_METHODINFO(0x04743B80, List_1_Cheat__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Cheat_, GetEnumerator, (app::List_1_Cheat_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475EDD8, List_1_Cheat__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Cheat*, get_Item, (app::List_1_Cheat_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04744F88, List_1_Cheat__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Cheat_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D5B0, List_1_Cheat__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Cheat_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759788, List_1_Cheat___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Cheat_
