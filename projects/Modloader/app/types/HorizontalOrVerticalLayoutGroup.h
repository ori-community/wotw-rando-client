#pragma once
#include <Modloader/app/structs/HorizontalOrVerticalLayoutGroup.h>
#include <Modloader/app/structs/HorizontalOrVerticalLayoutGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HorizontalOrVerticalLayoutGroup {
        inline app::HorizontalOrVerticalLayoutGroup__Class** type_info() {
            static app::HorizontalOrVerticalLayoutGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HorizontalOrVerticalLayoutGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HorizontalOrVerticalLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::HorizontalOrVerticalLayoutGroup__Class>(type_info(), "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");
        }
        inline app::HorizontalOrVerticalLayoutGroup* create() {
            return il2cpp::create_object<app::HorizontalOrVerticalLayoutGroup>(get_class());
        }
    } // namespace HorizontalOrVerticalLayoutGroup
} // namespace app::classes::types
