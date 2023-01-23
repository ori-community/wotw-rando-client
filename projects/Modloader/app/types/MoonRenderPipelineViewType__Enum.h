#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineViewType__Enum__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineViewType__Enum.h>

namespace app::classes::types {
    namespace MoonRenderPipelineViewType__Enum {
        inline app::MoonRenderPipelineViewType__Enum__Class** type_info = (app::MoonRenderPipelineViewType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047460A8));
        inline app::MoonRenderPipelineViewType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineViewType__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineViewType");
        }
        inline app::MoonRenderPipelineViewType__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineViewType__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineViewType__Enum
} // namespace app::classes::types
