#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_VTable.h>

namespace app::classes::Steamworks::ISteamMatchmakingServerListResponse_VTable {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ISteamMatchmakingServerListResponse_VTable * this_ptr))
}
