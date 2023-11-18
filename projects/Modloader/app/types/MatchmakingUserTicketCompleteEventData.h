#pragma once
#include <Modloader/app/structs/MatchmakingUserTicketCompleteEventData.h>
#include <Modloader/app/structs/MatchmakingUserTicketCompleteEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketCompleteEventData {
        inline app::MatchmakingUserTicketCompleteEventData__Class** type_info() {
            static app::MatchmakingUserTicketCompleteEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingUserTicketCompleteEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingUserTicketCompleteEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketCompleteEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingUserTicketCompleteEventData");
        }
        inline app::MatchmakingUserTicketCompleteEventData* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketCompleteEventData>(get_class());
        }
    } // namespace MatchmakingUserTicketCompleteEventData
} // namespace app::classes::types
