#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkWindowsHelloAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkWindowsHelloAccountRequest__Class** type_info;
        inline app::LinkWindowsHelloAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkWindowsHelloAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkWindowsHelloAccountRequest");
        }
        inline app::LinkWindowsHelloAccountRequest* create() {
            return il2cpp::create_object<app::LinkWindowsHelloAccountRequest>(get_class());
        }
    } // namespace LinkWindowsHelloAccountRequest
} // namespace app::classes::types
