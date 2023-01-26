#pragma once
#include <Modloader/app/structs/MantisJumpAttackSettings.h>
#include <Modloader/app/structs/MantisJumpAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackSettings {
        inline app::MantisJumpAttackSettings__Class** type_info() {
            static app::MantisJumpAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisJumpAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisJumpAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MantisJumpAttackSettings__Class>(type_info(), "", "MantisJumpAttackSettings");
        }
        inline app::MantisJumpAttackSettings* create() {
            return il2cpp::create_object<app::MantisJumpAttackSettings>(get_class());
        }
    } // namespace MantisJumpAttackSettings
} // namespace app::classes::types
