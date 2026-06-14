#pragma once
#include <Modloader/app/structs/ForceMode__Enum.h>
#include <Modloader/app/structs/ForceMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceMode__Enum {
        inline app::ForceMode__Enum__Class** type_info() {
            static app::ForceMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ForceMode__Enum__Class>(type_info(), "UnityEngine", "ForceMode");
        }
        inline app::ForceMode__Enum* create() {
            return il2cpp::create_object<app::ForceMode__Enum>(get_class());
        }
    } // namespace ForceMode__Enum
} // namespace app::classes::types
