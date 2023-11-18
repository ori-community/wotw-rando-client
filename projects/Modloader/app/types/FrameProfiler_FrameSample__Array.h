#pragma once
#include <Modloader/app/structs/FrameProfiler_FrameSample__Array.h>
#include <Modloader/app/structs/FrameProfiler_FrameSample__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler_FrameSample__Array {
        inline app::FrameProfiler_FrameSample__Array__Class** type_info() {
            static app::FrameProfiler_FrameSample__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameProfiler_FrameSample__Array__Class**)(modloader::win::memory::resolve_rva(0x04742BB0));
            }
            return cache;
        }
        inline app::FrameProfiler_FrameSample__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler_FrameSample__Array__Class>(type_info(), "", "FrameProfiler+FrameSample[]");
        }
        inline app::FrameProfiler_FrameSample__Array* create() {
            return il2cpp::create_object<app::FrameProfiler_FrameSample__Array>(get_class());
        }
    } // namespace FrameProfiler_FrameSample__Array
} // namespace app::classes::types
