#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSettingsComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneSettingsComponent__Class** type_info;
        inline app::SceneSettingsComponent__Class* get_class() {
            return il2cpp::get_class<app::SceneSettingsComponent__Class>(type_info, "", "SceneSettingsComponent");
        }
        inline app::SceneSettingsComponent* create() {
            return il2cpp::create_object<app::SceneSettingsComponent>(get_class());
        }
    } // namespace SceneSettingsComponent
} // namespace app::classes::types
