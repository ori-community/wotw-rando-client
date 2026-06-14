#pragma once
#include <Modloader/app/structs/VerticalLayoutGroup.h>
#include <Modloader/app/structs/VerticalLayoutGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalLayoutGroup {
        inline app::VerticalLayoutGroup__Class** type_info() {
            static app::VerticalLayoutGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerticalLayoutGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerticalLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::VerticalLayoutGroup__Class>(type_info(), "UnityEngine.UI", "VerticalLayoutGroup");
        }
        inline app::VerticalLayoutGroup* create() {
            return il2cpp::create_object<app::VerticalLayoutGroup>(get_class());
        }
    } // namespace VerticalLayoutGroup
} // namespace app::classes::types
