#pragma once
#include <Modloader/app/structs/AuthenticateSessionTicketResult.h>
#include <Modloader/app/structs/AuthenticateSessionTicketResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticateSessionTicketResult {
        inline app::AuthenticateSessionTicketResult__Class** type_info() {
            static app::AuthenticateSessionTicketResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AuthenticateSessionTicketResult__Class**)(modloader::win::memory::resolve_rva(0x04729760));
            }
            return cache;
        }
        inline app::AuthenticateSessionTicketResult__Class* get_class() {
            return il2cpp::get_class<app::AuthenticateSessionTicketResult__Class>(type_info(), "PlayFab.ServerModels", "AuthenticateSessionTicketResult");
        }
        inline app::AuthenticateSessionTicketResult* create() {
            return il2cpp::create_object<app::AuthenticateSessionTicketResult>(get_class());
        }
    } // namespace AuthenticateSessionTicketResult
} // namespace app::classes::types
