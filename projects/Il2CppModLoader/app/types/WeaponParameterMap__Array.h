#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponParameterMap__Array {
        namespace {
            inline app::WeaponParameterMap__Array__Class* type_info_ref = nullptr;
        }
        inline app::WeaponParameterMap__Array__Class** type_info = &type_info_ref;
        inline app::WeaponParameterMap__Array__Class* get_class() {
            return il2cpp::get_class<app::WeaponParameterMap__Array__Class>(type_info, "", "WeaponParameterMap[]");
        }
        inline app::WeaponParameterMap__Array* create() {
            return il2cpp::create_object<app::WeaponParameterMap__Array>(get_class());
        }
    } // namespace WeaponParameterMap__Array
} // namespace app::classes::types
