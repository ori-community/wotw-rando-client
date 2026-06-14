#pragma once
#include <Modloader/app/structs/MeleeComboMove__Array.h>
#include <Modloader/app/structs/MeleeComboMove__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMove__Array {
        inline app::MeleeComboMove__Array__Class** type_info() {
            static app::MeleeComboMove__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMove__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMove__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMove__Array__Class>(type_info(), "", "MeleeComboMove[]");
        }
        inline app::MeleeComboMove__Array* create() {
            return il2cpp::create_object<app::MeleeComboMove__Array>(get_class());
        }
    } // namespace MeleeComboMove__Array
} // namespace app::classes::types
