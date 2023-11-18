#pragma once
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_InternalRulesResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_InternalRulesResponded__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISteamMatchmakingRulesResponse_InternalRulesResponded {
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class** type_info() {
            static app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class**)(modloader::win::memory::resolve_rva(0x0475F880));
            }
            return cache;
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingRulesResponse_InternalRulesResponded__Class>(type_info(), "Steamworks", "ISteamMatchmakingRulesResponse", "InternalRulesResponded");
        }
        inline app::ISteamMatchmakingRulesResponse_InternalRulesResponded* create() {
            return il2cpp::create_object<app::ISteamMatchmakingRulesResponse_InternalRulesResponded>(get_class());
        }
    } // namespace ISteamMatchmakingRulesResponse_InternalRulesResponded
} // namespace app::classes::types
