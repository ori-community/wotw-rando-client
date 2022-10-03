#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, void* thisptr))
    IL2CPP_REGISTER_METHOD(0x015FD9B0, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, void* thisptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersRefreshComplete
