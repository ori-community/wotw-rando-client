#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonPropertyAttribute {
        namespace {
            app::JsonPropertyAttribute__Class* type_info_ref = nullptr;
        }
        app::JsonPropertyAttribute__Class** type_info = &type_info_ref;
        inline app::JsonPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonPropertyAttribute__Class>(type_info, "Newtonsoft.Json", "JsonPropertyAttribute");
        }
        inline app::JsonPropertyAttribute* create() {
            return il2cpp::create_object<app::JsonPropertyAttribute>(get_class());
        }
    } // namespace JsonPropertyAttribute
} // namespace app::classes::types
