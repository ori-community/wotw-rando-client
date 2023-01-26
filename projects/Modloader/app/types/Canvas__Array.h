#pragma once
#include <Modloader/app/structs/Canvas__Array.h>
#include <Modloader/app/structs/Canvas__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Canvas__Array {
        inline app::Canvas__Array__Class** type_info() {
            static app::Canvas__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Canvas__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Canvas__Array__Class* get_class() {
            return il2cpp::get_class<app::Canvas__Array__Class>(type_info(), "UnityEngine", "Canvas[]");
        }
        inline app::Canvas__Array* create() {
            return il2cpp::create_object<app::Canvas__Array>(get_class());
        }
    } // namespace Canvas__Array
} // namespace app::classes::types
