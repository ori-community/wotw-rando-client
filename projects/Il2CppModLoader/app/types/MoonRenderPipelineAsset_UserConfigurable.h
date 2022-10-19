#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_UserConfigurable {
        namespace {
            inline app::MoonRenderPipelineAsset_UserConfigurable__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_UserConfigurable__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_UserConfigurable__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_UserConfigurable__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "UserConfigurable");
        }
        inline app::MoonRenderPipelineAsset_UserConfigurable* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_UserConfigurable>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_UserConfigurable
} // namespace app::classes::types
