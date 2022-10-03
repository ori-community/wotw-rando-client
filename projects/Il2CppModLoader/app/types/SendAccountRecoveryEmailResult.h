#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendAccountRecoveryEmailResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendAccountRecoveryEmailResult__Class** type_info;
        inline app::SendAccountRecoveryEmailResult__Class* get_class() {
            return il2cpp::get_class<app::SendAccountRecoveryEmailResult__Class>(type_info, "PlayFab.ClientModels", "SendAccountRecoveryEmailResult");
        }
        inline app::SendAccountRecoveryEmailResult* create() {
            return il2cpp::create_object<app::SendAccountRecoveryEmailResult>(get_class());
        }
    } // namespace SendAccountRecoveryEmailResult
} // namespace app::classes::types
