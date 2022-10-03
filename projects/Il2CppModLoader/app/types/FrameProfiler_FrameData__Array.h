#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler_FrameData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameProfiler_FrameData__Array__Class** type_info;
        inline app::FrameProfiler_FrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameProfiler_FrameData__Array__Class>(type_info, "", "FrameProfiler+FrameData[]");
        }
        inline app::FrameProfiler_FrameData__Array* create() {
            return il2cpp::create_object<app::FrameProfiler_FrameData__Array>(get_class());
        }
    } // namespace FrameProfiler_FrameData__Array
} // namespace app::classes::types
