#pragma once
#include <Modloader/app/structs/WeaponMasterIdle.h>
#include <Modloader/app/structs/WeaponMasterIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterIdle {
        inline app::WeaponMasterIdle__Class** type_info() {
            static app::WeaponMasterIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponMasterIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponMasterIdle__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterIdle__Class>(type_info(), "", "WeaponMasterIdle");
        }
        inline app::WeaponMasterIdle* create() {
            return il2cpp::create_object<app::WeaponMasterIdle>(get_class());
        }
    } // namespace WeaponMasterIdle
} // namespace app::classes::types
