#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponAnimationPostprocess {
        namespace {
            inline app::WeaponAnimationPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::WeaponAnimationPostprocess__Class** type_info = &type_info_ref;
        inline app::WeaponAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::WeaponAnimationPostprocess__Class>(type_info, "Moon", "WeaponAnimationPostprocess");
        }
        inline app::WeaponAnimationPostprocess* create() {
            return il2cpp::create_object<app::WeaponAnimationPostprocess>(get_class());
        }
    } // namespace WeaponAnimationPostprocess
} // namespace app::classes::types
