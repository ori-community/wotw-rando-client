#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JObject_GetEnumerator_d_63 {
        inline app::JObject_GetEnumerator_d_63__Class** type_info = (app::JObject_GetEnumerator_d_63__Class**)(modloader::win::memory::resolve_rva(0x0474E680));
        inline app::JObject_GetEnumerator_d_63__Class* get_class() {
            return il2cpp::get_nested_class<app::JObject_GetEnumerator_d_63__Class>(type_info, "Newtonsoft.Json.Linq", "JObject", "<GetEnumerator>d__63");
        }
        inline app::JObject_GetEnumerator_d_63* create() {
            return il2cpp::create_object<app::JObject_GetEnumerator_d_63>(get_class());
        }
    } // namespace JObject_GetEnumerator_d_63
} // namespace app::classes::types
