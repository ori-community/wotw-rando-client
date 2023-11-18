#pragma once
#include <Modloader/app/structs/MeleeComboTransition.h>
#include <Modloader/app/structs/MeleeComboTransition__Array.h>
#include <Modloader/app/structs/MeleeComboTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboTransition {
        inline app::MeleeComboTransition__Class** type_info() {
            static app::MeleeComboTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboTransition__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboTransition__Class>(type_info(), "", "MeleeComboTransition");
        }
        inline app::MeleeComboTransition* create() {
            return il2cpp::create_object<app::MeleeComboTransition>(get_class());
        }
        inline app::MeleeComboTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeComboTransition__Array>(get_class(), size);
        }
        inline app::MeleeComboTransition__Array* create_array(const std::vector<app::MeleeComboTransition*>& items) {
            return il2cpp::array_new<app::MeleeComboTransition__Array>(get_class(), items);
        }
    } // namespace MeleeComboTransition
} // namespace app::classes::types
