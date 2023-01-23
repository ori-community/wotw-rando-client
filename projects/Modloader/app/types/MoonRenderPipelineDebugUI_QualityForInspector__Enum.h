#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_QualityForInspector__Enum__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_QualityForInspector__Enum.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_QualityForInspector__Enum {
        namespace {
            inline app::MoonRenderPipelineDebugUI_QualityForInspector__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineDebugUI_QualityForInspector__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebugUI_QualityForInspector__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_QualityForInspector__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "QualityForInspector");
        }
        inline app::MoonRenderPipelineDebugUI_QualityForInspector__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_QualityForInspector__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI_QualityForInspector__Enum
} // namespace app::classes::types
