#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingTicketCompleteEventData {
        namespace {
            inline app::MatchmakingTicketCompleteEventData__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingTicketCompleteEventData__Class** type_info = &type_info_ref;
        inline app::MatchmakingTicketCompleteEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingTicketCompleteEventData__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingTicketCompleteEventData");
        }
        inline app::MatchmakingTicketCompleteEventData* create() {
            return il2cpp::create_object<app::MatchmakingTicketCompleteEventData>(get_class());
        }
    } // namespace MatchmakingTicketCompleteEventData
} // namespace app::classes::types
