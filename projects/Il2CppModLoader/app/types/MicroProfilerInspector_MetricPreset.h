#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_MetricPreset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfilerInspector_MetricPreset__Class** type_info;
        inline app::MicroProfilerInspector_MetricPreset__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfilerInspector_MetricPreset__Class>(type_info, "", "MicroProfilerInspector", "MetricPreset");
        }
        inline app::MicroProfilerInspector_MetricPreset* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_MetricPreset>(get_class());
        }
        inline app::MicroProfilerInspector_MetricPreset__Array* create_array(int size) {
            return il2cpp::array_new<app::MicroProfilerInspector_MetricPreset__Array>(get_class(), size);
        }
    } // namespace MicroProfilerInspector_MetricPreset
} // namespace app::classes::types
