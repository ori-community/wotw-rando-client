#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonConstructorAttribute {
        namespace {
            app::JsonConstructorAttribute__Class* type_info_ref = nullptr;
        }
        app::JsonConstructorAttribute__Class** type_info = &type_info_ref;
        inline app::JsonConstructorAttribute__Class* get_class() {
            return il2cpp::get_class<app::JsonConstructorAttribute__Class>(type_info, "Newtonsoft.Json", "JsonConstructorAttribute");
        }
        inline app::JsonConstructorAttribute* create() {
            return il2cpp::create_object<app::JsonConstructorAttribute>(get_class());
        }
    } // namespace JsonConstructorAttribute
} // namespace app::classes::types
