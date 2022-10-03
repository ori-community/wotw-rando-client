#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple_States__Enum {
        namespace {
            app::MeleeComboMoveHammerSimple_States__Enum__Class* type_info_ref = nullptr;
        }
        app::MeleeComboMoveHammerSimple_States__Enum__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveHammerSimple_States__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerSimple_States__Enum__Class>(type_info, "", "MeleeComboMoveHammerSimple", "States");
        }
        inline app::MeleeComboMoveHammerSimple_States__Enum* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple_States__Enum>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple_States__Enum
} // namespace app::classes::types
