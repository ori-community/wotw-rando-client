#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameProfilerPlayerLoopInjector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameProfilerPlayerLoopInjector__Class** type_info;
        inline app::FrameProfilerPlayerLoopInjector__Class* get_class() {
            return il2cpp::get_class<app::FrameProfilerPlayerLoopInjector__Class>(type_info, "", "FrameProfilerPlayerLoopInjector");
        }
        inline app::FrameProfilerPlayerLoopInjector* create() {
            return il2cpp::create_object<app::FrameProfilerPlayerLoopInjector>(get_class());
        }
    } // namespace FrameProfilerPlayerLoopInjector
} // namespace app::classes::types
