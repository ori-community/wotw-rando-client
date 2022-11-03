#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_SliceRangeMode__Enum {
        namespace {
            inline app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "SliceRangeMode");
        }
        inline app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI_SliceRangeMode__Enum
} // namespace app::classes::types
