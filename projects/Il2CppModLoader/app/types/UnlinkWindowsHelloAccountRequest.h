#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkWindowsHelloAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkWindowsHelloAccountRequest__Class** type_info;
        inline app::UnlinkWindowsHelloAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkWindowsHelloAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkWindowsHelloAccountRequest");
        }
        inline app::UnlinkWindowsHelloAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkWindowsHelloAccountRequest>(get_class());
        }
    } // namespace UnlinkWindowsHelloAccountRequest
} // namespace app::classes::types
