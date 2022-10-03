#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HUDManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HUDManager__Class** type_info;
        inline app::HUDManager__Class* get_class() {
            return il2cpp::get_class<app::HUDManager__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "HUDManager");
        }
        inline app::HUDManager* create() {
            return il2cpp::create_object<app::HUDManager>(get_class());
        }
    } // namespace HUDManager
} // namespace app::classes::types
