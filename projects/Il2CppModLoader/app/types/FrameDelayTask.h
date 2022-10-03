#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameDelayTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameDelayTask__Class** type_info;
        inline app::FrameDelayTask__Class* get_class() {
            return il2cpp::get_class<app::FrameDelayTask__Class>(type_info, "Moon.ArtOptimization", "FrameDelayTask");
        }
        inline app::FrameDelayTask* create() {
            return il2cpp::create_object<app::FrameDelayTask>(get_class());
        }
    } // namespace FrameDelayTask
} // namespace app::classes::types
