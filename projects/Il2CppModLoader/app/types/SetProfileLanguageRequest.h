#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetProfileLanguageRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetProfileLanguageRequest__Class** type_info;
        inline app::SetProfileLanguageRequest__Class* get_class() {
            return il2cpp::get_class<app::SetProfileLanguageRequest__Class>(type_info, "PlayFab.ProfilesModels", "SetProfileLanguageRequest");
        }
        inline app::SetProfileLanguageRequest* create() {
            return il2cpp::create_object<app::SetProfileLanguageRequest>(get_class());
        }
    } // namespace SetProfileLanguageRequest
} // namespace app::classes::types
