#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponBase {
        namespace {
            inline app::WeaponBase__Class* type_info_ref = nullptr;
        }
        inline app::WeaponBase__Class** type_info = &type_info_ref;
        inline app::WeaponBase__Class* get_class() {
            return il2cpp::get_class<app::WeaponBase__Class>(type_info, "RootMotion.Demos", "WeaponBase");
        }
        inline app::WeaponBase* create() {
            return il2cpp::create_object<app::WeaponBase>(get_class());
        }
    } // namespace WeaponBase
} // namespace app::classes::types
