#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_DropPickup_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_DropPickup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047556A8, List_1_DropPickup__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_DropPickup_ * this_ptr, app::DropPickup * item))
    IL2CPP_REGISTER_METHODINFO(0x0476F358, List_1_DropPickup__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_DropPickup_ * this_ptr, app::DropPickup * item))
    IL2CPP_REGISTER_METHODINFO(0x047726E0, List_1_DropPickup__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DropPickup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A4B8, List_1_DropPickup__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DropPickup *, get_Item, (app::List_1_DropPickup_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047100F0, List_1_DropPickup__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DropPickup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768980, List_1_DropPickup___ctor__MethodInfo)
}
