#pragma once
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset__Array.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricPreset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_MetricPreset {
        inline app::MicroProfilerInspector_MetricPreset__Class** type_info() {
            static app::MicroProfilerInspector_MetricPreset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfilerInspector_MetricPreset__Class**)(modloader::win::memory::resolve_rva(0x0471B420));
            }
            return cache;
        }
        inline app::MicroProfilerInspector_MetricPreset__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfilerInspector_MetricPreset__Class>(type_info(), "", "MicroProfilerInspector", "MetricPreset");
        }
        inline app::MicroProfilerInspector_MetricPreset* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_MetricPreset>(get_class());
        }
        inline app::MicroProfilerInspector_MetricPreset__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfilerInspector_MetricPreset__Array>(get_class(), size);
        }
        inline app::MicroProfilerInspector_MetricPreset__Array* create_array(const std::vector<app::MicroProfilerInspector_MetricPreset*>& items) {
            return il2cpp::array_new<app::MicroProfilerInspector_MetricPreset__Array>(get_class(), items);
        }
    } // namespace MicroProfilerInspector_MetricPreset
} // namespace app::classes::types
