#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandoObject_KeyCollection_GetEnumerator_d_15 {
        inline app::ExpandoObject_KeyCollection_GetEnumerator_d_15__Class** type_info = (app::ExpandoObject_KeyCollection_GetEnumerator_d_15__Class**)(modloader::win::memory::resolve_rva(0x0473B988));
        inline app::ExpandoObject_KeyCollection_GetEnumerator_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_KeyCollection_GetEnumerator_d_15__Class>(type_info, "System.Dynamic", "ExpandoObject+KeyCollection", "<GetEnumerator>d__15");
        }
        inline app::ExpandoObject_KeyCollection_GetEnumerator_d_15* create() {
            return il2cpp::create_object<app::ExpandoObject_KeyCollection_GetEnumerator_d_15>(get_class());
        }
    } // namespace ExpandoObject_KeyCollection_GetEnumerator_d_15
} // namespace app::classes::types
