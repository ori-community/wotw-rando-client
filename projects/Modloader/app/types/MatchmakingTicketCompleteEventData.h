#pragma once
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData.h>
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingTicketCompleteEventData {
        inline app::MatchmakingTicketCompleteEventData__Class** type_info() {
            static app::MatchmakingTicketCompleteEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingTicketCompleteEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingTicketCompleteEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingTicketCompleteEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingTicketCompleteEventData");
        }
        inline app::MatchmakingTicketCompleteEventData* create() {
            return il2cpp::create_object<app::MatchmakingTicketCompleteEventData>(get_class());
        }
    } // namespace MatchmakingTicketCompleteEventData
} // namespace app::classes::types
