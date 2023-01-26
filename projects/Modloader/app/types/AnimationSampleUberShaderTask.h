#pragma once
#include <Modloader/app/structs/AnimationSampleUberShaderTask.h>
#include <Modloader/app/structs/AnimationSampleUberShaderTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationSampleUberShaderTask {
        inline app::AnimationSampleUberShaderTask__Class** type_info() {
            static app::AnimationSampleUberShaderTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationSampleUberShaderTask__Class**)(modloader::win::memory::resolve_rva(0x0477A000));
            }
            return cache;
        }
        inline app::AnimationSampleUberShaderTask__Class* get_class() {
            return il2cpp::get_class<app::AnimationSampleUberShaderTask__Class>(type_info(), "Moon.ArtOptimization", "AnimationSampleUberShaderTask");
        }
        inline app::AnimationSampleUberShaderTask* create() {
            return il2cpp::create_object<app::AnimationSampleUberShaderTask>(get_class());
        }
    } // namespace AnimationSampleUberShaderTask
} // namespace app::classes::types
