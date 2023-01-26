#pragma once
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache__Array.h>
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfilerGraph_FrameCache__Array {
        inline app::MicroProfilerGraph_FrameCache__Array__Class** type_info() {
            static app::MicroProfilerGraph_FrameCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfilerGraph_FrameCache__Array__Class**)(modloader::win::memory::resolve_rva(0x047827A0));
            }
            return cache;
        }
        inline app::MicroProfilerGraph_FrameCache__Array__Class* get_class() {
            return il2cpp::get_class<app::MicroProfilerGraph_FrameCache__Array__Class>(type_info(), "", "MicroProfilerGraph+FrameCache[]");
        }
        inline app::MicroProfilerGraph_FrameCache__Array* create() {
            return il2cpp::create_object<app::MicroProfilerGraph_FrameCache__Array>(get_class());
        }
    } // namespace MicroProfilerGraph_FrameCache__Array
} // namespace app::classes::types
