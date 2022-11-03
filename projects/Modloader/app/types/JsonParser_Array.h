#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonParser_Array {
        inline app::JsonParser_Array__Class** type_info = (app::JsonParser_Array__Class**)(modloader::win::memory::resolve_rva(0x04784790));
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
