#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandoObject_ExpandoData {
        inline app::ExpandoObject_ExpandoData__Class** type_info = (app::ExpandoObject_ExpandoData__Class**)(modloader::win::memory::resolve_rva(0x0471E138));
        inline app::ExpandoObject_ExpandoData__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpandoObject_ExpandoData__Class>(type_info, "System.Dynamic", "ExpandoObject", "ExpandoData");
        }
        inline app::ExpandoObject_ExpandoData* create() {
            return il2cpp::create_object<app::ExpandoObject_ExpandoData>(get_class());
        }
    } // namespace ExpandoObject_ExpandoData
} // namespace app::classes::types
