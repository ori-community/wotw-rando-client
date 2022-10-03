#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClickMeshBrowserUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClickMeshBrowserUI__Class** type_info;
        inline app::ClickMeshBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::ClickMeshBrowserUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ClickMeshBrowserUI");
        }
        inline app::ClickMeshBrowserUI* create() {
            return il2cpp::create_object<app::ClickMeshBrowserUI>(get_class());
        }
    } // namespace ClickMeshBrowserUI
} // namespace app::classes::types
