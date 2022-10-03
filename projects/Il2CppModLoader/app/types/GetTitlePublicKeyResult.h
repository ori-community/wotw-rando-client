#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitlePublicKeyResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitlePublicKeyResult__Class** type_info;
        inline app::GetTitlePublicKeyResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitlePublicKeyResult__Class>(type_info, "PlayFab.ClientModels", "GetTitlePublicKeyResult");
        }
        inline app::GetTitlePublicKeyResult* create() {
            return il2cpp::create_object<app::GetTitlePublicKeyResult>(get_class());
        }
    } // namespace GetTitlePublicKeyResult
} // namespace app::classes::types
