#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonConverterAttribute {
        namespace {
            app::JsonConverterAttribute__Class* type_info_ref = nullptr;
        }
        app::JsonConverterAttribute__Class** type_info = &type_info_ref;
        inline app::JsonConverterAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonConverterAttribute__Class>(type_info, "Newtonsoft.Json", "JsonConverterAttribute");
        }
        inline app::JsonConverterAttribute* create() {
            return il2cpp::create_object<app::JsonConverterAttribute>(get_class());
        }
    } // namespace JsonConverterAttribute
} // namespace app::classes::types
