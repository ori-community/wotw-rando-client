#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponMasterEntity {
        inline app::WeaponMasterEntity__Class** type_info = (app::WeaponMasterEntity__Class**)(modloader::win::memory::resolve_rva(0x0470BE88));
        inline app::WeaponMasterEntity__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterEntity__Class>(type_info, "", "WeaponMasterEntity");
        }
        inline app::WeaponMasterEntity* create() {
            return il2cpp::create_object<app::WeaponMasterEntity>(get_class());
        }
    } // namespace WeaponMasterEntity
} // namespace app::classes::types
