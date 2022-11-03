#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings {
        namespace {
            inline app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings__Class>(type_info, "", "SpitterEnemyPlaceholder", "ChargingSootEnemyPlaceholderSettings");
        }
        inline app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings>(get_class());
        }
    } // namespace SpitterEnemyPlaceholder_ChargingSootEnemyPlaceholderSettings
} // namespace app::classes::types
