#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponMasterPlaceholder {
        namespace {
            inline app::WeaponMasterPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::WeaponMasterPlaceholder__Class** type_info = &type_info_ref;
        inline app::WeaponMasterPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterPlaceholder__Class>(type_info, "", "WeaponMasterPlaceholder");
        }
        inline app::WeaponMasterPlaceholder* create() {
            return il2cpp::create_object<app::WeaponMasterPlaceholder>(get_class());
        }
    } // namespace WeaponMasterPlaceholder
} // namespace app::classes::types
