#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::SteamRemotePlay {
    IL2CPP_REGISTER_METHOD(0x0278FE20, uint32_t, GetSessionCount, ())
    IL2CPP_REGISTER_METHOD(0x0278FED0, uint32_t, GetSessionID, (int32_t i_session_index))
    IL2CPP_REGISTER_METHOD(0x0278FF80, app::CSteamID, GetSessionSteamID, (uint32_t un_session_i_d))
    IL2CPP_REGISTER_METHOD(0x027900C0, app::String *, GetSessionClientName, (uint32_t un_session_i_d))
    IL2CPP_REGISTER_METHOD(0x02790180, app::ESteamDeviceFormFactor__Enum, GetSessionClientFormFactor, (uint32_t un_session_i_d))
    IL2CPP_REGISTER_METHOD(0x02790230, bool, BGetSessionClientResolution, (uint32_t un_session_i_d, int32_t * pn_resolution_x, int32_t * pn_resolution_y))
}
