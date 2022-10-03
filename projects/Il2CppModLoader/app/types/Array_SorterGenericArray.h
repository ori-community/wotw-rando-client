#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Array_SorterGenericArray {
        namespace {
            app::Array_SorterGenericArray__Class* type_info_ref = nullptr;
        }
        app::Array_SorterGenericArray__Class** type_info = &type_info_ref;
        inline app::Array_SorterGenericArray__Class* get_class() {
            return il2cpp::get_nested_class<app::Array_SorterGenericArray__Class>(type_info, "System", "Array", "SorterGenericArray");
        }
        inline app::Array_SorterGenericArray* create() {
            return il2cpp::create_object<app::Array_SorterGenericArray>(get_class());
        }
        inline app::Array_SorterGenericArray__Boxed* box(app::Array_SorterGenericArray value) {
            return il2cpp::box_value<app::Array_SorterGenericArray__Boxed>(get_class(), value);
        }
    } // namespace Array_SorterGenericArray
} // namespace app::classes::types
