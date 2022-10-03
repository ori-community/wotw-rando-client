#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FrameBlendingFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_FrameBlendingFilter__Class** type_info;
        inline app::ShaderID_FrameBlendingFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FrameBlendingFilter__Class>(type_info, "Kino", "ShaderID_FrameBlendingFilter");
        }
        inline app::ShaderID_FrameBlendingFilter* create() {
            return il2cpp::create_object<app::ShaderID_FrameBlendingFilter>(get_class());
        }
    } // namespace ShaderID_FrameBlendingFilter
} // namespace app::classes::types
