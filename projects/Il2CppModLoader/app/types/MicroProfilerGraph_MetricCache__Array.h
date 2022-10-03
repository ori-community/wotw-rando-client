#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_MetricCache__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfilerGraph_MetricCache__Array__Class** type_info;
        inline app::MicroProfilerGraph_MetricCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerGraph_MetricCache__Array__Class>(type_info, "", "MicroProfilerGraph+MetricCache[]");
        }
        inline app::MicroProfilerGraph_MetricCache__Array* create() {
            return il2cpp::create_object<app::MicroProfilerGraph_MetricCache__Array>(get_class());
        }
    } // namespace MicroProfilerGraph_MetricCache__Array
} // namespace app::classes::types
