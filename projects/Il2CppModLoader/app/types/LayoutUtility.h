#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayoutUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LayoutUtility__Class** type_info;
        inline app::LayoutUtility__Class* get_class() {
            return il2cpp::get_class<app::LayoutUtility__Class>(type_info, "UnityEngine.UI", "LayoutUtility");
        }
        inline app::LayoutUtility* create() {
            return il2cpp::create_object<app::LayoutUtility>(get_class());
        }
    } // namespace LayoutUtility
} // namespace app::classes::types
