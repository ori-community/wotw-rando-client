#pragma once
#include <Modloader/app/structs/WeaponVFXSet__Array.h>
#include <Modloader/app/structs/WeaponVFXSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponVFXSet__Array {
        inline app::WeaponVFXSet__Array__Class** type_info() {
            static app::WeaponVFXSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponVFXSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponVFXSet__Array__Class* get_class() {
            return il2cpp::get_class<app::WeaponVFXSet__Array__Class>(type_info(), "", "WeaponVFXSet[]");
        }
        inline app::WeaponVFXSet__Array* create() {
            return il2cpp::create_object<app::WeaponVFXSet__Array>(get_class());
        }
    } // namespace WeaponVFXSet__Array
} // namespace app::classes::types
