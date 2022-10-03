#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneDsUnityHttpPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OneDsUnityHttpPlugin__Class** type_info;
        inline app::OneDsUnityHttpPlugin__Class* get_class() {
            return il2cpp::get_class<app::OneDsUnityHttpPlugin__Class>(type_info, "PlayFab.Internal", "OneDsUnityHttpPlugin");
        }
        inline app::OneDsUnityHttpPlugin* create() {
            return il2cpp::create_object<app::OneDsUnityHttpPlugin>(get_class());
        }
    } // namespace OneDsUnityHttpPlugin
} // namespace app::classes::types
