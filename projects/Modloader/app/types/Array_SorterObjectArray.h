#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Array_SorterObjectArray {
        namespace {
            inline app::Array_SorterObjectArray__Class* type_info_ref = nullptr;
        }
        inline app::Array_SorterObjectArray__Class** type_info = &type_info_ref;
        inline app::Array_SorterObjectArray__Class* get_class() {
            return il2cpp::get_nested_class<app::Array_SorterObjectArray__Class>(type_info, "System", "Array", "SorterObjectArray");
        }
        inline app::Array_SorterObjectArray* create() {
            return il2cpp::create_object<app::Array_SorterObjectArray>(get_class());
        }
        inline app::Array_SorterObjectArray__Boxed* box(app::Array_SorterObjectArray value) {
            return il2cpp::box_value<app::Array_SorterObjectArray__Boxed>(get_class(), value);
        }
    } // namespace Array_SorterObjectArray
} // namespace app::classes::types
