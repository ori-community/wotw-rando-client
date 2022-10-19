#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_WhiteBalance {
        inline app::ShaderID_WhiteBalance__Class** type_info = (app::ShaderID_WhiteBalance__Class**)(modloader::win::memory::resolve_rva(0x04778E48));
        inline app::ShaderID_WhiteBalance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_WhiteBalance__Class>(type_info, "Colorful", "ShaderID_WhiteBalance");
        }
        inline app::ShaderID_WhiteBalance* create() {
            return il2cpp::create_object<app::ShaderID_WhiteBalance>(get_class());
        }
    } // namespace ShaderID_WhiteBalance
} // namespace app::classes::types
