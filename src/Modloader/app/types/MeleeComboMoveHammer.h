#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammer.h>
#include <Modloader/app/structs/MeleeComboMoveHammer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammer {
        inline app::MeleeComboMoveHammer__Class** type_info() {
            static app::MeleeComboMoveHammer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveHammer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveHammer__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammer__Class>(type_info(), "", "MeleeComboMoveHammer");
        }
        inline app::MeleeComboMoveHammer* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammer>(get_class());
        }
    } // namespace MeleeComboMoveHammer
} // namespace app::classes::types
