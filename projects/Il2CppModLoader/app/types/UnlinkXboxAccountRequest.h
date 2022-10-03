#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkXboxAccountRequest__Class** type_info;
        inline app::UnlinkXboxAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkXboxAccountRequest");
        }
        inline app::UnlinkXboxAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountRequest>(get_class());
        }
    } // namespace UnlinkXboxAccountRequest
} // namespace app::classes::types
