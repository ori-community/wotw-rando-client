#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class.h>
#include <Modloader/app/structs/RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings.h>

namespace app::classes::types {
    namespace RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings {
        namespace {
            inline app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings__Class>(type_info, "", "RammingEnemyPlaceholder", "RammingEnemyPlaceholderSettings");
        }
        inline app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings>(get_class());
        }
    } // namespace RammingEnemyPlaceholder_RammingEnemyPlaceholderSettings
} // namespace app::classes::types
