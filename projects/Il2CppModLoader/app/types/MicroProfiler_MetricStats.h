#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_MetricStats {
        namespace {
            app::MicroProfiler_MetricStats__Class* type_info_ref = nullptr;
        }
        app::MicroProfiler_MetricStats__Class** type_info = &type_info_ref;
        inline app::MicroProfiler_MetricStats__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_MetricStats__Class>(type_info, "", "MicroProfiler", "MetricStats");
        }
        inline app::MicroProfiler_MetricStats* create() {
            return il2cpp::create_object<app::MicroProfiler_MetricStats>(get_class());
        }
        inline app::MicroProfiler_MetricStats__Boxed* box(app::MicroProfiler_MetricStats value) {
            return il2cpp::box_value<app::MicroProfiler_MetricStats__Boxed>(get_class(), value);
        }
        inline app::MicroProfiler_MetricStats__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfiler_MetricStats__Array>(get_class(), size);
        }
        inline app::MicroProfiler_MetricStats__Array* create_array(const std::vector<app::MicroProfiler_MetricStats>& items) {
            return il2cpp::array_new<app::MicroProfiler_MetricStats__Array>(get_class(), items);
        }
    } // namespace MicroProfiler_MetricStats
} // namespace app::classes::types
