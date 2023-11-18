#pragma once
#include <Modloader/app/structs/FrameProfiler_MetricInfo__Array.h>
#include <Modloader/app/structs/FrameProfiler_MetricInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler_MetricInfo__Array {
        inline app::FrameProfiler_MetricInfo__Array__Class** type_info() {
            static app::FrameProfiler_MetricInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameProfiler_MetricInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameProfiler_MetricInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler_MetricInfo__Array__Class>(type_info(), "", "FrameProfiler+MetricInfo[]");
        }
        inline app::FrameProfiler_MetricInfo__Array* create() {
            return il2cpp::create_object<app::FrameProfiler_MetricInfo__Array>(get_class());
        }
    } // namespace FrameProfiler_MetricInfo__Array
} // namespace app::classes::types
