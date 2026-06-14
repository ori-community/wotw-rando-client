#pragma once
#include <Modloader/app/structs/TransparencySortMode__Enum.h>
#include <Modloader/app/structs/TransparencySortMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencySortMode__Enum {
        inline app::TransparencySortMode__Enum__Class** type_info() {
            static app::TransparencySortMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransparencySortMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransparencySortMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransparencySortMode__Enum__Class>(type_info(), "UnityEngine", "TransparencySortMode");
        }
        inline app::TransparencySortMode__Enum* create() {
            return il2cpp::create_object<app::TransparencySortMode__Enum>(get_class());
        }
    } // namespace TransparencySortMode__Enum
} // namespace app::classes::types
