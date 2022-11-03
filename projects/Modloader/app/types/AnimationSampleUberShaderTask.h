#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationSampleUberShaderTask {
        inline app::AnimationSampleUberShaderTask__Class** type_info = (app::AnimationSampleUberShaderTask__Class**)(modloader::win::memory::resolve_rva(0x0477A000));
        inline app::AnimationSampleUberShaderTask__Class* get_class() {
            return il2cpp::get_class<app::AnimationSampleUberShaderTask__Class>(type_info, "Moon.ArtOptimization", "AnimationSampleUberShaderTask");
        }
        inline app::AnimationSampleUberShaderTask* create() {
            return il2cpp::create_object<app::AnimationSampleUberShaderTask>(get_class());
        }
    } // namespace AnimationSampleUberShaderTask
} // namespace app::classes::types
