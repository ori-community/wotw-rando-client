#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_RulesFailedToRespond {
        namespace {
            inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_RulesFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingRulesResponse", "RulesFailedToRespond");
        }
        inline app::ISteamMatchmakingRulesResponse_RulesFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_RulesFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_RulesFailedToRespond
} // namespace app::classes::types
