#pragma once
#include <Modloader/app/structs/ControlUIItem__Array.h>
#include <Modloader/app/structs/ControlUIItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlUIItem__Array {
        inline app::ControlUIItem__Array__Class** type_info() {
            static app::ControlUIItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlUIItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlUIItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ControlUIItem__Array__Class>(type_info(), "", "ControlUIItem[]");
        }
        inline app::ControlUIItem__Array* create() {
            return il2cpp::create_object<app::ControlUIItem__Array>(get_class());
        }
    } // namespace ControlUIItem__Array
} // namespace app::classes::types
