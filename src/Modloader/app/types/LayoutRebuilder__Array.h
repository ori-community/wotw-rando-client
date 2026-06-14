#pragma once
#include <Modloader/app/structs/LayoutRebuilder__Array.h>
#include <Modloader/app/structs/LayoutRebuilder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayoutRebuilder__Array {
        inline app::LayoutRebuilder__Array__Class** type_info() {
            static app::LayoutRebuilder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LayoutRebuilder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LayoutRebuilder__Array__Class* get_class() {
            return il2cpp::get_class<app::LayoutRebuilder__Array__Class>(type_info(), "UnityEngine.UI", "LayoutRebuilder[]");
        }
        inline app::LayoutRebuilder__Array* create() {
            return il2cpp::create_object<app::LayoutRebuilder__Array>(get_class());
        }
    } // namespace LayoutRebuilder__Array
} // namespace app::classes::types
