#pragma once
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/FilterMode__Enum__Array.h>
#include <Modloader/app/structs/FilterMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FilterMode__Enum {
        inline app::FilterMode__Enum__Class** type_info() {
            static app::FilterMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FilterMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FilterMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FilterMode__Enum__Class>(type_info(), "UnityEngine", "FilterMode");
        }
        inline app::FilterMode__Enum* create() {
            return il2cpp::create_object<app::FilterMode__Enum>(get_class());
        }
        inline app::FilterMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::FilterMode__Enum__Array>(get_class(), size);
        }
        inline app::FilterMode__Enum__Array* create_array(const std::vector<app::FilterMode__Enum*>& items) {
            return il2cpp::array_new<app::FilterMode__Enum__Array>(get_class(), items);
        }
    } // namespace FilterMode__Enum
} // namespace app::classes::types
