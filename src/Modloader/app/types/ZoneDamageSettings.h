#pragma once
#include <Modloader/app/structs/ZoneDamageSettings.h>
#include <Modloader/app/structs/ZoneDamageSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneDamageSettings {
        inline app::ZoneDamageSettings__Class** type_info() {
            static app::ZoneDamageSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZoneDamageSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZoneDamageSettings__Class* get_class() {
            return il2cpp::get_class<app::ZoneDamageSettings__Class>(type_info(), "", "ZoneDamageSettings");
        }
        inline app::ZoneDamageSettings* create() {
            return il2cpp::create_object<app::ZoneDamageSettings>(get_class());
        }
    } // namespace ZoneDamageSettings
} // namespace app::classes::types
