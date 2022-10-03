#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_PixelMatrix {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_PixelMatrix__Class** type_info;
        inline app::ShaderID_PixelMatrix__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PixelMatrix__Class>(type_info, "Colorful", "ShaderID_PixelMatrix");
        }
        inline app::ShaderID_PixelMatrix* create() {
            return il2cpp::create_object<app::ShaderID_PixelMatrix>(get_class());
        }
    } // namespace ShaderID_PixelMatrix
} // namespace app::classes::types
