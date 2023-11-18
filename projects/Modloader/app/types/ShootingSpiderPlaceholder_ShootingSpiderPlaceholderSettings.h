#pragma once
#include <Modloader/app/structs/ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings.h>
#include <Modloader/app/structs/ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings {
        inline app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class** type_info() {
            static app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings__Class>(type_info(), "", "ShootingSpiderPlaceholder", "ShootingSpiderPlaceholderSettings");
        }
        inline app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings* create() {
            return il2cpp::create_object<app::ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings>(get_class());
        }
    } // namespace ShootingSpiderPlaceholder_ShootingSpiderPlaceholderSettings
} // namespace app::classes::types
