#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponParameterMap {
        namespace {
            app::WeaponParameterMap__Class* type_info_ref = nullptr;
        }
        app::WeaponParameterMap__Class** type_info = &type_info_ref;
        inline app::WeaponParameterMap__Class* get_class() {
            return il2cpp::get_class<app::WeaponParameterMap__Class>(type_info, "", "WeaponParameterMap");
        }
        inline app::WeaponParameterMap* create() {
            return il2cpp::create_object<app::WeaponParameterMap>(get_class());
        }
        inline app::WeaponParameterMap__Array* create_array(int size) {
            return il2cpp::array_new<app::WeaponParameterMap__Array>(get_class(), size);
        }
    } // namespace WeaponParameterMap
} // namespace app::classes::types
