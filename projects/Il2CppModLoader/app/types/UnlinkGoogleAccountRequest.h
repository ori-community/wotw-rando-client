#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkGoogleAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkGoogleAccountRequest__Class** type_info;
        inline app::UnlinkGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGoogleAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkGoogleAccountRequest");
        }
        inline app::UnlinkGoogleAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkGoogleAccountRequest>(get_class());
        }
    } // namespace UnlinkGoogleAccountRequest
} // namespace app::classes::types
