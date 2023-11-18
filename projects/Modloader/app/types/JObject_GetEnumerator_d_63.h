#pragma once
#include <Modloader/app/structs/JObject_GetEnumerator_d_63.h>
#include <Modloader/app/structs/JObject_GetEnumerator_d_63__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JObject_GetEnumerator_d_63 {
        inline app::JObject_GetEnumerator_d_63__Class** type_info() {
            static app::JObject_GetEnumerator_d_63__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JObject_GetEnumerator_d_63__Class**)(modloader::win::memory::resolve_rva(0x0474E680));
            }
            return cache;
        }
        inline app::JObject_GetEnumerator_d_63__Class* get_class() {
            return il2cpp::get_nested_class<app::JObject_GetEnumerator_d_63__Class>(type_info(), "Newtonsoft.Json.Linq", "JObject", "<GetEnumerator>d__63");
        }
        inline app::JObject_GetEnumerator_d_63* create() {
            return il2cpp::create_object<app::JObject_GetEnumerator_d_63>(get_class());
        }
    } // namespace JObject_GetEnumerator_d_63
} // namespace app::classes::types
