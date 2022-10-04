#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMaterialModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMaterialModifier__Class** type_info;
        inline app::IMaterialModifier__Class* get_class() {
            return il2cpp::get_class<app::IMaterialModifier__Class>(type_info, "UnityEngine.UI", "IMaterialModifier");
        }
        inline app::IMaterialModifier* create() {
            return il2cpp::create_object<app::IMaterialModifier>(get_class());
        }
    } // namespace IMaterialModifier
} // namespace app::classes::types
