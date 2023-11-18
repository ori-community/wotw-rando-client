#pragma once
#include <Modloader/app/structs/FPSMonitor_FrameTimingData.h>
#include <Modloader/app/structs/FPSMonitor_FrameTimingData__Array.h>
#include <Modloader/app/structs/FPSMonitor_FrameTimingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameTimingData {
        inline app::FPSMonitor_FrameTimingData__Class** type_info() {
            static app::FPSMonitor_FrameTimingData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSMonitor_FrameTimingData__Class**)(modloader::win::memory::resolve_rva(0x0474BF50));
            }
            return cache;
        }
        inline app::FPSMonitor_FrameTimingData__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSMonitor_FrameTimingData__Class>(type_info(), "", "FPSMonitor", "FrameTimingData");
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
