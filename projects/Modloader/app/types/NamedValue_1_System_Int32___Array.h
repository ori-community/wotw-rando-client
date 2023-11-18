#pragma once
#include <Modloader/app/structs/NamedValue_1_System_Int32___Array.h>
#include <Modloader/app/structs/NamedValue_1_System_Int32___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamedValue_1_System_Int32___Array {
        inline app::NamedValue_1_System_Int32___Array__Class** type_info() {
            static app::NamedValue_1_System_Int32___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NamedValue_1_System_Int32___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NamedValue_1_System_Int32___Array__Class* get_class() {
            return il2cpp::get_class<app::NamedValue_1_System_Int32___Array__Class>(type_info(), "Moon", "NamedValue`1[System.Int32][]");
        }
        inline app::NamedValue_1_System_Int32___Array* create() {
            return il2cpp::create_object<app::NamedValue_1_System_Int32___Array>(get_class());
        }
    } // namespace NamedValue_1_System_Int32___Array
} // namespace app::classes::types
