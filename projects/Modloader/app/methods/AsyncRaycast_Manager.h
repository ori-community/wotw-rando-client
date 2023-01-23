#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AsyncRaycast_Manager.h>
#include <Modloader/app/structs/AsyncRaycast.h>

namespace app::classes::AsyncRaycast_Manager {
    IL2CPP_REGISTER_METHOD(0x00842CF0, app::AsyncRaycast_Manager*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00842F80, void, ctor, (app::AsyncRaycast_Manager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008430D0, void, AddInstance, (app::AsyncRaycast_Manager * this_ptr, app::AsyncRaycast* arc))
    IL2CPP_REGISTER_METHOD(0x00843290, void, RemoveInstance, (app::AsyncRaycast_Manager * this_ptr, app::AsyncRaycast* arc))
    IL2CPP_REGISTER_METHOD(0x00843450, void, RefreshBufferCapacity, (app::AsyncRaycast_Manager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008436F0, void, ScheduleCasts, (app::AsyncRaycast_Manager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00843AA0, void, CompleteCasts, (app::AsyncRaycast_Manager * this_ptr))
} // namespace app::classes::AsyncRaycast_Manager
