#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor {
        inline app::DroppedFrameMonitor__Class** type_info = (app::DroppedFrameMonitor__Class**)(modloader::win::memory::resolve_rva(0x0472F308));
        inline app::DroppedFrameMonitor__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitor__Class>(type_info, "", "DroppedFrameMonitor");
        }
        inline app::DroppedFrameMonitor* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor>(get_class());
        }
    } // namespace DroppedFrameMonitor
} // namespace app::classes::types
