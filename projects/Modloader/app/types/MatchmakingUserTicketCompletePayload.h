#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakingUserTicketCompletePayload__Class.h>
#include <Modloader/app/structs/MatchmakingUserTicketCompletePayload.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketCompletePayload {
        namespace {
            inline app::MatchmakingUserTicketCompletePayload__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingUserTicketCompletePayload__Class** type_info = &type_info_ref;
        inline app::MatchmakingUserTicketCompletePayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketCompletePayload__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingUserTicketCompletePayload");
        }
        inline app::MatchmakingUserTicketCompletePayload* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketCompletePayload>(get_class());
        }
    } // namespace MatchmakingUserTicketCompletePayload
} // namespace app::classes::types
