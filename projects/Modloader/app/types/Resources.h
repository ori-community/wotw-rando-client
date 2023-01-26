#pragma once
#include <Modloader/app/structs/Resources.h>
#include <Modloader/app/structs/Resources__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Resources {
        inline app::Resources__Class** type_info() {
            static app::Resources__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Resources__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Resources__Class* get_class() {
            return il2cpp::get_class<app::Resources__Class>(type_info(), "UnityEngine", "Resources");
        }
        inline app::Resources* create() {
            return il2cpp::create_object<app::Resources>(get_class());
        }
    } // namespace Resources
} // namespace app::classes::types
