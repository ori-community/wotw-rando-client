#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendCustomAccountRecoveryEmailResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendCustomAccountRecoveryEmailResult__Class** type_info;
        inline app::SendCustomAccountRecoveryEmailResult__Class* get_class() {
            return il2cpp::get_class<app::SendCustomAccountRecoveryEmailResult__Class>(type_info, "PlayFab.ServerModels", "SendCustomAccountRecoveryEmailResult");
        }
        inline app::SendCustomAccountRecoveryEmailResult* create() {
            return il2cpp::create_object<app::SendCustomAccountRecoveryEmailResult>(get_class());
        }
    } // namespace SendCustomAccountRecoveryEmailResult
} // namespace app::classes::types
