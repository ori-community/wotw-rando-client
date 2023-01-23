#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatSettingStrings_EnemyLabels__Class.h>
#include <Modloader/app/structs/StatSettingStrings_EnemyLabels.h>
#include <Modloader/app/structs/StatSettingStrings_EnemyLabels__Boxed.h>
#include <Modloader/app/structs/StatSettingStrings_EnemyLabels__Array.h>

namespace app::classes::types {
    namespace StatSettingStrings_EnemyLabels {
        namespace {
            inline app::StatSettingStrings_EnemyLabels__Class* type_info_ref = nullptr;
        }
        inline app::StatSettingStrings_EnemyLabels__Class** type_info = &type_info_ref;
        inline app::StatSettingStrings_EnemyLabels__Class* get_class() {
            return il2cpp::get_nested_class<app::StatSettingStrings_EnemyLabels__Class>(type_info, "", "StatSettingStrings", "EnemyLabels");
        }
        inline app::StatSettingStrings_EnemyLabels* create() {
            return il2cpp::create_object<app::StatSettingStrings_EnemyLabels>(get_class());
        }
        inline app::StatSettingStrings_EnemyLabels__Boxed* box(app::StatSettingStrings_EnemyLabels value) {
            return il2cpp::box_value<app::StatSettingStrings_EnemyLabels__Boxed>(get_class(), value);
        }
        inline app::StatSettingStrings_EnemyLabels__Array* create_array(int size) {
            return il2cpp::array_new<app::StatSettingStrings_EnemyLabels__Array>(get_class(), size);
        }
        inline app::StatSettingStrings_EnemyLabels__Array* create_array(const std::vector<app::StatSettingStrings_EnemyLabels>& items) {
            return il2cpp::array_new<app::StatSettingStrings_EnemyLabels__Array>(get_class(), items);
        }
    } // namespace StatSettingStrings_EnemyLabels
} // namespace app::classes::types
