#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class.h>
#include <Modloader/app/structs/FishEnemyPlaceholder_FishEnemyPlaceholderSettings.h>

namespace app::classes::types {
    namespace FishEnemyPlaceholder_FishEnemyPlaceholderSettings {
        namespace {
            inline app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class>(type_info, "", "FishEnemyPlaceholder", "FishEnemyPlaceholderSettings");
        }
        inline app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::FishEnemyPlaceholder_FishEnemyPlaceholderSettings>(get_class());
        }
    } // namespace FishEnemyPlaceholder_FishEnemyPlaceholderSettings
} // namespace app::classes::types
