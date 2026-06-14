#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncRaycast.h>
#include <Modloader/app/structs/List_1_AsyncRaycast_.h>

namespace app::classes::System::Collections::Generic::List_1_AsyncRaycast_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_AsyncRaycast_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_AsyncRaycast_* this_ptr, app::AsyncRaycast* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_AsyncRaycast_* this_ptr, app::AsyncRaycast* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_AsyncRaycast_* this_ptr, app::AsyncRaycast* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_AsyncRaycast_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AsyncRaycast*, get_Item, app::List_1_AsyncRaycast_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_AsyncRaycast_
