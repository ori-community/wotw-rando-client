#pragma once
#include <Modloader/app/structs/JsonIgnoreAttribute.h>
#include <Modloader/app/structs/JsonIgnoreAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonIgnoreAttribute {
        inline app::JsonIgnoreAttribute__Class** type_info() {
            static app::JsonIgnoreAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonIgnoreAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonIgnoreAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonIgnoreAttribute");
        }
        inline app::JsonIgnoreAttribute* create() {
            return il2cpp::create_object<app::JsonIgnoreAttribute>(get_class());
        }
    } // namespace JsonIgnoreAttribute
} // namespace app::classes::types
