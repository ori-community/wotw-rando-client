#pragma once
#include <Modloader/app/structs/DefaultControls_Resources.h>
#include <Modloader/app/structs/DefaultControls_Resources__Boxed.h>
#include <Modloader/app/structs/DefaultControls_Resources__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultControls_Resources {
        inline app::DefaultControls_Resources__Class** type_info() {
            static app::DefaultControls_Resources__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultControls_Resources__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultControls_Resources__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultControls_Resources__Class>(type_info(), "UnityEngine.UI", "DefaultControls", "Resources");
        }
        inline app::DefaultControls_Resources* create() {
            return il2cpp::create_object<app::DefaultControls_Resources>(get_class());
        }
        inline app::DefaultControls_Resources__Boxed* box(app::DefaultControls_Resources value) {
            return il2cpp::box_value<app::DefaultControls_Resources__Boxed>(get_class(), value);
        }
    } // namespace DefaultControls_Resources
} // namespace app::classes::types
