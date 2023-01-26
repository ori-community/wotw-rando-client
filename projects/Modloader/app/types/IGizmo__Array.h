#pragma once
#include <Modloader/app/structs/IGizmo__Array.h>
#include <Modloader/app/structs/IGizmo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGizmo__Array {
        inline app::IGizmo__Array__Class** type_info() {
            static app::IGizmo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IGizmo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IGizmo__Array__Class* get_class() {
            return il2cpp::get_class<app::IGizmo__Array__Class>(type_info(), "Moon", "IGizmo[]");
        }
        inline app::IGizmo__Array* create() {
            return il2cpp::create_object<app::IGizmo__Array>(get_class());
        }
    } // namespace IGizmo__Array
} // namespace app::classes::types
