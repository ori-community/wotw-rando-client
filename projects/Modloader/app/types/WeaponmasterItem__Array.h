#pragma once
#include <Modloader/app/structs/WeaponmasterItem__Array.h>
#include <Modloader/app/structs/WeaponmasterItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponmasterItem__Array {
        inline app::WeaponmasterItem__Array__Class** type_info() {
            static app::WeaponmasterItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponmasterItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponmasterItem__Array__Class* get_class() {
            return il2cpp::get_class<app::WeaponmasterItem__Array__Class>(type_info(), "", "WeaponmasterItem[]");
        }
        inline app::WeaponmasterItem__Array* create() {
            return il2cpp::create_object<app::WeaponmasterItem__Array>(get_class());
        }
    } // namespace WeaponmasterItem__Array
} // namespace app::classes::types
