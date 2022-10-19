#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Convolution3x3 {
        inline app::ShaderID_Convolution3x3__Class** type_info = (app::ShaderID_Convolution3x3__Class**)(modloader::win::memory::resolve_rva(0x047155D8));
        inline app::ShaderID_Convolution3x3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Convolution3x3__Class>(type_info, "Colorful", "ShaderID_Convolution3x3");
        }
        inline app::ShaderID_Convolution3x3* create() {
            return il2cpp::create_object<app::ShaderID_Convolution3x3>(get_class());
        }
    } // namespace ShaderID_Convolution3x3
} // namespace app::classes::types
