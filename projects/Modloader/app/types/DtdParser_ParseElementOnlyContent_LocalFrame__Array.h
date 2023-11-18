#pragma once
#include <Modloader/app/structs/DtdParser_ParseElementOnlyContent_LocalFrame__Array.h>
#include <Modloader/app/structs/DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DtdParser_ParseElementOnlyContent_LocalFrame__Array {
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class** type_info() {
            static app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class>(type_info(), "System.Xml", "DtdParser+ParseElementOnlyContent_LocalFrame[]");
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array* create() {
            return il2cpp::create_object<app::DtdParser_ParseElementOnlyContent_LocalFrame__Array>(get_class());
        }
    } // namespace DtdParser_ParseElementOnlyContent_LocalFrame__Array
} // namespace app::classes::types
