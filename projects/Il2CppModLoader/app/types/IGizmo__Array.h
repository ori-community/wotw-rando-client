#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGizmo__Array {
        namespace {
            app::IGizmo__Array__Class* type_info_ref = nullptr;
        }
        app::IGizmo__Array__Class** type_info = &type_info_ref;
        inline app::IGizmo__Array__Class* get_class() {
            return il2cpp::get_class<app::IGizmo__Array__Class>(type_info, "Moon", "IGizmo[]");
        }
        inline app::IGizmo__Array* create() {
            return il2cpp::create_object<app::IGizmo__Array>(get_class());
        }
    } // namespace IGizmo__Array
} // namespace app::classes::types
