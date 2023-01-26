#pragma once
#include <Modloader/app/structs/HashSet_1_T_Slot_System_Threading_Thread___Array.h>
#include <Modloader/app/structs/HashSet_1_T_Slot_System_Threading_Thread___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HashSet_1_T_Slot_System_Threading_Thread___Array {
        inline app::HashSet_1_T_Slot_System_Threading_Thread___Array__Class** type_info() {
            static app::HashSet_1_T_Slot_System_Threading_Thread___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HashSet_1_T_Slot_System_Threading_Thread___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HashSet_1_T_Slot_System_Threading_Thread___Array__Class* get_class() {
            return il2cpp::get_class<app::HashSet_1_T_Slot_System_Threading_Thread___Array__Class>(type_info(), "System.Collections.Generic", "HashSet`1[T]+Slot[System.Threading.Thread][]");
        }
        inline app::HashSet_1_T_Slot_System_Threading_Thread___Array* create() {
            return il2cpp::create_object<app::HashSet_1_T_Slot_System_Threading_Thread___Array>(get_class());
        }
    } // namespace HashSet_1_T_Slot_System_Threading_Thread___Array
} // namespace app::classes::types
