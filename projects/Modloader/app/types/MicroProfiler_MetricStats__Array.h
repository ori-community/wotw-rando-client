#pragma once
#include <Modloader/app/structs/MicroProfiler_MetricStats__Array.h>
#include <Modloader/app/structs/MicroProfiler_MetricStats__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_MetricStats__Array {
        inline app::MicroProfiler_MetricStats__Array__Class** type_info() {
            static app::MicroProfiler_MetricStats__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfiler_MetricStats__Array__Class**)(modloader::win::memory::resolve_rva(0x04744E90));
            }
            return cache;
        }
        inline app::MicroProfiler_MetricStats__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler_MetricStats__Array__Class>(type_info(), "", "MicroProfiler+MetricStats[]");
        }
        inline app::MicroProfiler_MetricStats__Array* create() {
            return il2cpp::create_object<app::MicroProfiler_MetricStats__Array>(get_class());
        }
    } // namespace MicroProfiler_MetricStats__Array
} // namespace app::classes::types
