#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonParser_Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonParser_Array__Class** type_info;
        inline app::JsonParser_Array__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonParser_Array__Class>(type_info, "Moon", "JsonParser", "Array");
        }
        inline app::JsonParser_Array* create() {
            return il2cpp::create_object<app::JsonParser_Array>(get_class());
        }
        inline app::JsonParser_Array__Boxed* box(app::JsonParser_Array value) {
            return il2cpp::box_value<app::JsonParser_Array__Boxed>(get_class(), value);
        }
    } // namespace JsonParser_Array
} // namespace app::classes::types
