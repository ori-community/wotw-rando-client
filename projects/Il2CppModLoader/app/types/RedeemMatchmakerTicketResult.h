#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RedeemMatchmakerTicketResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RedeemMatchmakerTicketResult__Class** type_info;
        inline app::RedeemMatchmakerTicketResult__Class* get_class() {
            return il2cpp::get_class<app::RedeemMatchmakerTicketResult__Class>(type_info, "PlayFab.ServerModels", "RedeemMatchmakerTicketResult");
        }
        inline app::RedeemMatchmakerTicketResult* create() {
            return il2cpp::create_object<app::RedeemMatchmakerTicketResult>(get_class());
        }
    } // namespace RedeemMatchmakerTicketResult
} // namespace app::classes::types
