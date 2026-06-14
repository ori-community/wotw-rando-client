#pragma once
#include <Modloader/app/structs/Array_SorterObjectArray.h>
#include <Modloader/app/structs/Array_SorterObjectArray__Boxed.h>
#include <Modloader/app/structs/Array_SorterObjectArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Array_SorterObjectArray {
        inline app::Array_SorterObjectArray__Class** type_info() {
            static app::Array_SorterObjectArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Array_SorterObjectArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Array_SorterObjectArray__Class* get_class() {
            return il2cpp::get_nested_class<app::Array_SorterObjectArray__Class>(type_info(), "System", "Array", "SorterObjectArray");
        }
        inline app::Array_SorterObjectArray* create() {
            return il2cpp::create_object<app::Array_SorterObjectArray>(get_class());
        }
        inline app::Array_SorterObjectArray__Boxed* box(app::Array_SorterObjectArray value) {
            return il2cpp::box_value<app::Array_SorterObjectArray__Boxed>(get_class(), value);
        }
    } // namespace Array_SorterObjectArray
} // namespace app::classes::types
