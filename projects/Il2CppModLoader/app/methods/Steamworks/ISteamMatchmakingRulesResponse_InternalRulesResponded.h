#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0143DA20, void, Invoke, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, void* thisptr, void* pch_rule, void* pch_value))
    IL2CPP_REGISTER_METHOD(0x015FE320, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, void* thisptr, void* pch_rule, void* pch_value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingRulesResponse_InternalRulesResponded * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse_InternalRulesResponded
