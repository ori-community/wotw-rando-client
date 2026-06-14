#pragma once
#include <Modloader/app/structs/MoonRenderPipelineAsset_FrameBufferFormat__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_FrameBufferFormat__Enum {
        inline app::MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class** type_info() {
            static app::MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineAsset", "FrameBufferFormat");
        }
        inline app::MoonRenderPipelineAsset_FrameBufferFormat__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_FrameBufferFormat__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_FrameBufferFormat__Enum
} // namespace app::classes::types
