#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonBuilder_Array {
        namespace {
            app::JsonBuilder_Array__Class* type_info_ref = nullptr;
        }
        app::JsonBuilder_Array__Class** type_info = &type_info_ref;
        inline app::JsonBuilder_Array__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonBuilder_Array__Class>(type_info, "Moon", "JsonBuilder", "Array");
        }
        inline app::JsonBuilder_Array* create() {
            return il2cpp::create_object<app::JsonBuilder_Array>(get_class());
        }
        inline app::JsonBuilder_Array__Boxed* box(app::JsonBuilder_Array value) {
            return il2cpp::box_value<app::JsonBuilder_Array__Boxed>(get_class(), value);
        }
    } // namespace JsonBuilder_Array
} // namespace app::classes::types
