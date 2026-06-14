#pragma once
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_SliceRangeMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_SliceRangeMode__Enum {
        inline app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class** type_info() {
            static app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineDebugUI", "SliceRangeMode");
        }
        inline app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_SliceRangeMode__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI_SliceRangeMode__Enum
} // namespace app::classes::types
