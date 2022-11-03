#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DroppedFrameMonitorB {
        inline app::DroppedFrameMonitorB__Class** type_info = (app::DroppedFrameMonitorB__Class**)(modloader::win::memory::resolve_rva(0x047833D8));
        inline app::DroppedFrameMonitorB__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitorB__Class>(type_info, "", "DroppedFrameMonitorB");
        }
        inline app::DroppedFrameMonitorB* create() {
            return il2cpp::create_object<app::DroppedFrameMonitorB>(get_class());
        }
    } // namespace DroppedFrameMonitorB
} // namespace app::classes::types
