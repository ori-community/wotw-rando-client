#pragma once
#include <Modloader/app/structs/Resolution__Array.h>
#include <Modloader/app/structs/Resolution__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Resolution__Array {
        inline app::Resolution__Array__Class** type_info() {
            static app::Resolution__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Resolution__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Resolution__Array__Class* get_class() {
            return il2cpp::get_class<app::Resolution__Array__Class>(type_info(), "UnityEngine", "Resolution[]");
        }
        inline app::Resolution__Array* create() {
            return il2cpp::create_object<app::Resolution__Array>(get_class());
        }
    } // namespace Resolution__Array
} // namespace app::classes::types
