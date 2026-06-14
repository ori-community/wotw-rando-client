#pragma once
#include <Modloader/app/structs/WeaponMasterPlaceholder.h>
#include <Modloader/app/structs/WeaponMasterPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterPlaceholder {
        inline app::WeaponMasterPlaceholder__Class** type_info() {
            static app::WeaponMasterPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponMasterPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponMasterPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterPlaceholder__Class>(type_info(), "", "WeaponMasterPlaceholder");
        }
        inline app::WeaponMasterPlaceholder* create() {
            return il2cpp::create_object<app::WeaponMasterPlaceholder>(get_class());
        }
    } // namespace WeaponMasterPlaceholder
} // namespace app::classes::types
