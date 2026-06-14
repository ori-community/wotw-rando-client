#pragma once
#include <Modloader/app/structs/ActionMethod__Array.h>
#include <Modloader/app/structs/ActionMethod__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionMethod__Array {
        inline app::ActionMethod__Array__Class** type_info() {
            static app::ActionMethod__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionMethod__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionMethod__Array__Class* get_class() {
            return il2cpp::get_class<app::ActionMethod__Array__Class>(type_info(), "", "ActionMethod[]");
        }
        inline app::ActionMethod__Array* create() {
            return il2cpp::create_object<app::ActionMethod__Array>(get_class());
        }
    } // namespace ActionMethod__Array
} // namespace app::classes::types
