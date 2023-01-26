#pragma once
#include <Modloader/app/structs/FPSMonitor_FrameType__Enum.h>
#include <Modloader/app/structs/FPSMonitor_FrameType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameType__Enum {
        inline app::FPSMonitor_FrameType__Enum__Class** type_info() {
            static app::FPSMonitor_FrameType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FPSMonitor_FrameType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472E630));
            }
            return cache;
        }
        inline app::FPSMonitor_FrameType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSMonitor_FrameType__Enum__Class>(type_info(), "", "FPSMonitor", "FrameType");
        }
        inline app::FPSMonitor_FrameType__Enum* create() {
            return il2cpp::create_object<app::FPSMonitor_FrameType__Enum>(get_class());
        }
    } // namespace FPSMonitor_FrameType__Enum
} // namespace app::classes::types
