#pragma once
#include <Modloader/app/structs/ILayoutGroup.h>
#include <Modloader/app/structs/ILayoutGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILayoutGroup {
        inline app::ILayoutGroup__Class** type_info() {
            static app::ILayoutGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ILayoutGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ILayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::ILayoutGroup__Class>(type_info(), "UnityEngine.UI", "ILayoutGroup");
        }
    } // namespace ILayoutGroup
} // namespace app::classes::types
