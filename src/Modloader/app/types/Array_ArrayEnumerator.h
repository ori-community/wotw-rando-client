#pragma once
#include <Modloader/app/structs/Array_ArrayEnumerator.h>
#include <Modloader/app/structs/Array_ArrayEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Array_ArrayEnumerator {
        inline app::Array_ArrayEnumerator__Class** type_info() {
            static app::Array_ArrayEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Array_ArrayEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04757018));
            }
            return cache;
        }
        inline app::Array_ArrayEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Array_ArrayEnumerator__Class>(type_info(), "System", "Array", "ArrayEnumerator");
        }
        inline app::Array_ArrayEnumerator* create() {
            return il2cpp::create_object<app::Array_ArrayEnumerator>(get_class());
        }
    } // namespace Array_ArrayEnumerator
} // namespace app::classes::types
