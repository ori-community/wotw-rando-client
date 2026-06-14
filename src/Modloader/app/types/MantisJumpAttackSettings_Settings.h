#pragma once
#include <Modloader/app/structs/MantisJumpAttackSettings_Settings.h>
#include <Modloader/app/structs/MantisJumpAttackSettings_Settings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackSettings_Settings {
        inline app::MantisJumpAttackSettings_Settings__Class** type_info() {
            static app::MantisJumpAttackSettings_Settings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisJumpAttackSettings_Settings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisJumpAttackSettings_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackSettings_Settings__Class>(type_info(), "", "MantisJumpAttackSettings", "Settings");
        }
        inline app::MantisJumpAttackSettings_Settings* create() {
            return il2cpp::create_object<app::MantisJumpAttackSettings_Settings>(get_class());
        }
    } // namespace MantisJumpAttackSettings_Settings
} // namespace app::classes::types
