#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_P3D_BrushPreview {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_P3D_BrushPreview__Class** type_info;
        inline app::ShaderID_P3D_BrushPreview__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_P3D_BrushPreview__Class>(type_info, "", "ShaderID_P3D_BrushPreview");
        }
        inline app::ShaderID_P3D_BrushPreview* create() {
            return il2cpp::create_object<app::ShaderID_P3D_BrushPreview>(get_class());
        }
    } // namespace ShaderID_P3D_BrushPreview
} // namespace app::classes::types
