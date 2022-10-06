#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameProfiler_FrameSample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameProfiler_FrameSample__Class** type_info;
        inline app::FrameProfiler_FrameSample__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameProfiler_FrameSample__Class>(type_info, "", "FrameProfiler", "FrameSample");
        }
        inline app::FrameProfiler_FrameSample* create() {
            return il2cpp::create_object<app::FrameProfiler_FrameSample>(get_class());
        }
        inline app::FrameProfiler_FrameSample__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameProfiler_FrameSample__Array>(get_class(), size);
        }
        inline app::FrameProfiler_FrameSample__Array* create_array(const std::vector<app::FrameProfiler_FrameSample*>& items) {
            return il2cpp::array_new<app::FrameProfiler_FrameSample__Array>(get_class(), items);
        }
    } // namespace FrameProfiler_FrameSample
} // namespace app::classes::types
