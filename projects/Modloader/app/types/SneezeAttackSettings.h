#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeAttackSettings {
        namespace {
            inline app::SneezeAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::SneezeAttackSettings__Class** type_info = &type_info_ref;
        inline app::SneezeAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::SneezeAttackSettings__Class>(type_info, "", "SneezeAttackSettings");
        }
        inline app::SneezeAttackSettings* create() {
            return il2cpp::create_object<app::SneezeAttackSettings>(get_class());
        }
    } // namespace SneezeAttackSettings
} // namespace app::classes::types
