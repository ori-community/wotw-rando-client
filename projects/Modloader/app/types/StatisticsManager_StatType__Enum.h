#pragma once
#include <Modloader/app/structs/StatisticsManager_StatType__Enum.h>
#include <Modloader/app/structs/StatisticsManager_StatType__Enum__Array.h>
#include <Modloader/app/structs/StatisticsManager_StatType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager_StatType__Enum {
        inline app::StatisticsManager_StatType__Enum__Class** type_info() {
            static app::StatisticsManager_StatType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticsManager_StatType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticsManager_StatType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticsManager_StatType__Enum__Class>(type_info(), "", "StatisticsManager", "StatType");
        }
        inline app::StatisticsManager_StatType__Enum* create() {
            return il2cpp::create_object<app::StatisticsManager_StatType__Enum>(get_class());
        }
        inline app::StatisticsManager_StatType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticsManager_StatType__Enum__Array>(get_class(), size);
        }
        inline app::StatisticsManager_StatType__Enum__Array* create_array(const std::vector<app::StatisticsManager_StatType__Enum*>& items) {
            return il2cpp::array_new<app::StatisticsManager_StatType__Enum__Array>(get_class(), items);
        }
    } // namespace StatisticsManager_StatType__Enum
} // namespace app::classes::types
