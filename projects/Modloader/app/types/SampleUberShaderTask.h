#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SampleUberShaderTask {
        inline app::SampleUberShaderTask__Class** type_info = (app::SampleUberShaderTask__Class**)(modloader::win::memory::resolve_rva(0x04700CA8));
        inline app::SampleUberShaderTask__Class* get_class() {
            return il2cpp::get_class<app::SampleUberShaderTask__Class>(type_info, "Moon.ArtOptimization", "SampleUberShaderTask");
        }
        inline app::SampleUberShaderTask* create() {
            return il2cpp::create_object<app::SampleUberShaderTask>(get_class());
        }
    } // namespace SampleUberShaderTask
} // namespace app::classes::types
