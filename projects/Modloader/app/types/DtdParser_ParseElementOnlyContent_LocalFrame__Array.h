#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class.h>
#include <Modloader/app/structs/DtdParser_ParseElementOnlyContent_LocalFrame__Array.h>

namespace app::classes::types {
    namespace DtdParser_ParseElementOnlyContent_LocalFrame__Array {
        namespace {
            inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class* type_info_ref = nullptr;
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class** type_info = &type_info_ref;
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::DtdParser_ParseElementOnlyContent_LocalFrame__Array__Class>(type_info, "System.Xml", "DtdParser+ParseElementOnlyContent_LocalFrame[]");
        }
        inline app::DtdParser_ParseElementOnlyContent_LocalFrame__Array* create() {
            return il2cpp::create_object<app::DtdParser_ParseElementOnlyContent_LocalFrame__Array>(get_class());
        }
    } // namespace DtdParser_ParseElementOnlyContent_LocalFrame__Array
} // namespace app::classes::types
