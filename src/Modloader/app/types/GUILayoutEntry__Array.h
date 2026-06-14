#pragma once
#include <Modloader/app/structs/GUILayoutEntry__Array.h>
#include <Modloader/app/structs/GUILayoutEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutEntry__Array {
        inline app::GUILayoutEntry__Array__Class** type_info() {
            static app::GUILayoutEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUILayoutEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUILayoutEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutEntry__Array__Class>(type_info(), "UnityEngine", "GUILayoutEntry[]");
        }
        inline app::GUILayoutEntry__Array* create() {
            return il2cpp::create_object<app::GUILayoutEntry__Array>(get_class());
        }
    } // namespace GUILayoutEntry__Array
} // namespace app::classes::types
