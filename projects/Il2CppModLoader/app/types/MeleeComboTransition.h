#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboTransition {
        namespace {
            app::MeleeComboTransition__Class* type_info_ref = nullptr;
        }
        app::MeleeComboTransition__Class** type_info = &type_info_ref;
        inline app::MeleeComboTransition__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboTransition__Class>(type_info, "", "MeleeComboTransition");
        }
        inline app::MeleeComboTransition* create() {
            return il2cpp::create_object<app::MeleeComboTransition>(get_class());
        }
        inline app::MeleeComboTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeComboTransition__Array>(get_class(), size);
        }
    } // namespace MeleeComboTransition
} // namespace app::classes::types
