#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendAccountRecoveryEmailRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendAccountRecoveryEmailRequest__Class** type_info;
        inline app::SendAccountRecoveryEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::SendAccountRecoveryEmailRequest__Class>(type_info, "PlayFab.ClientModels", "SendAccountRecoveryEmailRequest");
        }
        inline app::SendAccountRecoveryEmailRequest* create() {
            return il2cpp::create_object<app::SendAccountRecoveryEmailRequest>(get_class());
        }
    } // namespace SendAccountRecoveryEmailRequest
} // namespace app::classes::types
