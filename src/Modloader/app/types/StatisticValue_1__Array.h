#pragma once
#include <Modloader/app/structs/StatisticValue_1__Array.h>
#include <Modloader/app/structs/StatisticValue_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticValue_1__Array {
        inline app::StatisticValue_1__Array__Class** type_info() {
            static app::StatisticValue_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticValue_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticValue_1__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticValue_1__Array__Class>(type_info(), "PlayFab.ServerModels", "StatisticValue[]");
        }
        inline app::StatisticValue_1__Array* create() {
            return il2cpp::create_object<app::StatisticValue_1__Array>(get_class());
        }
    } // namespace StatisticValue_1__Array
} // namespace app::classes::types
