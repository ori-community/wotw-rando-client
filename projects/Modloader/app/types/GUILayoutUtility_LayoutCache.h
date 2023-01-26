#pragma once
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache.h>
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Array.h>
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutUtility_LayoutCache {
        inline app::GUILayoutUtility_LayoutCache__Class** type_info() {
            static app::GUILayoutUtility_LayoutCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUILayoutUtility_LayoutCache__Class**)(modloader::win::memory::resolve_rva(0x0470AD58));
            }
            return cache;
        }
        inline app::GUILayoutUtility_LayoutCache__Class* get_class() {
            return il2cpp::get_nested_class<app::GUILayoutUtility_LayoutCache__Class>(type_info(), "UnityEngine", "GUILayoutUtility", "LayoutCache");
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
