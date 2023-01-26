#pragma once
#include <Modloader/app/structs/Array_SorterGenericArray.h>
#include <Modloader/app/structs/Array_SorterGenericArray__Boxed.h>
#include <Modloader/app/structs/Array_SorterGenericArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Array_SorterGenericArray {
        inline app::Array_SorterGenericArray__Class** type_info() {
            static app::Array_SorterGenericArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Array_SorterGenericArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Array_SorterGenericArray__Class* get_class() {
            return il2cpp::get_nested_class<app::Array_SorterGenericArray__Class>(type_info(), "System", "Array", "SorterGenericArray");
        }
        inline app::Array_SorterGenericArray* create() {
            return il2cpp::create_object<app::Array_SorterGenericArray>(get_class());
        }
        inline app::Array_SorterGenericArray__Boxed* box(app::Array_SorterGenericArray value) {
            return il2cpp::box_value<app::Array_SorterGenericArray__Boxed>(get_class(), value);
        }
    } // namespace Array_SorterGenericArray
} // namespace app::classes::types
