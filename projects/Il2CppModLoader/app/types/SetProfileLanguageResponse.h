#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetProfileLanguageResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetProfileLanguageResponse__Class** type_info;
        inline app::SetProfileLanguageResponse__Class* get_class() {
            return il2cpp::get_class<app::SetProfileLanguageResponse__Class>(type_info, "PlayFab.ProfilesModels", "SetProfileLanguageResponse");
        }
        inline app::SetProfileLanguageResponse* create() {
            return il2cpp::create_object<app::SetProfileLanguageResponse>(get_class());
        }
    } // namespace SetProfileLanguageResponse
} // namespace app::classes::types
