#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_TLCLightTypes__Enum {
        namespace {
            app::MoonRenderPipelineView_TLCLightTypes__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineView_TLCLightTypes__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineView_TLCLightTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_TLCLightTypes__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "TLCLightTypes");
        }
        inline app::MoonRenderPipelineView_TLCLightTypes__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_TLCLightTypes__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineView_TLCLightTypes__Enum
} // namespace app::classes::types
