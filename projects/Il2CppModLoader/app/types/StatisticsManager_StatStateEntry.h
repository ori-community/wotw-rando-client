#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager_StatStateEntry {
        namespace {
            app::StatisticsManager_StatStateEntry__Class* type_info_ref = nullptr;
        }
        app::StatisticsManager_StatStateEntry__Class** type_info = &type_info_ref;
        inline app::StatisticsManager_StatStateEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticsManager_StatStateEntry__Class>(type_info, "", "StatisticsManager", "StatStateEntry");
        }
        inline app::StatisticsManager_StatStateEntry* create() {
            return il2cpp::create_object<app::StatisticsManager_StatStateEntry>(get_class());
        }
        inline app::StatisticsManager_StatStateEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticsManager_StatStateEntry__Array>(get_class(), size);
        }
    } // namespace StatisticsManager_StatStateEntry
} // namespace app::classes::types
