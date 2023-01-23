#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_P3D_TexturePreview__Class.h>
#include <Modloader/app/structs/ShaderID_P3D_TexturePreview.h>

namespace app::classes::types {
    namespace ShaderID_P3D_TexturePreview {
        inline app::ShaderID_P3D_TexturePreview__Class** type_info = (app::ShaderID_P3D_TexturePreview__Class**)(modloader::win::memory::resolve_rva(0x04745018));
        inline app::ShaderID_P3D_TexturePreview__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_P3D_TexturePreview__Class>(type_info, "", "ShaderID_P3D_TexturePreview");
        }
        inline app::ShaderID_P3D_TexturePreview* create() {
            return il2cpp::create_object<app::ShaderID_P3D_TexturePreview>(get_class());
        }
    } // namespace ShaderID_P3D_TexturePreview
} // namespace app::classes::types
