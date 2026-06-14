#pragma once
#include <Modloader/app/structs/DroppedFrameMonitorB.h>
#include <Modloader/app/structs/DroppedFrameMonitorB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitorB {
        inline app::DroppedFrameMonitorB__Class** type_info() {
            static app::DroppedFrameMonitorB__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DroppedFrameMonitorB__Class**)(modloader::win::memory::resolve_rva(0x047833D8));
            }
            return cache;
        }
        inline app::DroppedFrameMonitorB__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitorB__Class>(type_info(), "", "DroppedFrameMonitorB");
        }
        inline app::DroppedFrameMonitorB* create() {
            return il2cpp::create_object<app::DroppedFrameMonitorB>(get_class());
        }
    } // namespace DroppedFrameMonitorB
} // namespace app::classes::types
