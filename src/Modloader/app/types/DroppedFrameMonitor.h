#pragma once
#include <Modloader/app/structs/DroppedFrameMonitor.h>
#include <Modloader/app/structs/DroppedFrameMonitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor {
        inline app::DroppedFrameMonitor__Class** type_info() {
            static app::DroppedFrameMonitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DroppedFrameMonitor__Class**)(modloader::win::memory::resolve_rva(0x0472F308));
            }
            return cache;
        }
        inline app::DroppedFrameMonitor__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitor__Class>(type_info(), "", "DroppedFrameMonitor");
        }
        inline app::DroppedFrameMonitor* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor>(get_class());
        }
    } // namespace DroppedFrameMonitor
} // namespace app::classes::types
