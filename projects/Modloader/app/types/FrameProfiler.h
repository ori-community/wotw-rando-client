#pragma once
#include <Modloader/app/structs/FrameProfiler.h>
#include <Modloader/app/structs/FrameProfiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler {
        inline app::FrameProfiler__Class** type_info() {
            static app::FrameProfiler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameProfiler__Class**)(modloader::win::memory::resolve_rva(0x04728790));
            }
            return cache;
        }
        inline app::FrameProfiler__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler__Class>(type_info(), "", "FrameProfiler");
        }
        inline app::FrameProfiler* create() {
            return il2cpp::create_object<app::FrameProfiler>(get_class());
        }
    } // namespace FrameProfiler
} // namespace app::classes::types
