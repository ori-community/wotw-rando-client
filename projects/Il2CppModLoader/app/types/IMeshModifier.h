#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMeshModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMeshModifier__Class** type_info;
        inline app::IMeshModifier__Class* get_class() {
            return il2cpp::get_class<app::IMeshModifier__Class>(type_info, "UnityEngine.UI", "IMeshModifier");
        }
    } // namespace IMeshModifier
} // namespace app::classes::types
