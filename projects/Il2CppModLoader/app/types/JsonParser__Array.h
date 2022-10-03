#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonParser__Array {
        namespace {
            app::JsonParser__Array__Class* type_info_ref = nullptr;
        }
        app::JsonParser__Array__Class** type_info = &type_info_ref;
        inline app::JsonParser__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonParser__Array__Class>(type_info, "Moon", "JsonParser[]");
        }
        inline app::JsonParser__Array* create() {
            return il2cpp::create_object<app::JsonParser__Array>(get_class());
        }
    } // namespace JsonParser__Array
} // namespace app::classes::types
