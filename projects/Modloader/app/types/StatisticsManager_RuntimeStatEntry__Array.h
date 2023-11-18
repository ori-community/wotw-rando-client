#pragma once
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry__Array.h>
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager_RuntimeStatEntry__Array {
        inline app::StatisticsManager_RuntimeStatEntry__Array__Class** type_info() {
            static app::StatisticsManager_RuntimeStatEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticsManager_RuntimeStatEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticsManager_RuntimeStatEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticsManager_RuntimeStatEntry__Array__Class>(type_info(), "", "StatisticsManager+RuntimeStatEntry[]");
        }
        inline app::StatisticsManager_RuntimeStatEntry__Array* create() {
            return il2cpp::create_object<app::StatisticsManager_RuntimeStatEntry__Array>(get_class());
        }
    } // namespace StatisticsManager_RuntimeStatEntry__Array
} // namespace app::classes::types
