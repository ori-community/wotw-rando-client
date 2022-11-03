#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameProfiler_FrameData__Array {
        inline app::FrameProfiler_FrameData__Array__Class** type_info = (app::FrameProfiler_FrameData__Array__Class**)(modloader::win::memory::resolve_rva(0x0476BDB8));
        inline app::FrameProfiler_FrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler_FrameData__Array__Class>(type_info, "", "FrameProfiler+FrameData[]");
        }
        inline app::FrameProfiler_FrameData__Array* create() {
            return il2cpp::create_object<app::FrameProfiler_FrameData__Array>(get_class());
        }
    } // namespace FrameProfiler_FrameData__Array
} // namespace app::classes::types
