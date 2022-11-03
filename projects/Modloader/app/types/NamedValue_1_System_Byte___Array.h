#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NamedValue_1_System_Byte___Array {
        namespace {
            inline app::NamedValue_1_System_Byte___Array__Class* type_info_ref = nullptr;
        }
        inline app::NamedValue_1_System_Byte___Array__Class** type_info = &type_info_ref;
        inline app::NamedValue_1_System_Byte___Array__Class* get_class() {
            return il2cpp::get_class<app::NamedValue_1_System_Byte___Array__Class>(type_info, "Moon", "NamedValue`1[System.Byte][]");
        }
        inline app::NamedValue_1_System_Byte___Array* create() {
            return il2cpp::create_object<app::NamedValue_1_System_Byte___Array>(get_class());
        }
    } // namespace NamedValue_1_System_Byte___Array
} // namespace app::classes::types
