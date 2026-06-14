#pragma once
#include <Modloader/app/structs/JsonProperty__Array.h>
#include <Modloader/app/structs/JsonProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonProperty__Array {
        inline app::JsonProperty__Array__Class** type_info() {
            static app::JsonProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonProperty__Array__Class>(type_info(), "Newtonsoft.Json.Serialization", "JsonProperty[]");
        }
        inline app::JsonProperty__Array* create() {
            return il2cpp::create_object<app::JsonProperty__Array>(get_class());
        }
    } // namespace JsonProperty__Array
} // namespace app::classes::types
