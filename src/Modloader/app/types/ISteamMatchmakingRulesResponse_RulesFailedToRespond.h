#pragma once
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesFailedToRespond {
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class** type_info() {
            static app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class>(type_info(), "Steamworks", "ISteamMatchmakingRulesResponse", "RulesFailedToRespond");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesFailedToRespond
} // namespace app::classes::types
