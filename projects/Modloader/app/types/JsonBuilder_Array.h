#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JsonBuilder_Array__Class.h>
#include <Modloader/app/structs/JsonBuilder_Array.h>
#include <Modloader/app/structs/JsonBuilder_Array__Boxed.h>

namespace app::classes::types {
    namespace JsonBuilder_Array {
        namespace {
            inline app::JsonBuilder_Array__Class* type_info_ref = nullptr;
        }
        inline app::JsonBuilder_Array__Class** type_info = &type_info_ref;
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
