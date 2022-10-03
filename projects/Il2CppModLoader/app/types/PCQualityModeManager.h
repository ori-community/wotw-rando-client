#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PCQualityModeManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PCQualityModeManager__Class** type_info;
        inline app::PCQualityModeManager__Class* get_class() {
            return il2cpp::get_class<app::PCQualityModeManager__Class>(type_info, "MoonDataPlatform", "PCQualityModeManager");
        }
        inline app::PCQualityModeManager* create() {
            return il2cpp::create_object<app::PCQualityModeManager>(get_class());
        }
    } // namespace PCQualityModeManager
} // namespace app::classes::types
