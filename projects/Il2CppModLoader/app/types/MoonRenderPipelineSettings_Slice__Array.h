#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSettings_Slice__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineSettings_Slice__Array__Class** type_info;
        inline app::MoonRenderPipelineSettings_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineSettings_Slice__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineSettings+Slice[]");
        }
        inline app::MoonRenderPipelineSettings_Slice__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSettings_Slice__Array>(get_class());
        }
    } // namespace MoonRenderPipelineSettings_Slice__Array
} // namespace app::classes::types
