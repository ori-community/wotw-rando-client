#pragma once
#include <Modloader/app/structs/SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings {
        inline app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class** type_info() {
            static app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class>(type_info(), "", "SpitterEnemyPlaceholder", "ChargingSootEnemyPlaceholderSettings");
        }
        inline app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings>(get_class());
        }
    } // namespace SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings
} // namespace app::classes::types
