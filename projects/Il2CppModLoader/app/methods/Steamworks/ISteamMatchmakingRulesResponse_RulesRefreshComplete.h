#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingRulesResponse_RulesRefreshComplete * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::ISteamMatchmakingRulesResponse_RulesRefreshComplete * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingRulesResponse_RulesRefreshComplete * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingRulesResponse_RulesRefreshComplete * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingRulesResponse_RulesRefreshComplete
