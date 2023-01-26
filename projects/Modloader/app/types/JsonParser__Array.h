#pragma once
#include <Modloader/app/structs/JsonParser__Array.h>
#include <Modloader/app/structs/JsonParser__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonParser__Array {
        inline app::JsonParser__Array__Class** type_info() {
            static app::JsonParser__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonParser__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonParser__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonParser__Array__Class>(type_info(), "Moon", "JsonParser[]");
        }
        inline app::JsonParser__Array* create() {
            return il2cpp::create_object<app::JsonParser__Array>(get_class());
        }
    } // namespace JsonParser__Array
} // namespace app::classes::types
