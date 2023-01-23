#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineView_CachedCBType__Enum__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineView_CachedCBType__Enum.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_CachedCBType__Enum {
        inline app::MoonRenderPipelineView_CachedCBType__Enum__Class** type_info = (app::MoonRenderPipelineView_CachedCBType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047473A8));
        inline app::MoonRenderPipelineView_CachedCBType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_CachedCBType__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "CachedCBType");
        }
        inline app::MoonRenderPipelineView_CachedCBType__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_CachedCBType__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineView_CachedCBType__Enum
} // namespace app::classes::types
