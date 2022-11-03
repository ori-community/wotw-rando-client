#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::CSteamGameServerAPIContext {
    IL2CPP_REGISTER_METHOD(0x015F99B0, void, Clear, ())
    IL2CPP_REGISTER_METHOD(0x015F9AC0, bool, Init, ())
    IL2CPP_REGISTER_METHOD(0x015F9FD0, void*, GetSteamClient, ())
    IL2CPP_REGISTER_METHOD(0x015FA050, void*, GetSteamGameServer, ())
    IL2CPP_REGISTER_METHOD(0x015FA0D0, void*, GetSteamUtils, ())
    IL2CPP_REGISTER_METHOD(0x015FA150, void*, GetSteamNetworking, ())
    IL2CPP_REGISTER_METHOD(0x015FA1D0, void*, GetSteamGameServerStats, ())
    IL2CPP_REGISTER_METHOD(0x015FA250, void*, GetSteamHTTP, ())
    IL2CPP_REGISTER_METHOD(0x015FA2D0, void*, GetSteamInventory, ())
    IL2CPP_REGISTER_METHOD(0x015FA350, void*, GetSteamUGC, ())
    IL2CPP_REGISTER_METHOD(0x015FA3D0, void*, GetSteamApps, ())
} // namespace app::classes::Steamworks::CSteamGameServerAPIContext
