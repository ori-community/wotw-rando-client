#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSettingsTransitionZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneSettingsTransitionZone__Class** type_info;
        inline app::SceneSettingsTransitionZone__Class* get_class() {
            return il2cpp::get_class<app::SceneSettingsTransitionZone__Class>(type_info, "", "SceneSettingsTransitionZone");
        }
        inline app::SceneSettingsTransitionZone* create() {
            return il2cpp::create_object<app::SceneSettingsTransitionZone>(get_class());
        }
        inline app::SceneSettingsTransitionZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneSettingsTransitionZone__Array>(get_class(), size);
        }
        inline app::SceneSettingsTransitionZone__Array* create_array(const std::vector<app::SceneSettingsTransitionZone*>& items) {
            return il2cpp::array_new<app::SceneSettingsTransitionZone__Array>(get_class(), items);
        }
    } // namespace SceneSettingsTransitionZone
} // namespace app::classes::types
