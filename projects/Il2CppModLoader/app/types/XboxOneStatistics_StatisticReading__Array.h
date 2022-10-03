#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneStatistics_StatisticReading__Array {
        namespace {
            app::XboxOneStatistics_StatisticReading__Array__Class* type_info_ref = nullptr;
        }
        app::XboxOneStatistics_StatisticReading__Array__Class** type_info = &type_info_ref;
        inline app::XboxOneStatistics_StatisticReading__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxOneStatistics_StatisticReading__Array__Class>(type_info, "", "XboxOneStatistics+StatisticReading[]");
        }
        inline app::XboxOneStatistics_StatisticReading__Array* create() {
            return il2cpp::create_object<app::XboxOneStatistics_StatisticReading__Array>(get_class());
        }
    } // namespace XboxOneStatistics_StatisticReading__Array
} // namespace app::classes::types
