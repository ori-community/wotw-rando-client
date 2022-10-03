#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkGoogleAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkGoogleAccountResult__Class** type_info;
        inline app::LinkGoogleAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkGoogleAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkGoogleAccountResult");
        }
        inline app::LinkGoogleAccountResult* create() {
            return il2cpp::create_object<app::LinkGoogleAccountResult>(get_class());
        }
    } // namespace LinkGoogleAccountResult
} // namespace app::classes::types
