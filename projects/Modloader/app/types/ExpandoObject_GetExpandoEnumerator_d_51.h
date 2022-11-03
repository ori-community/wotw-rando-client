#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandoObject_GetExpandoEnumerator_d_51 {
        inline app::ExpandoObject_GetExpandoEnumerator_d_51__Class** type_info = (app::ExpandoObject_GetExpandoEnumerator_d_51__Class**)(modloader::win::memory::resolve_rva(0x04728E20));
        inline app::ExpandoObject_GetExpandoEnumerator_d_51__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_GetExpandoEnumerator_d_51__Class>(type_info, "System.Dynamic", "ExpandoObject", "<GetExpandoEnumerator>d__51");
        }
        inline app::ExpandoObject_GetExpandoEnumerator_d_51* create() {
            return il2cpp::create_object<app::ExpandoObject_GetExpandoEnumerator_d_51>(get_class());
        }
    } // namespace ExpandoObject_GetExpandoEnumerator_d_51
} // namespace app::classes::types
