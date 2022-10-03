#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUITargetAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUITargetAttribute__Class** type_info;
        inline app::GUITargetAttribute__Class* get_class() {
            return il2cpp::get_class<app::GUITargetAttribute__Class>(type_info, "UnityEngine", "GUITargetAttribute");
        }
        inline app::GUITargetAttribute* create() {
            return il2cpp::create_object<app::GUITargetAttribute>(get_class());
        }
    } // namespace GUITargetAttribute
} // namespace app::classes::types
