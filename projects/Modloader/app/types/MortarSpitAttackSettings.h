#pragma once
#include <Modloader/app/structs/MortarSpitAttackSettings.h>
#include <Modloader/app/structs/MortarSpitAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarSpitAttackSettings {
        inline app::MortarSpitAttackSettings__Class** type_info() {
            static app::MortarSpitAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarSpitAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarSpitAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MortarSpitAttackSettings__Class>(type_info(), "", "MortarSpitAttackSettings");
        }
        inline app::MortarSpitAttackSettings* create() {
            return il2cpp::create_object<app::MortarSpitAttackSettings>(get_class());
        }
    } // namespace MortarSpitAttackSettings
} // namespace app::classes::types
