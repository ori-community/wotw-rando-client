#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticsManager_StatType__Enum {
        namespace {
            inline app::StatisticsManager_StatType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StatisticsManager_StatType__Enum__Class** type_info = &type_info_ref;
        inline app::StatisticsManager_StatType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticsManager_StatType__Enum__Class>(type_info, "", "StatisticsManager", "StatType");
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
