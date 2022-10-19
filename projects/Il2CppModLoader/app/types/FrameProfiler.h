#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameProfiler {
        inline app::FrameProfiler__Class** type_info = (app::FrameProfiler__Class**)(modloader::win::memory::resolve_rva(0x04728790));
        inline app::FrameProfiler__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler__Class>(type_info, "", "FrameProfiler");
        }
        inline app::FrameProfiler* create() {
            return il2cpp::create_object<app::FrameProfiler>(get_class());
        }
    } // namespace FrameProfiler
} // namespace app::classes::types
