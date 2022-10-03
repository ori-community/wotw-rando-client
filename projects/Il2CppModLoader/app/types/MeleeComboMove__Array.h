#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMove__Array {
        namespace {
            app::MeleeComboMove__Array__Class* type_info_ref = nullptr;
        }
        app::MeleeComboMove__Array__Class** type_info = &type_info_ref;
        inline app::MeleeComboMove__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMove__Array__Class>(type_info, "", "MeleeComboMove[]");
        }
        inline app::MeleeComboMove__Array* create() {
            return il2cpp::create_object<app::MeleeComboMove__Array>(get_class());
        }
    } // namespace MeleeComboMove__Array
} // namespace app::classes::types
