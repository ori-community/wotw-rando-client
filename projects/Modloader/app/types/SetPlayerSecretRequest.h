#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetPlayerSecretRequest {
        inline app::SetPlayerSecretRequest__Class** type_info = (app::SetPlayerSecretRequest__Class**)(modloader::win::memory::resolve_rva(0x04722608));
        inline app::SetPlayerSecretRequest__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretRequest__Class>(type_info, "PlayFab.ClientModels", "SetPlayerSecretRequest");
        }
        inline app::SetPlayerSecretRequest* create() {
            return il2cpp::create_object<app::SetPlayerSecretRequest>(get_class());
        }
    } // namespace SetPlayerSecretRequest
} // namespace app::classes::types
