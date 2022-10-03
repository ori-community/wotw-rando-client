#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboTransition_StickDirection__Enum {
        namespace {
            app::MeleeComboTransition_StickDirection__Enum__Class* type_info_ref = nullptr;
        }
        app::MeleeComboTransition_StickDirection__Enum__Class** type_info = &type_info_ref;
        inline app::MeleeComboTransition_StickDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboTransition_StickDirection__Enum__Class>(type_info, "", "MeleeComboTransition", "StickDirection");
        }
        inline app::MeleeComboTransition_StickDirection__Enum* create() {
            return il2cpp::create_object<app::MeleeComboTransition_StickDirection__Enum>(get_class());
        }
    } // namespace MeleeComboTransition_StickDirection__Enum
} // namespace app::classes::types
