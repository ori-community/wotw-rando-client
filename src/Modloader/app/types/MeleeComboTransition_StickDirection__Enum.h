#pragma once
#include <Modloader/app/structs/MeleeComboTransition_StickDirection__Enum.h>
#include <Modloader/app/structs/MeleeComboTransition_StickDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboTransition_StickDirection__Enum {
        inline app::MeleeComboTransition_StickDirection__Enum__Class** type_info() {
            static app::MeleeComboTransition_StickDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboTransition_StickDirection__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboTransition_StickDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboTransition_StickDirection__Enum__Class>(type_info(), "", "MeleeComboTransition", "StickDirection");
        }
        inline app::MeleeComboTransition_StickDirection__Enum* create() {
            return il2cpp::create_object<app::MeleeComboTransition_StickDirection__Enum>(get_class());
        }
    } // namespace MeleeComboTransition_StickDirection__Enum
} // namespace app::classes::types
