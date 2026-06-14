#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_VTable.h>

namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_VTable {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ISteamMatchmakingPlayersResponse_VTable* this_ptr)
}
