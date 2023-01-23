#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MicroProfilerGraph_MetricCache__Class.h>
#include <Modloader/app/structs/MicroProfilerGraph_MetricCache.h>
#include <Modloader/app/structs/MicroProfilerGraph_MetricCache__Boxed.h>
#include <Modloader/app/structs/MicroProfilerGraph_MetricCache__Array.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_MetricCache {
        namespace {
            inline app::MicroProfilerGraph_MetricCache__Class* type_info_ref = nullptr;
        }
        inline app::MicroProfilerGraph_MetricCache__Class** type_info = &type_info_ref;
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
