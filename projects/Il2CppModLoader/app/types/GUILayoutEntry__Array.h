#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUILayoutEntry__Array {
        namespace {
            app::GUILayoutEntry__Array__Class* type_info_ref = nullptr;
        }
        app::GUILayoutEntry__Array__Class** type_info = &type_info_ref;
        inline app::GUILayoutEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutEntry__Array__Class>(type_info, "UnityEngine", "GUILayoutEntry[]");
        }
        inline app::GUILayoutEntry__Array* create() {
            return il2cpp::create_object<app::GUILayoutEntry__Array>(get_class());
        }
    } // namespace GUILayoutEntry__Array
} // namespace app::classes::types
