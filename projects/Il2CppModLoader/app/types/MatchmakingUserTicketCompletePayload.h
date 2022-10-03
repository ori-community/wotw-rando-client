#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketCompletePayload {
        namespace {
            app::MatchmakingUserTicketCompletePayload__Class* type_info_ref = nullptr;
        }
        app::MatchmakingUserTicketCompletePayload__Class** type_info = &type_info_ref;
        inline app::MatchmakingUserTicketCompletePayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketCompletePayload__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingUserTicketCompletePayload");
        }
        inline app::MatchmakingUserTicketCompletePayload* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketCompletePayload>(get_class());
        }
    } // namespace MatchmakingUserTicketCompletePayload
} // namespace app::classes::types
