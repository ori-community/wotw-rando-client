#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExpandoObject_ValueCollection_GetEnumerator_d_15__Class.h>
#include <Modloader/app/structs/ExpandoObject_ValueCollection_GetEnumerator_d_15.h>

namespace app::classes::types {
    namespace ExpandoObject_ValueCollection_GetEnumerator_d_15 {
        inline app::ExpandoObject_ValueCollection_GetEnumerator_d_15__Class** type_info = (app::ExpandoObject_ValueCollection_GetEnumerator_d_15__Class**)(modloader::win::memory::resolve_rva(0x047799B0));
        inline app::ExpandoObject_ValueCollection_GetEnumerator_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_ValueCollection_GetEnumerator_d_15__Class>(type_info, "System.Dynamic", "ExpandoObject+ValueCollection", "<GetEnumerator>d__15");
        }
        inline app::ExpandoObject_ValueCollection_GetEnumerator_d_15* create() {
            return il2cpp::create_object<app::ExpandoObject_ValueCollection_GetEnumerator_d_15>(get_class());
        }
    } // namespace ExpandoObject_ValueCollection_GetEnumerator_d_15
} // namespace app::classes::types
