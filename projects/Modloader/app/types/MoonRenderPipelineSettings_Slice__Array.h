#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSettings_Slice__Array {
        inline app::MoonRenderPipelineSettings_Slice__Array__Class** type_info = (app::MoonRenderPipelineSettings_Slice__Array__Class**)(modloader::win::memory::resolve_rva(0x04700AC0));
        inline app::MoonRenderPipelineSettings_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineSettings_Slice__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineSettings+Slice[]");
        }
        inline app::MoonRenderPipelineSettings_Slice__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSettings_Slice__Array>(get_class());
        }
    } // namespace MoonRenderPipelineSettings_Slice__Array
} // namespace app::classes::types
