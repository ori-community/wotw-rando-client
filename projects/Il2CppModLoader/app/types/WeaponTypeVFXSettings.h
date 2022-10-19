#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponTypeVFXSettings {
        inline app::WeaponTypeVFXSettings__Class** type_info = (app::WeaponTypeVFXSettings__Class**)(modloader::win::memory::resolve_rva(0x04781E78));
        inline app::WeaponTypeVFXSettings__Class* get_class() {
            return il2cpp::get_class<app::WeaponTypeVFXSettings__Class>(type_info, "", "WeaponTypeVFXSettings");
        }
        inline app::WeaponTypeVFXSettings* create() {
            return il2cpp::create_object<app::WeaponTypeVFXSettings>(get_class());
        }
    } // namespace WeaponTypeVFXSettings
} // namespace app::classes::types
