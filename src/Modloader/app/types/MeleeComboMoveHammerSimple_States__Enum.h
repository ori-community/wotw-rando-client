#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_States__Enum.h>
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_States__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerSimple_States__Enum {
        inline app::MeleeComboMoveHammerSimple_States__Enum__Class** type_info() {
            static app::MeleeComboMoveHammerSimple_States__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveHammerSimple_States__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerSimple_States__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerSimple_States__Enum__Class>(type_info(), "", "MeleeComboMoveHammerSimple", "States");
        }
        inline app::MeleeComboMoveHammerSimple_States__Enum* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerSimple_States__Enum>(get_class());
        }
    } // namespace MeleeComboMoveHammerSimple_States__Enum
} // namespace app::classes::types
