#pragma once
#include <Modloader/app/structs/WeaponTypeVFXSettings.h>
#include <Modloader/app/structs/WeaponTypeVFXSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponTypeVFXSettings {
        inline app::WeaponTypeVFXSettings__Class** type_info() {
            static app::WeaponTypeVFXSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WeaponTypeVFXSettings__Class**)(modloader::win::memory::resolve_rva(0x04781E78));
            }
            return cache;
        }
        inline app::WeaponTypeVFXSettings__Class* get_class() {
            return il2cpp::get_class<app::WeaponTypeVFXSettings__Class>(type_info(), "", "WeaponTypeVFXSettings");
        }
        inline app::WeaponTypeVFXSettings* create() {
            return il2cpp::create_object<app::WeaponTypeVFXSettings>(get_class());
        }
    } // namespace WeaponTypeVFXSettings
} // namespace app::classes::types
