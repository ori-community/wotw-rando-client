#pragma once
#include <Modloader/app/structs/MessageBoxVisibility.h>
#include <Modloader/app/structs/MessageBoxVisibility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageBoxVisibility {
        inline app::MessageBoxVisibility__Class** type_info() {
            static app::MessageBoxVisibility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageBoxVisibility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageBoxVisibility__Class* get_class() {
            return il2cpp::get_class<app::MessageBoxVisibility__Class>(type_info(), "", "MessageBoxVisibility");
        }
        inline app::MessageBoxVisibility* create() {
            return il2cpp::create_object<app::MessageBoxVisibility>(get_class());
        }
    } // namespace MessageBoxVisibility
} // namespace app::classes::types
