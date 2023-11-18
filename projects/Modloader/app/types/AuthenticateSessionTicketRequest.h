#pragma once
#include <Modloader/app/structs/AuthenticateSessionTicketRequest.h>
#include <Modloader/app/structs/AuthenticateSessionTicketRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticateSessionTicketRequest {
        inline app::AuthenticateSessionTicketRequest__Class** type_info() {
            static app::AuthenticateSessionTicketRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AuthenticateSessionTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x04766370));
            }
            return cache;
        }
        inline app::AuthenticateSessionTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::AuthenticateSessionTicketRequest__Class>(type_info(), "PlayFab.ServerModels", "AuthenticateSessionTicketRequest");
        }
        inline app::AuthenticateSessionTicketRequest* create() {
            return il2cpp::create_object<app::AuthenticateSessionTicketRequest>(get_class());
        }
    } // namespace AuthenticateSessionTicketRequest
} // namespace app::classes::types
