#pragma once
#include <Modloader/app/structs/SneezeAttackSettings.h>
#include <Modloader/app/structs/SneezeAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeAttackSettings {
        inline app::SneezeAttackSettings__Class** type_info() {
            static app::SneezeAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::SneezeAttackSettings__Class>(type_info(), "", "SneezeAttackSettings");
        }
        inline app::SneezeAttackSettings* create() {
            return il2cpp::create_object<app::SneezeAttackSettings>(get_class());
        }
    } // namespace SneezeAttackSettings
} // namespace app::classes::types
