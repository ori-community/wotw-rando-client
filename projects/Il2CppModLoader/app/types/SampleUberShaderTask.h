#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SampleUberShaderTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SampleUberShaderTask__Class** type_info;
        inline app::SampleUberShaderTask__Class* get_class() {
            return il2cpp::get_class<app::SampleUberShaderTask__Class>(type_info, "Moon.ArtOptimization", "SampleUberShaderTask");
        }
        inline app::SampleUberShaderTask* create() {
            return il2cpp::create_object<app::SampleUberShaderTask>(get_class());
        }
    } // namespace SampleUberShaderTask
} // namespace app::classes::types
