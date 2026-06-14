#pragma once
#include <Modloader/app/structs/MaterialBasedSeinWeaponEffects.h>
#include <Modloader/app/structs/MaterialBasedSeinWeaponEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedSeinWeaponEffects {
        inline app::MaterialBasedSeinWeaponEffects__Class** type_info() {
            static app::MaterialBasedSeinWeaponEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedSeinWeaponEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedSeinWeaponEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinWeaponEffects__Class>(type_info(), "", "MaterialBasedSeinWeaponEffects");
        }
        inline app::MaterialBasedSeinWeaponEffects* create() {
            return il2cpp::create_object<app::MaterialBasedSeinWeaponEffects>(get_class());
        }
    } // namespace MaterialBasedSeinWeaponEffects
} // namespace app::classes::types
