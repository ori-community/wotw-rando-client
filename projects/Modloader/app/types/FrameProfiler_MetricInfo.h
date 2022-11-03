#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameProfiler_MetricInfo {
        inline app::FrameProfiler_MetricInfo__Class** type_info = (app::FrameProfiler_MetricInfo__Class**)(modloader::win::memory::resolve_rva(0x04759100));
        inline app::FrameProfiler_MetricInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameProfiler_MetricInfo__Class>(type_info, "", "FrameProfiler", "MetricInfo");
        }
        inline app::FrameProfiler_MetricInfo* create() {
            return il2cpp::create_object<app::FrameProfiler_MetricInfo>(get_class());
        }
        inline app::FrameProfiler_MetricInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameProfiler_MetricInfo__Array>(get_class(), size);
        }
        inline app::FrameProfiler_MetricInfo__Array* create_array(const std::vector<app::FrameProfiler_MetricInfo*>& items) {
            return il2cpp::array_new<app::FrameProfiler_MetricInfo__Array>(get_class(), items);
        }
    } // namespace FrameProfiler_MetricInfo
} // namespace app::classes::types
