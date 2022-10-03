#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToggleGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ToggleGroup__Class** type_info;
        inline app::ToggleGroup__Class* get_class() {
            return il2cpp::get_class<app::ToggleGroup__Class>(type_info, "UnityEngine.UI", "ToggleGroup");
        }
        inline app::ToggleGroup* create() {
            return il2cpp::create_object<app::ToggleGroup>(get_class());
        }
    } // namespace ToggleGroup
} // namespace app::classes::types
