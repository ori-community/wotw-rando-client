#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticAggregationMethod__Enum {
        namespace {
            app::StatisticAggregationMethod__Enum__Class* type_info_ref = nullptr;
        }
        app::StatisticAggregationMethod__Enum__Class** type_info = &type_info_ref;
        inline app::StatisticAggregationMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::StatisticAggregationMethod__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "StatisticAggregationMethod");
        }
        inline app::StatisticAggregationMethod__Enum* create() {
            return il2cpp::create_object<app::StatisticAggregationMethod__Enum>(get_class());
        }
    } // namespace StatisticAggregationMethod__Enum
} // namespace app::classes::types
