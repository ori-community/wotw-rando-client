#pragma once
#include <Modloader/app/structs/FrameProfilerPlayerLoopInjector.h>
#include <Modloader/app/structs/FrameProfilerPlayerLoopInjector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameProfilerPlayerLoopInjector {
        inline app::FrameProfilerPlayerLoopInjector__Class** type_info() {
            static app::FrameProfilerPlayerLoopInjector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameProfilerPlayerLoopInjector__Class**)(modloader::win::memory::resolve_rva(0x04709F18));
            }
            return cache;
        }
        inline app::FrameProfilerPlayerLoopInjector__Class* get_class() {
            return il2cpp::get_class<app::FrameProfilerPlayerLoopInjector__Class>(type_info(), "", "FrameProfilerPlayerLoopInjector");
        }
        inline app::FrameProfilerPlayerLoopInjector* create() {
            return il2cpp::create_object<app::FrameProfilerPlayerLoopInjector>(get_class());
        }
    } // namespace FrameProfilerPlayerLoopInjector
} // namespace app::classes::types
