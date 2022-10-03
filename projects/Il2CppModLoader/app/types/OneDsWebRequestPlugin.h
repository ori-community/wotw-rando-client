#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OneDsWebRequestPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OneDsWebRequestPlugin__Class** type_info;
        inline app::OneDsWebRequestPlugin__Class* get_class() {
            return il2cpp::get_class<app::OneDsWebRequestPlugin__Class>(type_info, "PlayFab.Internal", "OneDsWebRequestPlugin");
        }
        inline app::OneDsWebRequestPlugin* create() {
            return il2cpp::create_object<app::OneDsWebRequestPlugin>(get_class());
        }
    } // namespace OneDsWebRequestPlugin
} // namespace app::classes::types
