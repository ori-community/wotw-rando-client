#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_FrameCache__Array {
        inline app::MicroProfilerGraph_FrameCache__Array__Class** type_info = (app::MicroProfilerGraph_FrameCache__Array__Class**)(modloader::win::memory::resolve_rva(0x047827A0));
        inline app::MicroProfilerGraph_FrameCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerGraph_FrameCache__Array__Class>(type_info, "", "MicroProfilerGraph+FrameCache[]");
        }
        inline app::MicroProfilerGraph_FrameCache__Array* create() {
            return il2cpp::create_object<app::MicroProfilerGraph_FrameCache__Array>(get_class());
        }
    } // namespace MicroProfilerGraph_FrameCache__Array
} // namespace app::classes::types
