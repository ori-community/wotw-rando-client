#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUILayoutUtility_LayoutCache {
        inline app::GUILayoutUtility_LayoutCache__Class** type_info = (app::GUILayoutUtility_LayoutCache__Class**)(modloader::win::memory::resolve_rva(0x0470AD58));
        inline app::GUILayoutUtility_LayoutCache__Class* get_class() {
            return il2cpp::get_nested_class<app::GUILayoutUtility_LayoutCache__Class>(type_info, "UnityEngine", "GUILayoutUtility", "LayoutCache");
        }
        inline app::GUILayoutUtility_LayoutCache* create() {
            return il2cpp::create_object<app::GUILayoutUtility_LayoutCache>(get_class());
        }
        inline app::GUILayoutUtility_LayoutCache__Array* create_array(int size) {
            return il2cpp::array_new<app::GUILayoutUtility_LayoutCache__Array>(get_class(), size);
        }
        inline app::GUILayoutUtility_LayoutCache__Array* create_array(const std::vector<app::GUILayoutUtility_LayoutCache*>& items) {
            return il2cpp::array_new<app::GUILayoutUtility_LayoutCache__Array>(get_class(), items);
        }
    } // namespace GUILayoutUtility_LayoutCache
} // namespace app::classes::types
