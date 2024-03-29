#pragma once
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry.h>
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry__Array.h>
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager_RuntimeStatEntry {
        inline app::StatisticsManager_RuntimeStatEntry__Class** type_info() {
            static app::StatisticsManager_RuntimeStatEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatisticsManager_RuntimeStatEntry__Class**)(modloader::win::memory::resolve_rva(0x04794D48));
            }
            return cache;
        }
        inline app::StatisticsManager_RuntimeStatEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticsManager_RuntimeStatEntry__Class>(type_info(), "", "StatisticsManager", "RuntimeStatEntry");
        }
        inline app::StatisticsManager_RuntimeStatEntry* create() {
            return il2cpp::create_object<app::StatisticsManager_RuntimeStatEntry>(get_class());
        }
        inline app::StatisticsManager_RuntimeStatEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticsManager_RuntimeStatEntry__Array>(get_class(), size);
        }
        inline app::StatisticsManager_RuntimeStatEntry__Array* create_array(const std::vector<app::StatisticsManager_RuntimeStatEntry*>& items) {
            return il2cpp::array_new<app::StatisticsManager_RuntimeStatEntry__Array>(get_class(), items);
        }
    } // namespace StatisticsManager_RuntimeStatEntry
} // namespace app::classes::types
