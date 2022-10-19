#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_TexturePreview {
        inline app::P3D_TexturePreview__Class** type_info = (app::P3D_TexturePreview__Class**)(modloader::win::memory::resolve_rva(0x04727B98));
        inline app::P3D_TexturePreview__Class* get_class() {
            return il2cpp::get_class<app::P3D_TexturePreview__Class>(type_info, "", "P3D_TexturePreview");
        }
        inline app::P3D_TexturePreview* create() {
            return il2cpp::create_object<app::P3D_TexturePreview>(get_class());
        }
        inline app::P3D_TexturePreview__Array* create_array(int size) {
            return il2cpp::array_new<app::P3D_TexturePreview__Array>(get_class(), size);
        }
        inline app::P3D_TexturePreview__Array* create_array(const std::vector<app::P3D_TexturePreview*>& items) {
            return il2cpp::array_new<app::P3D_TexturePreview__Array>(get_class(), items);
        }
    } // namespace P3D_TexturePreview
} // namespace app::classes::types
