#pragma once
#include <Modloader/app/structs/JsonPropertyAttribute.h>
#include <Modloader/app/structs/JsonPropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonPropertyAttribute {
        inline app::JsonPropertyAttribute__Class** type_info() {
            static app::JsonPropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonPropertyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonPropertyAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonPropertyAttribute");
        }
        inline app::JsonPropertyAttribute* create() {
            return il2cpp::create_object<app::JsonPropertyAttribute>(get_class());
        }
    } // namespace JsonPropertyAttribute
} // namespace app::classes::types
