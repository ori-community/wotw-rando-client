#pragma once
#include <Modloader/app/structs/LayoutGroup.h>
#include <Modloader/app/structs/LayoutGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayoutGroup {
        inline app::LayoutGroup__Class** type_info() {
            static app::LayoutGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LayoutGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::LayoutGroup__Class>(type_info(), "UnityEngine.UI", "LayoutGroup");
        }
        inline app::LayoutGroup* create() {
            return il2cpp::create_object<app::LayoutGroup>(get_class());
        }
    } // namespace LayoutGroup
} // namespace app::classes::types
