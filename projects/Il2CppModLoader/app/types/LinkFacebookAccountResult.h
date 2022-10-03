#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkFacebookAccountResult__Class** type_info;
        inline app::LinkFacebookAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkFacebookAccountResult");
        }
        inline app::LinkFacebookAccountResult* create() {
            return il2cpp::create_object<app::LinkFacebookAccountResult>(get_class());
        }
    } // namespace LinkFacebookAccountResult
} // namespace app::classes::types
