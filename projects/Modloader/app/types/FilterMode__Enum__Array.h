#pragma once
#include <Modloader/app/structs/FilterMode__Enum__Array.h>
#include <Modloader/app/structs/FilterMode__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FilterMode__Enum__Array {
        inline app::FilterMode__Enum__Array__Class** type_info() {
            static app::FilterMode__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FilterMode__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FilterMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::FilterMode__Enum__Array__Class>(type_info(), "UnityEngine", "FilterMode[]");
        }
        inline app::FilterMode__Enum__Array* create() {
            return il2cpp::create_object<app::FilterMode__Enum__Array>(get_class());
        }
    } // namespace FilterMode__Enum__Array
} // namespace app::classes::types
