#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebug_Slice {
        inline app::MoonRenderPipelineDebug_Slice__Class** type_info = (app::MoonRenderPipelineDebug_Slice__Class**)(modloader::win::memory::resolve_rva(0x0470A828));
        inline app::MoonRenderPipelineDebug_Slice__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebug_Slice__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebug", "Slice");
        }
        inline app::MoonRenderPipelineDebug_Slice* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebug_Slice>(get_class());
        }
        inline app::MoonRenderPipelineDebug_Slice__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineDebug_Slice__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineDebug_Slice__Array* create_array(const std::vector<app::MoonRenderPipelineDebug_Slice*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineDebug_Slice__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineDebug_Slice
} // namespace app::classes::types
