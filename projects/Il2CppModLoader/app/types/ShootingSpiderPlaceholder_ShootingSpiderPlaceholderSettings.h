#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings {
        namespace {
            app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class>(type_info, "", "ShootingSpiderPlaceholder", "ShootingSpiderPlaceholderSettings");
        }
        inline app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings* create() {
            return il2cpp::create_object<app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings>(get_class());
        }
    } // namespace ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings
} // namespace app::classes::types
