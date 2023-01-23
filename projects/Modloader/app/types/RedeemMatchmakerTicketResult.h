#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RedeemMatchmakerTicketResult__Class.h>
#include <Modloader/app/structs/RedeemMatchmakerTicketResult.h>

namespace app::classes::types {
    namespace RedeemMatchmakerTicketResult {
        inline app::RedeemMatchmakerTicketResult__Class** type_info = (app::RedeemMatchmakerTicketResult__Class**)(modloader::win::memory::resolve_rva(0x04761E60));
        inline app::RedeemMatchmakerTicketResult__Class* get_class() {
            return il2cpp::get_class<app::RedeemMatchmakerTicketResult__Class>(type_info, "PlayFab.ServerModels", "RedeemMatchmakerTicketResult");
        }
        inline app::RedeemMatchmakerTicketResult* create() {
            return il2cpp::create_object<app::RedeemMatchmakerTicketResult>(get_class());
        }
    } // namespace RedeemMatchmakerTicketResult
} // namespace app::classes::types
