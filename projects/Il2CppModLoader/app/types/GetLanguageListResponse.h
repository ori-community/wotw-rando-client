#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLanguageListResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLanguageListResponse__Class** type_info;
        inline app::GetLanguageListResponse__Class* get_class() {
            return il2cpp::get_class<app::GetLanguageListResponse__Class>(type_info, "PlayFab.LocalizationModels", "GetLanguageListResponse");
        }
        inline app::GetLanguageListResponse* create() {
            return il2cpp::create_object<app::GetLanguageListResponse>(get_class());
        }
    } // namespace GetLanguageListResponse
} // namespace app::classes::types
