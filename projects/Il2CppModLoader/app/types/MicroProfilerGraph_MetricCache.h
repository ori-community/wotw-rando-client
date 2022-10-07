#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_MetricCache {
        namespace {
            app::MicroProfilerGraph_MetricCache__Class* type_info_ref = nullptr;
        }
        app::MicroProfilerGraph_MetricCache__Class** type_info = &type_info_ref;
        inline app::MicroProfilerGraph_MetricCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfilerGraph_MetricCache__Class>(type_info, "", "MicroProfilerGraph", "MetricCache");
        }
        inline app::MicroProfilerGraph_MetricCache* create() {
            return il2cpp::create_object<app::MicroProfilerGraph_MetricCache>(get_class());
        }
        inline app::MicroProfilerGraph_MetricCache__Boxed* box(app::MicroProfilerGraph_MetricCache value) {
            return il2cpp::box_value<app::MicroProfilerGraph_MetricCache__Boxed>(get_class(), value);
        }
        inline app::MicroProfilerGraph_MetricCache__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfilerGraph_MetricCache__Array>(get_class(), size);
        }
        inline app::MicroProfilerGraph_MetricCache__Array* create_array(const std::vector<app::MicroProfilerGraph_MetricCache>& items) {
            return il2cpp::array_new<app::MicroProfilerGraph_MetricCache__Array>(get_class(), items);
        }
    } // namespace MicroProfilerGraph_MetricCache
} // namespace app::classes::types
