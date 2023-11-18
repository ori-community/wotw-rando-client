#pragma once
#include <Modloader/app/structs/HashSet_1_T_Slot_UnityEngine_Collider___Array.h>
#include <Modloader/app/structs/HashSet_1_T_Slot_UnityEngine_Collider___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HashSet_1_T_Slot_UnityEngine_Collider___Array {
        inline app::HashSet_1_T_Slot_UnityEngine_Collider___Array__Class** type_info() {
            static app::HashSet_1_T_Slot_UnityEngine_Collider___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HashSet_1_T_Slot_UnityEngine_Collider___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HashSet_1_T_Slot_UnityEngine_Collider___Array__Class* get_class() {
            return il2cpp::get_class<app::HashSet_1_T_Slot_UnityEngine_Collider___Array__Class>(type_info(), "System.Collections.Generic", "HashSet`1[T]+Slot[UnityEngine.Collider][]");
        }
        inline app::HashSet_1_T_Slot_UnityEngine_Collider___Array* create() {
            return il2cpp::create_object<app::HashSet_1_T_Slot_UnityEngine_Collider___Array>(get_class());
        }
    } // namespace HashSet_1_T_Slot_UnityEngine_Collider___Array
} // namespace app::classes::types
