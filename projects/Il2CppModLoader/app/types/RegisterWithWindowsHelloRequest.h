#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterWithWindowsHelloRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisterWithWindowsHelloRequest__Class** type_info;
        inline app::RegisterWithWindowsHelloRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterWithWindowsHelloRequest__Class>(type_info, "PlayFab.ClientModels", "RegisterWithWindowsHelloRequest");
        }
        inline app::RegisterWithWindowsHelloRequest* create() {
            return il2cpp::create_object<app::RegisterWithWindowsHelloRequest>(get_class());
        }
    } // namespace RegisterWithWindowsHelloRequest
} // namespace app::classes::types
