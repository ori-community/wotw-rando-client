#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedSeinWeaponEffects {
        namespace {
            app::MaterialBasedSeinWeaponEffects__Class* type_info_ref = nullptr;
        }
        app::MaterialBasedSeinWeaponEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedSeinWeaponEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinWeaponEffects__Class>(type_info, "", "MaterialBasedSeinWeaponEffects");
        }
        inline app::MaterialBasedSeinWeaponEffects* create() {
            return il2cpp::create_object<app::MaterialBasedSeinWeaponEffects>(get_class());
        }
    } // namespace MaterialBasedSeinWeaponEffects
} // namespace app::classes::types
