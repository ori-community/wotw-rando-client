#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesResponded.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::String* pch_rule, app::String* pch_value))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::String* pch_rule, app::String* pch_value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded
