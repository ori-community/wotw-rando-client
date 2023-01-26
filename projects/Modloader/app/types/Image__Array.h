#pragma once
#include <Modloader/app/structs/Image__Array.h>
#include <Modloader/app/structs/Image__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Image__Array {
        inline app::Image__Array__Class** type_info() {
            static app::Image__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Image__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Image__Array__Class* get_class() {
            return il2cpp::get_class<app::Image__Array__Class>(type_info(), "UnityEngine.UI", "Image[]");
        }
        inline app::Image__Array* create() {
            return il2cpp::create_object<app::Image__Array>(get_class());
        }
    } // namespace Image__Array
} // namespace app::classes::types
