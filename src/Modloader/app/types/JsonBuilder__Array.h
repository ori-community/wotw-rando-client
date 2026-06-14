#pragma once
#include <Modloader/app/structs/JsonBuilder__Array.h>
#include <Modloader/app/structs/JsonBuilder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonBuilder__Array {
        inline app::JsonBuilder__Array__Class** type_info() {
            static app::JsonBuilder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonBuilder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonBuilder__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonBuilder__Array__Class>(type_info(), "Moon", "JsonBuilder[]");
        }
        inline app::JsonBuilder__Array* create() {
            return il2cpp::create_object<app::JsonBuilder__Array>(get_class());
        }
    } // namespace JsonBuilder__Array
} // namespace app::classes::types
