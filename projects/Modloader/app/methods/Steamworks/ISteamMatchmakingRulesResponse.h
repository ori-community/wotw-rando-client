#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISteamMatchmakingRulesResponse.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesResponded.h>

namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse {
    IL2CPP_REGISTER_METHOD(0x015FDA70, void, ctor, (app::ISteamMatchmakingRulesResponse * this_ptr, app::ISteamMatchmakingRulesResponse_RulesResponded* on_rules_responded, app::ISteamMatchmakingRulesResponse_RulesFailedToRespond* on_rules_failed_to_respond, app::ISteamMatchmakingRulesResponse_RulesRefreshComplete* on_rules_refresh_complete))
    IL2CPP_REGISTER_METHOD(0x015FE030, void, Finalize, (app::ISteamMatchmakingRulesResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015FE140, void, InternalOnRulesResponded, (app::ISteamMatchmakingRulesResponse * this_ptr, void* thisptr, void* pch_rule, void* pch_value))
    IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnRulesFailedToRespond, (app::ISteamMatchmakingRulesResponse * this_ptr, void* thisptr))
    IL2CPP_REGISTER_METHOD(0x012CB380, void, InternalOnRulesRefreshComplete, (app::ISteamMatchmakingRulesResponse * this_ptr, void* thisptr))
    IL2CPP_REGISTER_METHOD(0x015FC460, void*, op_Explicit, (app::ISteamMatchmakingRulesResponse * that))
} // namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse
