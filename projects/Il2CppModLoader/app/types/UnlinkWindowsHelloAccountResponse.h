#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkWindowsHelloAccountResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkWindowsHelloAccountResponse__Class** type_info;
        inline app::UnlinkWindowsHelloAccountResponse__Class* get_class() {
            return il2cpp::get_class<app::UnlinkWindowsHelloAccountResponse__Class>(type_info, "PlayFab.ClientModels", "UnlinkWindowsHelloAccountResponse");
        }
        inline app::UnlinkWindowsHelloAccountResponse* create() {
            return il2cpp::create_object<app::UnlinkWindowsHelloAccountResponse>(get_class());
        }
    } // namespace UnlinkWindowsHelloAccountResponse
} // namespace app::classes::types
