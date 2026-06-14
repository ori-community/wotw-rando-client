#pragma once
#include <Modloader/app/structs/WeaponParameterMap__Array.h>
#include <Modloader/app/structs/WeaponParameterMap__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponParameterMap__Array {
        inline app::WeaponParameterMap__Array__Class** type_info() {
            static app::WeaponParameterMap__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponParameterMap__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponParameterMap__Array__Class* get_class() {
            return il2cpp::get_class<app::WeaponParameterMap__Array__Class>(type_info(), "", "WeaponParameterMap[]");
        }
        inline app::WeaponParameterMap__Array* create() {
            return il2cpp::create_object<app::WeaponParameterMap__Array>(get_class());
        }
    } // namespace WeaponParameterMap__Array
} // namespace app::classes::types
