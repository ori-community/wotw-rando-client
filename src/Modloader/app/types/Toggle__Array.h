#pragma once
#include <Modloader/app/structs/Toggle__Array.h>
#include <Modloader/app/structs/Toggle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Toggle__Array {
        inline app::Toggle__Array__Class** type_info() {
            static app::Toggle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Toggle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Toggle__Array__Class* get_class() {
            return il2cpp::get_class<app::Toggle__Array__Class>(type_info(), "UnityEngine.UI", "Toggle[]");
        }
        inline app::Toggle__Array* create() {
            return il2cpp::create_object<app::Toggle__Array>(get_class());
        }
    } // namespace Toggle__Array
} // namespace app::classes::types
