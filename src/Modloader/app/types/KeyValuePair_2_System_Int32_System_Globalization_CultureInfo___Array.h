#pragma once
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array {
        inline app::KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class** type_info() {
            static app::KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[System.Int32,System.Globalization.CultureInfo][]");
        }
        inline app::KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_Int32_System_Globalization_CultureInfo___Array
} // namespace app::classes::types
