#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSMonitor_FrameTimingData__Array__Class.h>
#include <Modloader/app/structs/FPSMonitor_FrameTimingData__Array.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameTimingData__Array {
        inline app::FPSMonitor_FrameTimingData__Array__Class** type_info = (app::FPSMonitor_FrameTimingData__Array__Class**)(modloader::win::memory::resolve_rva(0x047843B8));
        inline app::FPSMonitor_FrameTimingData__Array__Class* get_class() {
            return il2cpp::get_class<app::FPSMonitor_FrameTimingData__Array__Class>(type_info, "", "FPSMonitor+FrameTimingData[]");
        }
        inline app::FPSMonitor_FrameTimingData__Array* create() {
            return il2cpp::create_object<app::FPSMonitor_FrameTimingData__Array>(get_class());
        }
    } // namespace FPSMonitor_FrameTimingData__Array
} // namespace app::classes::types
