#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_P3D_TexturePreview {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_P3D_TexturePreview__Class** type_info;
        inline app::ShaderID_P3D_TexturePreview__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_P3D_TexturePreview__Class>(type_info, "", "ShaderID_P3D_TexturePreview");
        }
        inline app::ShaderID_P3D_TexturePreview* create() {
            return il2cpp::create_object<app::ShaderID_P3D_TexturePreview>(get_class());
        }
    } // namespace ShaderID_P3D_TexturePreview
} // namespace app::classes::types
