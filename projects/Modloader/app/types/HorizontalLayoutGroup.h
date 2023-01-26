#pragma once
#include <Modloader/app/structs/HorizontalLayoutGroup.h>
#include <Modloader/app/structs/HorizontalLayoutGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HorizontalLayoutGroup {
        inline app::HorizontalLayoutGroup__Class** type_info() {
            static app::HorizontalLayoutGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HorizontalLayoutGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HorizontalLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::HorizontalLayoutGroup__Class>(type_info(), "UnityEngine.UI", "HorizontalLayoutGroup");
        }
        inline app::HorizontalLayoutGroup* create() {
            return il2cpp::create_object<app::HorizontalLayoutGroup>(get_class());
        }
    } // namespace HorizontalLayoutGroup
} // namespace app::classes::types
