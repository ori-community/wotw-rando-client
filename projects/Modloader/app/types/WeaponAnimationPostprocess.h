#pragma once
#include <Modloader/app/structs/WeaponAnimationPostprocess.h>
#include <Modloader/app/structs/WeaponAnimationPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponAnimationPostprocess {
        inline app::WeaponAnimationPostprocess__Class** type_info() {
            static app::WeaponAnimationPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponAnimationPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::WeaponAnimationPostprocess__Class>(type_info(), "Moon", "WeaponAnimationPostprocess");
        }
        inline app::WeaponAnimationPostprocess* create() {
            return il2cpp::create_object<app::WeaponAnimationPostprocess>(get_class());
        }
    } // namespace WeaponAnimationPostprocess
} // namespace app::classes::types
