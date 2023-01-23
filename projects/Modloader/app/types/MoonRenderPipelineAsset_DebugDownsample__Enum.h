#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DebugDownsample__Enum__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DebugDownsample__Enum.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_DebugDownsample__Enum {
        namespace {
            inline app::MoonRenderPipelineAsset_DebugDownsample__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_DebugDownsample__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_DebugDownsample__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_DebugDownsample__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "DebugDownsample");
        }
        inline app::MoonRenderPipelineAsset_DebugDownsample__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_DebugDownsample__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_DebugDownsample__Enum
} // namespace app::classes::types
