#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZoneDamageSettings {
        namespace {
            app::ZoneDamageSettings__Class* type_info_ref = nullptr;
        }
        app::ZoneDamageSettings__Class** type_info = &type_info_ref;
        inline app::ZoneDamageSettings__Class* get_class() {
            return il2cpp::get_class<app::ZoneDamageSettings__Class>(type_info, "", "ZoneDamageSettings");
        }
        inline app::ZoneDamageSettings* create() {
            return il2cpp::create_object<app::ZoneDamageSettings>(get_class());
        }
    } // namespace ZoneDamageSettings
} // namespace app::classes::types
