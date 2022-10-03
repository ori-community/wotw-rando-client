#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HUDManager_Rehide_d_12 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HUDManager_Rehide_d_12__Class** type_info;
        inline app::HUDManager_Rehide_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::HUDManager_Rehide_d_12__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "HUDManager", "<Rehide>d__12");
        }
        inline app::HUDManager_Rehide_d_12* create() {
            return il2cpp::create_object<app::HUDManager_Rehide_d_12>(get_class());
        }
    } // namespace HUDManager_Rehide_d_12
} // namespace app::classes::types
