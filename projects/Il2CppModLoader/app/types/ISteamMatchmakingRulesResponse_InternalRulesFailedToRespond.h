#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class** type_info;
        inline app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesFailedToRespond");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond
} // namespace app::classes::types
