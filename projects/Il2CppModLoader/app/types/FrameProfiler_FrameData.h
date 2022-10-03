#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler_FrameData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameProfiler_FrameData__Class** type_info;
        inline app::FrameProfiler_FrameData__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameProfiler_FrameData__Class>(type_info, "", "FrameProfiler", "FrameData");
        }
        inline app::FrameProfiler_FrameData* create() {
            return il2cpp::create_object<app::FrameProfiler_FrameData>(get_class());
        }
        inline app::FrameProfiler_FrameData__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameProfiler_FrameData__Array>(get_class(), size);
        }
    } // namespace FrameProfiler_FrameData
} // namespace app::classes::types
