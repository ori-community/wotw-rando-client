#pragma once
#include <Modloader/app/structs/Water3Float.h>
#include <Modloader/app/structs/Water3Float__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Water3Float {
        inline app::Water3Float__Class** type_info() {
            static app::Water3Float__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Water3Float__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Water3Float__Class* get_class() {
            return il2cpp::get_class<app::Water3Float__Class>(type_info(), "", "Water3Float");
        }
        inline app::Water3Float* create() {
            return il2cpp::create_object<app::Water3Float>(get_class());
        }
    } // namespace Water3Float
} // namespace app::classes::types
