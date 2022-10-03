#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_MetricStats__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfiler_MetricStats__Array__Class** type_info;
        inline app::MicroProfiler_MetricStats__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler_MetricStats__Array__Class>(type_info, "", "MicroProfiler+MetricStats[]");
        }
        inline app::MicroProfiler_MetricStats__Array* create() {
            return il2cpp::create_object<app::MicroProfiler_MetricStats__Array>(get_class());
        }
    } // namespace MicroProfiler_MetricStats__Array
} // namespace app::classes::types
