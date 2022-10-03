#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxQualityModeManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxQualityModeManager__Class** type_info;
        inline app::XboxQualityModeManager__Class* get_class() {
            return il2cpp::get_class<app::XboxQualityModeManager__Class>(type_info, "MoonDataPlatform", "XboxQualityModeManager");
        }
        inline app::XboxQualityModeManager* create() {
            return il2cpp::create_object<app::XboxQualityModeManager>(get_class());
        }
    } // namespace XboxQualityModeManager
} // namespace app::classes::types
