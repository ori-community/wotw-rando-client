#pragma once
#include <Modloader/app/structs/Light__Array.h>
#include <Modloader/app/structs/Light__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Light__Array {
        inline app::Light__Array__Class** type_info() {
            static app::Light__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Light__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Light__Array__Class* get_class() {
            return il2cpp::get_class<app::Light__Array__Class>(type_info(), "UnityEngine", "Light[]");
        }
        inline app::Light__Array* create() {
            return il2cpp::create_object<app::Light__Array>(get_class());
        }
    } // namespace Light__Array
} // namespace app::classes::types
