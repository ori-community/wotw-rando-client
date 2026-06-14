#pragma once
#include <Modloader/app/structs/HashSet_1_T_Slot_UnityEngine_Vector2___Array.h>
#include <Modloader/app/structs/HashSet_1_T_Slot_UnityEngine_Vector2___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HashSet_1_T_Slot_UnityEngine_Vector2___Array {
        inline app::HashSet_1_T_Slot_UnityEngine_Vector2___Array__Class** type_info() {
            static app::HashSet_1_T_Slot_UnityEngine_Vector2___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HashSet_1_T_Slot_UnityEngine_Vector2___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HashSet_1_T_Slot_UnityEngine_Vector2___Array__Class* get_class() {
            return il2cpp::get_class<app::HashSet_1_T_Slot_UnityEngine_Vector2___Array__Class>(type_info(), "System.Collections.Generic", "HashSet`1[T]+Slot[UnityEngine.Vector2][]");
        }
        inline app::HashSet_1_T_Slot_UnityEngine_Vector2___Array* create() {
            return il2cpp::create_object<app::HashSet_1_T_Slot_UnityEngine_Vector2___Array>(get_class());
        }
    } // namespace HashSet_1_T_Slot_UnityEngine_Vector2___Array
} // namespace app::classes::types
