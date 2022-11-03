#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IndexedSet_1_UnityEngine_UI_Graphic___Array {
        namespace {
            inline app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class* type_info_ref = nullptr;
        }
        inline app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class** type_info = &type_info_ref;
        inline app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class* get_class() {
            return il2cpp::get_class<app::IndexedSet_1_UnityEngine_UI_Graphic___Array__Class>(type_info, "UnityEngine.UI.Collections", "IndexedSet`1[UnityEngine.UI.Graphic][]");
        }
        inline app::IndexedSet_1_UnityEngine_UI_Graphic___Array* create() {
            return il2cpp::create_object<app::IndexedSet_1_UnityEngine_UI_Graphic___Array>(get_class());
        }
    } // namespace IndexedSet_1_UnityEngine_UI_Graphic___Array
} // namespace app::classes::types
