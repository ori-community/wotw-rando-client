#pragma once
#include <Modloader/app/structs/MicroProfilerGraph_MetricCache__Array.h>
#include <Modloader/app/structs/MicroProfilerGraph_MetricCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_MetricCache__Array {
        inline app::MicroProfilerGraph_MetricCache__Array__Class** type_info() {
            static app::MicroProfilerGraph_MetricCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfilerGraph_MetricCache__Array__Class**)(modloader::win::memory::resolve_rva(0x047909A8));
            }
            return cache;
        }
        inline app::MicroProfilerGraph_MetricCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerGraph_MetricCache__Array__Class>(type_info(), "", "MicroProfilerGraph+MetricCache[]");
        }
        inline app::MicroProfilerGraph_MetricCache__Array* create() {
            return il2cpp::create_object<app::MicroProfilerGraph_MetricCache__Array>(get_class());
        }
    } // namespace MicroProfilerGraph_MetricCache__Array
} // namespace app::classes::types
