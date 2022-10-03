#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerInspector_MetricPreset__Array {
        namespace {
            app::MicroProfilerInspector_MetricPreset__Array__Class* type_info_ref = nullptr;
        }
        app::MicroProfilerInspector_MetricPreset__Array__Class** type_info = &type_info_ref;
        inline app::MicroProfilerInspector_MetricPreset__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerInspector_MetricPreset__Array__Class>(type_info, "", "MicroProfilerInspector+MetricPreset[]");
        }
        inline app::MicroProfilerInspector_MetricPreset__Array* create() {
            return il2cpp::create_object<app::MicroProfilerInspector_MetricPreset__Array>(get_class());
        }
    } // namespace MicroProfilerInspector_MetricPreset__Array
} // namespace app::classes::types
