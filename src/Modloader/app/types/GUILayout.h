#pragma once
#include <Modloader/app/structs/GUILayout.h>
#include <Modloader/app/structs/GUILayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayout {
        inline app::GUILayout__Class** type_info() {
            static app::GUILayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUILayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUILayout__Class* get_class() {
            return il2cpp::get_class<app::GUILayout__Class>(type_info(), "UnityEngine", "GUILayout");
        }
        inline app::GUILayout* create() {
            return il2cpp::create_object<app::GUILayout>(get_class());
        }
    } // namespace GUILayout
} // namespace app::classes::types
