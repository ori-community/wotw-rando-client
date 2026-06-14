#pragma once
#include <Modloader/app/structs/WeaponMasterEntity.h>
#include <Modloader/app/structs/WeaponMasterEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterEntity {
        inline app::WeaponMasterEntity__Class** type_info() {
            static app::WeaponMasterEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WeaponMasterEntity__Class**)(modloader::win::memory::resolve_rva(0x0470BE88));
            }
            return cache;
        }
        inline app::WeaponMasterEntity__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterEntity__Class>(type_info(), "", "WeaponMasterEntity");
        }
        inline app::WeaponMasterEntity* create() {
            return il2cpp::create_object<app::WeaponMasterEntity>(get_class());
        }
    } // namespace WeaponMasterEntity
} // namespace app::classes::types
