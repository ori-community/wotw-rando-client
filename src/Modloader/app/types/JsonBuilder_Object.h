#pragma once
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/JsonBuilder_Object__Boxed.h>
#include <Modloader/app/structs/JsonBuilder_Object__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JsonBuilder_Object {
        inline app::JsonBuilder_Object__Class** type_info() {
            static app::JsonBuilder_Object__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JsonBuilder_Object__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JsonBuilder_Object__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonBuilder_Object__Class>(type_info(), "Moon", "JsonBuilder", "Object");
        }
        inline app::JsonBuilder_Object* create() {
            return il2cpp::create_object<app::JsonBuilder_Object>(get_class());
        }
        inline app::JsonBuilder_Object__Boxed* box(app::JsonBuilder_Object value) {
            return il2cpp::box_value<app::JsonBuilder_Object__Boxed>(get_class(), value);
        }
    } // namespace JsonBuilder_Object
} // namespace app::classes::types
