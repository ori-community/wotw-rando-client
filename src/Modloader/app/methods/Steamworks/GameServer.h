#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EServerMode__Enum.h>
#include <Modloader/app/structs/HSteamPipe.h>
#include <Modloader/app/structs/HSteamUser.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::GameServer {
    IL2CPP_REGISTER_METHOD(
        0x015FAEF0,
        bool,
        Init,
        uint32_t un_i_p,
        uint16_t us_steam_port,
        uint16_t us_game_port,
        uint16_t us_query_port,
        app::EServerMode__Enum e_server_mode,
        app::String* pch_version_string
    )
    IL2CPP_REGISTER_METHOD(0x015FB200, void, Shutdown, )
    IL2CPP_REGISTER_METHOD(0x015FB390, void, RunCallbacks, )
    IL2CPP_REGISTER_METHOD(0x015FB420, void, ReleaseCurrentThreadMemory, )
    IL2CPP_REGISTER_METHOD(0x015FB4B0, bool, BSecure, )
    IL2CPP_REGISTER_METHOD(0x015FB540, app::CSteamID, GetSteamID, )
    IL2CPP_REGISTER_METHOD(0x015FB650, app::HSteamPipe, GetHSteamPipe, )
    IL2CPP_REGISTER_METHOD(0x015FB6E0, app::HSteamUser, GetHSteamUser, )
} // namespace app::classes::Steamworks::GameServer
