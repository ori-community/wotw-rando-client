#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_HDRRecMode__Enum {
        namespace {
            inline app::MoonRenderPipelineAsset_HDRRecMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_HDRRecMode__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_HDRRecMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_HDRRecMode__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "HDRRecMode");
        }
        inline app::MoonRenderPipelineAsset_HDRRecMode__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_HDRRecMode__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_HDRRecMode__Enum
} // namespace app::classes::types
