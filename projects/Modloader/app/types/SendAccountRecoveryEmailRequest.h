#pragma once
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest.h>
#include <Modloader/app/structs/SendAccountRecoveryEmailRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendAccountRecoveryEmailRequest {
        inline app::SendAccountRecoveryEmailRequest__Class** type_info() {
            static app::SendAccountRecoveryEmailRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendAccountRecoveryEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x0478F830));
            }
            return cache;
        }
        inline app::SendAccountRecoveryEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::SendAccountRecoveryEmailRequest__Class>(type_info(), "PlayFab.ClientModels", "SendAccountRecoveryEmailRequest");
        }
        inline app::SendAccountRecoveryEmailRequest* create() {
            return il2cpp::create_object<app::SendAccountRecoveryEmailRequest>(get_class());
        }
    } // namespace SendAccountRecoveryEmailRequest
} // namespace app::classes::types
