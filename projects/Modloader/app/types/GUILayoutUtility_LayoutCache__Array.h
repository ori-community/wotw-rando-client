#pragma once
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Array.h>
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutUtility_LayoutCache__Array {
        inline app::GUILayoutUtility_LayoutCache__Array__Class** type_info() {
            static app::GUILayoutUtility_LayoutCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUILayoutUtility_LayoutCache__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUILayoutUtility_LayoutCache__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutUtility_LayoutCache__Array__Class>(type_info(), "UnityEngine", "GUILayoutUtility+LayoutCache[]");
        }
        inline app::GUILayoutUtility_LayoutCache__Array* create() {
            return il2cpp::create_object<app::GUILayoutUtility_LayoutCache__Array>(get_class());
        }
    } // namespace GUILayoutUtility_LayoutCache__Array
} // namespace app::classes::types
