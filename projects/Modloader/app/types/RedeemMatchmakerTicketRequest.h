#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RedeemMatchmakerTicketRequest {
        inline app::RedeemMatchmakerTicketRequest__Class** type_info = (app::RedeemMatchmakerTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x04797388));
        inline app::RedeemMatchmakerTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::RedeemMatchmakerTicketRequest__Class>(type_info, "PlayFab.ServerModels", "RedeemMatchmakerTicketRequest");
        }
        inline app::RedeemMatchmakerTicketRequest* create() {
            return il2cpp::create_object<app::RedeemMatchmakerTicketRequest>(get_class());
        }
    } // namespace RedeemMatchmakerTicketRequest
} // namespace app::classes::types
