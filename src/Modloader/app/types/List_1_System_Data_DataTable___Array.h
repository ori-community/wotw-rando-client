#pragma once
#include <Modloader/app/structs/List_1_System_Data_DataTable___Array.h>
#include <Modloader/app/structs/List_1_System_Data_DataTable___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace List_1_System_Data_DataTable___Array {
        inline app::List_1_System_Data_DataTable___Array__Class** type_info() {
            static app::List_1_System_Data_DataTable___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::List_1_System_Data_DataTable___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::List_1_System_Data_DataTable___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_System_Data_DataTable___Array__Class>(type_info(), "System.Collections.Generic", "List`1[System.Data.DataTable][]");
        }
        inline app::List_1_System_Data_DataTable___Array* create() {
            return il2cpp::create_object<app::List_1_System_Data_DataTable___Array>(get_class());
        }
    } // namespace List_1_System_Data_DataTable___Array
} // namespace app::classes::types
