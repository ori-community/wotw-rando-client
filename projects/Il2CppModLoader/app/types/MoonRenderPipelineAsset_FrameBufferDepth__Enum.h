#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_FrameBufferDepth__Enum {
        namespace {
            inline app::MoonRenderPipelineAsset_FrameBufferDepth__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_FrameBufferDepth__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_FrameBufferDepth__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_FrameBufferDepth__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "FrameBufferDepth");
        }
        inline app::MoonRenderPipelineAsset_FrameBufferDepth__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_FrameBufferDepth__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_FrameBufferDepth__Enum
} // namespace app::classes::types
