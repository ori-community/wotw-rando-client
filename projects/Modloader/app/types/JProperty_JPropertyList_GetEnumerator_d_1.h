#pragma once
#include <Modloader/app/structs/JProperty_JPropertyList_GetEnumerator_d_1.h>
#include <Modloader/app/structs/JProperty_JPropertyList_GetEnumerator_d_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JProperty_JPropertyList_GetEnumerator_d_1 {
        inline app::JProperty_JPropertyList_GetEnumerator_d_1__Class** type_info() {
            static app::JProperty_JPropertyList_GetEnumerator_d_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JProperty_JPropertyList_GetEnumerator_d_1__Class**)(modloader::win::memory::resolve_rva(0x0476AF28));
            }
            return cache;
        }
        inline app::JProperty_JPropertyList_GetEnumerator_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::JProperty_JPropertyList_GetEnumerator_d_1__Class>(type_info(), "Newtonsoft.Json.Linq", "JProperty+JPropertyList", "<GetEnumerator>d__1");
        }
        inline app::JProperty_JPropertyList_GetEnumerator_d_1* create() {
            return il2cpp::create_object<app::JProperty_JPropertyList_GetEnumerator_d_1>(get_class());
        }
    } // namespace JProperty_JPropertyList_GetEnumerator_d_1
} // namespace app::classes::types
