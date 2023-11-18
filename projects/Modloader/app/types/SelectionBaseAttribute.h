#pragma once
#include <Modloader/app/structs/SelectionBaseAttribute.h>
#include <Modloader/app/structs/SelectionBaseAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SelectionBaseAttribute {
        inline app::SelectionBaseAttribute__Class** type_info() {
            static app::SelectionBaseAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SelectionBaseAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SelectionBaseAttribute__Class* get_class() {
            return il2cpp::get_class<app::SelectionBaseAttribute__Class>(type_info(), "UnityEngine", "SelectionBaseAttribute");
        }
        inline app::SelectionBaseAttribute* create() {
            return il2cpp::create_object<app::SelectionBaseAttribute>(get_class());
        }
    } // namespace SelectionBaseAttribute
} // namespace app::classes::types
