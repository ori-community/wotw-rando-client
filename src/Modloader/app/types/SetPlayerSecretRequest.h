#pragma once
#include <Modloader/app/structs/SetPlayerSecretRequest.h>
#include <Modloader/app/structs/SetPlayerSecretRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetPlayerSecretRequest {
        inline app::SetPlayerSecretRequest__Class** type_info() {
            static app::SetPlayerSecretRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetPlayerSecretRequest__Class**)(modloader::win::memory::resolve_rva(0x04722608));
            }
            return cache;
        }
        inline app::SetPlayerSecretRequest__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretRequest__Class>(type_info(), "PlayFab.ClientModels", "SetPlayerSecretRequest");
        }
        inline app::SetPlayerSecretRequest* create() {
            return il2cpp::create_object<app::SetPlayerSecretRequest>(get_class());
        }
    } // namespace SetPlayerSecretRequest
} // namespace app::classes::types
