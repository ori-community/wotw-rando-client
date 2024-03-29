#pragma once
#include <Modloader/app/structs/JsonConverterAttribute.h>
#include <Modloader/app/structs/JsonConverterAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonConverterAttribute {
        inline app::JsonConverterAttribute__Class** type_info() {
            static app::JsonConverterAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonConverterAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonConverterAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonConverterAttribute__Class>(type_info(), "Newtonsoft.Json", "JsonConverterAttribute");
        }
        inline app::JsonConverterAttribute* create() {
            return il2cpp::create_object<app::JsonConverterAttribute>(get_class());
        }
    } // namespace JsonConverterAttribute
} // namespace app::classes::types
