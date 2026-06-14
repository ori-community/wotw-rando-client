#pragma once
#include <Modloader/app/structs/JToken__Array.h>
#include <Modloader/app/structs/JToken__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JToken__Array {
        inline app::JToken__Array__Class** type_info() {
            static app::JToken__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JToken__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JToken__Array__Class* get_class() {
            return il2cpp::get_class<app::JToken__Array__Class>(type_info(), "Newtonsoft.Json.Linq", "JToken[]");
        }
        inline app::JToken__Array* create() {
            return il2cpp::create_object<app::JToken__Array>(get_class());
        }
    } // namespace JToken__Array
} // namespace app::classes::types
