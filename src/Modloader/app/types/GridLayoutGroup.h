#pragma once
#include <Modloader/app/structs/GridLayoutGroup.h>
#include <Modloader/app/structs/GridLayoutGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GridLayoutGroup {
        inline app::GridLayoutGroup__Class** type_info() {
            static app::GridLayoutGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GridLayoutGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GridLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::GridLayoutGroup__Class>(type_info(), "UnityEngine.UI", "GridLayoutGroup");
        }
        inline app::GridLayoutGroup* create() {
            return il2cpp::create_object<app::GridLayoutGroup>(get_class());
        }
    } // namespace GridLayoutGroup
} // namespace app::classes::types
