#pragma once
#include <Modloader/app/structs/Set_1_TElement_Slot_System_Object___Array.h>
#include <Modloader/app/structs/Set_1_TElement_Slot_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Set_1_TElement_Slot_System_Object___Array {
        inline app::Set_1_TElement_Slot_System_Object___Array__Class** type_info() {
            static app::Set_1_TElement_Slot_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Set_1_TElement_Slot_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Set_1_TElement_Slot_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::Set_1_TElement_Slot_System_Object___Array__Class>(type_info(), "System.Linq", "Set`1[TElement]+Slot[System.Object][]");
        }
        inline app::Set_1_TElement_Slot_System_Object___Array* create() {
            return il2cpp::create_object<app::Set_1_TElement_Slot_System_Object___Array>(get_class());
        }
    } // namespace Set_1_TElement_Slot_System_Object___Array
} // namespace app::classes::types
