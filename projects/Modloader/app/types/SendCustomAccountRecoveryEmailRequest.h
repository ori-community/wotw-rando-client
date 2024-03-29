#pragma once
#include <Modloader/app/structs/SendCustomAccountRecoveryEmailRequest.h>
#include <Modloader/app/structs/SendCustomAccountRecoveryEmailRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendCustomAccountRecoveryEmailRequest {
        inline app::SendCustomAccountRecoveryEmailRequest__Class** type_info() {
            static app::SendCustomAccountRecoveryEmailRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendCustomAccountRecoveryEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04733898));
            }
            return cache;
        }
        inline app::SendCustomAccountRecoveryEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::SendCustomAccountRecoveryEmailRequest__Class>(type_info(), "PlayFab.ServerModels", "SendCustomAccountRecoveryEmailRequest");
        }
        inline app::SendCustomAccountRecoveryEmailRequest* create() {
            return il2cpp::create_object<app::SendCustomAccountRecoveryEmailRequest>(get_class());
        }
    } // namespace SendCustomAccountRecoveryEmailRequest
} // namespace app::classes::types
