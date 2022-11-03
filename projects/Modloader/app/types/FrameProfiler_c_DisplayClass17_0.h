#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameProfiler_c_DisplayClass17_0 {
        inline app::FrameProfiler_c_DisplayClass17_0__Class** type_info = (app::FrameProfiler_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x0472E470));
        inline app::FrameProfiler_c_DisplayClass17_0__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameProfiler_c_DisplayClass17_0__Class>(type_info, "", "FrameProfiler", "<>c__DisplayClass17_0");
        }
        inline app::FrameProfiler_c_DisplayClass17_0* create() {
            return il2cpp::create_object<app::FrameProfiler_c_DisplayClass17_0>(get_class());
        }
    } // namespace FrameProfiler_c_DisplayClass17_0
} // namespace app::classes::types
