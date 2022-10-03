#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkWindowsHelloAccountResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkWindowsHelloAccountResponse__Class** type_info;
        inline app::LinkWindowsHelloAccountResponse__Class* get_class() {
            return il2cpp::get_class<app::LinkWindowsHelloAccountResponse__Class>(type_info, "PlayFab.ClientModels", "LinkWindowsHelloAccountResponse");
        }
        inline app::LinkWindowsHelloAccountResponse* create() {
            return il2cpp::create_object<app::LinkWindowsHelloAccountResponse>(get_class());
        }
    } // namespace LinkWindowsHelloAccountResponse
} // namespace app::classes::types
