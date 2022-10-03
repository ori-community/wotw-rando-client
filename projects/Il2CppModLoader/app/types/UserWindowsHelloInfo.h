#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserWindowsHelloInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserWindowsHelloInfo__Class** type_info;
        inline app::UserWindowsHelloInfo__Class* get_class() {
            return il2cpp::get_class<app::UserWindowsHelloInfo__Class>(type_info, "PlayFab.ClientModels", "UserWindowsHelloInfo");
        }
        inline app::UserWindowsHelloInfo* create() {
            return il2cpp::create_object<app::UserWindowsHelloInfo>(get_class());
        }
    } // namespace UserWindowsHelloInfo
} // namespace app::classes::types
