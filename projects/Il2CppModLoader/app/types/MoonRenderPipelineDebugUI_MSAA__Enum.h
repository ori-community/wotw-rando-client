#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_MSAA__Enum {
        namespace {
            app::MoonRenderPipelineDebugUI_MSAA__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineDebugUI_MSAA__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebugUI_MSAA__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_MSAA__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "MSAA");
        }
        inline app::MoonRenderPipelineDebugUI_MSAA__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_MSAA__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI_MSAA__Enum
} // namespace app::classes::types
