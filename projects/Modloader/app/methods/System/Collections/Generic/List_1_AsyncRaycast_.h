#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_AsyncRaycast_.h>
#include <Modloader/app/structs/AsyncRaycast.h>

namespace app::classes::System::Collections::Generic::List_1_AsyncRaycast_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_AsyncRaycast_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A640, List_1_AsyncRaycast___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_AsyncRaycast_ * this_ptr, app::AsyncRaycast* item))
    IL2CPP_REGISTER_METHODINFO(0x0470FA10, List_1_AsyncRaycast__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_AsyncRaycast_ * this_ptr, app::AsyncRaycast* item))
    IL2CPP_REGISTER_METHODINFO(0x047845A0, List_1_AsyncRaycast__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_AsyncRaycast_ * this_ptr, app::AsyncRaycast* item))
    IL2CPP_REGISTER_METHODINFO(0x04742CC8, List_1_AsyncRaycast__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_AsyncRaycast_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782318, List_1_AsyncRaycast__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AsyncRaycast*, get_Item, (app::List_1_AsyncRaycast_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047077B8, List_1_AsyncRaycast__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_AsyncRaycast_
