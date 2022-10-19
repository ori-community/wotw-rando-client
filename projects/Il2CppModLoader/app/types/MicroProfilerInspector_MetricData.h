#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_MetricData {
        inline app::MicroProfilerInspector_MetricData__Class** type_info = (app::MicroProfilerInspector_MetricData__Class**)(modloader::win::memory::resolve_rva(0x04747F30));
        inline app::MicroProfilerInspector_MetricData__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfilerInspector_MetricData__Class>(type_info, "", "MicroProfilerInspector", "MetricData");
        }
        inline app::MicroProfilerInspector_MetricData* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_MetricData>(get_class());
        }
        inline app::MicroProfilerInspector_MetricData__Boxed* box(app::MicroProfilerInspector_MetricData value) {
            return il2cpp::box_value<app::MicroProfilerInspector_MetricData__Boxed>(get_class(), value);
        }
        inline app::MicroProfilerInspector_MetricData__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfilerInspector_MetricData__Array>(get_class(), size);
        }
        inline app::MicroProfilerInspector_MetricData__Array* create_array(const std::vector<app::MicroProfilerInspector_MetricData>& items) {
            return il2cpp::array_new<app::MicroProfilerInspector_MetricData__Array>(get_class(), items);
        }
    } // namespace MicroProfilerInspector_MetricData
} // namespace app::classes::types
