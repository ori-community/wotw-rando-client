#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkFacebookAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkFacebookAccountResult__Class** type_info;
        inline app::UnlinkFacebookAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkFacebookAccountResult");
        }
        inline app::UnlinkFacebookAccountResult* create() {
            return il2cpp::create_object<app::UnlinkFacebookAccountResult>(get_class());
        }
    } // namespace UnlinkFacebookAccountResult
} // namespace app::classes::types
