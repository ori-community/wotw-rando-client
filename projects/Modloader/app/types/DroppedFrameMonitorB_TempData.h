#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DroppedFrameMonitorB_TempData__Class.h>
#include <Modloader/app/structs/DroppedFrameMonitorB_TempData.h>
#include <Modloader/app/structs/DroppedFrameMonitorB_TempData__Array.h>

namespace app::classes::types {
    namespace DroppedFrameMonitorB_TempData {
        inline app::DroppedFrameMonitorB_TempData__Class** type_info = (app::DroppedFrameMonitorB_TempData__Class**)(modloader::win::memory::resolve_rva(0x04782140));
        inline app::DroppedFrameMonitorB_TempData__Class* get_class() {
            return il2cpp::get_nested_class<app::DroppedFrameMonitorB_TempData__Class>(type_info, "", "DroppedFrameMonitorB", "TempData");
        }
        inline app::DroppedFrameMonitorB_TempData* create() {
            return il2cpp::create_object<app::DroppedFrameMonitorB_TempData>(get_class());
        }
        inline app::DroppedFrameMonitorB_TempData__Array* create_array(int size) {
            return il2cpp::array_new<app::DroppedFrameMonitorB_TempData__Array>(get_class(), size);
        }
        inline app::DroppedFrameMonitorB_TempData__Array* create_array(const std::vector<app::DroppedFrameMonitorB_TempData*>& items) {
            return il2cpp::array_new<app::DroppedFrameMonitorB_TempData__Array>(get_class(), items);
        }
    } // namespace DroppedFrameMonitorB_TempData
} // namespace app::classes::types
