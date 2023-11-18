#pragma once
#include <Modloader/app/structs/PrimitiveType__Enum.h>
#include <Modloader/app/structs/PrimitiveType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimitiveType__Enum {
        inline app::PrimitiveType__Enum__Class** type_info() {
            static app::PrimitiveType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrimitiveType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrimitiveType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveType__Enum__Class>(type_info(), "UnityEngine", "PrimitiveType");
        }
        inline app::PrimitiveType__Enum* create() {
            return il2cpp::create_object<app::PrimitiveType__Enum>(get_class());
        }
    } // namespace PrimitiveType__Enum
} // namespace app::classes::types
