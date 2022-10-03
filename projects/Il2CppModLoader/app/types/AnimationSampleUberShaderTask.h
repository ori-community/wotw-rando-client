#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationSampleUberShaderTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationSampleUberShaderTask__Class** type_info;
        inline app::AnimationSampleUberShaderTask__Class* get_class() {
            return il2cpp::get_class<app::AnimationSampleUberShaderTask__Class>(type_info, "Moon.ArtOptimization", "AnimationSampleUberShaderTask");
        }
        inline app::AnimationSampleUberShaderTask* create() {
            return il2cpp::create_object<app::AnimationSampleUberShaderTask>(get_class());
        }
    } // namespace AnimationSampleUberShaderTask
} // namespace app::classes::types
