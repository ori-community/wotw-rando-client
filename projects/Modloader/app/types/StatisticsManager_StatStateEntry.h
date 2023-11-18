#pragma once
#include <Modloader/app/structs/StatisticsManager_StatStateEntry.h>
#include <Modloader/app/structs/StatisticsManager_StatStateEntry__Array.h>
#include <Modloader/app/structs/StatisticsManager_StatStateEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager_StatStateEntry {
        inline app::StatisticsManager_StatStateEntry__Class** type_info() {
            static app::StatisticsManager_StatStateEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticsManager_StatStateEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticsManager_StatStateEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticsManager_StatStateEntry__Class>(type_info(), "", "StatisticsManager", "StatStateEntry");
        }
        inline app::StatisticsManager_StatStateEntry* create() {
            return il2cpp::create_object<app::StatisticsManager_StatStateEntry>(get_class());
        }
        inline app::StatisticsManager_StatStateEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticsManager_StatStateEntry__Array>(get_class(), size);
        }
        inline app::StatisticsManager_StatStateEntry__Array* create_array(const std::vector<app::StatisticsManager_StatStateEntry*>& items) {
            return il2cpp::array_new<app::StatisticsManager_StatStateEntry__Array>(get_class(), items);
        }
    } // namespace StatisticsManager_StatStateEntry
} // namespace app::classes::types
