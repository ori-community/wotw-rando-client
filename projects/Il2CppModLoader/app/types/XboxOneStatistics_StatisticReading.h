#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneStatistics_StatisticReading {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneStatistics_StatisticReading__Class** type_info;
        inline app::XboxOneStatistics_StatisticReading__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneStatistics_StatisticReading__Class>(type_info, "", "XboxOneStatistics", "StatisticReading");
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
    } // namespace XboxOneStatistics_StatisticReading
} // namespace app::classes::types
