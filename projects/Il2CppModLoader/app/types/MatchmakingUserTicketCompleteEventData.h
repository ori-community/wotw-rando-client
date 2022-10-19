#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketCompleteEventData {
        namespace {
            inline app::MatchmakingUserTicketCompleteEventData__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingUserTicketCompleteEventData__Class** type_info = &type_info_ref;
        inline app::MatchmakingUserTicketCompleteEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketCompleteEventData__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingUserTicketCompleteEventData");
        }
        inline app::MatchmakingUserTicketCompleteEventData* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketCompleteEventData>(get_class());
        }
    } // namespace MatchmakingUserTicketCompleteEventData
} // namespace app::classes::types
