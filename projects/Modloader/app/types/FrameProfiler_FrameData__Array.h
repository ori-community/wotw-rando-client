#pragma once
#include <Modloader/app/structs/FrameProfiler_FrameData__Array.h>
#include <Modloader/app/structs/FrameProfiler_FrameData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler_FrameData__Array {
        inline app::FrameProfiler_FrameData__Array__Class** type_info() {
            static app::FrameProfiler_FrameData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameProfiler_FrameData__Array__Class**)(modloader::win::memory::resolve_rva(0x0476BDB8));
            }
            return cache;
        }
        inline app::FrameProfiler_FrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler_FrameData__Array__Class>(type_info(), "", "FrameProfiler+FrameData[]");
        }
        inline app::FrameProfiler_FrameData__Array* create() {
            return il2cpp::create_object<app::FrameProfiler_FrameData__Array>(get_class());
        }
    } // namespace FrameProfiler_FrameData__Array
} // namespace app::classes::types
