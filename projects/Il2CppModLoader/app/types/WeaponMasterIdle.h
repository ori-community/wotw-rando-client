#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterIdle {
        namespace {
            app::WeaponMasterIdle__Class* type_info_ref = nullptr;
        }
        app::WeaponMasterIdle__Class** type_info = &type_info_ref;
        inline app::WeaponMasterIdle__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterIdle__Class>(type_info, "", "WeaponMasterIdle");
        }
        inline app::WeaponMasterIdle* create() {
            return il2cpp::create_object<app::WeaponMasterIdle>(get_class());
        }
    } // namespace WeaponMasterIdle
} // namespace app::classes::types
