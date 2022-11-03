#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameTimingData {
        inline app::FPSMonitor_FrameTimingData__Class** type_info = (app::FPSMonitor_FrameTimingData__Class**)(modloader::win::memory::resolve_rva(0x0474BF50));
        inline app::FPSMonitor_FrameTimingData__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSMonitor_FrameTimingData__Class>(type_info, "", "FPSMonitor", "FrameTimingData");
        }
        inline app::FPSMonitor_FrameTimingData* create() {
            return il2cpp::create_object<app::FPSMonitor_FrameTimingData>(get_class());
        }
        inline app::FPSMonitor_FrameTimingData__Array* create_array(int size) {
            return il2cpp::array_new<app::FPSMonitor_FrameTimingData__Array>(get_class(), size);
        }
        inline app::FPSMonitor_FrameTimingData__Array* create_array(const std::vector<app::FPSMonitor_FrameTimingData*>& items) {
            return il2cpp::array_new<app::FPSMonitor_FrameTimingData__Array>(get_class(), items);
        }
    } // namespace FPSMonitor_FrameTimingData
} // namespace app::classes::types
