#pragma once
#include <Modloader/app/structs/JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings {
        inline app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class** type_info() {
            static app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Class>(type_info(), "", "JumperEnemyPlaceholder", "JumpingSootEnemyPlaceholderSettings");
        }
        inline app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings>(get_class());
        }
    } // namespace JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings
} // namespace app::classes::types
