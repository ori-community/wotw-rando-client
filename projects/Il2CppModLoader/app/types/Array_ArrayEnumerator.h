#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Array_ArrayEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Array_ArrayEnumerator__Class** type_info;
        inline app::Array_ArrayEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Array_ArrayEnumerator__Class>(type_info, "System", "Array", "ArrayEnumerator");
        }
        inline app::Array_ArrayEnumerator* create() {
            return il2cpp::create_object<app::Array_ArrayEnumerator>(get_class());
        }
    } // namespace Array_ArrayEnumerator
} // namespace app::classes::types
