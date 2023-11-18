#pragma once
#include <Modloader/app/structs/SeinGrenadeAttack_AutoAimSettings.h>
#include <Modloader/app/structs/SeinGrenadeAttack_AutoAimSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_AutoAimSettings {
        inline app::SeinGrenadeAttack_AutoAimSettings__Class** type_info() {
            static app::SeinGrenadeAttack_AutoAimSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrenadeAttack_AutoAimSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrenadeAttack_AutoAimSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_AutoAimSettings__Class>(type_info(), "", "SeinGrenadeAttack", "AutoAimSettings");
        }
        inline app::SeinGrenadeAttack_AutoAimSettings* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_AutoAimSettings>(get_class());
        }
    } // namespace SeinGrenadeAttack_AutoAimSettings
} // namespace app::classes::types
