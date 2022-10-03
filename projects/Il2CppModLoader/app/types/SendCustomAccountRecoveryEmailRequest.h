#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendCustomAccountRecoveryEmailRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendCustomAccountRecoveryEmailRequest__Class** type_info;
        inline app::SendCustomAccountRecoveryEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::SendCustomAccountRecoveryEmailRequest__Class>(type_info, "PlayFab.ServerModels", "SendCustomAccountRecoveryEmailRequest");
        }
        inline app::SendCustomAccountRecoveryEmailRequest* create() {
            return il2cpp::create_object<app::SendCustomAccountRecoveryEmailRequest>(get_class());
        }
    } // namespace SendCustomAccountRecoveryEmailRequest
} // namespace app::classes::types
