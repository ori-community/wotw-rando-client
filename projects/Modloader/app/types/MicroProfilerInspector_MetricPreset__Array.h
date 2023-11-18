#pragma once
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset__Array.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_MetricPreset__Array {
        inline app::MicroProfilerInspector_MetricPreset__Array__Class** type_info() {
            static app::MicroProfilerInspector_MetricPreset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MicroProfilerInspector_MetricPreset__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MicroProfilerInspector_MetricPreset__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerInspector_MetricPreset__Array__Class>(type_info(), "", "MicroProfilerInspector+MetricPreset[]");
        }
        inline app::MicroProfilerInspector_MetricPreset__Array* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_MetricPreset__Array>(get_class());
        }
    } // namespace MicroProfilerInspector_MetricPreset__Array
} // namespace app::classes::types
