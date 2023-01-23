#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DtdParser_UndeclaredNotation__Array__Class.h>
#include <Modloader/app/structs/DtdParser_UndeclaredNotation__Array.h>

namespace app::classes::types {
    namespace DtdParser_UndeclaredNotation__Array {
        namespace {
            inline app::DtdParser_UndeclaredNotation__Array__Class* type_info_ref = nullptr;
        }
        inline app::DtdParser_UndeclaredNotation__Array__Class** type_info = &type_info_ref;
        inline app::DtdParser_UndeclaredNotation__Array__Class* get_class() {
            return il2cpp::get_class<app::DtdParser_UndeclaredNotation__Array__Class>(type_info, "System.Xml", "DtdParser+UndeclaredNotation[]");
        }
        inline app::DtdParser_UndeclaredNotation__Array* create() {
            return il2cpp::create_object<app::DtdParser_UndeclaredNotation__Array>(get_class());
        }
    } // namespace DtdParser_UndeclaredNotation__Array
} // namespace app::classes::types
