#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_PixelMatrix {
        inline app::ShaderID_PixelMatrix__Class** type_info = (app::ShaderID_PixelMatrix__Class**)(modloader::win::memory::resolve_rva(0x0470A748));
        inline app::ShaderID_PixelMatrix__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PixelMatrix__Class>(type_info, "Colorful", "ShaderID_PixelMatrix");
        }
        inline app::ShaderID_PixelMatrix* create() {
            return il2cpp::create_object<app::ShaderID_PixelMatrix>(get_class());
        }
    } // namespace ShaderID_PixelMatrix
} // namespace app::classes::types
