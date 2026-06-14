#pragma once
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/Space__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Space__Enum {
        inline app::Space__Enum__Class** type_info() {
            static app::Space__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Space__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Space__Enum__Class* get_class() {
            return il2cpp::get_class<app::Space__Enum__Class>(type_info(), "UnityEngine", "Space");
        }
        inline app::Space__Enum* create() {
            return il2cpp::create_object<app::Space__Enum>(get_class());
        }
    } // namespace Space__Enum
} // namespace app::classes::types
