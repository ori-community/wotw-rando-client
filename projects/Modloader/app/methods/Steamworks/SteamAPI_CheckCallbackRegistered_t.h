#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::SteamAPI_CheckCallbackRegistered_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SteamAPI_CheckCallbackRegistered_t * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::SteamAPI_CheckCallbackRegistered_t * this_ptr, int32_t i_callback_num))
    IL2CPP_REGISTER_METHOD(0x027E21A0, app::IAsyncResult*, BeginInvoke, (app::SteamAPI_CheckCallbackRegistered_t * this_ptr, int32_t i_callback_num, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SteamAPI_CheckCallbackRegistered_t * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::SteamAPI_CheckCallbackRegistered_t
