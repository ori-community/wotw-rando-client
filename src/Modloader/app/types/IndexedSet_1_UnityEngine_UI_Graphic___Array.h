#pragma once
#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_Graphic___Array.h>
#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_Graphic___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IndexedSet_1_UnityEngine_UI_Graphic___Array {
        inline app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class** type_info() {
            static app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class* get_class() {
            return il2cpp::get_class<app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class>(type_info(), "UnityEngine.UI.Collections", "IndexedSet`1[UnityEngine.UI.Graphic][]");
        }
        inline app::IndexedSet_1_UnityEngine_UI_Graphic___Array* create() {
            return il2cpp::create_object<app::IndexedSet_1_UnityEngine_UI_Graphic___Array>(get_class());
        }
    } // namespace IndexedSet_1_UnityEngine_UI_Graphic___Array
} // namespace app::classes::types
