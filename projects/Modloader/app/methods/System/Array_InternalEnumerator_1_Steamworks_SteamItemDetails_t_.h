#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/SteamItemDetails_t.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B22F0, app::SteamItemDetails_t, get_Current, (app::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047133E0, Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001B2320, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_Steamworks_SteamItemDetails_t_
