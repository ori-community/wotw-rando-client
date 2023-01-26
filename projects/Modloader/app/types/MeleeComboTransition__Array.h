#pragma once
#include <Modloader/app/structs/MeleeComboTransition__Array.h>
#include <Modloader/app/structs/MeleeComboTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboTransition__Array {
        inline app::MeleeComboTransition__Array__Class** type_info() {
            static app::MeleeComboTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboTransition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboTransition__Array__Class>(type_info(), "", "MeleeComboTransition[]");
        }
        inline app::MeleeComboTransition__Array* create() {
            return il2cpp::create_object<app::MeleeComboTransition__Array>(get_class());
        }
    } // namespace MeleeComboTransition__Array
} // namespace app::classes::types
