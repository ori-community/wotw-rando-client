#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboTransition {
        namespace {
            inline app::MeleeComboTransition__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboTransition__Class** type_info = &type_info_ref;
        inline app::MeleeComboTransition__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboTransition__Class>(type_info, "", "MeleeComboTransition");
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
