#pragma once
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_MetricData__Array {
        inline app::MicroProfilerInspector_MetricData__Array__Class** type_info() {
            static app::MicroProfilerInspector_MetricData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfilerInspector_MetricData__Array__Class**)(modloader::win::memory::resolve_rva(0x0477B0A8));
            }
            return cache;
        }
        inline app::MicroProfilerInspector_MetricData__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerInspector_MetricData__Array__Class>(type_info(), "", "MicroProfilerInspector+MetricData[]");
        }
        inline app::MicroProfilerInspector_MetricData__Array* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_MetricData__Array>(get_class());
        }
    } // namespace MicroProfilerInspector_MetricData__Array
} // namespace app::classes::types
