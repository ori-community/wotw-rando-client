#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_VTable.h>

namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse_VTable {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ISteamMatchmakingRulesResponse_VTable * this_ptr))
}
