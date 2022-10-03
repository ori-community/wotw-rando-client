#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavigationSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NavigationSettings__Class** type_info;
        inline app::NavigationSettings__Class* get_class() {
            return il2cpp::get_class<app::NavigationSettings__Class>(type_info, "", "NavigationSettings");
        }
        inline app::NavigationSettings* create() {
            return il2cpp::create_object<app::NavigationSettings>(get_class());
        }
    } // namespace NavigationSettings
} // namespace app::classes::types
