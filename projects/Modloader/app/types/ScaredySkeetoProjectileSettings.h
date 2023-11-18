#pragma once
#include <Modloader/app/structs/ScaredySkeetoProjectileSettings.h>
#include <Modloader/app/structs/ScaredySkeetoProjectileSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaredySkeetoProjectileSettings {
        inline app::ScaredySkeetoProjectileSettings__Class** type_info() {
            static app::ScaredySkeetoProjectileSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaredySkeetoProjectileSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaredySkeetoProjectileSettings__Class* get_class() {
            return il2cpp::get_class<app::ScaredySkeetoProjectileSettings__Class>(type_info(), "", "ScaredySkeetoProjectileSettings");
        }
        inline app::ScaredySkeetoProjectileSettings* create() {
            return il2cpp::create_object<app::ScaredySkeetoProjectileSettings>(get_class());
        }
    } // namespace ScaredySkeetoProjectileSettings
} // namespace app::classes::types
