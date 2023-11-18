#pragma once
#include <Modloader/app/structs/MoonRenderPipelineAsset_UserConfigurable.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_UserConfigurable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_UserConfigurable {
        inline app::MoonRenderPipelineAsset_UserConfigurable__Class** type_info() {
            static app::MoonRenderPipelineAsset_UserConfigurable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineAsset_UserConfigurable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineAsset_UserConfigurable__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_UserConfigurable__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineAsset", "UserConfigurable");
        }
        inline app::MoonRenderPipelineAsset_UserConfigurable* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_UserConfigurable>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_UserConfigurable
} // namespace app::classes::types
