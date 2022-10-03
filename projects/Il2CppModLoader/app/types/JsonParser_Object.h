#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonParser_Object {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonParser_Object__Class** type_info;
        inline app::JsonParser_Object__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonParser_Object__Class>(type_info, "Moon", "JsonParser", "Object");
        }
        inline app::JsonParser_Object* create() {
            return il2cpp::create_object<app::JsonParser_Object>(get_class());
        }
        inline app::JsonParser_Object__Boxed* box(app::JsonParser_Object value) {
            return il2cpp::box_value<app::JsonParser_Object__Boxed>(get_class(), value);
        }
    } // namespace JsonParser_Object
} // namespace app::classes::types
