#pragma once
#include <Modloader/app/structs/ColorBlock__Array.h>
#include <Modloader/app/structs/ColorBlock__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorBlock__Array {
        inline app::ColorBlock__Array__Class** type_info() {
            static app::ColorBlock__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorBlock__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorBlock__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorBlock__Array__Class>(type_info(), "UnityEngine.UI", "ColorBlock[]");
        }
        inline app::ColorBlock__Array* create() {
            return il2cpp::create_object<app::ColorBlock__Array>(get_class());
        }
    } // namespace ColorBlock__Array
} // namespace app::classes::types
