#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderingSettingsPerScene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderingSettingsPerScene__Class** type_info;
        inline app::RenderingSettingsPerScene__Class* get_class() {
            return il2cpp::get_class<app::RenderingSettingsPerScene__Class>(type_info, "", "RenderingSettingsPerScene");
        }
        inline app::RenderingSettingsPerScene* create() {
            return il2cpp::create_object<app::RenderingSettingsPerScene>(get_class());
        }
    } // namespace RenderingSettingsPerScene
} // namespace app::classes::types
