#pragma once
#include <Modloader/app/structs/StatSettingStrings_EnemyEnum__Enum.h>
#include <Modloader/app/structs/StatSettingStrings_EnemyEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings_EnemyEnum__Enum {
        inline app::StatSettingStrings_EnemyEnum__Enum__Class** type_info() {
            static app::StatSettingStrings_EnemyEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatSettingStrings_EnemyEnum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatSettingStrings_EnemyEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSettingStrings_EnemyEnum__Enum__Class>(type_info(), "", "StatSettingStrings", "EnemyEnum");
        }
        inline app::StatSettingStrings_EnemyEnum__Enum* create() {
            return il2cpp::create_object<app::StatSettingStrings_EnemyEnum__Enum>(get_class());
        }
    } // namespace StatSettingStrings_EnemyEnum__Enum
} // namespace app::classes::types
