#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData__Class.h>
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData.h>

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
