#pragma once
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading__Array.h>
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneStatistics_StatisticReading__Array {
        inline app::XboxOneStatistics_StatisticReading__Array__Class** type_info() {
            static app::XboxOneStatistics_StatisticReading__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxOneStatistics_StatisticReading__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxOneStatistics_StatisticReading__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxOneStatistics_StatisticReading__Array__Class>(type_info(), "", "XboxOneStatistics+StatisticReading[]");
        }
        inline app::XboxOneStatistics_StatisticReading__Array* create() {
            return il2cpp::create_object<app::XboxOneStatistics_StatisticReading__Array>(get_class());
        }
    } // namespace XboxOneStatistics_StatisticReading__Array
} // namespace app::classes::types
