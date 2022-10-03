#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponRifle {
        namespace {
            app::WeaponRifle__Class* type_info_ref = nullptr;
        }
        app::WeaponRifle__Class** type_info = &type_info_ref;
        inline app::WeaponRifle__Class* get_class() {
            return il2cpp::get_class<app::WeaponRifle__Class>(type_info, "RootMotion.Demos", "WeaponRifle");
        }
        inline app::WeaponRifle* create() {
            return il2cpp::create_object<app::WeaponRifle>(get_class());
        }
    } // namespace WeaponRifle
} // namespace app::classes::types
