#pragma once
#include <Modloader/app/structs/Navigation__Array.h>
#include <Modloader/app/structs/Navigation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Navigation__Array {
        inline app::Navigation__Array__Class** type_info() {
            static app::Navigation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Navigation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Navigation__Array__Class* get_class() {
            return il2cpp::get_class<app::Navigation__Array__Class>(type_info(), "UnityEngine.UI", "Navigation[]");
        }
        inline app::Navigation__Array* create() {
            return il2cpp::create_object<app::Navigation__Array>(get_class());
        }
    } // namespace Navigation__Array
} // namespace app::classes::types
