#pragma once
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond {
        inline app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class** type_info() {
            static app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class**)(modloader::win::memory::resolve_rva(0x0475CEA8));
            }
            return cache;
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond__Class>(type_info(), "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesFailedToRespond");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesFailedToRespond
} // namespace app::classes::types
