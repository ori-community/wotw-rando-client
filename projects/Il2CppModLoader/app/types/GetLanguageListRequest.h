#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLanguageListRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLanguageListRequest__Class** type_info;
        inline app::GetLanguageListRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLanguageListRequest__Class>(type_info, "PlayFab.LocalizationModels", "GetLanguageListRequest");
        }
        inline app::GetLanguageListRequest* create() {
            return il2cpp::create_object<app::GetLanguageListRequest>(get_class());
        }
    } // namespace GetLanguageListRequest
} // namespace app::classes::types
