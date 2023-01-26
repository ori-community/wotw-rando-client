#pragma once
#include <Modloader/app/structs/JsonConstructorAttribute.h>
#include <Modloader/app/structs/JsonConstructorAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonConstructorAttribute {
        inline app::JsonConstructorAttribute__Class** type_info() {
            static app::JsonConstructorAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonConstructorAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonConstructorAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonConstructorAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonConstructorAttribute");
        }
        inline app::JsonConstructorAttribute* create() {
            return il2cpp::create_object<app::JsonConstructorAttribute>(get_class());
        }
    } // namespace JsonConstructorAttribute
} // namespace app::classes::types
