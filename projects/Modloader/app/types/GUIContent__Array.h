#pragma once
#include <Modloader/app/structs/GUIContent__Array.h>
#include <Modloader/app/structs/GUIContent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIContent__Array {
        inline app::GUIContent__Array__Class** type_info() {
            static app::GUIContent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUIContent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUIContent__Array__Class* get_class() {
            return il2cpp::get_class<app::GUIContent__Array__Class>(type_info(), "UnityEngine", "GUIContent[]");
        }
        inline app::GUIContent__Array* create() {
            return il2cpp::create_object<app::GUIContent__Array>(get_class());
        }
    } // namespace GUIContent__Array
} // namespace app::classes::types
