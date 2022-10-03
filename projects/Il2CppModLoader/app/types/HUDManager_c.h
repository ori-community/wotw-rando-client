#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HUDManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HUDManager_c__Class** type_info;
        inline app::HUDManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HUDManager_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "HUDManager", "<>c");
        }
        inline app::HUDManager_c* create() {
            return il2cpp::create_object<app::HUDManager_c>(get_class());
        }
    } // namespace HUDManager_c
} // namespace app::classes::types
