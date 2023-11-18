#pragma once
#include <Modloader/app/structs/MeleeComboTransition_OnGroundMode__Enum.h>
#include <Modloader/app/structs/MeleeComboTransition_OnGroundMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboTransition_OnGroundMode__Enum {
        inline app::MeleeComboTransition_OnGroundMode__Enum__Class** type_info() {
            static app::MeleeComboTransition_OnGroundMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboTransition_OnGroundMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboTransition_OnGroundMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboTransition_OnGroundMode__Enum__Class>(type_info(), "", "MeleeComboTransition", "OnGroundMode");
        }
        inline app::MeleeComboTransition_OnGroundMode__Enum* create() {
            return il2cpp::create_object<app::MeleeComboTransition_OnGroundMode__Enum>(get_class());
        }
    } // namespace MeleeComboTransition_OnGroundMode__Enum
} // namespace app::classes::types
