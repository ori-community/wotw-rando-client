#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Array_ArrayEnumerator {
        inline app::Array_ArrayEnumerator__Class** type_info = (app::Array_ArrayEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04757018));
        inline app::Array_ArrayEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Array_ArrayEnumerator__Class>(type_info, "System", "Array", "ArrayEnumerator");
        }
        inline app::Array_ArrayEnumerator* create() {
            return il2cpp::create_object<app::Array_ArrayEnumerator>(get_class());
        }
    } // namespace Array_ArrayEnumerator
} // namespace app::classes::types
