#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_System_LocalDataStore_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_LocalDataStore_ * this_ptr, app::LocalDataStore* item))
    IL2CPP_REGISTER_METHODINFO(0x04742070, List_1_System_LocalDataStore__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_System_LocalDataStore_ * this_ptr, app::LocalDataStore* item))
    IL2CPP_REGISTER_METHODINFO(0x0473D578, List_1_System_LocalDataStore__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LocalDataStore*, get_Item, (app::List_1_System_LocalDataStore_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04789B08, List_1_System_LocalDataStore__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_LocalDataStore_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708178, List_1_System_LocalDataStore__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_LocalDataStore_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733AD0, List_1_System_LocalDataStore___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_LocalDataStore_
