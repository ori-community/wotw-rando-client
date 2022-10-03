#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeAttackSettings {
        namespace {
            app::SneezeAttackSettings__Class* type_info_ref = nullptr;
        }
        app::SneezeAttackSettings__Class** type_info = &type_info_ref;
        inline app::SneezeAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::SneezeAttackSettings__Class>(type_info, "", "SneezeAttackSettings");
        }
        inline app::SneezeAttackSettings* create() {
            return il2cpp::create_object<app::SneezeAttackSettings>(get_class());
        }
    } // namespace SneezeAttackSettings
} // namespace app::classes::types
