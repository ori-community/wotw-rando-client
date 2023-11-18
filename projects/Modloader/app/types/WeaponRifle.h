#pragma once
#include <Modloader/app/structs/WeaponRifle.h>
#include <Modloader/app/structs/WeaponRifle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponRifle {
        inline app::WeaponRifle__Class** type_info() {
            static app::WeaponRifle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponRifle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponRifle__Class* get_class() {
            return il2cpp::get_class<app::WeaponRifle__Class>(type_info(), "RootMotion.Demos", "WeaponRifle");
        }
        inline app::WeaponRifle* create() {
            return il2cpp::create_object<app::WeaponRifle>(get_class());
        }
    } // namespace WeaponRifle
} // namespace app::classes::types
