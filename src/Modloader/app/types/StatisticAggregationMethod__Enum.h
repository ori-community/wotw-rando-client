#pragma once
#include <Modloader/app/structs/StatisticAggregationMethod__Enum.h>
#include <Modloader/app/structs/StatisticAggregationMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticAggregationMethod__Enum {
        inline app::StatisticAggregationMethod__Enum__Class** type_info() {
            static app::StatisticAggregationMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatisticAggregationMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatisticAggregationMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::StatisticAggregationMethod__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "StatisticAggregationMethod");
        }
        inline app::StatisticAggregationMethod__Enum* create() {
            return il2cpp::create_object<app::StatisticAggregationMethod__Enum>(get_class());
        }
    } // namespace StatisticAggregationMethod__Enum
} // namespace app::classes::types
