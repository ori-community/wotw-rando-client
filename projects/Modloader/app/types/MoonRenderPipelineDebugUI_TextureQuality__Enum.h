#pragma once
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_TextureQuality__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_TextureQuality__Enum__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_TextureQuality__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_TextureQuality__Enum {
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class** type_info() {
            static app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineDebugUI", "TextureQuality");
        }
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_TextureQuality__Enum>(get_class());
        }
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Array* create_array(const std::vector<app::MoonRenderPipelineDebugUI_TextureQuality__Enum*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineDebugUI_TextureQuality__Enum__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineDebugUI_TextureQuality__Enum
} // namespace app::classes::types
