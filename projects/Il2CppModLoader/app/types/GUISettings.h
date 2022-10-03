#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUISettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUISettings__Class** type_info;
        inline app::GUISettings__Class* get_class() {
            return il2cpp::get_class<app::GUISettings__Class>(type_info, "UnityEngine", "GUISettings");
        }
        inline app::GUISettings* create() {
            return il2cpp::create_object<app::GUISettings>(get_class());
        }
    } // namespace GUISettings
} // namespace app::classes::types
