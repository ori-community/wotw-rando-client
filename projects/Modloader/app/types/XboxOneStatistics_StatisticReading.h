#pragma once
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading.h>
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading__Array.h>
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading__Boxed.h>
#include <Modloader/app/structs/XboxOneStatistics_StatisticReading__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneStatistics_StatisticReading {
        inline app::XboxOneStatistics_StatisticReading__Class** type_info() {
            static app::XboxOneStatistics_StatisticReading__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneStatistics_StatisticReading__Class**)(modloader::win::memory::resolve_rva(0x04793590));
            }
            return cache;
        }
        inline app::XboxOneStatistics_StatisticReading__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneStatistics_StatisticReading__Class>(type_info(), "", "XboxOneStatistics", "StatisticReading");
        }
        inline app::XboxOneStatistics_StatisticReading* create() {
            return il2cpp::create_object<app::XboxOneStatistics_StatisticReading>(get_class());
        }
        inline app::XboxOneStatistics_StatisticReading__Boxed* box(app::XboxOneStatistics_StatisticReading value) {
            return il2cpp::box_value<app::XboxOneStatistics_StatisticReading__Boxed>(get_class(), value);
        }
        inline app::XboxOneStatistics_StatisticReading__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxOneStatistics_StatisticReading__Array>(get_class(), size);
        }
        inline app::XboxOneStatistics_StatisticReading__Array* create_array(const std::vector<app::XboxOneStatistics_StatisticReading>& items) {
            return il2cpp::array_new<app::XboxOneStatistics_StatisticReading__Array>(get_class(), items);
        }
    } // namespace XboxOneStatistics_StatisticReading
} // namespace app::classes::types
