#pragma once
#include <Modloader/app/structs/ControlItem__Array.h>
#include <Modloader/app/structs/ControlItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlItem__Array {
        inline app::ControlItem__Array__Class** type_info() {
            static app::ControlItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ControlItem__Array__Class>(type_info(), "", "ControlItem[]");
        }
        inline app::ControlItem__Array* create() {
            return il2cpp::create_object<app::ControlItem__Array>(get_class());
        }
    } // namespace ControlItem__Array
} // namespace app::classes::types
