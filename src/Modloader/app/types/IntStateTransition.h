#pragma once
#include <Modloader/app/structs/IntStateTransition.h>
#include <Modloader/app/structs/IntStateTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntStateTransition {
        inline app::IntStateTransition__Class** type_info() {
            static app::IntStateTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntStateTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntStateTransition__Class* get_class() {
            return il2cpp::get_class<app::IntStateTransition__Class>(type_info(), "", "IntStateTransition");
        }
        inline app::IntStateTransition* create() {
            return il2cpp::create_object<app::IntStateTransition>(get_class());
        }
    } // namespace IntStateTransition
} // namespace app::classes::types
