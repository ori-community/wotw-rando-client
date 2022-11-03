#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboTransition__Array {
        namespace {
            inline app::MeleeComboTransition__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboTransition__Array__Class** type_info = &type_info_ref;
        inline app::MeleeComboTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboTransition__Array__Class>(type_info, "", "MeleeComboTransition[]");
        }
        inline app::MeleeComboTransition__Array* create() {
            return il2cpp::create_object<app::MeleeComboTransition__Array>(get_class());
        }
    } // namespace MeleeComboTransition__Array
} // namespace app::classes::types
