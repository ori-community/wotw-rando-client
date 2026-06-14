#pragma once
#include <Modloader/app/structs/DroppedFrameMonitor_TempData.h>
#include <Modloader/app/structs/DroppedFrameMonitor_TempData__Array.h>
#include <Modloader/app/structs/DroppedFrameMonitor_TempData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor_TempData {
        inline app::DroppedFrameMonitor_TempData__Class** type_info() {
            static app::DroppedFrameMonitor_TempData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DroppedFrameMonitor_TempData__Class**)(modloader::win::memory::resolve_rva(0x04723708));
            }
            return cache;
        }
        inline app::DroppedFrameMonitor_TempData__Class* get_class() {
            return il2cpp::get_nested_class<app::DroppedFrameMonitor_TempData__Class>(type_info(), "", "DroppedFrameMonitor", "TempData");
        }
        inline app::DroppedFrameMonitor_TempData* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor_TempData>(get_class());
        }
        inline app::DroppedFrameMonitor_TempData__Array* create_array(int size) {
            return il2cpp::array_new<app::DroppedFrameMonitor_TempData__Array>(get_class(), size);
        }
        inline app::DroppedFrameMonitor_TempData__Array* create_array(const std::vector<app::DroppedFrameMonitor_TempData*>& items) {
            return il2cpp::array_new<app::DroppedFrameMonitor_TempData__Array>(get_class(), items);
        }
    } // namespace DroppedFrameMonitor_TempData
} // namespace app::classes::types
